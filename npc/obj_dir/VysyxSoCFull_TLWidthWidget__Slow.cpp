// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull_TLWidthWidget.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

//==========


void VysyxSoCFull_TLWidthWidget___ctor_var_reset(VysyxSoCFull_TLWidthWidget* vlSelf);

VysyxSoCFull_TLWidthWidget::VysyxSoCFull_TLWidthWidget(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VysyxSoCFull_TLWidthWidget___ctor_var_reset(this);
}

void VysyxSoCFull_TLWidthWidget::__Vconfigure(VysyxSoCFull__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VysyxSoCFull_TLWidthWidget::~VysyxSoCFull_TLWidthWidget() {
}

void VysyxSoCFull_TLWidthWidget___initial__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__1(VysyxSoCFull_TLWidthWidget* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLWidthWidget___initial__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__1\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp1;
    VlWide<5>/*159:0*/ __Vtemp2;
    // Body
    __Vtemp1[0U] = 0x743d2564U;
    __Vtemp1[1U] = 0x6d656f75U;
    __Vtemp1[2U] = 0x6b5f7469U;
    __Vtemp1[3U] = 0x656c696eU;
    __Vtemp1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp1), 
                                vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp2[0U] = 0x743d2564U;
    __Vtemp2[1U] = 0x6d656f75U;
    __Vtemp2[2U] = 0x6b5f7469U;
    __Vtemp2[3U] = 0x656c696eU;
    __Vtemp2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp2), 
                                vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
}

void VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__7(VysyxSoCFull_TLWidthWidget* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__7\n"); );
    // Body
    vlSelf->__PVT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__a_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1));
    vlSelf->__PVT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1));
    vlSelf->__PVT__monitor__DOT___watchdog_T_1 = ((IData)(1U) 
                                                  + vlSelf->__PVT__monitor__DOT__watchdog);
    vlSelf->__PVT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first_2 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__monitor__DOT___watchdog_T_3 = ((IData)(1U) 
                                                  + vlSelf->__PVT__monitor__DOT__watchdog_1);
    vlSelf->__PVT__monitor__DOT__a_first_counter1 = 
        (7U & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter) 
               - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__a_first = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter));
    vlSelf->__PVT__monitor__DOT__d_first_counter1 = 
        (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter) 
               - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter));
}

void VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__8(VysyxSoCFull_TLWidthWidget* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLWidthWidget___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__widget__8\n"); );
    // Body
    vlSelf->__PVT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__a_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1));
    vlSelf->__PVT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1));
    vlSelf->__PVT__monitor__DOT___watchdog_T_1 = ((IData)(1U) 
                                                  + vlSelf->__PVT__monitor__DOT__watchdog);
    vlSelf->__PVT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first_2 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__monitor__DOT___watchdog_T_3 = ((IData)(1U) 
                                                  + vlSelf->__PVT__monitor__DOT__watchdog_1);
    vlSelf->__PVT__monitor__DOT__a_first_counter1 = 
        (7U & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter) 
               - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__a_first = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter));
    vlSelf->__PVT__monitor__DOT__d_first_counter1 = 
        (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter) 
               - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter));
    vlSelf->__PVT__repeated_repeater_io_deq_valid = 
        ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
         | (IData)(vlSelf->__PVT__repeated_repeater__DOT__full));
    vlSelf->__PVT__cated_bits_data = (((QData)((IData)(
                                                       (((IData)(vlSelf->__PVT__repeated_repeater__DOT__full)
                                                          ? vlSelf->__PVT__repeated_repeater__DOT__saved_data
                                                          : vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_data) 
                                                        >> 0x20U))) 
                                       << 0x20U) | (QData)((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_data)));
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
    vlSelf->__PVT__monitor__DOT__source_ok = 1U;
    vlSelf->__PVT__repeated_repeater_io_deq_bits_source 
        = ((IData)(vlSelf->__PVT__repeated_repeater__DOT__full)
            ? (IData)(vlSelf->__PVT__repeated_repeater__DOT__saved_source)
            : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source));
    vlSelf->__PVT__monitor__DOT___T_77 = ((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                                          & (0ULL == 
                                             (0x1fffff000ULL 
                                              & (QData)((IData)(
                                                                (0x1000U 
                                                                 ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))));
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
    if (vlSelf->__PVT__repeated_repeater__DOT__full) {
        vlSelf->__PVT__repeated_repeater_io_deq_bits_address 
            = vlSelf->__PVT__repeated_repeater__DOT__saved_address;
        vlSelf->__PVT__repeated_repeater_io_deq_bits_mask 
            = vlSelf->__PVT__repeated_repeater__DOT__saved_mask;
    } else {
        vlSelf->__PVT__repeated_repeater_io_deq_bits_address 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address;
        vlSelf->__PVT__repeated_repeater_io_deq_bits_mask 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask;
    }
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
    vlSelf->__PVT__repeat_index = (1U & ((vlSelf->__PVT__repeated_repeater_io_deq_bits_address 
                                          >> 2U) | (IData)(vlSelf->__PVT__repeat_count)));
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

void VysyxSoCFull_TLWidthWidget___ctor_var_reset(VysyxSoCFull_TLWidthWidget* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLWidthWidget___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->auto_in_a_ready = VL_RAND_RESET_I(1);
    vlSelf->auto_in_a_valid = VL_RAND_RESET_I(1);
    vlSelf->auto_in_a_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->auto_in_a_bits_size = VL_RAND_RESET_I(3);
    vlSelf->auto_in_a_bits_source = VL_RAND_RESET_I(4);
    vlSelf->auto_in_a_bits_address = VL_RAND_RESET_I(32);
    vlSelf->auto_in_a_bits_mask = VL_RAND_RESET_I(8);
    vlSelf->auto_in_a_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->auto_in_d_ready = VL_RAND_RESET_I(1);
    vlSelf->auto_in_d_valid = VL_RAND_RESET_I(1);
    vlSelf->auto_in_d_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->auto_in_d_bits_size = VL_RAND_RESET_I(3);
    vlSelf->auto_in_d_bits_source = VL_RAND_RESET_I(4);
    vlSelf->auto_in_d_bits_denied = VL_RAND_RESET_I(1);
    vlSelf->auto_in_d_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->auto_in_d_bits_corrupt = VL_RAND_RESET_I(1);
    vlSelf->auto_out_a_ready = VL_RAND_RESET_I(1);
    vlSelf->auto_out_a_valid = VL_RAND_RESET_I(1);
    vlSelf->auto_out_a_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->auto_out_a_bits_size = VL_RAND_RESET_I(3);
    vlSelf->auto_out_a_bits_source = VL_RAND_RESET_I(4);
    vlSelf->auto_out_a_bits_address = VL_RAND_RESET_I(32);
    vlSelf->auto_out_a_bits_mask = VL_RAND_RESET_I(4);
    vlSelf->auto_out_a_bits_data = VL_RAND_RESET_I(32);
    vlSelf->auto_out_d_ready = VL_RAND_RESET_I(1);
    vlSelf->auto_out_d_valid = VL_RAND_RESET_I(1);
    vlSelf->auto_out_d_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->auto_out_d_bits_param = VL_RAND_RESET_I(2);
    vlSelf->auto_out_d_bits_size = VL_RAND_RESET_I(3);
    vlSelf->auto_out_d_bits_source = VL_RAND_RESET_I(4);
    vlSelf->auto_out_d_bits_sink = VL_RAND_RESET_I(6);
    vlSelf->auto_out_d_bits_denied = VL_RAND_RESET_I(1);
    vlSelf->auto_out_d_bits_data = VL_RAND_RESET_I(32);
    vlSelf->auto_out_d_bits_corrupt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor_io_in_d_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__repeated_repeater_io_enq_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__repeated_repeater_io_deq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__repeated_repeater_io_deq_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__repeated_repeater_io_deq_bits_size = VL_RAND_RESET_I(3);
    vlSelf->__PVT__repeated_repeater_io_deq_bits_source = VL_RAND_RESET_I(4);
    vlSelf->__PVT__repeated_repeater_io_deq_bits_address = VL_RAND_RESET_I(32);
    vlSelf->__PVT__repeated_repeater_io_deq_bits_mask = VL_RAND_RESET_I(8);
    vlSelf->__PVT__cated_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__repeat_count = VL_RAND_RESET_I(1);
    vlSelf->__PVT__repeat_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__repeat_index = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count = VL_RAND_RESET_I(1);
    vlSelf->__PVT__last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__corrupt_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__corrupt_out = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bundleIn_0_d_bits_data_rdata_written_once = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bundleIn_0_d_bits_data_masked_enable_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bundleIn_0_d_bits_data_rdata_0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__source_ok = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__mask_acc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__mask_acc_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__mask_eq_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__mask_acc_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__mask_eq_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__mask_acc_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__mask_eq_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__mask_acc_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__mask_eq_5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__mask_acc_5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__mask = VL_RAND_RESET_I(8);
    vlSelf->__PVT__monitor__DOT___T_77 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT___a_first_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__a_first_counter = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__a_first_counter1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__a_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__size = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__source = VL_RAND_RESET_I(4);
    vlSelf->__PVT__monitor__DOT__address = VL_RAND_RESET_I(32);
    vlSelf->__PVT__monitor__DOT___d_first_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__d_first_counter = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__d_first_counter1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__d_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__opcode_1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__param_1 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__monitor__DOT__size_1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__source_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__monitor__DOT__sink = VL_RAND_RESET_I(6);
    vlSelf->__PVT__monitor__DOT__denied = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__inflight = VL_RAND_RESET_I(16);
    vlSelf->__PVT__monitor__DOT__inflight_opcodes = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__monitor__DOT__inflight_sizes = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__monitor__DOT__a_first_counter_1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__a_first_counter1_1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__a_first_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__d_first_counter_1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__d_first_counter1_1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__d_first_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(143, vlSelf->__PVT__monitor__DOT___GEN_23);
    vlSelf->__PVT__monitor__DOT___GEN_30 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT___GEN_46 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT___inflight_T_2 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__monitor__DOT__watchdog = VL_RAND_RESET_I(32);
    vlSelf->__PVT__monitor__DOT___watchdog_T_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__monitor__DOT__inflight_1 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__monitor__DOT__inflight_sizes_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__monitor__DOT__d_first_counter_2 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__d_first_counter1_2 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__d_first_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT___inflight_T_5 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__monitor__DOT__watchdog_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__monitor__DOT___watchdog_T_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus = VL_RAND_RESET_I(32);
    vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus = VL_RAND_RESET_I(32);
    vlSelf->__PVT__repeated_repeater__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__repeated_repeater__DOT__saved_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__repeated_repeater__DOT__saved_size = VL_RAND_RESET_I(3);
    vlSelf->__PVT__repeated_repeater__DOT__saved_source = VL_RAND_RESET_I(4);
    vlSelf->__PVT__repeated_repeater__DOT__saved_address = VL_RAND_RESET_I(32);
    vlSelf->__PVT__repeated_repeater__DOT__saved_mask = VL_RAND_RESET_I(8);
    vlSelf->__PVT__repeated_repeater__DOT__saved_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__repeated_repeater__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__repeated_repeater__DOT___GEN_0 = VL_RAND_RESET_I(1);
}
