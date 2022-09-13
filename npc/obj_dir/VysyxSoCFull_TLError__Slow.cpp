// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull_TLError.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

//==========


void VysyxSoCFull_TLError___ctor_var_reset(VysyxSoCFull_TLError* vlSelf);

VysyxSoCFull_TLError::VysyxSoCFull_TLError(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VysyxSoCFull_TLError___ctor_var_reset(this);
}

void VysyxSoCFull_TLError::__Vconfigure(VysyxSoCFull__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VysyxSoCFull_TLError::~VysyxSoCFull_TLError() {
}

void VysyxSoCFull_TLError___initial__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__1(VysyxSoCFull_TLError* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLError___initial__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__1\n"); );
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

void VysyxSoCFull_TLError___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__7(VysyxSoCFull_TLError* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLError___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__7\n"); );
    // Body
    vlSelf->__PVT__a_last_counter1 = (0xfU & ((IData)(vlSelf->__PVT__a_last_counter) 
                                              - (IData)(1U)));
    vlSelf->__PVT__a_last_first = (0U == (IData)(vlSelf->__PVT__a_last_counter));
    vlSelf->__PVT__counter1 = (0xfU & ((IData)(vlSelf->__PVT__counter) 
                                       - (IData)(1U)));
    vlSelf->__PVT__da_first = (0U == (IData)(vlSelf->__PVT__counter));
    vlSelf->__PVT__monitor__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__a_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1));
    vlSelf->__PVT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1));
    vlSelf->__PVT__monitor__DOT___watchdog_T_1 = ((IData)(1U) 
                                                  + vlSelf->__PVT__monitor__DOT__watchdog);
    vlSelf->__PVT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first_2 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__monitor__DOT___watchdog_T_3 = ((IData)(1U) 
                                                  + vlSelf->__PVT__monitor__DOT__watchdog_1);
    vlSelf->__PVT__da_bits_opcode = ((7U == vlSelf->__PVT__a__DOT__ram_opcode
                                      [0U]) ? 4U : 
                                     ((6U == vlSelf->__PVT__a__DOT__ram_opcode
                                       [0U]) ? 4U : 
                                      ((5U == vlSelf->__PVT__a__DOT__ram_opcode
                                        [0U]) ? 2U : 
                                       ((4U == vlSelf->__PVT__a__DOT__ram_opcode
                                         [0U]) ? 1U
                                         : ((3U == 
                                             vlSelf->__PVT__a__DOT__ram_opcode
                                             [0U]) ? 1U
                                             : ((2U 
                                                 == 
                                                 vlSelf->__PVT__a__DOT__ram_opcode
                                                 [0U])
                                                 ? 1U
                                                 : 0U))))));
    vlSelf->__PVT__a_last = ((1U == (IData)(vlSelf->__PVT__a_last_counter)) 
                             | (0U == ((4U & vlSelf->__PVT__a__DOT__ram_opcode
                                        [0U]) ? 0U : 
                                       (0xfU & (~ (0x7ffU 
                                                   & (((IData)(0x3fU) 
                                                       << 
                                                       vlSelf->__PVT__a__DOT__ram_size
                                                       [0U]) 
                                                      >> 2U)))))));
    vlSelf->__PVT__monitor__DOT__a_first_counter1 = 
        (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__a_first = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter));
    vlSelf->__PVT__monitor__DOT__d_first_counter1 = 
        (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter));
    vlSelf->__PVT__da_valid = (((IData)(vlSelf->__PVT__a__DOT__maybe_full) 
                                & (IData)(vlSelf->__PVT__a_last)) 
                               & (IData)(vlSelf->__PVT__idle));
    if ((0U == (IData)(vlSelf->__PVT__beatsLeft))) {
        vlSelf->__PVT__monitor_io_in_d_bits_denied 
            = vlSelf->__PVT__da_valid;
        vlSelf->auto_in_d_bits_denied = vlSelf->__PVT__da_valid;
    } else {
        vlSelf->__PVT__monitor_io_in_d_bits_denied 
            = vlSelf->__PVT__state_1;
        vlSelf->auto_in_d_bits_denied = vlSelf->__PVT__state_1;
    }
    vlSelf->__PVT___sink_ACancel_earlyValid_T_2 = ((IData)(vlSelf->__PVT__state_1) 
                                                   & (IData)(vlSelf->__PVT__da_valid));
    if (vlSelf->auto_in_d_bits_denied) {
        vlSelf->__PVT__monitor_io_in_d_bits_size = 
            vlSelf->__PVT__a__DOT__ram_size[0U];
        vlSelf->__PVT__monitor_io_in_d_bits_opcode 
            = vlSelf->__PVT__da_bits_opcode;
        vlSelf->__PVT__monitor_io_in_d_bits_source 
            = vlSelf->__PVT__a__DOT__ram_source[0U];
        vlSelf->auto_in_d_bits_corrupt = ((IData)(vlSelf->__PVT__da_bits_opcode) 
                                          & 1U);
        vlSelf->auto_in_d_bits_size = vlSelf->__PVT__a__DOT__ram_size
            [0U];
        vlSelf->auto_in_d_bits_opcode = vlSelf->__PVT__da_bits_opcode;
    } else {
        vlSelf->__PVT__monitor_io_in_d_bits_size = 0U;
        vlSelf->__PVT__monitor_io_in_d_bits_opcode = 0U;
        vlSelf->__PVT__monitor_io_in_d_bits_source = 0U;
        vlSelf->auto_in_d_bits_corrupt = 0U;
        vlSelf->auto_in_d_bits_size = 0U;
        vlSelf->auto_in_d_bits_opcode = 0U;
    }
    if ((0U == (IData)(vlSelf->__PVT__beatsLeft))) {
        vlSelf->__PVT__monitor_io_in_d_valid = vlSelf->__PVT__da_valid;
        vlSelf->auto_in_d_valid = vlSelf->__PVT__da_valid;
    } else {
        vlSelf->__PVT__monitor_io_in_d_valid = vlSelf->__PVT___sink_ACancel_earlyValid_T_2;
        vlSelf->auto_in_d_valid = vlSelf->__PVT___sink_ACancel_earlyValid_T_2;
    }
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
        = ((0x3fU >= ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                      << 2U)) ? (vlSelf->__PVT__monitor__DOT__inflight_opcodes 
                                 >> ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                     << 2U)) : 0ULL);
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

void VysyxSoCFull_TLError___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__8(VysyxSoCFull_TLError* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLError___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__8\n"); );
    // Body
    vlSelf->__PVT__a_last_counter1 = (0xfU & ((IData)(vlSelf->__PVT__a_last_counter) 
                                              - (IData)(1U)));
    vlSelf->__PVT__a_last_first = (0U == (IData)(vlSelf->__PVT__a_last_counter));
    vlSelf->__PVT__counter1 = (0xfU & ((IData)(vlSelf->__PVT__counter) 
                                       - (IData)(1U)));
    vlSelf->__PVT__da_first = (0U == (IData)(vlSelf->__PVT__counter));
    vlSelf->__PVT__monitor__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__a_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1));
    vlSelf->__PVT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1));
    vlSelf->__PVT__monitor__DOT___watchdog_T_1 = ((IData)(1U) 
                                                  + vlSelf->__PVT__monitor__DOT__watchdog);
    vlSelf->__PVT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first_2 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__monitor__DOT___watchdog_T_3 = ((IData)(1U) 
                                                  + vlSelf->__PVT__monitor__DOT__watchdog_1);
    vlSelf->__PVT__da_bits_opcode = ((7U == vlSelf->__PVT__a__DOT__ram_opcode
                                      [0U]) ? 4U : 
                                     ((6U == vlSelf->__PVT__a__DOT__ram_opcode
                                       [0U]) ? 4U : 
                                      ((5U == vlSelf->__PVT__a__DOT__ram_opcode
                                        [0U]) ? 2U : 
                                       ((4U == vlSelf->__PVT__a__DOT__ram_opcode
                                         [0U]) ? 1U
                                         : ((3U == 
                                             vlSelf->__PVT__a__DOT__ram_opcode
                                             [0U]) ? 1U
                                             : ((2U 
                                                 == 
                                                 vlSelf->__PVT__a__DOT__ram_opcode
                                                 [0U])
                                                 ? 1U
                                                 : 0U))))));
    vlSelf->__PVT__a_last = ((1U == (IData)(vlSelf->__PVT__a_last_counter)) 
                             | (0U == ((4U & vlSelf->__PVT__a__DOT__ram_opcode
                                        [0U]) ? 0U : 
                                       (0xfU & (~ (0x7ffU 
                                                   & (((IData)(0x3fU) 
                                                       << 
                                                       vlSelf->__PVT__a__DOT__ram_size
                                                       [0U]) 
                                                      >> 2U)))))));
    vlSelf->__PVT__monitor__DOT__a_first_counter1 = 
        (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__a_first = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter));
    vlSelf->__PVT__monitor__DOT__d_first_counter1 = 
        (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter));
    vlSelf->__PVT__da_valid = (((IData)(vlSelf->__PVT__a__DOT__maybe_full) 
                                & (IData)(vlSelf->__PVT__a_last)) 
                               & (IData)(vlSelf->__PVT__idle));
    if ((0U == (IData)(vlSelf->__PVT__beatsLeft))) {
        vlSelf->__PVT__monitor_io_in_d_bits_denied 
            = vlSelf->__PVT__da_valid;
        vlSelf->auto_in_d_bits_denied = vlSelf->__PVT__da_valid;
        vlSelf->__PVT__muxStateEarly_1 = vlSelf->__PVT__da_valid;
    } else {
        vlSelf->__PVT__monitor_io_in_d_bits_denied 
            = vlSelf->__PVT__state_1;
        vlSelf->auto_in_d_bits_denied = vlSelf->__PVT__state_1;
        vlSelf->__PVT__muxStateEarly_1 = vlSelf->__PVT__state_1;
    }
    vlSelf->__PVT___sink_ACancel_earlyValid_T_2 = ((IData)(vlSelf->__PVT__state_1) 
                                                   & (IData)(vlSelf->__PVT__da_valid));
    if (vlSelf->__PVT__muxStateEarly_1) {
        vlSelf->__PVT__monitor_io_in_d_bits_size = 
            vlSelf->__PVT__a__DOT__ram_size[0U];
        vlSelf->__PVT__monitor_io_in_d_bits_opcode 
            = vlSelf->__PVT__da_bits_opcode;
        vlSelf->__PVT__monitor_io_in_d_bits_source 
            = vlSelf->__PVT__a__DOT__ram_source[0U];
        vlSelf->auto_in_d_bits_corrupt = ((IData)(vlSelf->__PVT__da_bits_opcode) 
                                          & 1U);
        vlSelf->auto_in_d_bits_size = vlSelf->__PVT__a__DOT__ram_size
            [0U];
        vlSelf->auto_in_d_bits_opcode = vlSelf->__PVT__da_bits_opcode;
    } else {
        vlSelf->__PVT__monitor_io_in_d_bits_size = 0U;
        vlSelf->__PVT__monitor_io_in_d_bits_opcode = 0U;
        vlSelf->__PVT__monitor_io_in_d_bits_source = 0U;
        vlSelf->auto_in_d_bits_corrupt = 0U;
        vlSelf->auto_in_d_bits_size = 0U;
        vlSelf->auto_in_d_bits_opcode = 0U;
    }
    if ((0U == (IData)(vlSelf->__PVT__beatsLeft))) {
        vlSelf->__PVT__monitor_io_in_d_valid = vlSelf->__PVT__da_valid;
        vlSelf->auto_in_d_valid = vlSelf->__PVT__da_valid;
    } else {
        vlSelf->__PVT__monitor_io_in_d_valid = vlSelf->__PVT___sink_ACancel_earlyValid_T_2;
        vlSelf->auto_in_d_valid = vlSelf->__PVT___sink_ACancel_earlyValid_T_2;
    }
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
        = ((0x3fU >= ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                      << 2U)) ? (vlSelf->__PVT__monitor__DOT__inflight_opcodes 
                                 >> ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                     << 2U)) : 0ULL);
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

void VysyxSoCFull_TLError___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__10(VysyxSoCFull_TLError* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLError___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__10\n"); );
    // Body
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
}

void VysyxSoCFull_TLError___ctor_var_reset(VysyxSoCFull_TLError* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLError___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->auto_in_a_ready = VL_RAND_RESET_I(1);
    vlSelf->auto_in_a_valid = VL_RAND_RESET_I(1);
    vlSelf->auto_in_a_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->auto_in_a_bits_size = VL_RAND_RESET_I(3);
    vlSelf->auto_in_a_bits_source = VL_RAND_RESET_I(4);
    vlSelf->auto_in_a_bits_address = VL_RAND_RESET_I(13);
    vlSelf->auto_in_a_bits_mask = VL_RAND_RESET_I(4);
    vlSelf->auto_in_d_ready = VL_RAND_RESET_I(1);
    vlSelf->auto_in_d_valid = VL_RAND_RESET_I(1);
    vlSelf->auto_in_d_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->auto_in_d_bits_size = VL_RAND_RESET_I(3);
    vlSelf->auto_in_d_bits_source = VL_RAND_RESET_I(4);
    vlSelf->auto_in_d_bits_denied = VL_RAND_RESET_I(1);
    vlSelf->auto_in_d_bits_corrupt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor_io_in_d_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor_io_in_d_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor_io_in_d_bits_size = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor_io_in_d_bits_source = VL_RAND_RESET_I(4);
    vlSelf->__PVT__monitor_io_in_d_bits_denied = VL_RAND_RESET_I(1);
    vlSelf->__PVT__a_io_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idle = VL_RAND_RESET_I(1);
    vlSelf->__PVT__a_last_counter = VL_RAND_RESET_I(4);
    vlSelf->__PVT__a_last_counter1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__a_last_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__a_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beatsLeft = VL_RAND_RESET_I(4);
    vlSelf->__PVT__da_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__state_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__out_1_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__da_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__counter = VL_RAND_RESET_I(4);
    vlSelf->__PVT__counter1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__da_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__latch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__muxStateEarly_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___sink_ACancel_earlyValid_T_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___beatsLeft_T_4 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__monitor__DOT__mask_acc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__mask_acc_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__monitor__DOT___a_first_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__a_first_counter = VL_RAND_RESET_I(4);
    vlSelf->__PVT__monitor__DOT__a_first_counter1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__monitor__DOT__a_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__size = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__source = VL_RAND_RESET_I(4);
    vlSelf->__PVT__monitor__DOT__address = VL_RAND_RESET_I(13);
    vlSelf->__PVT__monitor__DOT___d_first_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__d_first_counter = VL_RAND_RESET_I(4);
    vlSelf->__PVT__monitor__DOT__d_first_counter1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__monitor__DOT__d_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__opcode_1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__size_1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__source_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__monitor__DOT__denied = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__inflight = VL_RAND_RESET_I(16);
    vlSelf->__PVT__monitor__DOT__inflight_opcodes = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__monitor__DOT__inflight_sizes = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__monitor__DOT__a_first_counter_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__monitor__DOT__a_first_counter1_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__monitor__DOT__a_first_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__d_first_counter_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__monitor__DOT__d_first_counter1_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__monitor__DOT__d_first_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__monitor__DOT__a_set_wo_ready = VL_RAND_RESET_I(16);
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
    vlSelf->__PVT__monitor__DOT__d_first_counter_2 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__monitor__DOT__d_first_counter1_2 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__monitor__DOT__d_first_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT___inflight_T_5 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__monitor__DOT__watchdog_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__monitor__DOT___watchdog_T_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus = VL_RAND_RESET_I(32);
    vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__a__DOT__ram_opcode[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__a__DOT__ram_size[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__a__DOT__ram_source[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__PVT__a__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__a__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__a__DOT__do_deq = VL_RAND_RESET_I(1);
}
