// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull_TLFIFOFixer.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__5(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__5\n"); );
    // Body
    vlSelf->__PVT__monitor__DOT___GEN_30 = ((5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 2U : 
                                            ((4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                              ? 1U : 
                                             ((3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                               ? 1U
                                               : ((2U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                   ? 1U
                                                   : 0U))));
    vlSelf->__PVT__monitor__DOT__source_ok = 1U;
    vlSelf->__PVT__monitor__DOT___T_77 = ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                          & (0ULL == 
                                             (0x1fffff000ULL 
                                              & (QData)((IData)(
                                                                (0x1000U 
                                                                 ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))));
    vlSelf->__PVT__monitor__DOT__mask_acc = (1U & (
                                                   (2U 
                                                    <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                   | (1U 
                                                      & ((((IData)(1U) 
                                                           << 
                                                           (1U 
                                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                                                          >> 1U) 
                                                         & (~ 
                                                            (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                             >> 1U))))));
    vlSelf->__PVT__monitor__DOT__mask_acc_1 = (1U & 
                                               ((2U 
                                                 <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                | (1U 
                                                   & ((((IData)(1U) 
                                                        << 
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                                                       >> 1U) 
                                                      & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                         >> 1U)))));
    vlSelf->__PVT__a_id = (((0ULL == (0xc0000000ULL 
                                      & (QData)((IData)(
                                                        (0x40000000U 
                                                         ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                            | (0ULL == (0x80000000ULL 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                           | ((0ULL == (0xc0000000ULL 
                                        & (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))
                               ? 2U : 0U));
    vlSelf->__PVT__monitor__DOT__mask = ((8U & (((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_1) 
                                                 << 3U) 
                                                | (0xfffffff8U 
                                                   & ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                       << 2U) 
                                                      & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                         << 3U))))) 
                                         | ((4U & (
                                                   ((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_1) 
                                                    | (IData)(
                                                              (2U 
                                                               == 
                                                               (3U 
                                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & (((IData)(vlSelf->__PVT__monitor__DOT__mask_acc) 
                                                    | (IData)(
                                                              (1U 
                                                               == 
                                                               (3U 
                                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->__PVT__monitor__DOT__mask_acc) 
                                                     | (IData)(
                                                               (0U 
                                                                == 
                                                                (3U 
                                                                 & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))));
    vlSelf->__PVT__stall = (((((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                   >> 3U)) & (0U == (IData)(vlSelf->__PVT__a_first_counter))) 
                              & ((((((((IData)(vlSelf->__PVT__flight_0) 
                                       | (IData)(vlSelf->__PVT__flight_1)) 
                                      | (IData)(vlSelf->__PVT__flight_2)) 
                                     | (IData)(vlSelf->__PVT__flight_3)) 
                                    | (IData)(vlSelf->__PVT__flight_4)) 
                                   | (IData)(vlSelf->__PVT__flight_5)) 
                                  | (IData)(vlSelf->__PVT__flight_6)) 
                                 | (IData)(vlSelf->__PVT__flight_7))) 
                             & ((0U == (IData)(vlSelf->__PVT__a_id)) 
                                | ((IData)(vlSelf->__PVT__stalls_id) 
                                   != (IData)(vlSelf->__PVT__a_id)))) 
                            | (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  >> 3U) & (0U == (IData)(vlSelf->__PVT__a_first_counter))) 
                                & ((((((((IData)(vlSelf->__PVT__flight_8) 
                                         | (IData)(vlSelf->__PVT__flight_9)) 
                                        | (IData)(vlSelf->__PVT__flight_10)) 
                                       | (IData)(vlSelf->__PVT__flight_11)) 
                                      | (IData)(vlSelf->__PVT__flight_12)) 
                                     | (IData)(vlSelf->__PVT__flight_13)) 
                                    | (IData)(vlSelf->__PVT__flight_14)) 
                                   | (IData)(vlSelf->__PVT__flight_15))) 
                               & ((0U == (IData)(vlSelf->__PVT__a_id)) 
                                  | ((IData)(vlSelf->__PVT__stalls_id_1) 
                                     != (IData)(vlSelf->__PVT__a_id)))));
    vlSelf->auto_out_a_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                                & (~ (IData)(vlSelf->__PVT__stall)));
}

VL_INLINE_OPT void VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__7(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__7\n"); );
    // Body
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
        = ((0x3fU >= ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source) 
                      << 2U)) ? (vlSelf->__PVT__monitor__DOT__inflight_opcodes 
                                 >> ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source) 
                                     << 2U)) : 0ULL);
    vlSelf->__PVT__d_first = ((0U == (IData)(vlSelf->__PVT__d_first_counter)) 
                              & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode)));
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
}

VL_INLINE_OPT void VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__9(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__9\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp4;
    VlWide<5>/*159:0*/ __Vtemp5;
    VlWide<5>/*159:0*/ __Vtemp11;
    VlWide<5>/*159:0*/ __Vtemp12;
    // Body
    vlSelf->__PVT___d_first_T = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_d_ready) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid));
    vlSelf->__PVT__monitor__DOT___d_first_T = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_d_ready) 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid));
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

VL_INLINE_OPT void VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__11(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__11\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp18;
    VlWide<5>/*159:0*/ __Vtemp19;
    VlWide<5>/*159:0*/ __Vtemp25;
    VlWide<5>/*159:0*/ __Vtemp26;
    // Body
    vlSelf->__PVT__monitor_io_in_a_ready = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_a_ready) 
                                            & (~ (IData)(vlSelf->__PVT__stall)));
    vlSelf->__PVT___a_first_T = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_a_ready) 
                                  & (~ (IData)(vlSelf->__PVT__stall))) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid));
    vlSelf->auto_in_a_ready = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_a_ready) 
                               & (~ (IData)(vlSelf->__PVT__stall)));
    vlSelf->__PVT__monitor__DOT___a_first_T = ((IData)(vlSelf->__PVT__monitor_io_in_a_ready) 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid));
    if (((0U == (IData)(vlSelf->__PVT__a_first_counter)) 
         & (IData)(vlSelf->__PVT___a_first_T))) {
        vlSelf->__PVT___GEN_18 = ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_0));
        vlSelf->__PVT___GEN_19 = ((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_1));
        vlSelf->__PVT___GEN_20 = ((2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_2));
        vlSelf->__PVT___GEN_21 = ((3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_3));
        vlSelf->__PVT___GEN_22 = ((4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_4));
        vlSelf->__PVT___GEN_23 = ((5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_5));
        vlSelf->__PVT___GEN_24 = ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_6));
        vlSelf->__PVT___GEN_25 = ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_7));
        vlSelf->__PVT___GEN_26 = ((8U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_8));
        vlSelf->__PVT___GEN_27 = ((9U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_9));
        vlSelf->__PVT___GEN_28 = ((0xaU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_10));
        vlSelf->__PVT___GEN_29 = ((0xbU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_11));
        vlSelf->__PVT___GEN_30 = ((0xcU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_12));
        vlSelf->__PVT___GEN_31 = ((0xdU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_13));
        vlSelf->__PVT___GEN_32 = ((0xeU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_14));
        vlSelf->__PVT___GEN_33 = ((0xfU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_15));
    } else {
        vlSelf->__PVT___GEN_18 = vlSelf->__PVT__flight_0;
        vlSelf->__PVT___GEN_19 = vlSelf->__PVT__flight_1;
        vlSelf->__PVT___GEN_20 = vlSelf->__PVT__flight_2;
        vlSelf->__PVT___GEN_21 = vlSelf->__PVT__flight_3;
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__flight_4;
        vlSelf->__PVT___GEN_23 = vlSelf->__PVT__flight_5;
        vlSelf->__PVT___GEN_24 = vlSelf->__PVT__flight_6;
        vlSelf->__PVT___GEN_25 = vlSelf->__PVT__flight_7;
        vlSelf->__PVT___GEN_26 = vlSelf->__PVT__flight_8;
        vlSelf->__PVT___GEN_27 = vlSelf->__PVT__flight_9;
        vlSelf->__PVT___GEN_28 = vlSelf->__PVT__flight_10;
        vlSelf->__PVT___GEN_29 = vlSelf->__PVT__flight_11;
        vlSelf->__PVT___GEN_30 = vlSelf->__PVT__flight_12;
        vlSelf->__PVT___GEN_31 = vlSelf->__PVT__flight_13;
        vlSelf->__PVT___GEN_32 = vlSelf->__PVT__flight_14;
        vlSelf->__PVT___GEN_33 = vlSelf->__PVT__flight_15;
    }
    VL_EXTEND_WI(131,4, __Vtemp18, (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                                     ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                                              << 1U))
                                     : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp19, __Vtemp18, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
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
                                     ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                                              << 1U))
                                     : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp26, __Vtemp25, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
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
                                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source))
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

VL_INLINE_OPT void VysyxSoCFull_TLFIFOFixer___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__12(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__12\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:32930: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 32930, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:32954: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 32954, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:32978: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 32978, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33002: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33002, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33026: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33026, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33050: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33050, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33074: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33074, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33098: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33098, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33122: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33122, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33146: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33146, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33170: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33170, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33194: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33194, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33218: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33218, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33242: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33242, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                            & (((0ULL == (0x1fffff000ULL 
                                          & (QData)((IData)(
                                                            (0x1000U 
                                                             ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                                | (0ULL == (0x1c0000000ULL 
                                            & (QData)((IData)(
                                                              (0x40000000U 
                                                               ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                               | (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                            & (((0ULL == (0x1fffff000ULL 
                                          & (QData)((IData)(
                                                            (0x1000U 
                                                             ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                                | (0ULL == (0x1c0000000ULL 
                                            & (QData)((IData)(
                                                              (0x40000000U 
                                                               ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                               | (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33266: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33266, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33290: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33290, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33314: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33314, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33338: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33338, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33362: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33362, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33386: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33386, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33410: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33410, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33434: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33434, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33458: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33458, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33482: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33482, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33506: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33506, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33530: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33530, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                & ((0ULL == (0x1c0000000ULL 
                                             & (QData)((IData)(
                                                               (0x40000000U 
                                                                ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                & ((0ULL == (0x1c0000000ULL 
                                             & (QData)((IData)(
                                                               (0x40000000U 
                                                                ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33554: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33554, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33578: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33578, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33602: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33602, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33626: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33626, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                & ((0ULL == (0x1c0000000ULL 
                                             & (QData)((IData)(
                                                               (0x40000000U 
                                                                ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                & ((0ULL == (0x1c0000000ULL 
                                             & (QData)((IData)(
                                                               (0x40000000U 
                                                                ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33650: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33650, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33674: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33674, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33698: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33698, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33722: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33722, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33746: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33746, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33770: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33770, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33794: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33794, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33818: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33818, "");
    }
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33842: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33842, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33866: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33866, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33890: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33890, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33914: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33914, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33938: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33938, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33962: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33962, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33986: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33986, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34010: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34010, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34034: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34034, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34058: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34058, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34082: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34082, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34106: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34106, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34130: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34130, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34154: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34154, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34178: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34178, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34202: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34202, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34226: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34226, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_denied)) 
                            | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_denied)) 
                            | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34250: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34250, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34274: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34274, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34298: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34298, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34322: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34322, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34346: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34346, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34370: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34370, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_denied)) 
                            | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_denied)) 
                            | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34394: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34394, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34418: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34418, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34442: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34442, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34466: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34466, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34490: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34490, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34514: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34514, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34538: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34538, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                            == vlSelf->__PVT__monitor__DOT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                            == vlSelf->__PVT__monitor__DOT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34562: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34562, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34586: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34586, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__param_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__param_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34610: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34610, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34634: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34634, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34658: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34658, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_sink) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_sink) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34682: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34682, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34706: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34706, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34730: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34730, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                        >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source))) 
                            | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                                & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                        >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source))) 
                            | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                                & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34754: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34754, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34778: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34778, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34802: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34802, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34826: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34826, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34850: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34850, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source))) 
                      & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_d_ready)) 
                            | (IData)(vlSelf->__PVT__monitor_io_in_a_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source))) 
                      & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_d_ready)) 
                            | (IData)(vlSelf->__PVT__monitor_io_in_a_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34872: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34872, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34896: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34896, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34920: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34920, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34944: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34944, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34968: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34968, "");
    }
    vlSelf->__PVT__monitor__DOT__inflight_opcodes = 
        ((IData)(vlSymsp->TOP.reset) ? 0ULL : vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2);
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__d_first_counter = 0U;
    } else if (vlSelf->__PVT___d_first_T) {
        vlSelf->__PVT__d_first_counter = (0xfU & ((IData)(vlSelf->__PVT__d_first_first)
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))
                                                    ? 
                                                   (~ 
                                                    (0x7ffU 
                                                     & (((IData)(0x3fU) 
                                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                                                        >> 2U)))
                                                    : 0U)
                                                   : (IData)(vlSelf->__PVT__d_first_counter1)));
    }
    vlSelf->__PVT__flight_7 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (((IData)(vlSelf->__PVT__d_first) 
                                   & (IData)(vlSelf->__PVT___d_first_T))
                                   ? ((7U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)) 
                                      & (IData)(vlSelf->__PVT___GEN_25))
                                   : (IData)(vlSelf->__PVT___GEN_25)));
    vlSelf->__PVT__flight_6 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (((IData)(vlSelf->__PVT__d_first) 
                                   & (IData)(vlSelf->__PVT___d_first_T))
                                   ? ((6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)) 
                                      & (IData)(vlSelf->__PVT___GEN_24))
                                   : (IData)(vlSelf->__PVT___GEN_24)));
    vlSelf->__PVT__flight_4 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (((IData)(vlSelf->__PVT__d_first) 
                                   & (IData)(vlSelf->__PVT___d_first_T))
                                   ? ((4U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)) 
                                      & (IData)(vlSelf->__PVT___GEN_22))
                                   : (IData)(vlSelf->__PVT___GEN_22)));
    vlSelf->__PVT__flight_14 = ((~ (IData)(vlSymsp->TOP.reset)) 
                                & (((IData)(vlSelf->__PVT__d_first) 
                                    & (IData)(vlSelf->__PVT___d_first_T))
                                    ? ((0xeU != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)) 
                                       & (IData)(vlSelf->__PVT___GEN_32))
                                    : (IData)(vlSelf->__PVT___GEN_32)));
    vlSelf->__PVT__flight_5 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (((IData)(vlSelf->__PVT__d_first) 
                                   & (IData)(vlSelf->__PVT___d_first_T))
                                   ? ((5U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)) 
                                      & (IData)(vlSelf->__PVT___GEN_23))
                                   : (IData)(vlSelf->__PVT___GEN_23)));
    vlSelf->__PVT__flight_0 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (((IData)(vlSelf->__PVT__d_first) 
                                   & (IData)(vlSelf->__PVT___d_first_T))
                                   ? ((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)) 
                                      & (IData)(vlSelf->__PVT___GEN_18))
                                   : (IData)(vlSelf->__PVT___GEN_18)));
    vlSelf->__PVT__flight_15 = ((~ (IData)(vlSymsp->TOP.reset)) 
                                & (((IData)(vlSelf->__PVT__d_first) 
                                    & (IData)(vlSelf->__PVT___d_first_T))
                                    ? ((0xfU != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)) 
                                       & (IData)(vlSelf->__PVT___GEN_33))
                                    : (IData)(vlSelf->__PVT___GEN_33)));
    vlSelf->__PVT__flight_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (((IData)(vlSelf->__PVT__d_first) 
                                   & (IData)(vlSelf->__PVT___d_first_T))
                                   ? ((2U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)) 
                                      & (IData)(vlSelf->__PVT___GEN_20))
                                   : (IData)(vlSelf->__PVT___GEN_20)));
    vlSelf->__PVT__flight_12 = ((~ (IData)(vlSymsp->TOP.reset)) 
                                & (((IData)(vlSelf->__PVT__d_first) 
                                    & (IData)(vlSelf->__PVT___d_first_T))
                                    ? ((0xcU != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)) 
                                       & (IData)(vlSelf->__PVT___GEN_30))
                                    : (IData)(vlSelf->__PVT___GEN_30)));
    vlSelf->__PVT__flight_3 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (((IData)(vlSelf->__PVT__d_first) 
                                   & (IData)(vlSelf->__PVT___d_first_T))
                                   ? ((3U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)) 
                                      & (IData)(vlSelf->__PVT___GEN_21))
                                   : (IData)(vlSelf->__PVT___GEN_21)));
    vlSelf->__PVT__flight_13 = ((~ (IData)(vlSymsp->TOP.reset)) 
                                & (((IData)(vlSelf->__PVT__d_first) 
                                    & (IData)(vlSelf->__PVT___d_first_T))
                                    ? ((0xdU != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)) 
                                       & (IData)(vlSelf->__PVT___GEN_31))
                                    : (IData)(vlSelf->__PVT___GEN_31)));
    vlSelf->__PVT__flight_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (((IData)(vlSelf->__PVT__d_first) 
                                   & (IData)(vlSelf->__PVT___d_first_T))
                                   ? ((1U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)) 
                                      & (IData)(vlSelf->__PVT___GEN_19))
                                   : (IData)(vlSelf->__PVT___GEN_19)));
    vlSelf->__PVT__flight_11 = ((~ (IData)(vlSymsp->TOP.reset)) 
                                & (((IData)(vlSelf->__PVT__d_first) 
                                    & (IData)(vlSelf->__PVT___d_first_T))
                                    ? ((0xbU != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)) 
                                       & (IData)(vlSelf->__PVT___GEN_29))
                                    : (IData)(vlSelf->__PVT___GEN_29)));
    vlSelf->__PVT__flight_8 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (((IData)(vlSelf->__PVT__d_first) 
                                   & (IData)(vlSelf->__PVT___d_first_T))
                                   ? ((8U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)) 
                                      & (IData)(vlSelf->__PVT___GEN_26))
                                   : (IData)(vlSelf->__PVT___GEN_26)));
    vlSelf->__PVT__flight_9 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (((IData)(vlSelf->__PVT__d_first) 
                                   & (IData)(vlSelf->__PVT___d_first_T))
                                   ? ((9U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)) 
                                      & (IData)(vlSelf->__PVT___GEN_27))
                                   : (IData)(vlSelf->__PVT___GEN_27)));
    vlSelf->__PVT__flight_10 = ((~ (IData)(vlSymsp->TOP.reset)) 
                                & (((IData)(vlSelf->__PVT__d_first) 
                                    & (IData)(vlSelf->__PVT___d_first_T))
                                    ? ((0xaU != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source)) 
                                       & (IData)(vlSelf->__PVT___GEN_28))
                                    : (IData)(vlSelf->__PVT___GEN_28)));
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
    if (((IData)(vlSelf->__PVT___a_first_T) & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) {
        vlSelf->__PVT__stalls_id = vlSelf->__PVT__a_id;
    }
    if (((IData)(vlSelf->__PVT___a_first_T) & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U))) {
        vlSelf->__PVT__stalls_id_1 = vlSelf->__PVT__a_id;
    }
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
        vlSelf->__PVT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->__PVT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__monitor__DOT__d_first_counter_2 
            = (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_2)
                        ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->__PVT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__monitor__DOT__d_first_counter_1 
            = (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_1)
                        ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter1_1)));
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
            = (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_1)
                        ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__size = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__opcode = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__source = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__address = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address;
    }
    vlSelf->__PVT__d_first_counter1 = (0xfU & ((IData)(vlSelf->__PVT__d_first_counter) 
                                               - (IData)(1U)));
    vlSelf->__PVT__d_first_first = (0U == (IData)(vlSelf->__PVT__d_first_counter));
    vlSelf->__PVT__a_first = (0U == (IData)(vlSelf->__PVT__a_first_counter));
    vlSelf->__PVT__a_first_counter1 = (0xfU & ((IData)(vlSelf->__PVT__a_first_counter) 
                                               - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT___watchdog_T_3 = ((IData)(1U) 
                                                  + vlSelf->__PVT__monitor__DOT__watchdog_1);
    vlSelf->__PVT__monitor__DOT___watchdog_T_1 = ((IData)(1U) 
                                                  + vlSelf->__PVT__monitor__DOT__watchdog);
    vlSelf->__PVT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first_2 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__d_first_counter = 0U;
    } else if (vlSelf->__PVT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__monitor__DOT__d_first_counter 
            = (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__d_first)
                        ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter1)));
    }
    vlSelf->__PVT__monitor__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__a_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__a_first_counter = 0U;
    } else if (vlSelf->__PVT__monitor__DOT___a_first_T) {
        vlSelf->__PVT__monitor__DOT__a_first_counter 
            = (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__a_first)
                        ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter1)));
    }
    vlSelf->__PVT__monitor__DOT__d_first_counter1 = 
        (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter));
    vlSelf->__PVT__monitor__DOT__a_first_counter1 = 
        (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__a_first = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter));
}

VL_INLINE_OPT void VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__10(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__10\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp46;
    VlWide<5>/*159:0*/ __Vtemp47;
    VlWide<5>/*159:0*/ __Vtemp53;
    VlWide<5>/*159:0*/ __Vtemp54;
    // Body
    vlSelf->__PVT__monitor_io_in_a_ready = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_a_ready) 
                                            & (~ (IData)(vlSelf->__PVT__stall)));
    vlSelf->__PVT___a_first_T = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_a_ready) 
                                  & (~ (IData)(vlSelf->__PVT__stall))) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid));
    vlSelf->auto_in_a_ready = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_a_ready) 
                               & (~ (IData)(vlSelf->__PVT__stall)));
    vlSelf->__PVT__monitor__DOT___a_first_T = ((IData)(vlSelf->__PVT__monitor_io_in_a_ready) 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid));
    if (((0U == (IData)(vlSelf->__PVT__a_first_counter)) 
         & (IData)(vlSelf->__PVT___a_first_T))) {
        vlSelf->__PVT___GEN_18 = ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_0));
        vlSelf->__PVT___GEN_19 = ((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_1));
        vlSelf->__PVT___GEN_20 = ((2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_2));
        vlSelf->__PVT___GEN_21 = ((3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_3));
        vlSelf->__PVT___GEN_22 = ((4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_4));
        vlSelf->__PVT___GEN_23 = ((5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_5));
        vlSelf->__PVT___GEN_24 = ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_6));
        vlSelf->__PVT___GEN_25 = ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_7));
        vlSelf->__PVT___GEN_26 = ((8U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_8));
        vlSelf->__PVT___GEN_27 = ((9U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_9));
        vlSelf->__PVT___GEN_28 = ((0xaU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_10));
        vlSelf->__PVT___GEN_29 = ((0xbU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_11));
        vlSelf->__PVT___GEN_30 = ((0xcU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_12));
        vlSelf->__PVT___GEN_31 = ((0xdU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_13));
        vlSelf->__PVT___GEN_32 = ((0xeU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_14));
        vlSelf->__PVT___GEN_33 = ((0xfU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)) 
                                  | (IData)(vlSelf->__PVT__flight_15));
    } else {
        vlSelf->__PVT___GEN_18 = vlSelf->__PVT__flight_0;
        vlSelf->__PVT___GEN_19 = vlSelf->__PVT__flight_1;
        vlSelf->__PVT___GEN_20 = vlSelf->__PVT__flight_2;
        vlSelf->__PVT___GEN_21 = vlSelf->__PVT__flight_3;
        vlSelf->__PVT___GEN_22 = vlSelf->__PVT__flight_4;
        vlSelf->__PVT___GEN_23 = vlSelf->__PVT__flight_5;
        vlSelf->__PVT___GEN_24 = vlSelf->__PVT__flight_6;
        vlSelf->__PVT___GEN_25 = vlSelf->__PVT__flight_7;
        vlSelf->__PVT___GEN_26 = vlSelf->__PVT__flight_8;
        vlSelf->__PVT___GEN_27 = vlSelf->__PVT__flight_9;
        vlSelf->__PVT___GEN_28 = vlSelf->__PVT__flight_10;
        vlSelf->__PVT___GEN_29 = vlSelf->__PVT__flight_11;
        vlSelf->__PVT___GEN_30 = vlSelf->__PVT__flight_12;
        vlSelf->__PVT___GEN_31 = vlSelf->__PVT__flight_13;
        vlSelf->__PVT___GEN_32 = vlSelf->__PVT__flight_14;
        vlSelf->__PVT___GEN_33 = vlSelf->__PVT__flight_15;
    }
    VL_EXTEND_WI(131,4, __Vtemp46, (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                                     ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                                              << 1U))
                                     : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp47, __Vtemp46, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
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
                                     ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                                              << 1U))
                                     : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp54, __Vtemp53, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
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
                                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source))
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

VL_INLINE_OPT void VysyxSoCFull_TLFIFOFixer___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__13(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__13\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:32930: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 32930, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:32954: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 32954, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:32978: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 32978, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33002: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33002, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33026: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33026, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33050: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33050, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33074: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33074, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33098: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33098, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33122: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33122, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33146: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33146, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33170: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33170, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33194: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33194, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33218: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33218, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33242: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33242, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                            & (((0ULL == (0x1fffff000ULL 
                                          & (QData)((IData)(
                                                            (0x1000U 
                                                             ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                                | (0ULL == (0x1c0000000ULL 
                                            & (QData)((IData)(
                                                              (0x40000000U 
                                                               ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                               | (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                            & (((0ULL == (0x1fffff000ULL 
                                          & (QData)((IData)(
                                                            (0x1000U 
                                                             ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                                | (0ULL == (0x1c0000000ULL 
                                            & (QData)((IData)(
                                                              (0x40000000U 
                                                               ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                               | (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33266: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33266, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33290: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33290, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33314: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33314, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33338: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33338, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33362: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33362, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33386: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33386, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33410: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33410, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33434: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33434, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33458: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33458, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33482: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33482, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33506: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33506, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33530: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33530, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                & ((0ULL == (0x1c0000000ULL 
                                             & (QData)((IData)(
                                                               (0x40000000U 
                                                                ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                & ((0ULL == (0x1c0000000ULL 
                                             & (QData)((IData)(
                                                               (0x40000000U 
                                                                ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33554: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33554, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33578: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33578, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33602: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33602, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33626: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33626, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                & ((0ULL == (0x1c0000000ULL 
                                             & (QData)((IData)(
                                                               (0x40000000U 
                                                                ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                & ((0ULL == (0x1c0000000ULL 
                                             & (QData)((IData)(
                                                               (0x40000000U 
                                                                ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33650: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33650, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33674: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33674, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33698: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33698, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33722: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33722, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33746: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33746, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33770: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33770, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33794: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33794, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33818: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33818, "");
    }
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33842: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33842, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33866: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33866, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33890: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33890, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33914: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33914, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33938: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33938, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33962: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33962, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:33986: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 33986, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34010: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34010, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34034: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34034, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34058: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34058, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34082: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34082, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34106: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34106, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34130: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34130, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34154: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34154, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34178: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34178, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34202: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34202, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34226: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34226, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_denied)) 
                            | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_denied)) 
                            | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34250: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34250, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34274: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34274, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34298: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34298, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34322: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34322, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34346: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34346, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34370: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34370, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_denied)) 
                            | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_denied)) 
                            | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34394: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34394, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34418: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34418, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34442: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34442, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34466: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34466, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34490: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34490, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34514: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34514, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34538: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34538, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                            == vlSelf->__PVT__monitor__DOT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                            == vlSelf->__PVT__monitor__DOT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34562: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34562, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34586: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34586, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__param_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__param_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34610: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34610, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34634: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34634, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34658: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34658, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_sink) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_sink) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34682: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34682, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34706: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34706, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34730: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34730, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                        >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source))) 
                            | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                                & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                        >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source))) 
                            | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                                & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34754: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34754, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34778: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34778, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34802: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34802, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34826: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34826, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34850: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34850, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source))) 
                      & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_d_ready)) 
                            | (IData)(vlSelf->__PVT__monitor_io_in_a_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source))) 
                      & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_d_ready)) 
                            | (IData)(vlSelf->__PVT__monitor_io_in_a_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34872: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34872, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34896: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34896, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34920: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34920, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34944: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34944, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:100:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:34968: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 34968, "");
    }
    vlSelf->__PVT__monitor__DOT__inflight_opcodes = 
        ((IData)(vlSymsp->TOP.reset) ? 0ULL : vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2);
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__d_first_counter = 0U;
    } else if (vlSelf->__PVT___d_first_T) {
        vlSelf->__PVT__d_first_counter = (0xfU & ((IData)(vlSelf->__PVT__d_first_first)
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))
                                                    ? 
                                                   (~ 
                                                    (0x7ffU 
                                                     & (((IData)(0x3fU) 
                                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                                                        >> 2U)))
                                                    : 0U)
                                                   : (IData)(vlSelf->__PVT__d_first_counter1)));
    }
    vlSelf->__PVT__flight_7 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (((IData)(vlSelf->__PVT__d_first) 
                                   & (IData)(vlSelf->__PVT___d_first_T))
                                   ? ((7U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)) 
                                      & (IData)(vlSelf->__PVT___GEN_25))
                                   : (IData)(vlSelf->__PVT___GEN_25)));
    vlSelf->__PVT__flight_6 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (((IData)(vlSelf->__PVT__d_first) 
                                   & (IData)(vlSelf->__PVT___d_first_T))
                                   ? ((6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)) 
                                      & (IData)(vlSelf->__PVT___GEN_24))
                                   : (IData)(vlSelf->__PVT___GEN_24)));
    vlSelf->__PVT__flight_4 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (((IData)(vlSelf->__PVT__d_first) 
                                   & (IData)(vlSelf->__PVT___d_first_T))
                                   ? ((4U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)) 
                                      & (IData)(vlSelf->__PVT___GEN_22))
                                   : (IData)(vlSelf->__PVT___GEN_22)));
    vlSelf->__PVT__flight_14 = ((~ (IData)(vlSymsp->TOP.reset)) 
                                & (((IData)(vlSelf->__PVT__d_first) 
                                    & (IData)(vlSelf->__PVT___d_first_T))
                                    ? ((0xeU != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)) 
                                       & (IData)(vlSelf->__PVT___GEN_32))
                                    : (IData)(vlSelf->__PVT___GEN_32)));
    vlSelf->__PVT__flight_5 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (((IData)(vlSelf->__PVT__d_first) 
                                   & (IData)(vlSelf->__PVT___d_first_T))
                                   ? ((5U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)) 
                                      & (IData)(vlSelf->__PVT___GEN_23))
                                   : (IData)(vlSelf->__PVT___GEN_23)));
    vlSelf->__PVT__flight_0 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (((IData)(vlSelf->__PVT__d_first) 
                                   & (IData)(vlSelf->__PVT___d_first_T))
                                   ? ((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)) 
                                      & (IData)(vlSelf->__PVT___GEN_18))
                                   : (IData)(vlSelf->__PVT___GEN_18)));
    vlSelf->__PVT__flight_15 = ((~ (IData)(vlSymsp->TOP.reset)) 
                                & (((IData)(vlSelf->__PVT__d_first) 
                                    & (IData)(vlSelf->__PVT___d_first_T))
                                    ? ((0xfU != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)) 
                                       & (IData)(vlSelf->__PVT___GEN_33))
                                    : (IData)(vlSelf->__PVT___GEN_33)));
    vlSelf->__PVT__flight_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (((IData)(vlSelf->__PVT__d_first) 
                                   & (IData)(vlSelf->__PVT___d_first_T))
                                   ? ((2U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)) 
                                      & (IData)(vlSelf->__PVT___GEN_20))
                                   : (IData)(vlSelf->__PVT___GEN_20)));
    vlSelf->__PVT__flight_12 = ((~ (IData)(vlSymsp->TOP.reset)) 
                                & (((IData)(vlSelf->__PVT__d_first) 
                                    & (IData)(vlSelf->__PVT___d_first_T))
                                    ? ((0xcU != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)) 
                                       & (IData)(vlSelf->__PVT___GEN_30))
                                    : (IData)(vlSelf->__PVT___GEN_30)));
    vlSelf->__PVT__flight_3 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (((IData)(vlSelf->__PVT__d_first) 
                                   & (IData)(vlSelf->__PVT___d_first_T))
                                   ? ((3U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)) 
                                      & (IData)(vlSelf->__PVT___GEN_21))
                                   : (IData)(vlSelf->__PVT___GEN_21)));
    vlSelf->__PVT__flight_13 = ((~ (IData)(vlSymsp->TOP.reset)) 
                                & (((IData)(vlSelf->__PVT__d_first) 
                                    & (IData)(vlSelf->__PVT___d_first_T))
                                    ? ((0xdU != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)) 
                                       & (IData)(vlSelf->__PVT___GEN_31))
                                    : (IData)(vlSelf->__PVT___GEN_31)));
    vlSelf->__PVT__flight_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (((IData)(vlSelf->__PVT__d_first) 
                                   & (IData)(vlSelf->__PVT___d_first_T))
                                   ? ((1U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)) 
                                      & (IData)(vlSelf->__PVT___GEN_19))
                                   : (IData)(vlSelf->__PVT___GEN_19)));
    vlSelf->__PVT__flight_11 = ((~ (IData)(vlSymsp->TOP.reset)) 
                                & (((IData)(vlSelf->__PVT__d_first) 
                                    & (IData)(vlSelf->__PVT___d_first_T))
                                    ? ((0xbU != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)) 
                                       & (IData)(vlSelf->__PVT___GEN_29))
                                    : (IData)(vlSelf->__PVT___GEN_29)));
    vlSelf->__PVT__flight_8 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (((IData)(vlSelf->__PVT__d_first) 
                                   & (IData)(vlSelf->__PVT___d_first_T))
                                   ? ((8U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)) 
                                      & (IData)(vlSelf->__PVT___GEN_26))
                                   : (IData)(vlSelf->__PVT___GEN_26)));
    vlSelf->__PVT__flight_9 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (((IData)(vlSelf->__PVT__d_first) 
                                   & (IData)(vlSelf->__PVT___d_first_T))
                                   ? ((9U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)) 
                                      & (IData)(vlSelf->__PVT___GEN_27))
                                   : (IData)(vlSelf->__PVT___GEN_27)));
    vlSelf->__PVT__flight_10 = ((~ (IData)(vlSymsp->TOP.reset)) 
                                & (((IData)(vlSelf->__PVT__d_first) 
                                    & (IData)(vlSelf->__PVT___d_first_T))
                                    ? ((0xaU != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)) 
                                       & (IData)(vlSelf->__PVT___GEN_28))
                                    : (IData)(vlSelf->__PVT___GEN_28)));
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
    if (((IData)(vlSelf->__PVT___a_first_T) & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) {
        vlSelf->__PVT__stalls_id = vlSelf->__PVT__a_id;
    }
    if (((IData)(vlSelf->__PVT___a_first_T) & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U))) {
        vlSelf->__PVT__stalls_id_1 = vlSelf->__PVT__a_id;
    }
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
        vlSelf->__PVT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->__PVT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__monitor__DOT__d_first_counter_2 
            = (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_2)
                        ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->__PVT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__monitor__DOT__d_first_counter_1 
            = (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_1)
                        ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter1_1)));
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
            = (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_1)
                        ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__size = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__opcode = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__source = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__address = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address;
    }
    vlSelf->__PVT__d_first_counter1 = (0xfU & ((IData)(vlSelf->__PVT__d_first_counter) 
                                               - (IData)(1U)));
    vlSelf->__PVT__d_first_first = (0U == (IData)(vlSelf->__PVT__d_first_counter));
    vlSelf->__PVT__a_first = (0U == (IData)(vlSelf->__PVT__a_first_counter));
    vlSelf->__PVT__a_first_counter1 = (0xfU & ((IData)(vlSelf->__PVT__a_first_counter) 
                                               - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT___watchdog_T_3 = ((IData)(1U) 
                                                  + vlSelf->__PVT__monitor__DOT__watchdog_1);
    vlSelf->__PVT__monitor__DOT___watchdog_T_1 = ((IData)(1U) 
                                                  + vlSelf->__PVT__monitor__DOT__watchdog);
    vlSelf->__PVT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first_2 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__d_first_counter = 0U;
    } else if (vlSelf->__PVT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__monitor__DOT__d_first_counter 
            = (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__d_first)
                        ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter1)));
    }
    vlSelf->__PVT__monitor__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__a_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__a_first_counter = 0U;
    } else if (vlSelf->__PVT__monitor__DOT___a_first_T) {
        vlSelf->__PVT__monitor__DOT__a_first_counter 
            = (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__a_first)
                        ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter1)));
    }
    vlSelf->__PVT__monitor__DOT__d_first_counter1 = 
        (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter));
    vlSelf->__PVT__monitor__DOT__a_first_counter1 = 
        (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__a_first = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter));
}

VL_INLINE_OPT void VysyxSoCFull_TLFIFOFixer___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__14(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__14\n"); );
    // Body
    vlSelf->__PVT__monitor__DOT__source_ok = 1U;
    vlSelf->__PVT__a_id = (((0ULL == (0xc0000000ULL 
                                      & (QData)((IData)(
                                                        (0x40000000U 
                                                         ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                            | (0ULL == (0x80000000ULL 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                           | ((0ULL == (0xc0000000ULL 
                                        & (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))
                               ? 2U : 0U));
    vlSelf->__PVT__monitor__DOT___T_77 = ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                          & (0ULL == 
                                             (0x1fffff000ULL 
                                              & (QData)((IData)(
                                                                (0x1000U 
                                                                 ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))));
    vlSelf->__PVT__monitor__DOT__mask_acc = (1U & (
                                                   (2U 
                                                    <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                   | (1U 
                                                      & ((((IData)(1U) 
                                                           << 
                                                           (1U 
                                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                                                          >> 1U) 
                                                         & (~ 
                                                            (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                             >> 1U))))));
    vlSelf->__PVT__monitor__DOT__mask_acc_1 = (1U & 
                                               ((2U 
                                                 <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                | (1U 
                                                   & ((((IData)(1U) 
                                                        << 
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                                                       >> 1U) 
                                                      & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                         >> 1U)))));
    vlSelf->__PVT__monitor__DOT___GEN_30 = ((5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 2U : 
                                            ((4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                              ? 1U : 
                                             ((3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                               ? 1U
                                               : ((2U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                   ? 1U
                                                   : 0U))));
    vlSelf->__PVT__stall = (((((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                   >> 3U)) & (0U == (IData)(vlSelf->__PVT__a_first_counter))) 
                              & ((((((((IData)(vlSelf->__PVT__flight_0) 
                                       | (IData)(vlSelf->__PVT__flight_1)) 
                                      | (IData)(vlSelf->__PVT__flight_2)) 
                                     | (IData)(vlSelf->__PVT__flight_3)) 
                                    | (IData)(vlSelf->__PVT__flight_4)) 
                                   | (IData)(vlSelf->__PVT__flight_5)) 
                                  | (IData)(vlSelf->__PVT__flight_6)) 
                                 | (IData)(vlSelf->__PVT__flight_7))) 
                             & ((0U == (IData)(vlSelf->__PVT__a_id)) 
                                | ((IData)(vlSelf->__PVT__stalls_id) 
                                   != (IData)(vlSelf->__PVT__a_id)))) 
                            | (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  >> 3U) & (0U == (IData)(vlSelf->__PVT__a_first_counter))) 
                                & ((((((((IData)(vlSelf->__PVT__flight_8) 
                                         | (IData)(vlSelf->__PVT__flight_9)) 
                                        | (IData)(vlSelf->__PVT__flight_10)) 
                                       | (IData)(vlSelf->__PVT__flight_11)) 
                                      | (IData)(vlSelf->__PVT__flight_12)) 
                                     | (IData)(vlSelf->__PVT__flight_13)) 
                                    | (IData)(vlSelf->__PVT__flight_14)) 
                                   | (IData)(vlSelf->__PVT__flight_15))) 
                               & ((0U == (IData)(vlSelf->__PVT__a_id)) 
                                  | ((IData)(vlSelf->__PVT__stalls_id_1) 
                                     != (IData)(vlSelf->__PVT__a_id)))));
    vlSelf->__PVT__monitor__DOT__mask = ((8U & (((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_1) 
                                                 << 3U) 
                                                | (0xfffffff8U 
                                                   & ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                       << 2U) 
                                                      & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                         << 3U))))) 
                                         | ((4U & (
                                                   ((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_1) 
                                                    | (IData)(
                                                              (2U 
                                                               == 
                                                               (3U 
                                                                & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))) 
                                                   << 2U)) 
                                            | ((2U 
                                                & (((IData)(vlSelf->__PVT__monitor__DOT__mask_acc) 
                                                    | (IData)(
                                                              (1U 
                                                               == 
                                                               (3U 
                                                                & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->__PVT__monitor__DOT__mask_acc) 
                                                     | (IData)(
                                                               (0U 
                                                                == 
                                                                (3U 
                                                                 & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))));
    vlSelf->auto_out_a_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                                & (~ (IData)(vlSelf->__PVT__stall)));
}

VL_INLINE_OPT void VysyxSoCFull_TLFIFOFixer___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__16(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__16\n"); );
    // Body
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
        = ((0x3fU >= ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                      << 2U)) ? (vlSelf->__PVT__monitor__DOT__inflight_opcodes 
                                 >> ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                                     << 2U)) : 0ULL);
    vlSelf->__PVT__d_first = ((0U == (IData)(vlSelf->__PVT__d_first_counter)) 
                              & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode)));
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
}

VL_INLINE_OPT void VysyxSoCFull_TLFIFOFixer___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__17(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___multiclk__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__17\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp60;
    VlWide<5>/*159:0*/ __Vtemp61;
    VlWide<5>/*159:0*/ __Vtemp67;
    VlWide<5>/*159:0*/ __Vtemp68;
    // Body
    vlSelf->__PVT___d_first_T = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_d_ready) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid));
    vlSelf->__PVT__monitor__DOT___d_first_T = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_d_ready) 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid));
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
