// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull_TLFIFOFixer.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

//==========


void VysyxSoCFull_TLFIFOFixer___ctor_var_reset(VysyxSoCFull_TLFIFOFixer* vlSelf);

VysyxSoCFull_TLFIFOFixer::VysyxSoCFull_TLFIFOFixer(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VysyxSoCFull_TLFIFOFixer___ctor_var_reset(this);
}

void VysyxSoCFull_TLFIFOFixer::__Vconfigure(VysyxSoCFull__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VysyxSoCFull_TLFIFOFixer::~VysyxSoCFull_TLFIFOFixer() {
}

void VysyxSoCFull_TLFIFOFixer___initial__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__1(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___initial__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__1\n"); );
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

void VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__6(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__6\n"); );
    // Body
    vlSelf->__PVT__a_first = (0U == (IData)(vlSelf->__PVT__a_first_counter));
    vlSelf->__PVT__a_first_counter1 = (0xfU & ((IData)(vlSelf->__PVT__a_first_counter) 
                                               - (IData)(1U)));
    vlSelf->__PVT__d_first_counter1 = (0xfU & ((IData)(vlSelf->__PVT__d_first_counter) 
                                               - (IData)(1U)));
    vlSelf->__PVT__d_first_first = (0U == (IData)(vlSelf->__PVT__d_first_counter));
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
    vlSelf->__PVT__monitor__DOT__a_first_counter1 = 
        (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__a_first = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter));
    vlSelf->__PVT__monitor__DOT__d_first_counter1 = 
        (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter));
}

void VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__9(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__9\n"); );
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
    vlSelf->__PVT__monitor__DOT__source_ok = 1U;
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
    vlSelf->auto_out_a_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_valid) 
                                & (~ (IData)(vlSelf->__PVT__stall)));
}

void VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__11(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__11\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp32;
    VlWide<5>/*159:0*/ __Vtemp33;
    VlWide<5>/*159:0*/ __Vtemp39;
    VlWide<5>/*159:0*/ __Vtemp40;
    // Body
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1 
        = ((0x3fU >= ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                      << 2U)) ? (vlSelf->__PVT__monitor__DOT__inflight_opcodes 
                                 >> ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                                     << 2U)) : 0ULL);
    vlSelf->__PVT__d_first = ((0U == (IData)(vlSelf->__PVT__d_first_counter)) 
                              & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode)));
    vlSelf->__PVT___d_first_T = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_d_ready) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid));
    vlSelf->__PVT__monitor__DOT___d_first_T = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_d_ready) 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid));
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
    __Vtemp32[0U] = 0xfU;
    __Vtemp32[1U] = 0U;
    __Vtemp32[2U] = 0U;
    __Vtemp32[3U] = 0U;
    __Vtemp32[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp33, __Vtemp32, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                   << 2U));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes_1 
           & (~ (((QData)((IData)(((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                     & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                                    & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode)))
                                    ? __Vtemp33[1U]
                                    : 0U))) << 0x20U) 
                 | (QData)((IData)(((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode)))
                                     ? __Vtemp33[0U]
                                     : 0U))))));
    __Vtemp39[0U] = 0xfU;
    __Vtemp39[1U] = 0U;
    __Vtemp39[2U] = 0U;
    __Vtemp39[3U] = 0U;
    __Vtemp39[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp40, __Vtemp39, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                   << 2U));
    if ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
         & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode)))) {
        vlSelf->__PVT__monitor__DOT___GEN_23[0U] = 
            __Vtemp40[0U];
        vlSelf->__PVT__monitor__DOT___GEN_23[1U] = 
            __Vtemp40[1U];
        vlSelf->__PVT__monitor__DOT___GEN_23[2U] = 
            __Vtemp40[2U];
        vlSelf->__PVT__monitor__DOT___GEN_23[3U] = 
            __Vtemp40[3U];
        vlSelf->__PVT__monitor__DOT___GEN_23[4U] = 
            (0x7fffU & __Vtemp40[4U]);
    } else {
        vlSelf->__PVT__monitor__DOT___GEN_23[0U] = 0U;
        vlSelf->__PVT__monitor__DOT___GEN_23[1U] = 0U;
        vlSelf->__PVT__monitor__DOT___GEN_23[2U] = 0U;
        vlSelf->__PVT__monitor__DOT___GEN_23[3U] = 0U;
        vlSelf->__PVT__monitor__DOT___GEN_23[4U] = 0U;
    }
}

void VysyxSoCFull_TLFIFOFixer___ctor_var_reset(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->auto_in_a_ready = VL_RAND_RESET_I(1);
    vlSelf->auto_in_a_valid = VL_RAND_RESET_I(1);
    vlSelf->auto_in_a_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->auto_in_a_bits_size = VL_RAND_RESET_I(3);
    vlSelf->auto_in_a_bits_source = VL_RAND_RESET_I(4);
    vlSelf->auto_in_a_bits_address = VL_RAND_RESET_I(32);
    vlSelf->auto_in_a_bits_mask = VL_RAND_RESET_I(4);
    vlSelf->auto_in_a_bits_data = VL_RAND_RESET_I(32);
    vlSelf->auto_in_d_ready = VL_RAND_RESET_I(1);
    vlSelf->auto_in_d_valid = VL_RAND_RESET_I(1);
    vlSelf->auto_in_d_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->auto_in_d_bits_param = VL_RAND_RESET_I(2);
    vlSelf->auto_in_d_bits_size = VL_RAND_RESET_I(3);
    vlSelf->auto_in_d_bits_source = VL_RAND_RESET_I(4);
    vlSelf->auto_in_d_bits_sink = VL_RAND_RESET_I(6);
    vlSelf->auto_in_d_bits_denied = VL_RAND_RESET_I(1);
    vlSelf->auto_in_d_bits_data = VL_RAND_RESET_I(32);
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
    vlSelf->__PVT__monitor_io_in_a_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__a_id = VL_RAND_RESET_I(2);
    vlSelf->__PVT__a_first_counter = VL_RAND_RESET_I(4);
    vlSelf->__PVT__a_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flight_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flight_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flight_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flight_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flight_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flight_5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flight_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flight_7 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stalls_id = VL_RAND_RESET_I(2);
    vlSelf->__PVT__flight_8 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flight_9 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flight_10 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flight_11 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flight_12 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flight_13 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flight_14 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flight_15 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stalls_id_1 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT___a_first_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__a_first_counter1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT___d_first_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__d_first_counter = VL_RAND_RESET_I(4);
    vlSelf->__PVT__d_first_counter1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__d_first_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__d_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_18 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_19 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_20 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_21 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_22 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_23 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_24 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_25 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_26 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_27 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_28 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_29 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_30 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_31 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_32 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_33 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__source_ok = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__mask_acc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__mask_acc_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__monitor__DOT___T_77 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT___a_first_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__a_first_counter = VL_RAND_RESET_I(4);
    vlSelf->__PVT__monitor__DOT__a_first_counter1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__monitor__DOT__a_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__size = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__source = VL_RAND_RESET_I(4);
    vlSelf->__PVT__monitor__DOT__address = VL_RAND_RESET_I(32);
    vlSelf->__PVT__monitor__DOT___d_first_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__d_first_counter = VL_RAND_RESET_I(4);
    vlSelf->__PVT__monitor__DOT__d_first_counter1 = VL_RAND_RESET_I(4);
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
    vlSelf->__PVT__monitor__DOT__a_first_counter_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__monitor__DOT__a_first_counter1_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__monitor__DOT__a_first_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__d_first_counter_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__monitor__DOT__d_first_counter1_1 = VL_RAND_RESET_I(4);
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
    vlSelf->__PVT__monitor__DOT__d_first_counter_2 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__monitor__DOT__d_first_counter1_2 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__monitor__DOT__d_first_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT___inflight_T_5 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__monitor__DOT__watchdog_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__monitor__DOT___watchdog_T_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus = VL_RAND_RESET_I(32);
    vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus = VL_RAND_RESET_I(32);
}
