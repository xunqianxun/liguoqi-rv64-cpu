// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull_TLBusBypass.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

//==========


void VysyxSoCFull_TLBusBypass___ctor_var_reset(VysyxSoCFull_TLBusBypass* vlSelf);

VysyxSoCFull_TLBusBypass::VysyxSoCFull_TLBusBypass(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VysyxSoCFull_TLBusBypass___ctor_var_reset(this);
}

void VysyxSoCFull_TLBusBypass::__Vconfigure(VysyxSoCFull__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VysyxSoCFull_TLBusBypass::~VysyxSoCFull_TLBusBypass() {
}

void VysyxSoCFull_TLBusBypass___initial__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__1(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___initial__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__1\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp1;
    VlWide<5>/*159:0*/ __Vtemp2;
    VlWide<5>/*159:0*/ __Vtemp3;
    VlWide<5>/*159:0*/ __Vtemp4;
    // Body
    __Vtemp1[0U] = 0x743d2564U;
    __Vtemp1[1U] = 0x6d656f75U;
    __Vtemp1[2U] = 0x6b5f7469U;
    __Vtemp1[3U] = 0x656c696eU;
    __Vtemp1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp1), 
                                vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp2[0U] = 0x743d2564U;
    __Vtemp2[1U] = 0x6d656f75U;
    __Vtemp2[2U] = 0x6b5f7469U;
    __Vtemp2[3U] = 0x656c696eU;
    __Vtemp2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp2), 
                                vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp3[0U] = 0x743d2564U;
    __Vtemp3[1U] = 0x6d656f75U;
    __Vtemp3[2U] = 0x6b5f7469U;
    __Vtemp3[3U] = 0x656c696eU;
    __Vtemp3[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp3), 
                                vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp4[0U] = 0x743d2564U;
    __Vtemp4[1U] = 0x6d656f75U;
    __Vtemp4[2U] = 0x6b5f7469U;
    __Vtemp4[3U] = 0x656c696eU;
    __Vtemp4[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp4), 
                                vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
}

void VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__7(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__7\n"); );
    // Body
    vlSelf->__PVT__bar__DOT__stall_first = (0U == (IData)(vlSelf->__PVT__bar__DOT__stall_counter));
    vlSelf->__PVT__bar__DOT__counter1 = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__counter) 
                                                 - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__a_first = (0U == (IData)(vlSelf->__PVT__bar__DOT__counter));
    vlSelf->__PVT__bar__DOT__counter1_3 = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__counter_3) 
                                                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__d_first = (0U == (IData)(vlSelf->__PVT__bar__DOT__counter_3));
    vlSelf->__PVT__bar__DOT__stall_counter1 = (0xfU 
                                               & ((IData)(vlSelf->__PVT__bar__DOT__stall_counter) 
                                                  - (IData)(1U)));
    vlSelf->__PVT__error__DOT__a_last_counter1 = (0x3ffU 
                                                  & ((IData)(vlSelf->__PVT__error__DOT__a_last_counter) 
                                                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__a_last_first = (0U == (IData)(vlSelf->__PVT__error__DOT__a_last_counter));
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->__PVT__bar__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog);
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__bar__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1);
    vlSelf->__PVT__error__DOT__counter1 = (0x3ffU & 
                                           ((IData)(vlSelf->__PVT__error__DOT__counter) 
                                            - (IData)(1U)));
    vlSelf->__PVT__error__DOT__da_first = (0U == (IData)(vlSelf->__PVT__error__DOT__counter));
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter1_1 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1_1 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->__PVT__error__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->__PVT__error__DOT__monitor__DOT__watchdog);
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1_2 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__error__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1);
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter));
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter1 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter));
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

void VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__9(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__9\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp178;
    VlWide<4>/*127:0*/ __Vtemp179;
    VlWide<4>/*127:0*/ __Vtemp180;
    VlWide<4>/*127:0*/ __Vtemp181;
    VlWide<4>/*127:0*/ __Vtemp182;
    VlWide<4>/*127:0*/ __Vtemp183;
    VlWide<4>/*127:0*/ __Vtemp184;
    VlWide<4>/*127:0*/ __Vtemp185;
    VlWide<4>/*127:0*/ __Vtemp186;
    VlWide<4>/*127:0*/ __Vtemp187;
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
    VL_EXTEND_WI(128,32, __Vtemp178, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (~ (__Vtemp178[0U] 
                                        >> 1U))))));
    VL_EXTEND_WI(128,32, __Vtemp179, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (__Vtemp179[0U] 
                                     >> 1U)))));
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
    VL_EXTEND_WI(128,32, __Vtemp180, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp181, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp182, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp183, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp184, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp185, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp186, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp187, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    vlSelf->__PVT__error__DOT__monitor__DOT__mask = 
        ((8U & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc_1) 
                 << 3U) | (0xfffffff8U & ((__Vtemp180[0U] 
                                           << 2U) & 
                                          (__Vtemp181[0U] 
                                           << 3U))))) 
         | ((4U & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc_1) 
                    << 2U) | (0xfffffffcU & ((__Vtemp182[0U] 
                                              << 1U) 
                                             & ((~ 
                                                 __Vtemp183[0U]) 
                                                << 2U))))) 
            | ((2U & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc) 
                       | ((~ (__Vtemp184[0U] >> 1U)) 
                          & __Vtemp185[0U])) << 1U)) 
               | (1U & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc) 
                        | ((~ (__Vtemp186[0U] >> 1U)) 
                           & (~ __Vtemp187[0U])))))));
}

void VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__11(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__11\n"); );
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

void VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__8(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__8\n"); );
    // Body
    vlSelf->__PVT__bar__DOT__stall_first = (0U == (IData)(vlSelf->__PVT__bar__DOT__stall_counter));
    vlSelf->__PVT__bar__DOT__counter1 = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__counter) 
                                                 - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__a_first = (0U == (IData)(vlSelf->__PVT__bar__DOT__counter));
    vlSelf->__PVT__bar__DOT__counter1_3 = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__counter_3) 
                                                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__d_first = (0U == (IData)(vlSelf->__PVT__bar__DOT__counter_3));
    vlSelf->__PVT__bar__DOT__stall_counter1 = (0xfU 
                                               & ((IData)(vlSelf->__PVT__bar__DOT__stall_counter) 
                                                  - (IData)(1U)));
    vlSelf->__PVT__error__DOT__a_last_counter1 = (0x3ffU 
                                                  & ((IData)(vlSelf->__PVT__error__DOT__a_last_counter) 
                                                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__a_last_first = (0U == (IData)(vlSelf->__PVT__error__DOT__a_last_counter));
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->__PVT__bar__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog);
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__bar__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1);
    vlSelf->__PVT__error__DOT__counter1 = (0x3ffU & 
                                           ((IData)(vlSelf->__PVT__error__DOT__counter) 
                                            - (IData)(1U)));
    vlSelf->__PVT__error__DOT__da_first = (0U == (IData)(vlSelf->__PVT__error__DOT__counter));
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter1_1 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1_1 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->__PVT__error__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->__PVT__error__DOT__monitor__DOT__watchdog);
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1_2 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__error__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1);
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter));
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter1 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter));
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
}

void VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__10(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__10\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp432;
    VlWide<4>/*127:0*/ __Vtemp433;
    VlWide<4>/*127:0*/ __Vtemp434;
    VlWide<4>/*127:0*/ __Vtemp435;
    VlWide<4>/*127:0*/ __Vtemp436;
    VlWide<4>/*127:0*/ __Vtemp437;
    VlWide<4>/*127:0*/ __Vtemp438;
    VlWide<4>/*127:0*/ __Vtemp439;
    VlWide<4>/*127:0*/ __Vtemp440;
    VlWide<4>/*127:0*/ __Vtemp441;
    // Body
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
    VL_EXTEND_WI(128,32, __Vtemp432, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (~ (__Vtemp432[0U] 
                                        >> 1U))))));
    VL_EXTEND_WI(128,32, __Vtemp433, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (__Vtemp433[0U] 
                                     >> 1U)))));
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
    VL_EXTEND_WI(128,32, __Vtemp434, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp435, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp436, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp437, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp438, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp439, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp440, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp441, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    vlSelf->__PVT__error__DOT__monitor__DOT__mask = 
        ((8U & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc_1) 
                 << 3U) | (0xfffffff8U & ((__Vtemp434[0U] 
                                           << 2U) & 
                                          (__Vtemp435[0U] 
                                           << 3U))))) 
         | ((4U & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc_1) 
                    << 2U) | (0xfffffffcU & ((__Vtemp436[0U] 
                                              << 1U) 
                                             & ((~ 
                                                 __Vtemp437[0U]) 
                                                << 2U))))) 
            | ((2U & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc) 
                       | ((~ (__Vtemp438[0U] >> 1U)) 
                          & __Vtemp439[0U])) << 1U)) 
               | (1U & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc) 
                        | ((~ (__Vtemp440[0U] >> 1U)) 
                           & (~ __Vtemp441[0U])))))));
}

void VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__12(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__12\n"); );
    // Body
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

void VysyxSoCFull_TLBusBypass___ctor_var_reset(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->auto_node_out_out_a_ready = VL_RAND_RESET_I(1);
    vlSelf->auto_node_out_out_a_valid = VL_RAND_RESET_I(1);
    vlSelf->auto_node_out_out_a_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->auto_node_out_out_a_bits_size = VL_RAND_RESET_I(3);
    vlSelf->auto_node_out_out_a_bits_source = VL_RAND_RESET_I(4);
    vlSelf->auto_node_out_out_a_bits_address = VL_RAND_RESET_I(32);
    vlSelf->auto_node_out_out_a_bits_mask = VL_RAND_RESET_I(4);
    vlSelf->auto_node_out_out_a_bits_data = VL_RAND_RESET_I(32);
    vlSelf->auto_node_out_out_d_ready = VL_RAND_RESET_I(1);
    vlSelf->auto_node_out_out_d_valid = VL_RAND_RESET_I(1);
    vlSelf->auto_node_out_out_d_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->auto_node_out_out_d_bits_param = VL_RAND_RESET_I(2);
    vlSelf->auto_node_out_out_d_bits_size = VL_RAND_RESET_I(3);
    vlSelf->auto_node_out_out_d_bits_source = VL_RAND_RESET_I(4);
    vlSelf->auto_node_out_out_d_bits_sink = VL_RAND_RESET_I(5);
    vlSelf->auto_node_out_out_d_bits_denied = VL_RAND_RESET_I(1);
    vlSelf->auto_node_out_out_d_bits_data = VL_RAND_RESET_I(32);
    vlSelf->auto_node_out_out_d_bits_corrupt = VL_RAND_RESET_I(1);
    vlSelf->auto_node_in_in_a_ready = VL_RAND_RESET_I(1);
    vlSelf->auto_node_in_in_a_valid = VL_RAND_RESET_I(1);
    vlSelf->auto_node_in_in_a_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->auto_node_in_in_a_bits_size = VL_RAND_RESET_I(3);
    vlSelf->auto_node_in_in_a_bits_source = VL_RAND_RESET_I(4);
    vlSelf->auto_node_in_in_a_bits_address = VL_RAND_RESET_I(32);
    vlSelf->auto_node_in_in_a_bits_mask = VL_RAND_RESET_I(4);
    vlSelf->auto_node_in_in_a_bits_data = VL_RAND_RESET_I(32);
    vlSelf->auto_node_in_in_d_ready = VL_RAND_RESET_I(1);
    vlSelf->auto_node_in_in_d_valid = VL_RAND_RESET_I(1);
    vlSelf->auto_node_in_in_d_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->auto_node_in_in_d_bits_param = VL_RAND_RESET_I(2);
    vlSelf->auto_node_in_in_d_bits_size = VL_RAND_RESET_I(3);
    vlSelf->auto_node_in_in_d_bits_source = VL_RAND_RESET_I(4);
    vlSelf->auto_node_in_in_d_bits_sink = VL_RAND_RESET_I(5);
    vlSelf->auto_node_in_in_d_bits_denied = VL_RAND_RESET_I(1);
    vlSelf->auto_node_in_in_d_bits_data = VL_RAND_RESET_I(32);
    vlSelf->auto_node_in_in_d_bits_corrupt = VL_RAND_RESET_I(1);
    vlSelf->io_bypass = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar_auto_in_a_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar_auto_in_d_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar_auto_in_d_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__bar_auto_in_d_bits_param = VL_RAND_RESET_I(2);
    vlSelf->__PVT__bar_auto_in_d_bits_size = VL_RAND_RESET_I(3);
    vlSelf->__PVT__bar_auto_in_d_bits_denied = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar_auto_in_d_bits_corrupt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar_auto_out_1_a_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar_auto_out_1_d_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar_auto_out_0_a_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar_auto_out_0_d_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error_auto_in_d_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error_auto_in_d_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__error_auto_in_d_bits_size = VL_RAND_RESET_I(4);
    vlSelf->__PVT__error_auto_in_d_bits_source = VL_RAND_RESET_I(4);
    vlSelf->__PVT__error_auto_in_d_bits_denied = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error_auto_in_d_bits_corrupt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar__DOT__monitor_io_in_a_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param = VL_RAND_RESET_I(2);
    vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size = VL_RAND_RESET_I(3);
    vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source = VL_RAND_RESET_I(4);
    vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_sink = VL_RAND_RESET_I(5);
    vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar__DOT__in_reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar__DOT__bypass_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar__DOT__bypass = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar__DOT__flight = VL_RAND_RESET_I(6);
    vlSelf->__PVT__bar__DOT__stall_counter = VL_RAND_RESET_I(4);
    vlSelf->__PVT__bar__DOT__stall_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar__DOT___bundleIn_0_a_ready_T_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->__PVT__bar__DOT__counter1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__bar__DOT__a_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar__DOT__in_d_bits_size = VL_RAND_RESET_I(3);
    vlSelf->__PVT__bar__DOT__in_d_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__bar__DOT__counter_3 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__bar__DOT__counter1_3 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__bar__DOT__d_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar__DOT__inc = VL_RAND_RESET_I(2);
    vlSelf->__PVT__bar__DOT__next_flight = VL_RAND_RESET_I(6);
    vlSelf->__PVT__bar__DOT__stall_counter1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar__DOT__monitor__DOT__mask_acc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar__DOT__monitor__DOT__mask_acc_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar__DOT__monitor__DOT__mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__bar__DOT__monitor__DOT___T_88 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter = VL_RAND_RESET_I(4);
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar__DOT__monitor__DOT__opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__bar__DOT__monitor__DOT__size = VL_RAND_RESET_I(3);
    vlSelf->__PVT__bar__DOT__monitor__DOT__source = VL_RAND_RESET_I(4);
    vlSelf->__PVT__bar__DOT__monitor__DOT__address = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter = VL_RAND_RESET_I(4);
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar__DOT__monitor__DOT__opcode_1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__bar__DOT__monitor__DOT__param_1 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__bar__DOT__monitor__DOT__size_1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__bar__DOT__monitor__DOT__source_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__bar__DOT__monitor__DOT__sink = VL_RAND_RESET_I(5);
    vlSelf->__PVT__bar__DOT__monitor__DOT__denied = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar__DOT__monitor__DOT__inflight = VL_RAND_RESET_I(16);
    vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_opcodes = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter1_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(143, vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23);
    vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_30 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_46 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_T_2 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_opcodes_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_sizes_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bar__DOT__monitor__DOT___watchdog_T_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1_2 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_T_5 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_sizes_T_5 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bar__DOT__monitor__DOT___watchdog_T_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = VL_RAND_RESET_I(32);
    vlSelf->__PVT__error__DOT__monitor_io_in_a_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error__DOT__monitor_io_in_d_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size = VL_RAND_RESET_I(4);
    vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source = VL_RAND_RESET_I(4);
    vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error__DOT__idle = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error__DOT__beatsLeft = VL_RAND_RESET_I(10);
    vlSelf->__PVT__error__DOT__a_last_counter = VL_RAND_RESET_I(10);
    vlSelf->__PVT__error__DOT__a_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error__DOT__da_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error__DOT__state_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error__DOT__out_1_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error__DOT__counter = VL_RAND_RESET_I(10);
    vlSelf->__PVT__error__DOT__da_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__error__DOT__da_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error__DOT__a_last_counter1 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__error__DOT__a_last_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error__DOT__counter1 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__error__DOT__da_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error__DOT__latch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error__DOT__muxStateEarly_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error__DOT___sink_ACancel_earlyValid_T_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error__DOT___beatsLeft_T_4 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__error__DOT__monitor__DOT__source_ok = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error__DOT__monitor__DOT__mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter = VL_RAND_RESET_I(10);
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter1 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error__DOT__monitor__DOT__opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__error__DOT__monitor__DOT__size = VL_RAND_RESET_I(4);
    vlSelf->__PVT__error__DOT__monitor__DOT__source = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->__PVT__error__DOT__monitor__DOT__address);
    vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter = VL_RAND_RESET_I(10);
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error__DOT__monitor__DOT__opcode_1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__error__DOT__monitor__DOT__size_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__error__DOT__monitor__DOT__source_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__error__DOT__monitor__DOT__denied = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight = VL_RAND_RESET_I(16);
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight_opcodes = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes);
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter1_1 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1_1 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__error__DOT__monitor__DOT___GEN_30 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__error__DOT__monitor__DOT___GEN_46 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_T_2 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_opcodes_T_2 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2);
    vlSelf->__PVT__error__DOT__monitor__DOT__watchdog = VL_RAND_RESET_I(32);
    vlSelf->__PVT__error__DOT__monitor__DOT___watchdog_T_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1 = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1);
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1_2 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_T_5 = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5);
    vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__error__DOT__monitor__DOT___watchdog_T_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus = VL_RAND_RESET_I(32);
    vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = VL_RAND_RESET_I(32);
}
