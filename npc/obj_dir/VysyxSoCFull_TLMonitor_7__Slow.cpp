// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull_TLMonitor_7.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

//==========


void VysyxSoCFull_TLMonitor_7___ctor_var_reset(VysyxSoCFull_TLMonitor_7* vlSelf);

VysyxSoCFull_TLMonitor_7::VysyxSoCFull_TLMonitor_7(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VysyxSoCFull_TLMonitor_7___ctor_var_reset(this);
}

void VysyxSoCFull_TLMonitor_7::__Vconfigure(VysyxSoCFull__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VysyxSoCFull_TLMonitor_7::~VysyxSoCFull_TLMonitor_7() {
}

void VysyxSoCFull_TLMonitor_7___initial__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__1(VysyxSoCFull_TLMonitor_7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLMonitor_7___initial__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__1\n"); );
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
                                vlSelf->__PVT__plusarg_reader__DOT__myplus))) {
        vlSelf->__PVT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp2[0U] = 0x743d2564U;
    __Vtemp2[1U] = 0x6d656f75U;
    __Vtemp2[2U] = 0x6b5f7469U;
    __Vtemp2[3U] = 0x656c696eU;
    __Vtemp2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp2), 
                                vlSelf->__PVT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->__PVT__plusarg_reader_1__DOT__myplus = 0U;
    }
}

void VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__7(VysyxSoCFull_TLMonitor_7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__7\n"); );
    // Body
    vlSelf->__PVT__a_first_counter1_1 = (0xfU & ((IData)(vlSelf->__PVT__a_first_counter_1) 
                                                 - (IData)(1U)));
    vlSelf->__PVT__a_first_1 = (0U == (IData)(vlSelf->__PVT__a_first_counter_1));
    vlSelf->__PVT__d_first_counter1_1 = (0xfU & ((IData)(vlSelf->__PVT__d_first_counter_1) 
                                                 - (IData)(1U)));
    vlSelf->__PVT__d_first_1 = (0U == (IData)(vlSelf->__PVT__d_first_counter_1));
    vlSelf->__PVT___watchdog_T_1 = ((IData)(1U) + vlSelf->__PVT__watchdog);
    vlSelf->__PVT__d_first_counter1_2 = (0xfU & ((IData)(vlSelf->__PVT__d_first_counter_2) 
                                                 - (IData)(1U)));
    vlSelf->__PVT__d_first_2 = (0U == (IData)(vlSelf->__PVT__d_first_counter_2));
    vlSelf->__PVT___watchdog_T_3 = ((IData)(1U) + vlSelf->__PVT__watchdog_1);
    vlSelf->__PVT__a_first_counter1 = (0xfU & ((IData)(vlSelf->__PVT__a_first_counter) 
                                               - (IData)(1U)));
    vlSelf->__PVT__a_first = (0U == (IData)(vlSelf->__PVT__a_first_counter));
    vlSelf->__PVT__d_first_counter1 = (0xfU & ((IData)(vlSelf->__PVT__d_first_counter) 
                                               - (IData)(1U)));
    vlSelf->__PVT__d_first = (0U == (IData)(vlSelf->__PVT__d_first_counter));
    vlSelf->__PVT___a_opcode_lookup_T_1 = ((0x3fU >= 
                                            ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                             << 2U))
                                            ? (vlSelf->__PVT__inflight_opcodes 
                                               >> ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                                   << 2U))
                                            : 0ULL);
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

void VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__8(VysyxSoCFull_TLMonitor_7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLMonitor_7___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__8\n"); );
    // Body
    vlSelf->__PVT__a_first_counter1_1 = (0xfU & ((IData)(vlSelf->__PVT__a_first_counter_1) 
                                                 - (IData)(1U)));
    vlSelf->__PVT__a_first_1 = (0U == (IData)(vlSelf->__PVT__a_first_counter_1));
    vlSelf->__PVT__d_first_counter1_1 = (0xfU & ((IData)(vlSelf->__PVT__d_first_counter_1) 
                                                 - (IData)(1U)));
    vlSelf->__PVT__d_first_1 = (0U == (IData)(vlSelf->__PVT__d_first_counter_1));
    vlSelf->__PVT___watchdog_T_1 = ((IData)(1U) + vlSelf->__PVT__watchdog);
    vlSelf->__PVT__d_first_counter1_2 = (0xfU & ((IData)(vlSelf->__PVT__d_first_counter_2) 
                                                 - (IData)(1U)));
    vlSelf->__PVT__d_first_2 = (0U == (IData)(vlSelf->__PVT__d_first_counter_2));
    vlSelf->__PVT___watchdog_T_3 = ((IData)(1U) + vlSelf->__PVT__watchdog_1);
    vlSelf->__PVT__a_first_counter1 = (0xfU & ((IData)(vlSelf->__PVT__a_first_counter) 
                                               - (IData)(1U)));
    vlSelf->__PVT__a_first = (0U == (IData)(vlSelf->__PVT__a_first_counter));
    vlSelf->__PVT__d_first_counter1 = (0xfU & ((IData)(vlSelf->__PVT__d_first_counter) 
                                               - (IData)(1U)));
    vlSelf->__PVT__d_first = (0U == (IData)(vlSelf->__PVT__d_first_counter));
    vlSelf->__PVT___a_opcode_lookup_T_1 = ((0x3fU >= 
                                            ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                             << 2U))
                                            ? (vlSelf->__PVT__inflight_opcodes 
                                               >> ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                                   << 2U))
                                            : 0ULL);
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

void VysyxSoCFull_TLMonitor_7___ctor_var_reset(VysyxSoCFull_TLMonitor_7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLMonitor_7___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_in_a_ready = VL_RAND_RESET_I(1);
    vlSelf->io_in_a_valid = VL_RAND_RESET_I(1);
    vlSelf->io_in_a_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->io_in_a_bits_size = VL_RAND_RESET_I(3);
    vlSelf->io_in_a_bits_source = VL_RAND_RESET_I(4);
    vlSelf->io_in_a_bits_address = VL_RAND_RESET_I(32);
    vlSelf->io_in_a_bits_mask = VL_RAND_RESET_I(4);
    vlSelf->io_in_d_ready = VL_RAND_RESET_I(1);
    vlSelf->io_in_d_valid = VL_RAND_RESET_I(1);
    vlSelf->io_in_d_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->io_in_d_bits_param = VL_RAND_RESET_I(2);
    vlSelf->io_in_d_bits_size = VL_RAND_RESET_I(3);
    vlSelf->io_in_d_bits_source = VL_RAND_RESET_I(4);
    vlSelf->io_in_d_bits_sink = VL_RAND_RESET_I(5);
    vlSelf->io_in_d_bits_denied = VL_RAND_RESET_I(1);
    vlSelf->io_in_d_bits_corrupt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__source_ok = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mask_acc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mask_acc_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT___T_88 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___a_first_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__a_first_counter = VL_RAND_RESET_I(4);
    vlSelf->__PVT__a_first_counter1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__a_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__size = VL_RAND_RESET_I(3);
    vlSelf->__PVT__source = VL_RAND_RESET_I(4);
    vlSelf->__PVT__address = VL_RAND_RESET_I(32);
    vlSelf->__PVT___d_first_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__d_first_counter = VL_RAND_RESET_I(4);
    vlSelf->__PVT__d_first_counter1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__d_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__opcode_1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__param_1 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__size_1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__source_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__sink = VL_RAND_RESET_I(5);
    vlSelf->__PVT__denied = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inflight = VL_RAND_RESET_I(16);
    vlSelf->__PVT__inflight_opcodes = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__inflight_sizes = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__a_first_counter_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__a_first_counter1_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__a_first_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__d_first_counter_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__d_first_counter1_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__d_first_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___a_opcode_lookup_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__a_set_wo_ready = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(143, vlSelf->__PVT___GEN_23);
    vlSelf->__PVT___GEN_30 = VL_RAND_RESET_I(3);
    vlSelf->__PVT___GEN_46 = VL_RAND_RESET_I(3);
    vlSelf->__PVT___inflight_T_2 = VL_RAND_RESET_I(16);
    vlSelf->__PVT___inflight_opcodes_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___inflight_sizes_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__watchdog = VL_RAND_RESET_I(32);
    vlSelf->__PVT___watchdog_T_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inflight_1 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__inflight_sizes_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__d_first_counter_2 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__d_first_counter1_2 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__d_first_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___inflight_T_5 = VL_RAND_RESET_I(16);
    vlSelf->__PVT___inflight_sizes_T_5 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__watchdog_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___watchdog_T_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__plusarg_reader__DOT__myplus = VL_RAND_RESET_I(32);
    vlSelf->__PVT__plusarg_reader_1__DOT__myplus = VL_RAND_RESET_I(32);
}
