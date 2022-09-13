// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull_TLToAXI4.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

//==========


void VysyxSoCFull_TLToAXI4___ctor_var_reset(VysyxSoCFull_TLToAXI4* vlSelf);

VysyxSoCFull_TLToAXI4::VysyxSoCFull_TLToAXI4(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VysyxSoCFull_TLToAXI4___ctor_var_reset(this);
}

void VysyxSoCFull_TLToAXI4::__Vconfigure(VysyxSoCFull__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VysyxSoCFull_TLToAXI4::~VysyxSoCFull_TLToAXI4() {
}

void VysyxSoCFull_TLToAXI4___initial__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__1(VysyxSoCFull_TLToAXI4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLToAXI4___initial__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__1\n"); );
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

void VysyxSoCFull_TLToAXI4___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__8(VysyxSoCFull_TLToAXI4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLToAXI4___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__8\n"); );
    // Body
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0U] 
        = vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0U];
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[1U] 
        = vlSelf->__PVT__monitor__DOT__inflight_sizes_1[1U];
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[2U] 
        = vlSelf->__PVT__monitor__DOT__inflight_sizes_1[2U];
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[3U] 
        = vlSelf->__PVT__monitor__DOT__inflight_sizes_1[3U];
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[4U] 
        = vlSelf->__PVT__monitor__DOT__inflight_sizes_1[4U];
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[5U] 
        = vlSelf->__PVT__monitor__DOT__inflight_sizes_1[5U];
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[6U] 
        = vlSelf->__PVT__monitor__DOT__inflight_sizes_1[6U];
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[7U] 
        = vlSelf->__PVT__monitor__DOT__inflight_sizes_1[7U];
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[8U] 
        = vlSelf->__PVT__monitor__DOT__inflight_sizes_1[8U];
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[9U] 
        = vlSelf->__PVT__monitor__DOT__inflight_sizes_1[9U];
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xaU];
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xbU];
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xcU];
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xdU];
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xeU];
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xfU];
    vlSelf->__PVT__d_sel_shiftAmount = ((IData)(vlSelf->__PVT__r_holds_d)
                                         ? (((0x10U 
                                              >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__QueueCompatibility__DOT__deq_ptr_value)) 
                                             & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__QueueCompatibility__DOT__ram_extra_id
                                             [vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__QueueCompatibility__DOT__deq_ptr_value]) 
                                            << 4U) : 
                                        (((0x10U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__QueueCompatibility_16__DOT__deq_ptr_value)) 
                                          & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__QueueCompatibility_16__DOT__ram_extra_id
                                          [vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__QueueCompatibility_16__DOT__deq_ptr_value]) 
                                         << 4U));
    vlSelf->__PVT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__a_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1));
    vlSelf->__PVT__monitor__DOT___watchdog_T_1 = ((IData)(1U) 
                                                  + vlSelf->__PVT__monitor__DOT__watchdog);
    vlSelf->__PVT__monitor__DOT___inflight_T_5[0U] 
        = vlSelf->__PVT__monitor__DOT__inflight_1[0U];
    vlSelf->__PVT__monitor__DOT___inflight_T_5[1U] 
        = vlSelf->__PVT__monitor__DOT__inflight_1[1U];
    vlSelf->__PVT__monitor__DOT___inflight_T_5[2U] 
        = vlSelf->__PVT__monitor__DOT__inflight_1[2U];
    vlSelf->__PVT__monitor__DOT___inflight_T_5[3U] 
        = vlSelf->__PVT__monitor__DOT__inflight_1[3U];
    vlSelf->__PVT__monitor__DOT___watchdog_T_3 = ((IData)(1U) 
                                                  + vlSelf->__PVT__monitor__DOT__watchdog_1);
    vlSelf->__PVT__a_first = (0U == (IData)(vlSelf->__PVT__counter));
    vlSelf->__PVT__counter1 = (7U & ((IData)(vlSelf->__PVT__counter) 
                                     - (IData)(1U)));
    vlSelf->__PVT___GEN_260 = vlSelf->__PVT__r_first;
    vlSelf->__PVT___GEN_261 = ((~ (IData)(vlSelf->__PVT__r_first)) 
                               & (IData)(vlSelf->__PVT__r_denied_r));
    vlSelf->__PVT__monitor__DOT__a_first_counter1 = 
        (7U & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter) 
               - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__a_first = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter));
    vlSelf->__PVT__monitor_io_in_d_bits_denied = ((IData)(vlSelf->__PVT__r_holds_d) 
                                                  & (IData)(vlSelf->__PVT___GEN_261));
    vlSelf->auto_in_d_bits_corrupt = ((IData)(vlSelf->__PVT__r_holds_d) 
                                      & (IData)(vlSelf->__PVT___GEN_261));
    vlSelf->auto_in_d_bits_denied = ((IData)(vlSelf->__PVT__r_holds_d) 
                                     & (IData)(vlSelf->__PVT___GEN_261));
}

extern const VlWide<33>/*1055:0*/ VysyxSoCFull__ConstPool__CONST_f1d99c76_0;
extern const VlWide<33>/*1055:0*/ VysyxSoCFull__ConstPool__CONST_ac7e6362_0;

void VysyxSoCFull_TLToAXI4___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__10(VysyxSoCFull_TLToAXI4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLToAXI4___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__10\n"); );
    // Variables
    CData/*0:0*/ __PVT___GEN_151;
    CData/*0:0*/ __PVT___GEN_172;
    CData/*0:0*/ __PVT___GEN_193;
    CData/*0:0*/ __PVT___GEN_214;
    CData/*0:0*/ __PVT___GEN_235;
    CData/*0:0*/ __PVT___GEN_256;
    CData/*4:0*/ __PVT___GEN_22;
    CData/*4:0*/ __PVT___GEN_43;
    CData/*4:0*/ __PVT___GEN_64;
    CData/*4:0*/ __PVT___GEN_85;
    CData/*4:0*/ __PVT___GEN_106;
    CData/*4:0*/ __PVT___GEN_127;
    CData/*4:0*/ __PVT___GEN_128;
    VlWide<4>/*127:0*/ __Vtemp15;
    VlWide<4>/*127:0*/ __Vtemp16;
    VlWide<16>/*511:0*/ __Vtemp20;
    VlWide<4>/*127:0*/ __Vtemp21;
    VlWide<4>/*127:0*/ __Vtemp22;
    VlWide<33>/*1055:0*/ __Vtemp27;
    VlWide<33>/*1055:0*/ __Vtemp28;
    VlWide<33>/*1055:0*/ __Vtemp34;
    VlWide<33>/*1055:0*/ __Vtemp35;
    // Body
    if (vlSelf->__PVT__r_holds_d) {
        vlSelf->__PVT__monitor_io_in_d_bits_size = 
            (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__QueueCompatibility__DOT__ram_tl_state_size_io_deq_bits_MPORT_data));
        vlSelf->auto_in_d_bits_size = (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__QueueCompatibility__DOT__ram_tl_state_size_io_deq_bits_MPORT_data));
        vlSelf->__PVT__monitor_io_in_d_bits_source 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__QueueCompatibility__DOT__ram_tl_state_source_io_deq_bits_MPORT_data;
    } else {
        vlSelf->__PVT__monitor_io_in_d_bits_size = 
            (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__QueueCompatibility_16__DOT__ram_tl_state_size_io_deq_bits_MPORT_data));
        vlSelf->auto_in_d_bits_size = (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__QueueCompatibility_16__DOT__ram_tl_state_size_io_deq_bits_MPORT_data));
        vlSelf->__PVT__monitor_io_in_d_bits_source 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__QueueCompatibility_16__DOT__ram_tl_state_source_io_deq_bits_MPORT_data;
    }
    vlSelf->__PVT__queue_arw_deq_io_enq_bits_size = 
        ((3U <= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))
          ? 3U : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size));
    vlSelf->__PVT__queue_arw_deq_io_deq_bits_echo_tl_state_size 
        = ((IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full)
            ? vlSelf->__PVT__queue_arw_deq__DOT__ram_echo_tl_state_size
           [0U] : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size));
    vlSelf->__PVT__monitor__DOT__mask_eq_2 = (IData)(
                                                     (0U 
                                                      == 
                                                      (6U 
                                                       & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->__PVT__monitor__DOT__mask_eq_3 = (IData)(
                                                     (2U 
                                                      == 
                                                      (6U 
                                                       & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->__PVT__monitor__DOT__mask_eq_4 = (IData)(
                                                     (4U 
                                                      == 
                                                      (6U 
                                                       & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->__PVT__monitor__DOT__mask_eq_5 = (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->__PVT__monitor__DOT__mask_acc = (1U & (
                                                   (3U 
                                                    <= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                                                   | (1U 
                                                      & ((((IData)(1U) 
                                                           << 
                                                           (3U 
                                                            & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                                                          >> 2U) 
                                                         & (~ 
                                                            (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                                             >> 2U))))));
    vlSelf->__PVT__monitor__DOT__mask_acc_1 = (1U & 
                                               ((3U 
                                                 <= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                                                | (1U 
                                                   & ((((IData)(1U) 
                                                        << 
                                                        (3U 
                                                         & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                                                       >> 2U) 
                                                      & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                                         >> 2U)))));
    vlSelf->__PVT__queue_arw_deq_io_deq_bits_echo_tl_state_source 
        = ((IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full)
            ? vlSelf->__PVT__queue_arw_deq__DOT__ram_echo_tl_state_source
           [0U] : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source));
    __PVT___GEN_22 = ((0x14U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                       ? 0U : ((0x13U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                ? 0U : ((0x12U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                         ? 0U : ((0x11U 
                                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                  ? 0U
                                                  : 
                                                 ((0x10U 
                                                   == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                   ? 0U
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                    ? 0x16U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                     ? 0x15U
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                      ? 0x14U
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                       ? 0x13U
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                        ? 0x12U
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                         ? 0x11U
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                          ? 0x10U
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                           ? 0xfU
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                            ? 0xeU
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                             ? 0xdU
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                              ? 0xcU
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                               ? 0xbU
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                ? 0xaU
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                 ? 9U
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                  ? 8U
                                                                  : 7U))))))))))))))))))));
    vlSelf->__PVT__beats1 = ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                              ? 0U : (7U & (~ (0x3ffU 
                                               & (((IData)(0x3fU) 
                                                   << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                                                  >> 3U)))));
    vlSelf->__PVT___out_arw_valid_T_4 = (1U & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                                                >> 2U) 
                                               | ((~ (IData)(vlSelf->__PVT__doneAW)) 
                                                  & (~ (IData)(vlSelf->__PVT__deq__DOT__maybe_full)))));
    vlSelf->__PVT___bundleIn_0_a_ready_T_3 = (1U & 
                                              ((4U 
                                                & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                                                ? (~ (IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full))
                                                : (
                                                   ((IData)(vlSelf->__PVT__doneAW) 
                                                    | (~ (IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full))) 
                                                   & (~ (IData)(vlSelf->__PVT__deq__DOT__maybe_full)))));
    vlSelf->__PVT__idStall_6 = (((0U != (IData)(vlSelf->__PVT__count_7)) 
                                 & ((IData)(vlSelf->__PVT__write_6) 
                                    != (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSelf->__PVT__count_7)));
    vlSelf->__PVT__idStall_5 = (((0U != (IData)(vlSelf->__PVT__count_6)) 
                                 & ((IData)(vlSelf->__PVT__write_5) 
                                    != (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSelf->__PVT__count_6)));
    vlSelf->__PVT__idStall_3 = (((0U != (IData)(vlSelf->__PVT__count_4)) 
                                 & ((IData)(vlSelf->__PVT__write_3) 
                                    != (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSelf->__PVT__count_4)));
    vlSelf->__PVT__idStall_4 = (((0U != (IData)(vlSelf->__PVT__count_5)) 
                                 & ((IData)(vlSelf->__PVT__write_4) 
                                    != (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSelf->__PVT__count_5)));
    vlSelf->__PVT__idStall_2 = (((0U != (IData)(vlSelf->__PVT__count_3)) 
                                 & ((IData)(vlSelf->__PVT__write_2) 
                                    != (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSelf->__PVT__count_3)));
    vlSelf->__PVT__idStall_1 = (((0U != (IData)(vlSelf->__PVT__count_2)) 
                                 & ((IData)(vlSelf->__PVT__write_1) 
                                    != (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSelf->__PVT__count_2)));
    vlSelf->__PVT__idStall_0 = (((0U != (IData)(vlSelf->__PVT__count_1)) 
                                 & ((IData)(vlSelf->__PVT__write) 
                                    != (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSelf->__PVT__count_1)));
    __Vtemp15[0U] = 1U;
    __Vtemp15[1U] = 0U;
    __Vtemp15[2U] = 0U;
    __Vtemp15[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp16, __Vtemp15, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source));
    if (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))) {
        vlSelf->__PVT__monitor__DOT__a_set_wo_ready[0U] 
            = __Vtemp16[0U];
        vlSelf->__PVT__monitor__DOT__a_set_wo_ready[1U] 
            = __Vtemp16[1U];
        vlSelf->__PVT__monitor__DOT__a_set_wo_ready[2U] 
            = __Vtemp16[2U];
        vlSelf->__PVT__monitor__DOT__a_set_wo_ready[3U] 
            = __Vtemp16[3U];
    } else {
        vlSelf->__PVT__monitor__DOT__a_set_wo_ready[0U] = 0U;
        vlSelf->__PVT__monitor__DOT__a_set_wo_ready[1U] = 0U;
        vlSelf->__PVT__monitor__DOT__a_set_wo_ready[2U] = 0U;
        vlSelf->__PVT__monitor__DOT__a_set_wo_ready[3U] = 0U;
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp20, vlSelf->__PVT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp20[0U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp20[1U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp20[2U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp20[3U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp20[4U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp20[5U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp20[6U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp20[7U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp20[8U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp20[9U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp20[0xaU];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp20[0xbU];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp20[0xcU];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp20[0xdU];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp20[0xeU];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp20[0xfU];
    vlSelf->__PVT__monitor__DOT__mask_acc_2 = ((IData)(vlSelf->__PVT__monitor__DOT__mask_acc) 
                                               | (3U 
                                                  & ((((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                                                      >> 1U) 
                                                     & (IData)(vlSelf->__PVT__monitor__DOT__mask_eq_2))));
    vlSelf->__PVT__monitor__DOT__mask_acc_3 = ((IData)(vlSelf->__PVT__monitor__DOT__mask_acc) 
                                               | (3U 
                                                  & ((((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                                                      >> 1U) 
                                                     & (IData)(vlSelf->__PVT__monitor__DOT__mask_eq_3))));
    vlSelf->__PVT__monitor__DOT__mask_acc_4 = ((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_1) 
                                               | (3U 
                                                  & ((((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                                                      >> 1U) 
                                                     & (IData)(vlSelf->__PVT__monitor__DOT__mask_eq_4))));
    vlSelf->__PVT__monitor__DOT__mask_acc_5 = ((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_1) 
                                               | (3U 
                                                  & ((((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                                                      >> 1U) 
                                                     & (IData)(vlSelf->__PVT__monitor__DOT__mask_eq_5))));
    __PVT___GEN_43 = ((0x29U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                       ? 1U : ((0x28U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                ? 1U : ((0x27U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                         ? 1U : ((0x26U 
                                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                  ? 1U
                                                  : 
                                                 ((0x25U 
                                                   == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                   ? 1U
                                                   : 
                                                  ((0x24U 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                    ? 1U
                                                    : 
                                                   ((0x23U 
                                                     == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                     ? 1U
                                                     : 
                                                    ((0x22U 
                                                      == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                      ? 1U
                                                      : 
                                                     ((0x21U 
                                                       == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                       ? 1U
                                                       : 
                                                      ((0x20U 
                                                        == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                        ? 1U
                                                        : 
                                                       ((0x1fU 
                                                         == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                         ? 0U
                                                         : 
                                                        ((0x1eU 
                                                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                          ? 0U
                                                          : 
                                                         ((0x1dU 
                                                           == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                           ? 0U
                                                           : 
                                                          ((0x1cU 
                                                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                            ? 0U
                                                            : 
                                                           ((0x1bU 
                                                             == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                             ? 0U
                                                             : 
                                                            ((0x1aU 
                                                              == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                              ? 0U
                                                              : 
                                                             ((0x19U 
                                                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                               ? 0U
                                                               : 
                                                              ((0x18U 
                                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                ? 0U
                                                                : 
                                                               ((0x17U 
                                                                 == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                 ? 0U
                                                                 : 
                                                                ((0x16U 
                                                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                  ? 0U
                                                                  : 
                                                                 ((0x15U 
                                                                   == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                   ? 0U
                                                                   : (IData)(__PVT___GEN_22))))))))))))))))))))));
    vlSelf->__PVT__deq_io_enq_bits_last = ((1U == (IData)(vlSelf->__PVT__counter)) 
                                           | (0U == (IData)(vlSelf->__PVT__beats1)));
    __PVT___GEN_151 = ((0x15U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                        ? (IData)(vlSelf->__PVT__idStall_0)
                        : ((0x14U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                            ? (IData)(vlSelf->__PVT__idStall_0)
                            : ((0x13U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                ? (IData)(vlSelf->__PVT__idStall_0)
                                : ((0x12U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                    ? (IData)(vlSelf->__PVT__idStall_0)
                                    : ((0x11U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                        ? (IData)(vlSelf->__PVT__idStall_0)
                                        : ((0x10U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                            ? (IData)(vlSelf->__PVT__idStall_0)
                                            : ((0xfU 
                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                ? (IData)(vlSelf->__PVT__count_23)
                                                : (
                                                   (0xeU 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                    ? (IData)(vlSelf->__PVT__count_22)
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                     ? (IData)(vlSelf->__PVT__count_21)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                      ? (IData)(vlSelf->__PVT__count_20)
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                       ? (IData)(vlSelf->__PVT__count_19)
                                                       : 
                                                      ((0xaU 
                                                        == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                        ? (IData)(vlSelf->__PVT__count_18)
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                         ? (IData)(vlSelf->__PVT__count_17)
                                                         : 
                                                        ((8U 
                                                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                          ? (IData)(vlSelf->__PVT__count_16)
                                                          : 
                                                         ((7U 
                                                           == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                           ? (IData)(vlSelf->__PVT__count_15)
                                                           : 
                                                          ((6U 
                                                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                            ? (IData)(vlSelf->__PVT__count_14)
                                                            : 
                                                           ((5U 
                                                             == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                             ? (IData)(vlSelf->__PVT__count_13)
                                                             : 
                                                            ((4U 
                                                              == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                              ? (IData)(vlSelf->__PVT__count_12)
                                                              : 
                                                             ((3U 
                                                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                               ? (IData)(vlSelf->__PVT__count_11)
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                ? (IData)(vlSelf->__PVT__count_10)
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                 ? (IData)(vlSelf->__PVT__count_9)
                                                                 : (IData)(vlSelf->__PVT__count_8))))))))))))))))))))));
    vlSelf->__PVT__monitor__DOT__mask = ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_5) 
                                           | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_5) 
                                              & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)) 
                                          << 7U) | 
                                         ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_5) 
                                            | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_5) 
                                               & (~ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))) 
                                           << 6U) | 
                                          ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_4) 
                                             | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_4) 
                                                & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)) 
                                            << 5U) 
                                           | ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_4) 
                                                | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_4) 
                                                   & (~ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))) 
                                               << 4U) 
                                              | ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_3) 
                                                   | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_3) 
                                                      & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)) 
                                                  << 3U) 
                                                 | ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_3) 
                                                      | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_3) 
                                                         & (~ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))) 
                                                     << 2U) 
                                                    | ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_2) 
                                                         | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_2) 
                                                            & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)) 
                                                        << 1U) 
                                                       | ((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_2) 
                                                          | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_2) 
                                                             & (~ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))))))))));
    __PVT___GEN_64 = ((0x3eU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                       ? 2U : ((0x3dU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                ? 2U : ((0x3cU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                         ? 2U : ((0x3bU 
                                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                  ? 2U
                                                  : 
                                                 ((0x3aU 
                                                   == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                   ? 2U
                                                   : 
                                                  ((0x39U 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                    ? 2U
                                                    : 
                                                   ((0x38U 
                                                     == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                     ? 2U
                                                     : 
                                                    ((0x37U 
                                                      == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                      ? 2U
                                                      : 
                                                     ((0x36U 
                                                       == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                       ? 2U
                                                       : 
                                                      ((0x35U 
                                                        == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                        ? 2U
                                                        : 
                                                       ((0x34U 
                                                         == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                         ? 2U
                                                         : 
                                                        ((0x33U 
                                                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                          ? 2U
                                                          : 
                                                         ((0x32U 
                                                           == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                           ? 2U
                                                           : 
                                                          ((0x31U 
                                                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                            ? 2U
                                                            : 
                                                           ((0x30U 
                                                             == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                             ? 2U
                                                             : 
                                                            ((0x2fU 
                                                              == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                              ? 1U
                                                              : 
                                                             ((0x2eU 
                                                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                               ? 1U
                                                               : 
                                                              ((0x2dU 
                                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                ? 1U
                                                                : 
                                                               ((0x2cU 
                                                                 == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                 ? 1U
                                                                 : 
                                                                ((0x2bU 
                                                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                  ? 1U
                                                                  : 
                                                                 ((0x2aU 
                                                                   == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                   ? 1U
                                                                   : (IData)(__PVT___GEN_43))))))))))))))))))))));
    __PVT___GEN_172 = ((0x2aU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                        ? (IData)(vlSelf->__PVT__idStall_1)
                        : ((0x29U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                            ? (IData)(vlSelf->__PVT__idStall_1)
                            : ((0x28U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                ? (IData)(vlSelf->__PVT__idStall_1)
                                : ((0x27U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                    ? (IData)(vlSelf->__PVT__idStall_1)
                                    : ((0x26U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                        ? (IData)(vlSelf->__PVT__idStall_1)
                                        : ((0x25U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                            ? (IData)(vlSelf->__PVT__idStall_1)
                                            : ((0x24U 
                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                ? (IData)(vlSelf->__PVT__idStall_1)
                                                : (
                                                   (0x23U 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                    ? (IData)(vlSelf->__PVT__idStall_1)
                                                    : 
                                                   ((0x22U 
                                                     == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                     ? (IData)(vlSelf->__PVT__idStall_1)
                                                     : 
                                                    ((0x21U 
                                                      == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                      ? (IData)(vlSelf->__PVT__idStall_1)
                                                      : 
                                                     ((0x20U 
                                                       == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                       ? (IData)(vlSelf->__PVT__idStall_1)
                                                       : 
                                                      ((0x1fU 
                                                        == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                        ? (IData)(vlSelf->__PVT__idStall_0)
                                                        : 
                                                       ((0x1eU 
                                                         == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                         ? (IData)(vlSelf->__PVT__idStall_0)
                                                         : 
                                                        ((0x1dU 
                                                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                          ? (IData)(vlSelf->__PVT__idStall_0)
                                                          : 
                                                         ((0x1cU 
                                                           == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                           ? (IData)(vlSelf->__PVT__idStall_0)
                                                           : 
                                                          ((0x1bU 
                                                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                            ? (IData)(vlSelf->__PVT__idStall_0)
                                                            : 
                                                           ((0x1aU 
                                                             == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                             ? (IData)(vlSelf->__PVT__idStall_0)
                                                             : 
                                                            ((0x19U 
                                                              == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                              ? (IData)(vlSelf->__PVT__idStall_0)
                                                              : 
                                                             ((0x18U 
                                                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                               ? (IData)(vlSelf->__PVT__idStall_0)
                                                               : 
                                                              ((0x17U 
                                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                ? (IData)(vlSelf->__PVT__idStall_0)
                                                                : 
                                                               ((0x16U 
                                                                 == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                 ? (IData)(vlSelf->__PVT__idStall_0)
                                                                 : (IData)(__PVT___GEN_151))))))))))))))))))))));
    __PVT___GEN_85 = ((0x53U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                       ? 4U : ((0x52U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                ? 4U : ((0x51U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                         ? 4U : ((0x50U 
                                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                  ? 4U
                                                  : 
                                                 ((0x4fU 
                                                   == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                   ? 3U
                                                   : 
                                                  ((0x4eU 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                    ? 3U
                                                    : 
                                                   ((0x4dU 
                                                     == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                     ? 3U
                                                     : 
                                                    ((0x4cU 
                                                      == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                      ? 3U
                                                      : 
                                                     ((0x4bU 
                                                       == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                       ? 3U
                                                       : 
                                                      ((0x4aU 
                                                        == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                        ? 3U
                                                        : 
                                                       ((0x49U 
                                                         == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                         ? 3U
                                                         : 
                                                        ((0x48U 
                                                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                          ? 3U
                                                          : 
                                                         ((0x47U 
                                                           == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                           ? 3U
                                                           : 
                                                          ((0x46U 
                                                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                            ? 3U
                                                            : 
                                                           ((0x45U 
                                                             == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                             ? 3U
                                                             : 
                                                            ((0x44U 
                                                              == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                              ? 3U
                                                              : 
                                                             ((0x43U 
                                                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                               ? 3U
                                                               : 
                                                              ((0x42U 
                                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                ? 3U
                                                                : 
                                                               ((0x41U 
                                                                 == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                 ? 3U
                                                                 : 
                                                                ((0x40U 
                                                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                  ? 3U
                                                                  : 
                                                                 ((0x3fU 
                                                                   == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                   ? 2U
                                                                   : (IData)(__PVT___GEN_64))))))))))))))))))))));
    __PVT___GEN_193 = ((0x3fU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                        ? (IData)(vlSelf->__PVT__idStall_2)
                        : ((0x3eU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                            ? (IData)(vlSelf->__PVT__idStall_2)
                            : ((0x3dU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                ? (IData)(vlSelf->__PVT__idStall_2)
                                : ((0x3cU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                    ? (IData)(vlSelf->__PVT__idStall_2)
                                    : ((0x3bU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                        ? (IData)(vlSelf->__PVT__idStall_2)
                                        : ((0x3aU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                            ? (IData)(vlSelf->__PVT__idStall_2)
                                            : ((0x39U 
                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                ? (IData)(vlSelf->__PVT__idStall_2)
                                                : (
                                                   (0x38U 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                    ? (IData)(vlSelf->__PVT__idStall_2)
                                                    : 
                                                   ((0x37U 
                                                     == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                     ? (IData)(vlSelf->__PVT__idStall_2)
                                                     : 
                                                    ((0x36U 
                                                      == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                      ? (IData)(vlSelf->__PVT__idStall_2)
                                                      : 
                                                     ((0x35U 
                                                       == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                       ? (IData)(vlSelf->__PVT__idStall_2)
                                                       : 
                                                      ((0x34U 
                                                        == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                        ? (IData)(vlSelf->__PVT__idStall_2)
                                                        : 
                                                       ((0x33U 
                                                         == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                         ? (IData)(vlSelf->__PVT__idStall_2)
                                                         : 
                                                        ((0x32U 
                                                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                          ? (IData)(vlSelf->__PVT__idStall_2)
                                                          : 
                                                         ((0x31U 
                                                           == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                           ? (IData)(vlSelf->__PVT__idStall_2)
                                                           : 
                                                          ((0x30U 
                                                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                            ? (IData)(vlSelf->__PVT__idStall_2)
                                                            : 
                                                           ((0x2fU 
                                                             == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                             ? (IData)(vlSelf->__PVT__idStall_1)
                                                             : 
                                                            ((0x2eU 
                                                              == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                              ? (IData)(vlSelf->__PVT__idStall_1)
                                                              : 
                                                             ((0x2dU 
                                                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                               ? (IData)(vlSelf->__PVT__idStall_1)
                                                               : 
                                                              ((0x2cU 
                                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                ? (IData)(vlSelf->__PVT__idStall_1)
                                                                : 
                                                               ((0x2bU 
                                                                 == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                 ? (IData)(vlSelf->__PVT__idStall_1)
                                                                 : (IData)(__PVT___GEN_172))))))))))))))))))))));
    __PVT___GEN_106 = ((0x68U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                        ? 5U : ((0x67U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                 ? 5U : ((0x66U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                          ? 5U : ((0x65U 
                                                   == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                   ? 5U
                                                   : 
                                                  ((0x64U 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                    ? 5U
                                                    : 
                                                   ((0x63U 
                                                     == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                     ? 5U
                                                     : 
                                                    ((0x62U 
                                                      == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                      ? 5U
                                                      : 
                                                     ((0x61U 
                                                       == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                       ? 5U
                                                       : 
                                                      ((0x60U 
                                                        == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                        ? 5U
                                                        : 
                                                       ((0x5fU 
                                                         == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                         ? 4U
                                                         : 
                                                        ((0x5eU 
                                                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                          ? 4U
                                                          : 
                                                         ((0x5dU 
                                                           == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                           ? 4U
                                                           : 
                                                          ((0x5cU 
                                                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                            ? 4U
                                                            : 
                                                           ((0x5bU 
                                                             == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                             ? 4U
                                                             : 
                                                            ((0x5aU 
                                                              == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                              ? 4U
                                                              : 
                                                             ((0x59U 
                                                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                               ? 4U
                                                               : 
                                                              ((0x58U 
                                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                ? 4U
                                                                : 
                                                               ((0x57U 
                                                                 == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                 ? 4U
                                                                 : 
                                                                ((0x56U 
                                                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                  ? 4U
                                                                  : 
                                                                 ((0x55U 
                                                                   == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                   ? 4U
                                                                   : 
                                                                  ((0x54U 
                                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                    ? 4U
                                                                    : (IData)(__PVT___GEN_85))))))))))))))))))))));
    __PVT___GEN_214 = ((0x54U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                        ? (IData)(vlSelf->__PVT__idStall_4)
                        : ((0x53U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                            ? (IData)(vlSelf->__PVT__idStall_4)
                            : ((0x52U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                ? (IData)(vlSelf->__PVT__idStall_4)
                                : ((0x51U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                    ? (IData)(vlSelf->__PVT__idStall_4)
                                    : ((0x50U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                        ? (IData)(vlSelf->__PVT__idStall_4)
                                        : ((0x4fU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                            ? (IData)(vlSelf->__PVT__idStall_3)
                                            : ((0x4eU 
                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                ? (IData)(vlSelf->__PVT__idStall_3)
                                                : (
                                                   (0x4dU 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                    ? (IData)(vlSelf->__PVT__idStall_3)
                                                    : 
                                                   ((0x4cU 
                                                     == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                     ? (IData)(vlSelf->__PVT__idStall_3)
                                                     : 
                                                    ((0x4bU 
                                                      == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                      ? (IData)(vlSelf->__PVT__idStall_3)
                                                      : 
                                                     ((0x4aU 
                                                       == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                       ? (IData)(vlSelf->__PVT__idStall_3)
                                                       : 
                                                      ((0x49U 
                                                        == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                        ? (IData)(vlSelf->__PVT__idStall_3)
                                                        : 
                                                       ((0x48U 
                                                         == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                         ? (IData)(vlSelf->__PVT__idStall_3)
                                                         : 
                                                        ((0x47U 
                                                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                          ? (IData)(vlSelf->__PVT__idStall_3)
                                                          : 
                                                         ((0x46U 
                                                           == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                           ? (IData)(vlSelf->__PVT__idStall_3)
                                                           : 
                                                          ((0x45U 
                                                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                            ? (IData)(vlSelf->__PVT__idStall_3)
                                                            : 
                                                           ((0x44U 
                                                             == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                             ? (IData)(vlSelf->__PVT__idStall_3)
                                                             : 
                                                            ((0x43U 
                                                              == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                              ? (IData)(vlSelf->__PVT__idStall_3)
                                                              : 
                                                             ((0x42U 
                                                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                               ? (IData)(vlSelf->__PVT__idStall_3)
                                                               : 
                                                              ((0x41U 
                                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                ? (IData)(vlSelf->__PVT__idStall_3)
                                                                : 
                                                               ((0x40U 
                                                                 == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                 ? (IData)(vlSelf->__PVT__idStall_3)
                                                                 : (IData)(__PVT___GEN_193))))))))))))))))))))));
    __PVT___GEN_127 = ((0x7dU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                        ? 6U : ((0x7cU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                 ? 6U : ((0x7bU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                          ? 6U : ((0x7aU 
                                                   == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                   ? 6U
                                                   : 
                                                  ((0x79U 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                    ? 6U
                                                    : 
                                                   ((0x78U 
                                                     == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                     ? 6U
                                                     : 
                                                    ((0x77U 
                                                      == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                      ? 6U
                                                      : 
                                                     ((0x76U 
                                                       == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                       ? 6U
                                                       : 
                                                      ((0x75U 
                                                        == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                        ? 6U
                                                        : 
                                                       ((0x74U 
                                                         == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                         ? 6U
                                                         : 
                                                        ((0x73U 
                                                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                          ? 6U
                                                          : 
                                                         ((0x72U 
                                                           == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                           ? 6U
                                                           : 
                                                          ((0x71U 
                                                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                            ? 6U
                                                            : 
                                                           ((0x70U 
                                                             == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                             ? 6U
                                                             : 
                                                            ((0x6fU 
                                                              == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                              ? 5U
                                                              : 
                                                             ((0x6eU 
                                                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                               ? 5U
                                                               : 
                                                              ((0x6dU 
                                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                ? 5U
                                                                : 
                                                               ((0x6cU 
                                                                 == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                 ? 5U
                                                                 : 
                                                                ((0x6bU 
                                                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                  ? 5U
                                                                  : 
                                                                 ((0x6aU 
                                                                   == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                   ? 5U
                                                                   : 
                                                                  ((0x69U 
                                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                    ? 5U
                                                                    : (IData)(__PVT___GEN_106))))))))))))))))))))));
    __PVT___GEN_235 = ((0x69U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                        ? (IData)(vlSelf->__PVT__idStall_5)
                        : ((0x68U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                            ? (IData)(vlSelf->__PVT__idStall_5)
                            : ((0x67U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                ? (IData)(vlSelf->__PVT__idStall_5)
                                : ((0x66U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                    ? (IData)(vlSelf->__PVT__idStall_5)
                                    : ((0x65U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                        ? (IData)(vlSelf->__PVT__idStall_5)
                                        : ((0x64U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                            ? (IData)(vlSelf->__PVT__idStall_5)
                                            : ((0x63U 
                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                ? (IData)(vlSelf->__PVT__idStall_5)
                                                : (
                                                   (0x62U 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                    ? (IData)(vlSelf->__PVT__idStall_5)
                                                    : 
                                                   ((0x61U 
                                                     == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                     ? (IData)(vlSelf->__PVT__idStall_5)
                                                     : 
                                                    ((0x60U 
                                                      == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                      ? (IData)(vlSelf->__PVT__idStall_5)
                                                      : 
                                                     ((0x5fU 
                                                       == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                       ? (IData)(vlSelf->__PVT__idStall_4)
                                                       : 
                                                      ((0x5eU 
                                                        == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                        ? (IData)(vlSelf->__PVT__idStall_4)
                                                        : 
                                                       ((0x5dU 
                                                         == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                         ? (IData)(vlSelf->__PVT__idStall_4)
                                                         : 
                                                        ((0x5cU 
                                                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                          ? (IData)(vlSelf->__PVT__idStall_4)
                                                          : 
                                                         ((0x5bU 
                                                           == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                           ? (IData)(vlSelf->__PVT__idStall_4)
                                                           : 
                                                          ((0x5aU 
                                                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                            ? (IData)(vlSelf->__PVT__idStall_4)
                                                            : 
                                                           ((0x59U 
                                                             == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                             ? (IData)(vlSelf->__PVT__idStall_4)
                                                             : 
                                                            ((0x58U 
                                                              == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                              ? (IData)(vlSelf->__PVT__idStall_4)
                                                              : 
                                                             ((0x57U 
                                                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                               ? (IData)(vlSelf->__PVT__idStall_4)
                                                               : 
                                                              ((0x56U 
                                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                ? (IData)(vlSelf->__PVT__idStall_4)
                                                                : 
                                                               ((0x55U 
                                                                 == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                 ? (IData)(vlSelf->__PVT__idStall_4)
                                                                 : (IData)(__PVT___GEN_214))))))))))))))))))))));
    if ((0x7eU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))) {
        __PVT___GEN_128 = 6U;
        __PVT___GEN_256 = vlSelf->__PVT__idStall_6;
    } else {
        __PVT___GEN_128 = __PVT___GEN_127;
        __PVT___GEN_256 = ((0x7dU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                            ? (IData)(vlSelf->__PVT__idStall_6)
                            : ((0x7cU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                ? (IData)(vlSelf->__PVT__idStall_6)
                                : ((0x7bU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                    ? (IData)(vlSelf->__PVT__idStall_6)
                                    : ((0x7aU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                        ? (IData)(vlSelf->__PVT__idStall_6)
                                        : ((0x79U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                            ? (IData)(vlSelf->__PVT__idStall_6)
                                            : ((0x78U 
                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                ? (IData)(vlSelf->__PVT__idStall_6)
                                                : (
                                                   (0x77U 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                    ? (IData)(vlSelf->__PVT__idStall_6)
                                                    : 
                                                   ((0x76U 
                                                     == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                     ? (IData)(vlSelf->__PVT__idStall_6)
                                                     : 
                                                    ((0x75U 
                                                      == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                      ? (IData)(vlSelf->__PVT__idStall_6)
                                                      : 
                                                     ((0x74U 
                                                       == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                       ? (IData)(vlSelf->__PVT__idStall_6)
                                                       : 
                                                      ((0x73U 
                                                        == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                        ? (IData)(vlSelf->__PVT__idStall_6)
                                                        : 
                                                       ((0x72U 
                                                         == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                         ? (IData)(vlSelf->__PVT__idStall_6)
                                                         : 
                                                        ((0x71U 
                                                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                          ? (IData)(vlSelf->__PVT__idStall_6)
                                                          : 
                                                         ((0x70U 
                                                           == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                           ? (IData)(vlSelf->__PVT__idStall_6)
                                                           : 
                                                          ((0x6fU 
                                                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                            ? (IData)(vlSelf->__PVT__idStall_5)
                                                            : 
                                                           ((0x6eU 
                                                             == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                             ? (IData)(vlSelf->__PVT__idStall_5)
                                                             : 
                                                            ((0x6dU 
                                                              == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                              ? (IData)(vlSelf->__PVT__idStall_5)
                                                              : 
                                                             ((0x6cU 
                                                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                               ? (IData)(vlSelf->__PVT__idStall_5)
                                                               : 
                                                              ((0x6bU 
                                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                ? (IData)(vlSelf->__PVT__idStall_5)
                                                                : 
                                                               ((0x6aU 
                                                                 == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                                                                 ? (IData)(vlSelf->__PVT__idStall_5)
                                                                 : (IData)(__PVT___GEN_235)))))))))))))))))))));
    }
    if ((0x7fU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))) {
        vlSelf->__PVT__queue_arw_deq_io_enq_bits_id = 6U;
        vlSelf->__PVT__out_arw_bits_id = 6U;
    } else {
        vlSelf->__PVT__queue_arw_deq_io_enq_bits_id 
            = __PVT___GEN_128;
        vlSelf->__PVT__out_arw_bits_id = __PVT___GEN_128;
    }
    vlSelf->__PVT__stall = (((0x7fU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source))
                              ? (IData)(vlSelf->__PVT__idStall_6)
                              : (IData)(__PVT___GEN_256)) 
                            & (0U == (IData)(vlSelf->__PVT__counter)));
    vlSelf->__PVT__queue_arw_deq_io_deq_bits_id = ((IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full)
                                                    ? 
                                                   vlSelf->__PVT__queue_arw_deq__DOT__ram_id
                                                   [0U]
                                                    : (IData)(vlSelf->__PVT__queue_arw_deq_io_enq_bits_id));
    vlSelf->__PVT___T = (((~ (IData)(vlSelf->__PVT__stall)) 
                          & (IData)(vlSelf->__PVT___bundleIn_0_a_ready_T_3)) 
                         & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid));
    vlSelf->__PVT__queue_arw_deq_io_enq_valid = (((~ (IData)(vlSelf->__PVT__stall)) 
                                                  & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid)) 
                                                 & (IData)(vlSelf->__PVT___out_arw_valid_T_4));
    vlSelf->__PVT__deq_io_enq_valid = ((((~ (IData)(vlSelf->__PVT__stall)) 
                                         & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid)) 
                                        & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                                              >> 2U))) 
                                       & ((IData)(vlSelf->__PVT__doneAW) 
                                          | (~ (IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full))));
    vlSelf->__PVT__monitor_io_in_a_ready = ((~ (IData)(vlSelf->__PVT__stall)) 
                                            & (IData)(vlSelf->__PVT___bundleIn_0_a_ready_T_3));
    vlSelf->__PVT___inc_T = ((~ (IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full)) 
                             & (((~ (IData)(vlSelf->__PVT__stall)) 
                                 & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid)) 
                                & (IData)(vlSelf->__PVT___out_arw_valid_T_4)));
    vlSelf->auto_in_a_ready = ((~ (IData)(vlSelf->__PVT__stall)) 
                               & (IData)(vlSelf->__PVT___bundleIn_0_a_ready_T_3));
    vlSelf->__PVT__queue_arw_deq__DOT___do_enq_T = 
        ((~ (IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full)) 
         & (IData)(vlSelf->__PVT__queue_arw_deq_io_enq_valid));
    vlSelf->__PVT__deq__DOT___do_enq_T = ((~ (IData)(vlSelf->__PVT__deq__DOT__maybe_full)) 
                                          & (IData)(vlSelf->__PVT__deq_io_enq_valid));
    vlSelf->__PVT__monitor__DOT___a_first_T = ((IData)(vlSelf->__PVT__monitor_io_in_a_ready) 
                                               & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid));
    vlSelf->__PVT___count_T_30 = (1U & ((IData)(vlSelf->__PVT__count_8) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_34 = (1U & ((IData)(vlSelf->__PVT__count_9) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 8U) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_38 = (1U & ((IData)(vlSelf->__PVT__count_10) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 9U) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_42 = (1U & ((IData)(vlSelf->__PVT__count_11) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 0xaU) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_46 = (1U & ((IData)(vlSelf->__PVT__count_12) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 0xbU) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_50 = (1U & ((IData)(vlSelf->__PVT__count_13) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 0xcU) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_54 = (1U & ((IData)(vlSelf->__PVT__count_14) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 0xdU) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_58 = (1U & ((IData)(vlSelf->__PVT__count_15) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 0xeU) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_62 = (1U & ((IData)(vlSelf->__PVT__count_16) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 0xfU) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_66 = (1U & ((IData)(vlSelf->__PVT__count_17) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 0x10U) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_70 = (1U & ((IData)(vlSelf->__PVT__count_18) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 0x11U) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_74 = (1U & ((IData)(vlSelf->__PVT__count_19) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 0x12U) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_78 = (1U & ((IData)(vlSelf->__PVT__count_20) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 0x13U) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_82 = (1U & ((IData)(vlSelf->__PVT__count_21) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 0x14U) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_86 = (1U & ((IData)(vlSelf->__PVT__count_22) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 0x15U) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_90 = (1U & ((IData)(vlSelf->__PVT__count_23) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 0x16U) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT__inc = (((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                          & (IData)(vlSelf->__PVT___inc_T));
    vlSelf->__PVT__inc_1 = ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                             >> 1U) & (IData)(vlSelf->__PVT___inc_T));
    vlSelf->__PVT__inc_2 = ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                             >> 2U) & (IData)(vlSelf->__PVT___inc_T));
    vlSelf->__PVT__inc_3 = ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                             >> 3U) & (IData)(vlSelf->__PVT___inc_T));
    vlSelf->__PVT__inc_4 = ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                             >> 4U) & (IData)(vlSelf->__PVT___inc_T));
    vlSelf->__PVT__inc_5 = ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                             >> 5U) & (IData)(vlSelf->__PVT___inc_T));
    vlSelf->__PVT__inc_6 = ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                             >> 6U) & (IData)(vlSelf->__PVT___inc_T));
    __Vtemp21[0U] = 1U;
    __Vtemp21[1U] = 0U;
    __Vtemp21[2U] = 0U;
    __Vtemp21[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp22, __Vtemp21, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source));
    vlSelf->__PVT__monitor__DOT___inflight_T_2[0U] 
        = (vlSelf->__PVT__monitor__DOT__inflight[0U] 
           | (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
               & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
               ? __Vtemp22[0U] : 0U));
    vlSelf->__PVT__monitor__DOT___inflight_T_2[1U] 
        = (vlSelf->__PVT__monitor__DOT__inflight[1U] 
           | (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
               & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
               ? __Vtemp22[1U] : 0U));
    vlSelf->__PVT__monitor__DOT___inflight_T_2[2U] 
        = (vlSelf->__PVT__monitor__DOT__inflight[2U] 
           | (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
               & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
               ? __Vtemp22[2U] : 0U));
    vlSelf->__PVT__monitor__DOT___inflight_T_2[3U] 
        = (vlSelf->__PVT__monitor__DOT__inflight[3U] 
           | (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
               & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
               ? __Vtemp22[3U] : 0U));
    VL_EXTEND_WI(1027,4, __Vtemp27, (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                                      ? (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                                               << 1U))
                                      : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp28, __Vtemp27, 
                  ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                   << 2U));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[0U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[0U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp28[0U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[1U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[1U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp28[1U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[2U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[2U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp28[2U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[3U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[3U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp28[3U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[4U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[4U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp28[4U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[5U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[5U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp28[5U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[6U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[6U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp28[6U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[7U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[7U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp28[7U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[8U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[8U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp28[8U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[9U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[9U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp28[9U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[0xaU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xaU] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp28[0xaU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[0xbU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xbU] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp28[0xbU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[0xcU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xcU] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp28[0xcU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[0xdU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xdU] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp28[0xdU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[0xeU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xeU] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp28[0xeU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[0xfU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xfU] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp28[0xfU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU])));
    VL_EXTEND_WI(1027,4, __Vtemp34, (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                                      ? (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size) 
                                               << 1U))
                                      : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp35, __Vtemp34, 
                  ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                   << 2U));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[0U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[0U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp35[0U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[1U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[1U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp35[1U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[2U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[2U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp35[2U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[3U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[3U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp35[3U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[4U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[4U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp35[4U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[5U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[5U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp35[5U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[6U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[6U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp35[6U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[7U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[7U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp35[7U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[8U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[8U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp35[8U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[9U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[9U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp35[9U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[0xaU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[0xaU] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp35[0xaU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[0xbU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[0xbU] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp35[0xbU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[0xcU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[0xcU] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp35[0xcU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[0xdU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[0xdU] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp35[0xdU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[0xeU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[0xeU] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp35[0xeU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[0xfU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[0xfU] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp35[0xfU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU])));
    vlSelf->__PVT___count_T_4 = (0x1fU & ((IData)(vlSelf->__PVT__count_1) 
                                          + (IData)(vlSelf->__PVT__inc)));
    vlSelf->__PVT___count_T_8 = (0x1fU & ((IData)(vlSelf->__PVT__count_2) 
                                          + (IData)(vlSelf->__PVT__inc_1)));
    vlSelf->__PVT___count_T_12 = (0x1fU & ((IData)(vlSelf->__PVT__count_3) 
                                           + (IData)(vlSelf->__PVT__inc_2)));
    vlSelf->__PVT___count_T_16 = (0x1fU & ((IData)(vlSelf->__PVT__count_4) 
                                           + (IData)(vlSelf->__PVT__inc_3)));
    vlSelf->__PVT___count_T_20 = (0x1fU & ((IData)(vlSelf->__PVT__count_5) 
                                           + (IData)(vlSelf->__PVT__inc_4)));
    vlSelf->__PVT___count_T_24 = (0x1fU & ((IData)(vlSelf->__PVT__count_6) 
                                           + (IData)(vlSelf->__PVT__inc_5)));
    vlSelf->__PVT___count_T_28 = (0x1fU & ((IData)(vlSelf->__PVT__count_7) 
                                           + (IData)(vlSelf->__PVT__inc_6)));
}

extern const VlWide<16>/*511:0*/ VysyxSoCFull__ConstPool__CONST_0b2d9f06_0;
extern const VlWide<16>/*511:0*/ VysyxSoCFull__ConstPool__CONST_3ad9c2be_0;

void VysyxSoCFull_TLToAXI4___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__9(VysyxSoCFull_TLToAXI4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLToAXI4___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__9\n"); );
    // Variables
    CData/*0:0*/ __PVT___GEN_261;
    VlWide<16>/*511:0*/ __Vtemp176;
    VlWide<16>/*511:0*/ __Vtemp179;
    VlWide<16>/*511:0*/ __Vtemp180;
    VlWide<16>/*511:0*/ __Vtemp183;
    VlWide<16>/*511:0*/ __Vtemp184;
    VlWide<16>/*511:0*/ __Vtemp187;
    VlWide<16>/*511:0*/ __Vtemp188;
    VlWide<16>/*511:0*/ __Vtemp191;
    VlWide<16>/*511:0*/ __Vtemp192;
    // Body
    vlSelf->__PVT___bdelay_T_1 = (7U & ((IData)(1U) 
                                        + (IData)(vlSelf->__PVT__b_delay)));
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
    vlSelf->__PVT__a_first = (0U == (IData)(vlSelf->__PVT__counter));
    vlSelf->__PVT__counter1 = (7U & ((IData)(vlSelf->__PVT__counter) 
                                     - (IData)(1U)));
    vlSelf->__PVT__deq__DOT__empty = (1U & (~ (IData)(vlSelf->__PVT__deq__DOT__maybe_full)));
    vlSelf->__PVT__queue_arw_deq__DOT__empty = (1U 
                                                & (~ (IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full)));
    vlSelf->__PVT__queue_arw_deq_io_deq_bits_burst 
        = ((IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full)
            ? vlSelf->__PVT__queue_arw_deq__DOT__ram_burst
           [0U] : 1U);
    vlSelf->__PVT__monitor__DOT__a_first_counter1 = 
        (7U & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter) 
               - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__a_first = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter));
    vlSelf->__PVT__monitor__DOT__d_first_counter1 = 
        (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter) 
               - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter));
    __PVT___GEN_261 = ((IData)(vlSelf->__PVT__r_first)
                        ? (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp_io_deq_bits_MPORT_data))
                        : (IData)(vlSelf->__PVT__r_denied_r));
    vlSelf->__PVT__r_wins = (((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__empty)) 
                              & (7U != (IData)(vlSelf->__PVT__b_delay))) 
                             | (IData)(vlSelf->__PVT__r_holds_d));
    vlSelf->__PVT__r_d_corrupt = ((0U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp_io_deq_bits_MPORT_data)) 
                                  | (IData)(__PVT___GEN_261));
    if (vlSelf->__PVT__r_wins) {
        vlSelf->__PVT__monitor_io_in_d_bits_size = 
            (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_recho_tl_state_size));
        vlSelf->__PVT__monitor_io_in_d_bits_denied 
            = __PVT___GEN_261;
    } else {
        vlSelf->__PVT__monitor_io_in_d_bits_size = 
            (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_becho_tl_state_size));
        vlSelf->__PVT__monitor_io_in_d_bits_denied 
            = (0U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag_auto_in_bresp));
    }
    vlSelf->__PVT__d_last = (1U & ((~ (IData)(vlSelf->__PVT__r_wins)) 
                                   | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag_auto_in_rlast)));
    if (vlSelf->__PVT__r_wins) {
        vlSelf->__PVT__d_sel_shiftAmount = ((((0xfU 
                                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                               ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_15__DOT__ram_extra_id
                                              [0U] : 
                                              ((0xeU 
                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_14__DOT__ram_extra_id
                                               [0U]
                                                : (
                                                   (0xdU 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? 
                                                   vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_13__DOT__ram_extra_id
                                                   [0U]
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? 
                                                    vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_12__DOT__ram_extra_id
                                                    [0U]
                                                     : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_43))))) 
                                             << 4U) 
                                            | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data));
        vlSelf->__PVT__monitor_io_in_d_bits_source 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_recho_tl_state_source;
        vlSelf->__PVT__monitor_io_in_d_valid = (1U 
                                                & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__empty)));
        vlSelf->auto_in_d_bits_denied = __PVT___GEN_261;
        vlSelf->auto_in_d_bits_size = (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_recho_tl_state_size));
        vlSelf->auto_in_d_valid = (1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__empty)));
        vlSelf->auto_in_d_bits_corrupt = ((IData)(vlSelf->__PVT__r_d_corrupt) 
                                          & 1U);
    } else {
        vlSelf->__PVT__d_sel_shiftAmount = ((((0xfU 
                                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                               ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_31__DOT__ram_extra_id
                                              [0U] : 
                                              ((0xeU 
                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_30__DOT__ram_extra_id
                                               [0U]
                                                : (
                                                   (0xdU 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? 
                                                   vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_29__DOT__ram_extra_id
                                                   [0U]
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? 
                                                    vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_28__DOT__ram_extra_id
                                                    [0U]
                                                     : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT___GEN_123))))) 
                                             << 4U) 
                                            | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data));
        vlSelf->__PVT__monitor_io_in_d_bits_source 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_becho_tl_state_source;
        vlSelf->__PVT__monitor_io_in_d_valid = (1U 
                                                & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag_auto_in_bvalid));
        vlSelf->auto_in_d_bits_denied = (0U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag_auto_in_bresp));
        vlSelf->auto_in_d_bits_size = (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_in_becho_tl_state_size));
        vlSelf->auto_in_d_valid = (1U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag_auto_in_bvalid));
        vlSelf->auto_in_d_bits_corrupt = 0U;
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp176, vlSelf->__PVT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp176[0U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp176[1U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp176[2U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp176[3U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp176[4U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp176[5U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp176[6U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp176[7U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp176[8U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp176[9U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp176[0xaU];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp176[0xbU];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp176[0xcU];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp176[0xdU];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp176[0xeU];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp176[0xfU];
    __Vtemp179[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                       >> 1U)));
    __Vtemp179[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                       >> 1U)));
    __Vtemp179[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                       >> 1U)));
    __Vtemp179[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                       >> 1U)));
    __Vtemp179[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                       >> 1U)));
    __Vtemp179[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                       >> 1U)));
    __Vtemp179[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                       >> 1U)));
    __Vtemp179[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                       >> 1U)));
    __Vtemp179[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                       >> 1U)));
    __Vtemp179[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                       >> 1U)));
    __Vtemp179[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                             & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                            << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                         >> 1U)));
    __Vtemp179[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                             & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                            << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                         >> 1U)));
    __Vtemp179[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                             & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                            << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                         >> 1U)));
    __Vtemp179[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                             & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                            << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                         >> 1U)));
    __Vtemp179[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                         >> 1U)));
    __Vtemp179[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                        & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                           >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp180, __Vtemp179);
    __Vtemp183[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                       >> 1U)));
    __Vtemp183[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                       >> 1U)));
    __Vtemp183[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                       >> 1U)));
    __Vtemp183[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                       >> 1U)));
    __Vtemp183[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                       >> 1U)));
    __Vtemp183[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                       >> 1U)));
    __Vtemp183[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                       >> 1U)));
    __Vtemp183[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                       >> 1U)));
    __Vtemp183[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                       >> 1U)));
    __Vtemp183[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                       >> 1U)));
    __Vtemp183[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                             & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                            << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                         >> 1U)));
    __Vtemp183[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                             & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                            << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                         >> 1U)));
    __Vtemp183[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                             & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                            << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                         >> 1U)));
    __Vtemp183[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                             & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                            << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                         >> 1U)));
    __Vtemp183[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                         >> 1U)));
    __Vtemp183[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                        & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                           >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp184, __Vtemp183);
    __Vtemp187[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                       >> 1U)));
    __Vtemp187[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                       >> 1U)));
    __Vtemp187[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                       >> 1U)));
    __Vtemp187[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                       >> 1U)));
    __Vtemp187[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                       >> 1U)));
    __Vtemp187[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                       >> 1U)));
    __Vtemp187[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                       >> 1U)));
    __Vtemp187[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                       >> 1U)));
    __Vtemp187[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                       >> 1U)));
    __Vtemp187[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                       >> 1U)));
    __Vtemp187[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                             & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                            << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                         >> 1U)));
    __Vtemp187[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                             & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                            << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                         >> 1U)));
    __Vtemp187[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                             & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                            << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                         >> 1U)));
    __Vtemp187[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                             & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                            << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                         >> 1U)));
    __Vtemp187[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                         >> 1U)));
    __Vtemp187[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                        & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                           >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp188, __Vtemp187);
    __Vtemp191[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                       >> 1U)));
    __Vtemp191[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                       >> 1U)));
    __Vtemp191[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                       >> 1U)));
    __Vtemp191[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                       >> 1U)));
    __Vtemp191[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                       >> 1U)));
    __Vtemp191[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                       >> 1U)));
    __Vtemp191[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                       >> 1U)));
    __Vtemp191[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                       >> 1U)));
    __Vtemp191[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                       >> 1U)));
    __Vtemp191[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                       >> 1U)));
    __Vtemp191[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                             & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                            << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                         >> 1U)));
    __Vtemp191[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                             & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                            << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                         >> 1U)));
    __Vtemp191[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                             & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                            << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                         >> 1U)));
    __Vtemp191[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                             & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                            << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                         >> 1U)));
    __Vtemp191[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                         >> 1U)));
    __Vtemp191[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                        & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                           >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp192, __Vtemp191);
    vlSelf->__PVT__monitor__DOT___GEN_46 = ((5U == 
                                             (7U & 
                                              __Vtemp180[0U]))
                                             ? 2U : 
                                            ((4U == 
                                              (7U & 
                                               __Vtemp184[0U]))
                                              ? 1U : 
                                             ((3U == 
                                               (7U 
                                                & __Vtemp188[0U]))
                                               ? 1U
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp192[0U]))
                                                   ? 1U
                                                   : 0U))));
}

extern const VlWide<33>/*1055:0*/ VysyxSoCFull__ConstPool__CONST_3892cc72_0;
extern const VlWide<33>/*1055:0*/ VysyxSoCFull__ConstPool__CONST_f1d81c7e_0;
extern const VlWide<33>/*1055:0*/ VysyxSoCFull__ConstPool__CONST_99cb7c89_0;

void VysyxSoCFull_TLToAXI4___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__11(VysyxSoCFull_TLToAXI4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLToAXI4___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__11\n"); );
    // Variables
    CData/*0:0*/ __PVT___GEN_151;
    CData/*0:0*/ __PVT___GEN_172;
    CData/*0:0*/ __PVT___GEN_193;
    CData/*0:0*/ __PVT___GEN_214;
    CData/*0:0*/ __PVT___GEN_235;
    CData/*0:0*/ __PVT___GEN_256;
    CData/*4:0*/ __PVT___GEN_22;
    CData/*4:0*/ __PVT___GEN_43;
    CData/*4:0*/ __PVT___GEN_64;
    CData/*4:0*/ __PVT___GEN_85;
    CData/*4:0*/ __PVT___GEN_106;
    CData/*4:0*/ __PVT___GEN_127;
    CData/*4:0*/ __PVT___GEN_128;
    VlWide<4>/*127:0*/ __Vtemp193;
    VlWide<4>/*127:0*/ __Vtemp194;
    VlWide<4>/*127:0*/ __Vtemp198;
    VlWide<4>/*127:0*/ __Vtemp199;
    VlWide<33>/*1055:0*/ __Vtemp205;
    VlWide<33>/*1055:0*/ __Vtemp212;
    VlWide<33>/*1055:0*/ __Vtemp216;
    VlWide<33>/*1055:0*/ __Vtemp217;
    VlWide<33>/*1055:0*/ __Vtemp226;
    VlWide<33>/*1055:0*/ __Vtemp227;
    VlWide<4>/*127:0*/ __Vtemp236;
    VlWide<4>/*127:0*/ __Vtemp237;
    VlWide<4>/*127:0*/ __Vtemp242;
    VlWide<4>/*127:0*/ __Vtemp243;
    // Body
    vlSelf->__PVT___T_2 = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_d_ready) 
                            & (IData)(vlSelf->__PVT__r_wins)) 
                           & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__empty)));
    vlSelf->__PVT___dec_T_1 = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_d_ready) 
                               & ((IData)(vlSelf->__PVT__r_wins)
                                   ? (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__empty))
                                   : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag_auto_in_bvalid)));
    vlSelf->__PVT__monitor__DOT___d_first_T = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_d_ready) 
                                               & (IData)(vlSelf->__PVT__monitor_io_in_d_valid));
    vlSelf->auto_out_bready = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_d_ready) 
                               & (~ (IData)(vlSelf->__PVT__r_wins)));
    vlSelf->auto_out_rready = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_d_ready) 
                               & (IData)(vlSelf->__PVT__r_wins));
    if (vlSelf->__PVT__deq__DOT__maybe_full) {
        vlSelf->__PVT__deq_io_deq_bits_data = vlSelf->__PVT__deq__DOT__ram_data
            [0U];
        vlSelf->__PVT__deq_io_deq_bits_strb = vlSelf->__PVT__deq__DOT__ram_strb
            [0U];
    } else {
        vlSelf->__PVT__deq_io_deq_bits_data = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_data;
        vlSelf->__PVT__deq_io_deq_bits_strb = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_mask;
    }
    vlSelf->__PVT__queue_arw_deq_io_deq_bits_echo_tl_state_size 
        = ((IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full)
            ? vlSelf->__PVT__queue_arw_deq__DOT__ram_echo_tl_state_size
           [0U] : (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)));
    vlSelf->__PVT__queue_arw_deq_io_enq_bits_size = 
        ((3U <= (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))
          ? 3U : (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)));
    vlSelf->__PVT__queue_arw_deq_io_deq_bits_len = 
        (0xffU & ((IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full)
                   ? vlSelf->__PVT__queue_arw_deq__DOT__ram_len
                  [0U] : (~ (0x7fffU & (((IData)(0x7ffU) 
                                         << (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                        >> 3U)))));
    vlSelf->__PVT__monitor__DOT__mask_eq_2 = (IData)(
                                                     (0U 
                                                      == 
                                                      (6U 
                                                       & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->__PVT__monitor__DOT__mask_eq_3 = (IData)(
                                                     (2U 
                                                      == 
                                                      (6U 
                                                       & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->__PVT__monitor__DOT__mask_eq_4 = (IData)(
                                                     (4U 
                                                      == 
                                                      (6U 
                                                       & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->__PVT__monitor__DOT__mask_eq_5 = (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->__PVT__monitor__DOT__mask_acc = (1U & (
                                                   (3U 
                                                    <= 
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                                   | (1U 
                                                      & ((((IData)(1U) 
                                                           << 
                                                           (3U 
                                                            & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                                          >> 2U) 
                                                         & (~ 
                                                            (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                                             >> 2U))))));
    vlSelf->__PVT__monitor__DOT__mask_acc_1 = (1U & 
                                               ((3U 
                                                 <= 
                                                 (7U 
                                                  & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                                | (1U 
                                                   & ((((IData)(1U) 
                                                        << 
                                                        (3U 
                                                         & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                                       >> 2U) 
                                                      & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                                         >> 2U)))));
    if (vlSelf->__PVT__queue_arw_deq__DOT__maybe_full) {
        vlSelf->__PVT__queue_arw_deq_io_deq_bits_addr 
            = vlSelf->__PVT__queue_arw_deq__DOT__ram_addr
            [0U];
        vlSelf->__PVT__queue_arw_deq_io_deq_bits_echo_tl_state_source 
            = vlSelf->__PVT__queue_arw_deq__DOT__ram_echo_tl_state_source
            [0U];
    } else {
        vlSelf->__PVT__queue_arw_deq_io_deq_bits_addr 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address;
        vlSelf->__PVT__queue_arw_deq_io_deq_bits_echo_tl_state_source 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source;
    }
    __PVT___GEN_22 = ((0x14U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                       ? 0U : ((0x13U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                ? 0U : ((0x12U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                         ? 0U : ((0x11U 
                                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                  ? 0U
                                                  : 
                                                 ((0x10U 
                                                   == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                   ? 0U
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                    ? 0x16U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                     ? 0x15U
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                      ? 0x14U
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                       ? 0x13U
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                        ? 0x12U
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                         ? 0x11U
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                          ? 0x10U
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                           ? 0xfU
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                            ? 0xeU
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                             ? 0xdU
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                              ? 0xcU
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                               ? 0xbU
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                ? 0xaU
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                 ? 9U
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                  ? 8U
                                                                  : 7U))))))))))))))))))));
    vlSelf->__PVT__monitor__DOT___GEN_30 = ((5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                             ? 2U : 
                                            ((4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                              ? 1U : 
                                             ((3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                               ? 1U
                                               : ((2U 
                                                   == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                                   ? 1U
                                                   : 0U))));
    vlSelf->__PVT__beats1 = ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                              ? 0U : (7U & (~ (0x3ffU 
                                               & (((IData)(0x3fU) 
                                                   << 
                                                   (7U 
                                                    & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                                  >> 3U)))));
    vlSelf->__PVT__queue_arw_deq_io_deq_bits_wen = 
        (1U & ((IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full)
                ? vlSelf->__PVT__queue_arw_deq__DOT__ram_wen
               [0U] : (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                          >> 2U))));
    vlSelf->__PVT___out_arw_valid_T_4 = (1U & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                                >> 2U) 
                                               | ((~ (IData)(vlSelf->__PVT__doneAW)) 
                                                  & (~ (IData)(vlSelf->__PVT__deq__DOT__maybe_full)))));
    vlSelf->__PVT___bundleIn_0_a_ready_T_3 = (1U & 
                                              ((4U 
                                                & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                                ? (~ (IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full))
                                                : (
                                                   ((IData)(vlSelf->__PVT__doneAW) 
                                                    | (~ (IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full))) 
                                                   & (~ (IData)(vlSelf->__PVT__deq__DOT__maybe_full)))));
    vlSelf->__PVT__idStall_6 = (((0U != (IData)(vlSelf->__PVT__count_7)) 
                                 & ((IData)(vlSelf->__PVT__write_6) 
                                    != (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSelf->__PVT__count_7)));
    vlSelf->__PVT__idStall_5 = (((0U != (IData)(vlSelf->__PVT__count_6)) 
                                 & ((IData)(vlSelf->__PVT__write_5) 
                                    != (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSelf->__PVT__count_6)));
    vlSelf->__PVT__idStall_3 = (((0U != (IData)(vlSelf->__PVT__count_4)) 
                                 & ((IData)(vlSelf->__PVT__write_3) 
                                    != (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSelf->__PVT__count_4)));
    vlSelf->__PVT__idStall_4 = (((0U != (IData)(vlSelf->__PVT__count_5)) 
                                 & ((IData)(vlSelf->__PVT__write_4) 
                                    != (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSelf->__PVT__count_5)));
    vlSelf->__PVT__idStall_2 = (((0U != (IData)(vlSelf->__PVT__count_3)) 
                                 & ((IData)(vlSelf->__PVT__write_2) 
                                    != (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSelf->__PVT__count_3)));
    vlSelf->__PVT__idStall_1 = (((0U != (IData)(vlSelf->__PVT__count_2)) 
                                 & ((IData)(vlSelf->__PVT__write_1) 
                                    != (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSelf->__PVT__count_2)));
    vlSelf->__PVT__idStall_0 = (((0U != (IData)(vlSelf->__PVT__count_1)) 
                                 & ((IData)(vlSelf->__PVT__write) 
                                    != (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                                 >> 2U))))) 
                                | (0x10U == (IData)(vlSelf->__PVT__count_1)));
    __Vtemp193[0U] = 1U;
    __Vtemp193[1U] = 0U;
    __Vtemp193[2U] = 0U;
    __Vtemp193[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp194, __Vtemp193, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source));
    if (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))) {
        vlSelf->__PVT__monitor__DOT__a_set_wo_ready[0U] 
            = __Vtemp194[0U];
        vlSelf->__PVT__monitor__DOT__a_set_wo_ready[1U] 
            = __Vtemp194[1U];
        vlSelf->__PVT__monitor__DOT__a_set_wo_ready[2U] 
            = __Vtemp194[2U];
        vlSelf->__PVT__monitor__DOT__a_set_wo_ready[3U] 
            = __Vtemp194[3U];
    } else {
        vlSelf->__PVT__monitor__DOT__a_set_wo_ready[0U] = 0U;
        vlSelf->__PVT__monitor__DOT__a_set_wo_ready[1U] = 0U;
        vlSelf->__PVT__monitor__DOT__a_set_wo_ready[2U] = 0U;
        vlSelf->__PVT__monitor__DOT__a_set_wo_ready[3U] = 0U;
    }
    vlSelf->__PVT___GEN_260 = ((IData)(vlSelf->__PVT___T_2)
                                ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag_auto_in_rlast)
                                : (IData)(vlSelf->__PVT__r_first));
    __Vtemp198[0U] = 1U;
    __Vtemp198[1U] = 0U;
    __Vtemp198[2U] = 0U;
    __Vtemp198[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp199, __Vtemp198, (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source));
    vlSelf->__PVT__monitor__DOT___inflight_T_5[0U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_1[0U] 
           & (~ ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                  & (6U == ((IData)(vlSelf->__PVT__r_wins)
                             ? 1U : 0U))) ? __Vtemp199[0U]
                  : 0U)));
    vlSelf->__PVT__monitor__DOT___inflight_T_5[1U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_1[1U] 
           & (~ ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                  & (6U == ((IData)(vlSelf->__PVT__r_wins)
                             ? 1U : 0U))) ? __Vtemp199[1U]
                  : 0U)));
    vlSelf->__PVT__monitor__DOT___inflight_T_5[2U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_1[2U] 
           & (~ ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                  & (6U == ((IData)(vlSelf->__PVT__r_wins)
                             ? 1U : 0U))) ? __Vtemp199[2U]
                  : 0U)));
    vlSelf->__PVT__monitor__DOT___inflight_T_5[3U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_1[3U] 
           & (~ ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                  & (6U == ((IData)(vlSelf->__PVT__r_wins)
                             ? 1U : 0U))) ? __Vtemp199[3U]
                  : 0U)));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp205, VysyxSoCFull__ConstPool__CONST_3892cc72_0, 
                  ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0U] 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0U] 
                 & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                     & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                ? 1U : 0U))) ? __Vtemp205[0U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0U]))));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes_1[1U] 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[1U] 
                 & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                     & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                ? 1U : 0U))) ? __Vtemp205[1U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[1U]))));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes_1[2U] 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[2U] 
                 & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                     & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                ? 1U : 0U))) ? __Vtemp205[2U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[2U]))));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes_1[3U] 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[3U] 
                 & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                     & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                ? 1U : 0U))) ? __Vtemp205[3U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[3U]))));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes_1[4U] 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[4U] 
                 & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                     & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                ? 1U : 0U))) ? __Vtemp205[4U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[4U]))));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[5U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes_1[5U] 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[5U] 
                 & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                     & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                ? 1U : 0U))) ? __Vtemp205[5U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[5U]))));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[6U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes_1[6U] 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[6U] 
                 & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                     & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                ? 1U : 0U))) ? __Vtemp205[6U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[6U]))));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[7U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes_1[7U] 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[7U] 
                 & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                     & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                ? 1U : 0U))) ? __Vtemp205[7U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[7U]))));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[8U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes_1[8U] 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[8U] 
                 & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                     & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                ? 1U : 0U))) ? __Vtemp205[8U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[8U]))));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[9U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes_1[9U] 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[9U] 
                 & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                     & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                ? 1U : 0U))) ? __Vtemp205[9U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[9U]))));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xaU] 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xaU] 
                 & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                     & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                ? 1U : 0U))) ? __Vtemp205[0xaU]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xaU]))));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xbU] 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xbU] 
                 & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                     & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                ? 1U : 0U))) ? __Vtemp205[0xbU]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xbU]))));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xcU] 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xcU] 
                 & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                     & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                ? 1U : 0U))) ? __Vtemp205[0xcU]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xcU]))));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xdU] 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xdU] 
                 & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                     & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                ? 1U : 0U))) ? __Vtemp205[0xdU]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xdU]))));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xeU] 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xeU] 
                 & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                     & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                ? 1U : 0U))) ? __Vtemp205[0xeU]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xeU]))));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xfU] 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xfU] 
                 & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                     & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                ? 1U : 0U))) ? __Vtemp205[0xfU]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xfU]))));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp212, VysyxSoCFull__ConstPool__CONST_3892cc72_0, 
                  ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->__PVT__monitor__DOT___GEN_23[0U] = (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0U] 
                                                & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                     & (0U 
                                                        == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != 
                                                       ((IData)(vlSelf->__PVT__r_wins)
                                                         ? 1U
                                                         : 0U)))
                                                    ? 
                                                   __Vtemp212[0U]
                                                    : 
                                                   VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0U]));
    vlSelf->__PVT__monitor__DOT___GEN_23[1U] = (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[1U] 
                                                & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                     & (0U 
                                                        == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != 
                                                       ((IData)(vlSelf->__PVT__r_wins)
                                                         ? 1U
                                                         : 0U)))
                                                    ? 
                                                   __Vtemp212[1U]
                                                    : 
                                                   VysyxSoCFull__ConstPool__CONST_99cb7c89_0[1U]));
    vlSelf->__PVT__monitor__DOT___GEN_23[2U] = (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[2U] 
                                                & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                     & (0U 
                                                        == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != 
                                                       ((IData)(vlSelf->__PVT__r_wins)
                                                         ? 1U
                                                         : 0U)))
                                                    ? 
                                                   __Vtemp212[2U]
                                                    : 
                                                   VysyxSoCFull__ConstPool__CONST_99cb7c89_0[2U]));
    vlSelf->__PVT__monitor__DOT___GEN_23[3U] = (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[3U] 
                                                & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                     & (0U 
                                                        == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != 
                                                       ((IData)(vlSelf->__PVT__r_wins)
                                                         ? 1U
                                                         : 0U)))
                                                    ? 
                                                   __Vtemp212[3U]
                                                    : 
                                                   VysyxSoCFull__ConstPool__CONST_99cb7c89_0[3U]));
    vlSelf->__PVT__monitor__DOT___GEN_23[4U] = (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[4U] 
                                                & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                     & (0U 
                                                        == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != 
                                                       ((IData)(vlSelf->__PVT__r_wins)
                                                         ? 1U
                                                         : 0U)))
                                                    ? 
                                                   __Vtemp212[4U]
                                                    : 
                                                   VysyxSoCFull__ConstPool__CONST_99cb7c89_0[4U]));
    vlSelf->__PVT__monitor__DOT___GEN_23[5U] = (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[5U] 
                                                & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                     & (0U 
                                                        == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != 
                                                       ((IData)(vlSelf->__PVT__r_wins)
                                                         ? 1U
                                                         : 0U)))
                                                    ? 
                                                   __Vtemp212[5U]
                                                    : 
                                                   VysyxSoCFull__ConstPool__CONST_99cb7c89_0[5U]));
    vlSelf->__PVT__monitor__DOT___GEN_23[6U] = (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[6U] 
                                                & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                     & (0U 
                                                        == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != 
                                                       ((IData)(vlSelf->__PVT__r_wins)
                                                         ? 1U
                                                         : 0U)))
                                                    ? 
                                                   __Vtemp212[6U]
                                                    : 
                                                   VysyxSoCFull__ConstPool__CONST_99cb7c89_0[6U]));
    vlSelf->__PVT__monitor__DOT___GEN_23[7U] = (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[7U] 
                                                & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                     & (0U 
                                                        == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != 
                                                       ((IData)(vlSelf->__PVT__r_wins)
                                                         ? 1U
                                                         : 0U)))
                                                    ? 
                                                   __Vtemp212[7U]
                                                    : 
                                                   VysyxSoCFull__ConstPool__CONST_99cb7c89_0[7U]));
    vlSelf->__PVT__monitor__DOT___GEN_23[8U] = (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[8U] 
                                                & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                     & (0U 
                                                        == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != 
                                                       ((IData)(vlSelf->__PVT__r_wins)
                                                         ? 1U
                                                         : 0U)))
                                                    ? 
                                                   __Vtemp212[8U]
                                                    : 
                                                   VysyxSoCFull__ConstPool__CONST_99cb7c89_0[8U]));
    vlSelf->__PVT__monitor__DOT___GEN_23[9U] = (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[9U] 
                                                & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                     & (0U 
                                                        == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != 
                                                       ((IData)(vlSelf->__PVT__r_wins)
                                                         ? 1U
                                                         : 0U)))
                                                    ? 
                                                   __Vtemp212[9U]
                                                    : 
                                                   VysyxSoCFull__ConstPool__CONST_99cb7c89_0[9U]));
    vlSelf->__PVT__monitor__DOT___GEN_23[0xaU] = (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xaU] 
                                                  & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                       & (0U 
                                                          == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                      & (6U 
                                                         != 
                                                         ((IData)(vlSelf->__PVT__r_wins)
                                                           ? 1U
                                                           : 0U)))
                                                      ? 
                                                     __Vtemp212[0xaU]
                                                      : 
                                                     VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xaU]));
    vlSelf->__PVT__monitor__DOT___GEN_23[0xbU] = (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xbU] 
                                                  & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                       & (0U 
                                                          == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                      & (6U 
                                                         != 
                                                         ((IData)(vlSelf->__PVT__r_wins)
                                                           ? 1U
                                                           : 0U)))
                                                      ? 
                                                     __Vtemp212[0xbU]
                                                      : 
                                                     VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xbU]));
    vlSelf->__PVT__monitor__DOT___GEN_23[0xcU] = (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xcU] 
                                                  & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                       & (0U 
                                                          == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                      & (6U 
                                                         != 
                                                         ((IData)(vlSelf->__PVT__r_wins)
                                                           ? 1U
                                                           : 0U)))
                                                      ? 
                                                     __Vtemp212[0xcU]
                                                      : 
                                                     VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xcU]));
    vlSelf->__PVT__monitor__DOT___GEN_23[0xdU] = (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xdU] 
                                                  & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                       & (0U 
                                                          == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                      & (6U 
                                                         != 
                                                         ((IData)(vlSelf->__PVT__r_wins)
                                                           ? 1U
                                                           : 0U)))
                                                      ? 
                                                     __Vtemp212[0xdU]
                                                      : 
                                                     VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xdU]));
    vlSelf->__PVT__monitor__DOT___GEN_23[0xeU] = (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xeU] 
                                                  & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                       & (0U 
                                                          == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                      & (6U 
                                                         != 
                                                         ((IData)(vlSelf->__PVT__r_wins)
                                                           ? 1U
                                                           : 0U)))
                                                      ? 
                                                     __Vtemp212[0xeU]
                                                      : 
                                                     VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xeU]));
    vlSelf->__PVT__monitor__DOT___GEN_23[0xfU] = (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xfU] 
                                                  & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                       & (0U 
                                                          == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                      & (6U 
                                                         != 
                                                         ((IData)(vlSelf->__PVT__r_wins)
                                                           ? 1U
                                                           : 0U)))
                                                      ? 
                                                     __Vtemp212[0xfU]
                                                      : 
                                                     VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xfU]));
    vlSelf->__PVT__monitor__DOT___GEN_23[0x10U] = (
                                                   VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x10U] 
                                                   & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                        & (0U 
                                                           == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                       & (6U 
                                                          != 
                                                          ((IData)(vlSelf->__PVT__r_wins)
                                                            ? 1U
                                                            : 0U)))
                                                       ? 
                                                      __Vtemp212[0x10U]
                                                       : 
                                                      VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x10U]));
    vlSelf->__PVT__monitor__DOT___GEN_23[0x11U] = (
                                                   VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x11U] 
                                                   & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                        & (0U 
                                                           == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                       & (6U 
                                                          != 
                                                          ((IData)(vlSelf->__PVT__r_wins)
                                                            ? 1U
                                                            : 0U)))
                                                       ? 
                                                      __Vtemp212[0x11U]
                                                       : 
                                                      VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x11U]));
    vlSelf->__PVT__monitor__DOT___GEN_23[0x12U] = (
                                                   VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x12U] 
                                                   & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                        & (0U 
                                                           == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                       & (6U 
                                                          != 
                                                          ((IData)(vlSelf->__PVT__r_wins)
                                                            ? 1U
                                                            : 0U)))
                                                       ? 
                                                      __Vtemp212[0x12U]
                                                       : 
                                                      VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x12U]));
    vlSelf->__PVT__monitor__DOT___GEN_23[0x13U] = (
                                                   VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x13U] 
                                                   & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                        & (0U 
                                                           == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                       & (6U 
                                                          != 
                                                          ((IData)(vlSelf->__PVT__r_wins)
                                                            ? 1U
                                                            : 0U)))
                                                       ? 
                                                      __Vtemp212[0x13U]
                                                       : 
                                                      VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x13U]));
    vlSelf->__PVT__monitor__DOT___GEN_23[0x14U] = (
                                                   VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x14U] 
                                                   & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                        & (0U 
                                                           == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                       & (6U 
                                                          != 
                                                          ((IData)(vlSelf->__PVT__r_wins)
                                                            ? 1U
                                                            : 0U)))
                                                       ? 
                                                      __Vtemp212[0x14U]
                                                       : 
                                                      VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x14U]));
    vlSelf->__PVT__monitor__DOT___GEN_23[0x15U] = (
                                                   VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x15U] 
                                                   & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                        & (0U 
                                                           == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                       & (6U 
                                                          != 
                                                          ((IData)(vlSelf->__PVT__r_wins)
                                                            ? 1U
                                                            : 0U)))
                                                       ? 
                                                      __Vtemp212[0x15U]
                                                       : 
                                                      VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x15U]));
    vlSelf->__PVT__monitor__DOT___GEN_23[0x16U] = (
                                                   VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x16U] 
                                                   & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                        & (0U 
                                                           == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                       & (6U 
                                                          != 
                                                          ((IData)(vlSelf->__PVT__r_wins)
                                                            ? 1U
                                                            : 0U)))
                                                       ? 
                                                      __Vtemp212[0x16U]
                                                       : 
                                                      VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x16U]));
    vlSelf->__PVT__monitor__DOT___GEN_23[0x17U] = (
                                                   VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x17U] 
                                                   & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                        & (0U 
                                                           == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                       & (6U 
                                                          != 
                                                          ((IData)(vlSelf->__PVT__r_wins)
                                                            ? 1U
                                                            : 0U)))
                                                       ? 
                                                      __Vtemp212[0x17U]
                                                       : 
                                                      VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x17U]));
    vlSelf->__PVT__monitor__DOT___GEN_23[0x18U] = (
                                                   VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x18U] 
                                                   & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                        & (0U 
                                                           == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                       & (6U 
                                                          != 
                                                          ((IData)(vlSelf->__PVT__r_wins)
                                                            ? 1U
                                                            : 0U)))
                                                       ? 
                                                      __Vtemp212[0x18U]
                                                       : 
                                                      VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x18U]));
    vlSelf->__PVT__monitor__DOT___GEN_23[0x19U] = (
                                                   VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x19U] 
                                                   & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                        & (0U 
                                                           == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                       & (6U 
                                                          != 
                                                          ((IData)(vlSelf->__PVT__r_wins)
                                                            ? 1U
                                                            : 0U)))
                                                       ? 
                                                      __Vtemp212[0x19U]
                                                       : 
                                                      VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x19U]));
    vlSelf->__PVT__monitor__DOT___GEN_23[0x1aU] = (
                                                   VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1aU] 
                                                   & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                        & (0U 
                                                           == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                       & (6U 
                                                          != 
                                                          ((IData)(vlSelf->__PVT__r_wins)
                                                            ? 1U
                                                            : 0U)))
                                                       ? 
                                                      __Vtemp212[0x1aU]
                                                       : 
                                                      VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1aU]));
    vlSelf->__PVT__monitor__DOT___GEN_23[0x1bU] = (
                                                   VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1bU] 
                                                   & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                        & (0U 
                                                           == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                       & (6U 
                                                          != 
                                                          ((IData)(vlSelf->__PVT__r_wins)
                                                            ? 1U
                                                            : 0U)))
                                                       ? 
                                                      __Vtemp212[0x1bU]
                                                       : 
                                                      VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1bU]));
    vlSelf->__PVT__monitor__DOT___GEN_23[0x1cU] = (
                                                   VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1cU] 
                                                   & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                        & (0U 
                                                           == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                       & (6U 
                                                          != 
                                                          ((IData)(vlSelf->__PVT__r_wins)
                                                            ? 1U
                                                            : 0U)))
                                                       ? 
                                                      __Vtemp212[0x1cU]
                                                       : 
                                                      VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1cU]));
    vlSelf->__PVT__monitor__DOT___GEN_23[0x1dU] = (
                                                   VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1dU] 
                                                   & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                        & (0U 
                                                           == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                       & (6U 
                                                          != 
                                                          ((IData)(vlSelf->__PVT__r_wins)
                                                            ? 1U
                                                            : 0U)))
                                                       ? 
                                                      __Vtemp212[0x1dU]
                                                       : 
                                                      VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1dU]));
    vlSelf->__PVT__monitor__DOT___GEN_23[0x1eU] = (
                                                   VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1eU] 
                                                   & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                        & (0U 
                                                           == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                       & (6U 
                                                          != 
                                                          ((IData)(vlSelf->__PVT__r_wins)
                                                            ? 1U
                                                            : 0U)))
                                                       ? 
                                                      __Vtemp212[0x1eU]
                                                       : 
                                                      VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1eU]));
    vlSelf->__PVT__monitor__DOT___GEN_23[0x1fU] = (
                                                   VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1fU] 
                                                   & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                        & (0U 
                                                           == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                       & (6U 
                                                          != 
                                                          ((IData)(vlSelf->__PVT__r_wins)
                                                            ? 1U
                                                            : 0U)))
                                                       ? 
                                                      __Vtemp212[0x1fU]
                                                       : 
                                                      VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1fU]));
    vlSelf->__PVT__monitor__DOT___GEN_23[0x20U] = (
                                                   VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x20U] 
                                                   & ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                        & (0U 
                                                           == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                       & (6U 
                                                          != 
                                                          ((IData)(vlSelf->__PVT__r_wins)
                                                            ? 1U
                                                            : 0U)))
                                                       ? 
                                                      __Vtemp212[0x20U]
                                                       : 
                                                      VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x20U]));
    vlSelf->__PVT__queue_arw_deq_io_deq_bits_size = 
        ((IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full)
          ? vlSelf->__PVT__queue_arw_deq__DOT__ram_size
         [0U] : (IData)(vlSelf->__PVT__queue_arw_deq_io_enq_bits_size));
    vlSelf->__PVT__monitor__DOT__mask_acc_2 = ((IData)(vlSelf->__PVT__monitor__DOT__mask_acc) 
                                               | (3U 
                                                  & ((((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                                      >> 1U) 
                                                     & (IData)(vlSelf->__PVT__monitor__DOT__mask_eq_2))));
    vlSelf->__PVT__monitor__DOT__mask_acc_3 = ((IData)(vlSelf->__PVT__monitor__DOT__mask_acc) 
                                               | (3U 
                                                  & ((((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                                      >> 1U) 
                                                     & (IData)(vlSelf->__PVT__monitor__DOT__mask_eq_3))));
    vlSelf->__PVT__monitor__DOT__mask_acc_4 = ((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_1) 
                                               | (3U 
                                                  & ((((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                                      >> 1U) 
                                                     & (IData)(vlSelf->__PVT__monitor__DOT__mask_eq_4))));
    vlSelf->__PVT__monitor__DOT__mask_acc_5 = ((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_1) 
                                               | (3U 
                                                  & ((((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                                      >> 1U) 
                                                     & (IData)(vlSelf->__PVT__monitor__DOT__mask_eq_5))));
    __PVT___GEN_43 = ((0x29U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                       ? 1U : ((0x28U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                ? 1U : ((0x27U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                         ? 1U : ((0x26U 
                                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                  ? 1U
                                                  : 
                                                 ((0x25U 
                                                   == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                   ? 1U
                                                   : 
                                                  ((0x24U 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                    ? 1U
                                                    : 
                                                   ((0x23U 
                                                     == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                     ? 1U
                                                     : 
                                                    ((0x22U 
                                                      == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                      ? 1U
                                                      : 
                                                     ((0x21U 
                                                       == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                       ? 1U
                                                       : 
                                                      ((0x20U 
                                                        == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                        ? 1U
                                                        : 
                                                       ((0x1fU 
                                                         == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                         ? 0U
                                                         : 
                                                        ((0x1eU 
                                                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                          ? 0U
                                                          : 
                                                         ((0x1dU 
                                                           == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                           ? 0U
                                                           : 
                                                          ((0x1cU 
                                                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                            ? 0U
                                                            : 
                                                           ((0x1bU 
                                                             == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                             ? 0U
                                                             : 
                                                            ((0x1aU 
                                                              == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                              ? 0U
                                                              : 
                                                             ((0x19U 
                                                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                               ? 0U
                                                               : 
                                                              ((0x18U 
                                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                ? 0U
                                                                : 
                                                               ((0x17U 
                                                                 == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                 ? 0U
                                                                 : 
                                                                ((0x16U 
                                                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                  ? 0U
                                                                  : 
                                                                 ((0x15U 
                                                                   == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                   ? 0U
                                                                   : (IData)(__PVT___GEN_22))))))))))))))))))))));
    vlSelf->__PVT__deq_io_enq_bits_last = ((1U == (IData)(vlSelf->__PVT__counter)) 
                                           | (0U == (IData)(vlSelf->__PVT__beats1)));
    __PVT___GEN_151 = ((0x15U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                        ? (IData)(vlSelf->__PVT__idStall_0)
                        : ((0x14U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                            ? (IData)(vlSelf->__PVT__idStall_0)
                            : ((0x13U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                ? (IData)(vlSelf->__PVT__idStall_0)
                                : ((0x12U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                    ? (IData)(vlSelf->__PVT__idStall_0)
                                    : ((0x11U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                        ? (IData)(vlSelf->__PVT__idStall_0)
                                        : ((0x10U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                            ? (IData)(vlSelf->__PVT__idStall_0)
                                            : ((0xfU 
                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                ? (IData)(vlSelf->__PVT__count_23)
                                                : (
                                                   (0xeU 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                    ? (IData)(vlSelf->__PVT__count_22)
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                     ? (IData)(vlSelf->__PVT__count_21)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                      ? (IData)(vlSelf->__PVT__count_20)
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                       ? (IData)(vlSelf->__PVT__count_19)
                                                       : 
                                                      ((0xaU 
                                                        == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                        ? (IData)(vlSelf->__PVT__count_18)
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                         ? (IData)(vlSelf->__PVT__count_17)
                                                         : 
                                                        ((8U 
                                                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                          ? (IData)(vlSelf->__PVT__count_16)
                                                          : 
                                                         ((7U 
                                                           == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                           ? (IData)(vlSelf->__PVT__count_15)
                                                           : 
                                                          ((6U 
                                                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                            ? (IData)(vlSelf->__PVT__count_14)
                                                            : 
                                                           ((5U 
                                                             == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                             ? (IData)(vlSelf->__PVT__count_13)
                                                             : 
                                                            ((4U 
                                                              == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                              ? (IData)(vlSelf->__PVT__count_12)
                                                              : 
                                                             ((3U 
                                                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                               ? (IData)(vlSelf->__PVT__count_11)
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                ? (IData)(vlSelf->__PVT__count_10)
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                 ? (IData)(vlSelf->__PVT__count_9)
                                                                 : (IData)(vlSelf->__PVT__count_8))))))))))))))))))))));
    vlSelf->__PVT__monitor__DOT__mask = ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_5) 
                                           | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_5) 
                                              & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)) 
                                          << 7U) | 
                                         ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_5) 
                                            | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_5) 
                                               & (~ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))) 
                                           << 6U) | 
                                          ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_4) 
                                             | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_4) 
                                                & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)) 
                                            << 5U) 
                                           | ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_4) 
                                                | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_4) 
                                                   & (~ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))) 
                                               << 4U) 
                                              | ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_3) 
                                                   | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_3) 
                                                      & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)) 
                                                  << 3U) 
                                                 | ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_3) 
                                                      | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_3) 
                                                         & (~ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))) 
                                                     << 2U) 
                                                    | ((((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_2) 
                                                         | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_2) 
                                                            & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)) 
                                                        << 1U) 
                                                       | ((IData)(vlSelf->__PVT__monitor__DOT__mask_acc_2) 
                                                          | ((IData)(vlSelf->__PVT__monitor__DOT__mask_eq_2) 
                                                             & (~ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))))))));
    __PVT___GEN_64 = ((0x3eU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                       ? 2U : ((0x3dU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                ? 2U : ((0x3cU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                         ? 2U : ((0x3bU 
                                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                  ? 2U
                                                  : 
                                                 ((0x3aU 
                                                   == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                   ? 2U
                                                   : 
                                                  ((0x39U 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                    ? 2U
                                                    : 
                                                   ((0x38U 
                                                     == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                     ? 2U
                                                     : 
                                                    ((0x37U 
                                                      == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                      ? 2U
                                                      : 
                                                     ((0x36U 
                                                       == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                       ? 2U
                                                       : 
                                                      ((0x35U 
                                                        == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                        ? 2U
                                                        : 
                                                       ((0x34U 
                                                         == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                         ? 2U
                                                         : 
                                                        ((0x33U 
                                                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                          ? 2U
                                                          : 
                                                         ((0x32U 
                                                           == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                           ? 2U
                                                           : 
                                                          ((0x31U 
                                                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                            ? 2U
                                                            : 
                                                           ((0x30U 
                                                             == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                             ? 2U
                                                             : 
                                                            ((0x2fU 
                                                              == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                              ? 1U
                                                              : 
                                                             ((0x2eU 
                                                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                               ? 1U
                                                               : 
                                                              ((0x2dU 
                                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                ? 1U
                                                                : 
                                                               ((0x2cU 
                                                                 == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                 ? 1U
                                                                 : 
                                                                ((0x2bU 
                                                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                  ? 1U
                                                                  : 
                                                                 ((0x2aU 
                                                                   == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                   ? 1U
                                                                   : (IData)(__PVT___GEN_43))))))))))))))))))))));
    __PVT___GEN_172 = ((0x2aU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                        ? (IData)(vlSelf->__PVT__idStall_1)
                        : ((0x29U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                            ? (IData)(vlSelf->__PVT__idStall_1)
                            : ((0x28U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                ? (IData)(vlSelf->__PVT__idStall_1)
                                : ((0x27U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                    ? (IData)(vlSelf->__PVT__idStall_1)
                                    : ((0x26U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                        ? (IData)(vlSelf->__PVT__idStall_1)
                                        : ((0x25U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                            ? (IData)(vlSelf->__PVT__idStall_1)
                                            : ((0x24U 
                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                ? (IData)(vlSelf->__PVT__idStall_1)
                                                : (
                                                   (0x23U 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                    ? (IData)(vlSelf->__PVT__idStall_1)
                                                    : 
                                                   ((0x22U 
                                                     == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                     ? (IData)(vlSelf->__PVT__idStall_1)
                                                     : 
                                                    ((0x21U 
                                                      == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                      ? (IData)(vlSelf->__PVT__idStall_1)
                                                      : 
                                                     ((0x20U 
                                                       == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                       ? (IData)(vlSelf->__PVT__idStall_1)
                                                       : 
                                                      ((0x1fU 
                                                        == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                        ? (IData)(vlSelf->__PVT__idStall_0)
                                                        : 
                                                       ((0x1eU 
                                                         == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                         ? (IData)(vlSelf->__PVT__idStall_0)
                                                         : 
                                                        ((0x1dU 
                                                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                          ? (IData)(vlSelf->__PVT__idStall_0)
                                                          : 
                                                         ((0x1cU 
                                                           == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                           ? (IData)(vlSelf->__PVT__idStall_0)
                                                           : 
                                                          ((0x1bU 
                                                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                            ? (IData)(vlSelf->__PVT__idStall_0)
                                                            : 
                                                           ((0x1aU 
                                                             == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                             ? (IData)(vlSelf->__PVT__idStall_0)
                                                             : 
                                                            ((0x19U 
                                                              == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                              ? (IData)(vlSelf->__PVT__idStall_0)
                                                              : 
                                                             ((0x18U 
                                                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                               ? (IData)(vlSelf->__PVT__idStall_0)
                                                               : 
                                                              ((0x17U 
                                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                ? (IData)(vlSelf->__PVT__idStall_0)
                                                                : 
                                                               ((0x16U 
                                                                 == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                 ? (IData)(vlSelf->__PVT__idStall_0)
                                                                 : (IData)(__PVT___GEN_151))))))))))))))))))))));
    __PVT___GEN_85 = ((0x53U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                       ? 4U : ((0x52U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                ? 4U : ((0x51U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                         ? 4U : ((0x50U 
                                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                  ? 4U
                                                  : 
                                                 ((0x4fU 
                                                   == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                   ? 3U
                                                   : 
                                                  ((0x4eU 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                    ? 3U
                                                    : 
                                                   ((0x4dU 
                                                     == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                     ? 3U
                                                     : 
                                                    ((0x4cU 
                                                      == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                      ? 3U
                                                      : 
                                                     ((0x4bU 
                                                       == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                       ? 3U
                                                       : 
                                                      ((0x4aU 
                                                        == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                        ? 3U
                                                        : 
                                                       ((0x49U 
                                                         == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                         ? 3U
                                                         : 
                                                        ((0x48U 
                                                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                          ? 3U
                                                          : 
                                                         ((0x47U 
                                                           == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                           ? 3U
                                                           : 
                                                          ((0x46U 
                                                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                            ? 3U
                                                            : 
                                                           ((0x45U 
                                                             == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                             ? 3U
                                                             : 
                                                            ((0x44U 
                                                              == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                              ? 3U
                                                              : 
                                                             ((0x43U 
                                                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                               ? 3U
                                                               : 
                                                              ((0x42U 
                                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                ? 3U
                                                                : 
                                                               ((0x41U 
                                                                 == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                 ? 3U
                                                                 : 
                                                                ((0x40U 
                                                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                  ? 3U
                                                                  : 
                                                                 ((0x3fU 
                                                                   == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                   ? 2U
                                                                   : (IData)(__PVT___GEN_64))))))))))))))))))))));
    __PVT___GEN_193 = ((0x3fU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                        ? (IData)(vlSelf->__PVT__idStall_2)
                        : ((0x3eU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                            ? (IData)(vlSelf->__PVT__idStall_2)
                            : ((0x3dU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                ? (IData)(vlSelf->__PVT__idStall_2)
                                : ((0x3cU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                    ? (IData)(vlSelf->__PVT__idStall_2)
                                    : ((0x3bU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                        ? (IData)(vlSelf->__PVT__idStall_2)
                                        : ((0x3aU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                            ? (IData)(vlSelf->__PVT__idStall_2)
                                            : ((0x39U 
                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                ? (IData)(vlSelf->__PVT__idStall_2)
                                                : (
                                                   (0x38U 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                    ? (IData)(vlSelf->__PVT__idStall_2)
                                                    : 
                                                   ((0x37U 
                                                     == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                     ? (IData)(vlSelf->__PVT__idStall_2)
                                                     : 
                                                    ((0x36U 
                                                      == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                      ? (IData)(vlSelf->__PVT__idStall_2)
                                                      : 
                                                     ((0x35U 
                                                       == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                       ? (IData)(vlSelf->__PVT__idStall_2)
                                                       : 
                                                      ((0x34U 
                                                        == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                        ? (IData)(vlSelf->__PVT__idStall_2)
                                                        : 
                                                       ((0x33U 
                                                         == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                         ? (IData)(vlSelf->__PVT__idStall_2)
                                                         : 
                                                        ((0x32U 
                                                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                          ? (IData)(vlSelf->__PVT__idStall_2)
                                                          : 
                                                         ((0x31U 
                                                           == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                           ? (IData)(vlSelf->__PVT__idStall_2)
                                                           : 
                                                          ((0x30U 
                                                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                            ? (IData)(vlSelf->__PVT__idStall_2)
                                                            : 
                                                           ((0x2fU 
                                                             == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                             ? (IData)(vlSelf->__PVT__idStall_1)
                                                             : 
                                                            ((0x2eU 
                                                              == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                              ? (IData)(vlSelf->__PVT__idStall_1)
                                                              : 
                                                             ((0x2dU 
                                                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                               ? (IData)(vlSelf->__PVT__idStall_1)
                                                               : 
                                                              ((0x2cU 
                                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                ? (IData)(vlSelf->__PVT__idStall_1)
                                                                : 
                                                               ((0x2bU 
                                                                 == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                 ? (IData)(vlSelf->__PVT__idStall_1)
                                                                 : (IData)(__PVT___GEN_172))))))))))))))))))))));
    __PVT___GEN_106 = ((0x68U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                        ? 5U : ((0x67U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                 ? 5U : ((0x66U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                          ? 5U : ((0x65U 
                                                   == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                   ? 5U
                                                   : 
                                                  ((0x64U 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                    ? 5U
                                                    : 
                                                   ((0x63U 
                                                     == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                     ? 5U
                                                     : 
                                                    ((0x62U 
                                                      == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                      ? 5U
                                                      : 
                                                     ((0x61U 
                                                       == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                       ? 5U
                                                       : 
                                                      ((0x60U 
                                                        == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                        ? 5U
                                                        : 
                                                       ((0x5fU 
                                                         == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                         ? 4U
                                                         : 
                                                        ((0x5eU 
                                                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                          ? 4U
                                                          : 
                                                         ((0x5dU 
                                                           == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                           ? 4U
                                                           : 
                                                          ((0x5cU 
                                                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                            ? 4U
                                                            : 
                                                           ((0x5bU 
                                                             == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                             ? 4U
                                                             : 
                                                            ((0x5aU 
                                                              == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                              ? 4U
                                                              : 
                                                             ((0x59U 
                                                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                               ? 4U
                                                               : 
                                                              ((0x58U 
                                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                ? 4U
                                                                : 
                                                               ((0x57U 
                                                                 == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                 ? 4U
                                                                 : 
                                                                ((0x56U 
                                                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                  ? 4U
                                                                  : 
                                                                 ((0x55U 
                                                                   == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                   ? 4U
                                                                   : 
                                                                  ((0x54U 
                                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                    ? 4U
                                                                    : (IData)(__PVT___GEN_85))))))))))))))))))))));
    __PVT___GEN_214 = ((0x54U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                        ? (IData)(vlSelf->__PVT__idStall_4)
                        : ((0x53U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                            ? (IData)(vlSelf->__PVT__idStall_4)
                            : ((0x52U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                ? (IData)(vlSelf->__PVT__idStall_4)
                                : ((0x51U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                    ? (IData)(vlSelf->__PVT__idStall_4)
                                    : ((0x50U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                        ? (IData)(vlSelf->__PVT__idStall_4)
                                        : ((0x4fU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                            ? (IData)(vlSelf->__PVT__idStall_3)
                                            : ((0x4eU 
                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                ? (IData)(vlSelf->__PVT__idStall_3)
                                                : (
                                                   (0x4dU 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                    ? (IData)(vlSelf->__PVT__idStall_3)
                                                    : 
                                                   ((0x4cU 
                                                     == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                     ? (IData)(vlSelf->__PVT__idStall_3)
                                                     : 
                                                    ((0x4bU 
                                                      == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                      ? (IData)(vlSelf->__PVT__idStall_3)
                                                      : 
                                                     ((0x4aU 
                                                       == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                       ? (IData)(vlSelf->__PVT__idStall_3)
                                                       : 
                                                      ((0x49U 
                                                        == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                        ? (IData)(vlSelf->__PVT__idStall_3)
                                                        : 
                                                       ((0x48U 
                                                         == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                         ? (IData)(vlSelf->__PVT__idStall_3)
                                                         : 
                                                        ((0x47U 
                                                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                          ? (IData)(vlSelf->__PVT__idStall_3)
                                                          : 
                                                         ((0x46U 
                                                           == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                           ? (IData)(vlSelf->__PVT__idStall_3)
                                                           : 
                                                          ((0x45U 
                                                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                            ? (IData)(vlSelf->__PVT__idStall_3)
                                                            : 
                                                           ((0x44U 
                                                             == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                             ? (IData)(vlSelf->__PVT__idStall_3)
                                                             : 
                                                            ((0x43U 
                                                              == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                              ? (IData)(vlSelf->__PVT__idStall_3)
                                                              : 
                                                             ((0x42U 
                                                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                               ? (IData)(vlSelf->__PVT__idStall_3)
                                                               : 
                                                              ((0x41U 
                                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                ? (IData)(vlSelf->__PVT__idStall_3)
                                                                : 
                                                               ((0x40U 
                                                                 == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                 ? (IData)(vlSelf->__PVT__idStall_3)
                                                                 : (IData)(__PVT___GEN_193))))))))))))))))))))));
    __PVT___GEN_127 = ((0x7dU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                        ? 6U : ((0x7cU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                 ? 6U : ((0x7bU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                          ? 6U : ((0x7aU 
                                                   == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                   ? 6U
                                                   : 
                                                  ((0x79U 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                    ? 6U
                                                    : 
                                                   ((0x78U 
                                                     == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                     ? 6U
                                                     : 
                                                    ((0x77U 
                                                      == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                      ? 6U
                                                      : 
                                                     ((0x76U 
                                                       == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                       ? 6U
                                                       : 
                                                      ((0x75U 
                                                        == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                        ? 6U
                                                        : 
                                                       ((0x74U 
                                                         == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                         ? 6U
                                                         : 
                                                        ((0x73U 
                                                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                          ? 6U
                                                          : 
                                                         ((0x72U 
                                                           == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                           ? 6U
                                                           : 
                                                          ((0x71U 
                                                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                            ? 6U
                                                            : 
                                                           ((0x70U 
                                                             == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                             ? 6U
                                                             : 
                                                            ((0x6fU 
                                                              == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                              ? 5U
                                                              : 
                                                             ((0x6eU 
                                                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                               ? 5U
                                                               : 
                                                              ((0x6dU 
                                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                ? 5U
                                                                : 
                                                               ((0x6cU 
                                                                 == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                 ? 5U
                                                                 : 
                                                                ((0x6bU 
                                                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                  ? 5U
                                                                  : 
                                                                 ((0x6aU 
                                                                   == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                   ? 5U
                                                                   : 
                                                                  ((0x69U 
                                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                    ? 5U
                                                                    : (IData)(__PVT___GEN_106))))))))))))))))))))));
    __PVT___GEN_235 = ((0x69U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                        ? (IData)(vlSelf->__PVT__idStall_5)
                        : ((0x68U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                            ? (IData)(vlSelf->__PVT__idStall_5)
                            : ((0x67U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                ? (IData)(vlSelf->__PVT__idStall_5)
                                : ((0x66U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                    ? (IData)(vlSelf->__PVT__idStall_5)
                                    : ((0x65U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                        ? (IData)(vlSelf->__PVT__idStall_5)
                                        : ((0x64U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                            ? (IData)(vlSelf->__PVT__idStall_5)
                                            : ((0x63U 
                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                ? (IData)(vlSelf->__PVT__idStall_5)
                                                : (
                                                   (0x62U 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                    ? (IData)(vlSelf->__PVT__idStall_5)
                                                    : 
                                                   ((0x61U 
                                                     == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                     ? (IData)(vlSelf->__PVT__idStall_5)
                                                     : 
                                                    ((0x60U 
                                                      == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                      ? (IData)(vlSelf->__PVT__idStall_5)
                                                      : 
                                                     ((0x5fU 
                                                       == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                       ? (IData)(vlSelf->__PVT__idStall_4)
                                                       : 
                                                      ((0x5eU 
                                                        == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                        ? (IData)(vlSelf->__PVT__idStall_4)
                                                        : 
                                                       ((0x5dU 
                                                         == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                         ? (IData)(vlSelf->__PVT__idStall_4)
                                                         : 
                                                        ((0x5cU 
                                                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                          ? (IData)(vlSelf->__PVT__idStall_4)
                                                          : 
                                                         ((0x5bU 
                                                           == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                           ? (IData)(vlSelf->__PVT__idStall_4)
                                                           : 
                                                          ((0x5aU 
                                                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                            ? (IData)(vlSelf->__PVT__idStall_4)
                                                            : 
                                                           ((0x59U 
                                                             == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                             ? (IData)(vlSelf->__PVT__idStall_4)
                                                             : 
                                                            ((0x58U 
                                                              == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                              ? (IData)(vlSelf->__PVT__idStall_4)
                                                              : 
                                                             ((0x57U 
                                                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                               ? (IData)(vlSelf->__PVT__idStall_4)
                                                               : 
                                                              ((0x56U 
                                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                ? (IData)(vlSelf->__PVT__idStall_4)
                                                                : 
                                                               ((0x55U 
                                                                 == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                 ? (IData)(vlSelf->__PVT__idStall_4)
                                                                 : (IData)(__PVT___GEN_214))))))))))))))))))))));
    if ((0x7eU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))) {
        __PVT___GEN_128 = 6U;
        __PVT___GEN_256 = vlSelf->__PVT__idStall_6;
    } else {
        __PVT___GEN_128 = __PVT___GEN_127;
        __PVT___GEN_256 = ((0x7dU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                            ? (IData)(vlSelf->__PVT__idStall_6)
                            : ((0x7cU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                ? (IData)(vlSelf->__PVT__idStall_6)
                                : ((0x7bU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                    ? (IData)(vlSelf->__PVT__idStall_6)
                                    : ((0x7aU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                        ? (IData)(vlSelf->__PVT__idStall_6)
                                        : ((0x79U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                            ? (IData)(vlSelf->__PVT__idStall_6)
                                            : ((0x78U 
                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                ? (IData)(vlSelf->__PVT__idStall_6)
                                                : (
                                                   (0x77U 
                                                    == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                    ? (IData)(vlSelf->__PVT__idStall_6)
                                                    : 
                                                   ((0x76U 
                                                     == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                     ? (IData)(vlSelf->__PVT__idStall_6)
                                                     : 
                                                    ((0x75U 
                                                      == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                      ? (IData)(vlSelf->__PVT__idStall_6)
                                                      : 
                                                     ((0x74U 
                                                       == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                       ? (IData)(vlSelf->__PVT__idStall_6)
                                                       : 
                                                      ((0x73U 
                                                        == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                        ? (IData)(vlSelf->__PVT__idStall_6)
                                                        : 
                                                       ((0x72U 
                                                         == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                         ? (IData)(vlSelf->__PVT__idStall_6)
                                                         : 
                                                        ((0x71U 
                                                          == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                          ? (IData)(vlSelf->__PVT__idStall_6)
                                                          : 
                                                         ((0x70U 
                                                           == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                           ? (IData)(vlSelf->__PVT__idStall_6)
                                                           : 
                                                          ((0x6fU 
                                                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                            ? (IData)(vlSelf->__PVT__idStall_5)
                                                            : 
                                                           ((0x6eU 
                                                             == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                             ? (IData)(vlSelf->__PVT__idStall_5)
                                                             : 
                                                            ((0x6dU 
                                                              == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                              ? (IData)(vlSelf->__PVT__idStall_5)
                                                              : 
                                                             ((0x6cU 
                                                               == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                               ? (IData)(vlSelf->__PVT__idStall_5)
                                                               : 
                                                              ((0x6bU 
                                                                == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                ? (IData)(vlSelf->__PVT__idStall_5)
                                                                : 
                                                               ((0x6aU 
                                                                 == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                 ? (IData)(vlSelf->__PVT__idStall_5)
                                                                 : (IData)(__PVT___GEN_235)))))))))))))))))))));
    }
    if ((0x7fU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))) {
        vlSelf->__PVT__out_arw_bits_id = 6U;
        vlSelf->__PVT__queue_arw_deq_io_enq_bits_id = 6U;
    } else {
        vlSelf->__PVT__out_arw_bits_id = __PVT___GEN_128;
        vlSelf->__PVT__queue_arw_deq_io_enq_bits_id 
            = __PVT___GEN_128;
    }
    vlSelf->__PVT__stall = (((0x7fU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                              ? (IData)(vlSelf->__PVT__idStall_6)
                              : (IData)(__PVT___GEN_256)) 
                            & (0U == (IData)(vlSelf->__PVT__counter)));
    vlSelf->__PVT__queue_arw_deq_io_deq_bits_id = ((IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full)
                                                    ? 
                                                   vlSelf->__PVT__queue_arw_deq__DOT__ram_id
                                                   [0U]
                                                    : (IData)(vlSelf->__PVT__queue_arw_deq_io_enq_bits_id));
    vlSelf->__PVT___T = (((~ (IData)(vlSelf->__PVT__stall)) 
                          & (IData)(vlSelf->__PVT___bundleIn_0_a_ready_T_3)) 
                         & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid));
    vlSelf->__PVT__monitor_io_in_a_ready = ((~ (IData)(vlSelf->__PVT__stall)) 
                                            & (IData)(vlSelf->__PVT___bundleIn_0_a_ready_T_3));
    vlSelf->__PVT___inc_T = ((~ (IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full)) 
                             & (((~ (IData)(vlSelf->__PVT__stall)) 
                                 & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid)) 
                                & (IData)(vlSelf->__PVT___out_arw_valid_T_4)));
    vlSelf->__PVT__deq_io_enq_valid = ((((~ (IData)(vlSelf->__PVT__stall)) 
                                         & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid)) 
                                        & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                              >> 2U))) 
                                       & ((IData)(vlSelf->__PVT__doneAW) 
                                          | (~ (IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full))));
    vlSelf->__PVT__queue_arw_deq_io_enq_valid = (((~ (IData)(vlSelf->__PVT__stall)) 
                                                  & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid)) 
                                                 & (IData)(vlSelf->__PVT___out_arw_valid_T_4));
    vlSelf->auto_in_a_ready = ((~ (IData)(vlSelf->__PVT__stall)) 
                               & (IData)(vlSelf->__PVT___bundleIn_0_a_ready_T_3));
    vlSelf->__PVT__monitor__DOT___a_first_T = ((IData)(vlSelf->__PVT__monitor_io_in_a_ready) 
                                               & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid));
    vlSelf->__PVT___count_T_30 = (1U & ((IData)(vlSelf->__PVT__count_8) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_34 = (1U & ((IData)(vlSelf->__PVT__count_9) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 8U) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_38 = (1U & ((IData)(vlSelf->__PVT__count_10) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 9U) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_42 = (1U & ((IData)(vlSelf->__PVT__count_11) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 0xaU) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_46 = (1U & ((IData)(vlSelf->__PVT__count_12) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 0xbU) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_50 = (1U & ((IData)(vlSelf->__PVT__count_13) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 0xcU) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_54 = (1U & ((IData)(vlSelf->__PVT__count_14) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 0xdU) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_58 = (1U & ((IData)(vlSelf->__PVT__count_15) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 0xeU) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_62 = (1U & ((IData)(vlSelf->__PVT__count_16) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 0xfU) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_66 = (1U & ((IData)(vlSelf->__PVT__count_17) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 0x10U) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_70 = (1U & ((IData)(vlSelf->__PVT__count_18) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 0x11U) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_74 = (1U & ((IData)(vlSelf->__PVT__count_19) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 0x12U) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_78 = (1U & ((IData)(vlSelf->__PVT__count_20) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 0x13U) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_82 = (1U & ((IData)(vlSelf->__PVT__count_21) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 0x14U) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_86 = (1U & ((IData)(vlSelf->__PVT__count_22) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 0x15U) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT___count_T_90 = (1U & ((IData)(vlSelf->__PVT__count_23) 
                                        + ((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                            >> 0x16U) 
                                           & (IData)(vlSelf->__PVT___inc_T))));
    vlSelf->__PVT__inc = (((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                          & (IData)(vlSelf->__PVT___inc_T));
    vlSelf->__PVT__inc_1 = ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                             >> 1U) & (IData)(vlSelf->__PVT___inc_T));
    vlSelf->__PVT__inc_2 = ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                             >> 2U) & (IData)(vlSelf->__PVT___inc_T));
    vlSelf->__PVT__inc_3 = ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                             >> 3U) & (IData)(vlSelf->__PVT___inc_T));
    vlSelf->__PVT__inc_4 = ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                             >> 4U) & (IData)(vlSelf->__PVT___inc_T));
    vlSelf->__PVT__inc_5 = ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                             >> 5U) & (IData)(vlSelf->__PVT___inc_T));
    vlSelf->__PVT__inc_6 = ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                             >> 6U) & (IData)(vlSelf->__PVT___inc_T));
    vlSelf->__PVT__deq__DOT___do_enq_T = ((~ (IData)(vlSelf->__PVT__deq__DOT__maybe_full)) 
                                          & (IData)(vlSelf->__PVT__deq_io_enq_valid));
    vlSelf->__PVT__deq_io_deq_valid = ((IData)(vlSelf->__PVT__deq_io_enq_valid) 
                                       | (IData)(vlSelf->__PVT__deq__DOT__maybe_full));
    vlSelf->__PVT__queue_arw_deq__DOT___do_enq_T = 
        ((~ (IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full)) 
         & (IData)(vlSelf->__PVT__queue_arw_deq_io_enq_valid));
    vlSelf->__PVT__queue_arw_deq_io_deq_valid = ((IData)(vlSelf->__PVT__queue_arw_deq_io_enq_valid) 
                                                 | (IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full));
    VL_EXTEND_WI(1027,4, __Vtemp216, (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp217, __Vtemp216, 
                  ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                   << 2U));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_opcodes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp217[0U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[0U]));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_opcodes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp217[1U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[1U]));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_opcodes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp217[2U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[2U]));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_opcodes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp217[3U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[3U]));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_opcodes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp217[4U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[4U]));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_opcodes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp217[5U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[5U]));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_opcodes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp217[6U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[6U]));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_opcodes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp217[7U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[7U]));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_opcodes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp217[8U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[8U]));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_opcodes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp217[9U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[9U]));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp217[0xaU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[0xaU]));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp217[0xbU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[0xbU]));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp217[0xcU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[0xcU]));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp217[0xdU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[0xdU]));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp217[0xeU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[0xeU]));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp217[0xfU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[0xfU]));
    VL_EXTEND_WI(1027,4, __Vtemp226, (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | (0xeU 
                                                & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size) 
                                                   << 1U)))
                                       : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp227, __Vtemp226, 
                  ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                   << 2U));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_sizes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp227[0U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[0U]));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_sizes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp227[1U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[1U]));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_sizes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp227[2U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[2U]));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_sizes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp227[3U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[3U]));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_sizes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp227[4U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[4U]));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_sizes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp227[5U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[5U]));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_sizes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp227[6U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[6U]));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_sizes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp227[7U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[7U]));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_sizes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp227[8U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[8U]));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_sizes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp227[9U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[9U]));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_sizes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp227[0xaU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[0xaU]));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_sizes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp227[0xbU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[0xbU]));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_sizes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp227[0xcU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[0xcU]));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_sizes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp227[0xdU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[0xdU]));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_sizes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp227[0xeU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[0xeU]));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlSelf->__PVT__monitor__DOT__inflight_sizes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
               & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp227[0xfU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU]))) 
           & (~ vlSelf->__PVT__monitor__DOT___GEN_23[0xfU]));
    __Vtemp236[0U] = 1U;
    __Vtemp236[1U] = 0U;
    __Vtemp236[2U] = 0U;
    __Vtemp236[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp237, __Vtemp236, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source));
    __Vtemp242[0U] = 1U;
    __Vtemp242[1U] = 0U;
    __Vtemp242[2U] = 0U;
    __Vtemp242[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp243, __Vtemp242, (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source));
    vlSelf->__PVT__monitor__DOT___inflight_T_2[0U] 
        = ((vlSelf->__PVT__monitor__DOT__inflight[0U] 
            | (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp237[0U] : 0U)) & (~ ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != 
                                                  ((IData)(vlSelf->__PVT__r_wins)
                                                    ? 1U
                                                    : 0U)))
                                               ? __Vtemp243[0U]
                                               : 0U)));
    vlSelf->__PVT__monitor__DOT___inflight_T_2[1U] 
        = ((vlSelf->__PVT__monitor__DOT__inflight[1U] 
            | (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp237[1U] : 0U)) & (~ ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != 
                                                  ((IData)(vlSelf->__PVT__r_wins)
                                                    ? 1U
                                                    : 0U)))
                                               ? __Vtemp243[1U]
                                               : 0U)));
    vlSelf->__PVT__monitor__DOT___inflight_T_2[2U] 
        = ((vlSelf->__PVT__monitor__DOT__inflight[2U] 
            | (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp237[2U] : 0U)) & (~ ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != 
                                                  ((IData)(vlSelf->__PVT__r_wins)
                                                    ? 1U
                                                    : 0U)))
                                               ? __Vtemp243[2U]
                                               : 0U)));
    vlSelf->__PVT__monitor__DOT___inflight_T_2[3U] 
        = ((vlSelf->__PVT__monitor__DOT__inflight[3U] 
            | (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp237[3U] : 0U)) & (~ ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != 
                                                  ((IData)(vlSelf->__PVT__r_wins)
                                                    ? 1U
                                                    : 0U)))
                                               ? __Vtemp243[3U]
                                               : 0U)));
    vlSelf->__PVT___count_T_4 = (0x1fU & (((IData)(vlSelf->__PVT__count_1) 
                                           + (IData)(vlSelf->__PVT__inc)) 
                                          - ((((IData)(1U) 
                                               << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                              & (IData)(vlSelf->__PVT__d_last)) 
                                             & (IData)(vlSelf->__PVT___dec_T_1))));
    vlSelf->__PVT___count_T_8 = (0x1fU & (((IData)(vlSelf->__PVT__count_2) 
                                           + (IData)(vlSelf->__PVT__inc_1)) 
                                          - (((((IData)(1U) 
                                                << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                               >> 1U) 
                                              & (IData)(vlSelf->__PVT__d_last)) 
                                             & (IData)(vlSelf->__PVT___dec_T_1))));
    vlSelf->__PVT___count_T_12 = (0x1fU & (((IData)(vlSelf->__PVT__count_3) 
                                            + (IData)(vlSelf->__PVT__inc_2)) 
                                           - (((((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                                >> 2U) 
                                               & (IData)(vlSelf->__PVT__d_last)) 
                                              & (IData)(vlSelf->__PVT___dec_T_1))));
    vlSelf->__PVT___count_T_16 = (0x1fU & (((IData)(vlSelf->__PVT__count_4) 
                                            + (IData)(vlSelf->__PVT__inc_3)) 
                                           - (((((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                                >> 3U) 
                                               & (IData)(vlSelf->__PVT__d_last)) 
                                              & (IData)(vlSelf->__PVT___dec_T_1))));
    vlSelf->__PVT___count_T_20 = (0x1fU & (((IData)(vlSelf->__PVT__count_5) 
                                            + (IData)(vlSelf->__PVT__inc_4)) 
                                           - (((((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                                >> 4U) 
                                               & (IData)(vlSelf->__PVT__d_last)) 
                                              & (IData)(vlSelf->__PVT___dec_T_1))));
    vlSelf->__PVT___count_T_24 = (0x1fU & (((IData)(vlSelf->__PVT__count_6) 
                                            + (IData)(vlSelf->__PVT__inc_5)) 
                                           - (((((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                                >> 5U) 
                                               & (IData)(vlSelf->__PVT__d_last)) 
                                              & (IData)(vlSelf->__PVT___dec_T_1))));
    vlSelf->__PVT___count_T_28 = (0x1fU & (((IData)(vlSelf->__PVT__count_7) 
                                            + (IData)(vlSelf->__PVT__inc_6)) 
                                           - (((((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                                >> 6U) 
                                               & (IData)(vlSelf->__PVT__d_last)) 
                                              & (IData)(vlSelf->__PVT___dec_T_1))));
    vlSelf->__PVT__deq__DOT___GEN_9 = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full) 
                                       & (IData)(vlSelf->__PVT__deq__DOT___do_enq_T));
    vlSelf->__PVT__deq__DOT__do_deq = ((IData)(vlSelf->__PVT__deq__DOT__maybe_full) 
                                       & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)) 
                                          & (IData)(vlSelf->__PVT__deq_io_deq_valid)));
    vlSelf->auto_out_arvalid = ((IData)(vlSelf->__PVT__queue_arw_deq_io_deq_valid) 
                                & (~ (IData)(vlSelf->__PVT__queue_arw_deq_io_deq_bits_wen)));
    vlSelf->auto_out_awvalid = ((IData)(vlSelf->__PVT__queue_arw_deq_io_deq_valid) 
                                & (IData)(vlSelf->__PVT__queue_arw_deq_io_deq_bits_wen));
    vlSelf->__PVT__deq__DOT__do_enq = ((IData)(vlSelf->__PVT__deq__DOT__maybe_full)
                                        ? (IData)(vlSelf->__PVT__deq__DOT___do_enq_T)
                                        : (IData)(vlSelf->__PVT__deq__DOT___GEN_9));
}

void VysyxSoCFull_TLToAXI4___ctor_var_reset(VysyxSoCFull_TLToAXI4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLToAXI4___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->auto_in_a_ready = VL_RAND_RESET_I(1);
    vlSelf->auto_in_a_valid = VL_RAND_RESET_I(1);
    vlSelf->auto_in_a_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->auto_in_a_bits_param = VL_RAND_RESET_I(3);
    vlSelf->auto_in_a_bits_size = VL_RAND_RESET_I(3);
    vlSelf->auto_in_a_bits_source = VL_RAND_RESET_I(7);
    vlSelf->auto_in_a_bits_address = VL_RAND_RESET_I(32);
    vlSelf->auto_in_a_bits_mask = VL_RAND_RESET_I(8);
    vlSelf->auto_in_a_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->auto_in_a_bits_corrupt = VL_RAND_RESET_I(1);
    vlSelf->auto_in_d_ready = VL_RAND_RESET_I(1);
    vlSelf->auto_in_d_valid = VL_RAND_RESET_I(1);
    vlSelf->auto_in_d_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->auto_in_d_bits_size = VL_RAND_RESET_I(3);
    vlSelf->auto_in_d_bits_source = VL_RAND_RESET_I(7);
    vlSelf->auto_in_d_bits_denied = VL_RAND_RESET_I(1);
    vlSelf->auto_in_d_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->auto_in_d_bits_corrupt = VL_RAND_RESET_I(1);
    vlSelf->auto_out_awready = VL_RAND_RESET_I(1);
    vlSelf->auto_out_awvalid = VL_RAND_RESET_I(1);
    vlSelf->auto_out_awid = VL_RAND_RESET_I(5);
    vlSelf->auto_out_awaddr = VL_RAND_RESET_I(32);
    vlSelf->auto_out_awlen = VL_RAND_RESET_I(8);
    vlSelf->auto_out_awsize = VL_RAND_RESET_I(3);
    vlSelf->auto_out_awburst = VL_RAND_RESET_I(2);
    vlSelf->auto_out_awecho_tl_state_size = VL_RAND_RESET_I(4);
    vlSelf->auto_out_awecho_tl_state_source = VL_RAND_RESET_I(7);
    vlSelf->auto_out_wready = VL_RAND_RESET_I(1);
    vlSelf->auto_out_wvalid = VL_RAND_RESET_I(1);
    vlSelf->auto_out_wdata = VL_RAND_RESET_Q(64);
    vlSelf->auto_out_wstrb = VL_RAND_RESET_I(8);
    vlSelf->auto_out_wlast = VL_RAND_RESET_I(1);
    vlSelf->auto_out_bready = VL_RAND_RESET_I(1);
    vlSelf->auto_out_bvalid = VL_RAND_RESET_I(1);
    vlSelf->auto_out_bid = VL_RAND_RESET_I(5);
    vlSelf->auto_out_bresp = VL_RAND_RESET_I(2);
    vlSelf->auto_out_becho_tl_state_size = VL_RAND_RESET_I(4);
    vlSelf->auto_out_becho_tl_state_source = VL_RAND_RESET_I(7);
    vlSelf->auto_out_arready = VL_RAND_RESET_I(1);
    vlSelf->auto_out_arvalid = VL_RAND_RESET_I(1);
    vlSelf->auto_out_arid = VL_RAND_RESET_I(5);
    vlSelf->auto_out_araddr = VL_RAND_RESET_I(32);
    vlSelf->auto_out_arlen = VL_RAND_RESET_I(8);
    vlSelf->auto_out_arsize = VL_RAND_RESET_I(3);
    vlSelf->auto_out_arburst = VL_RAND_RESET_I(2);
    vlSelf->auto_out_arecho_tl_state_size = VL_RAND_RESET_I(4);
    vlSelf->auto_out_arecho_tl_state_source = VL_RAND_RESET_I(7);
    vlSelf->auto_out_rready = VL_RAND_RESET_I(1);
    vlSelf->auto_out_rvalid = VL_RAND_RESET_I(1);
    vlSelf->auto_out_rid = VL_RAND_RESET_I(5);
    vlSelf->auto_out_rdata = VL_RAND_RESET_Q(64);
    vlSelf->auto_out_rresp = VL_RAND_RESET_I(2);
    vlSelf->auto_out_recho_tl_state_size = VL_RAND_RESET_I(4);
    vlSelf->auto_out_recho_tl_state_source = VL_RAND_RESET_I(7);
    vlSelf->auto_out_rlast = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor_io_in_a_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor_io_in_d_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor_io_in_d_bits_size = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor_io_in_d_bits_source = VL_RAND_RESET_I(7);
    vlSelf->__PVT__monitor_io_in_d_bits_denied = VL_RAND_RESET_I(1);
    vlSelf->__PVT__deq_io_enq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__deq_io_enq_bits_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__deq_io_deq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__deq_io_deq_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__deq_io_deq_bits_strb = VL_RAND_RESET_I(8);
    vlSelf->__PVT__queue_arw_deq_io_enq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__queue_arw_deq_io_enq_bits_id = VL_RAND_RESET_I(5);
    vlSelf->__PVT__queue_arw_deq_io_enq_bits_size = VL_RAND_RESET_I(3);
    vlSelf->__PVT__queue_arw_deq_io_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__queue_arw_deq_io_deq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__queue_arw_deq_io_deq_bits_id = VL_RAND_RESET_I(5);
    vlSelf->__PVT__queue_arw_deq_io_deq_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__queue_arw_deq_io_deq_bits_len = VL_RAND_RESET_I(8);
    vlSelf->__PVT__queue_arw_deq_io_deq_bits_size = VL_RAND_RESET_I(3);
    vlSelf->__PVT__queue_arw_deq_io_deq_bits_burst = VL_RAND_RESET_I(2);
    vlSelf->__PVT__queue_arw_deq_io_deq_bits_echo_tl_state_size = VL_RAND_RESET_I(4);
    vlSelf->__PVT__queue_arw_deq_io_deq_bits_echo_tl_state_source = VL_RAND_RESET_I(7);
    vlSelf->__PVT__queue_arw_deq_io_deq_bits_wen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_7 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__write_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idStall_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_6 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__write_5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idStall_5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_5 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__write_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idStall_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_4 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__write_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idStall_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__write_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idStall_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_2 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__write_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idStall_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idStall_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_23 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_22 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_21 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_20 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_19 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_18 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_17 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_16 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_15 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_14 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_13 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_12 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_11 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_10 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_9 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_8 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__counter = VL_RAND_RESET_I(3);
    vlSelf->__PVT__a_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__doneAW = VL_RAND_RESET_I(1);
    vlSelf->__PVT___bundleIn_0_a_ready_T_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beats1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__counter1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__out_arw_bits_id = VL_RAND_RESET_I(5);
    vlSelf->__PVT___out_arw_valid_T_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_holds_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__b_delay = VL_RAND_RESET_I(3);
    vlSelf->__PVT__r_wins = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___bdelay_T_1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__r_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_260 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_denied_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_261 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_d_corrupt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__d_sel_shiftAmount = VL_RAND_RESET_I(5);
    vlSelf->__PVT__d_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT___inc_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inc = VL_RAND_RESET_I(1);
    vlSelf->__PVT___dec_T_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___count_T_4 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__inc_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___count_T_8 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__inc_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___count_T_12 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__inc_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___count_T_16 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__inc_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___count_T_20 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__inc_5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___count_T_24 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__inc_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___count_T_28 = VL_RAND_RESET_I(5);
    vlSelf->__PVT___count_T_30 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___count_T_34 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___count_T_38 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___count_T_42 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___count_T_46 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___count_T_50 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___count_T_54 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___count_T_58 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___count_T_62 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___count_T_66 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___count_T_70 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___count_T_74 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___count_T_78 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___count_T_82 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___count_T_86 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___count_T_90 = VL_RAND_RESET_I(1);
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
    vlSelf->__PVT__monitor__DOT___a_first_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__a_first_counter = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__a_first_counter1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__a_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__param = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__size = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__source = VL_RAND_RESET_I(7);
    vlSelf->__PVT__monitor__DOT__address = VL_RAND_RESET_I(32);
    vlSelf->__PVT__monitor__DOT___d_first_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__d_first_counter = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__d_first_counter1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__d_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__opcode_1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__size_1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__source_1 = VL_RAND_RESET_I(7);
    vlSelf->__PVT__monitor__DOT__denied = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->__PVT__monitor__DOT__inflight);
    VL_RAND_RESET_W(512, vlSelf->__PVT__monitor__DOT__inflight_opcodes);
    VL_RAND_RESET_W(512, vlSelf->__PVT__monitor__DOT__inflight_sizes);
    vlSelf->__PVT__monitor__DOT__a_first_counter_1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__a_first_counter1_1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__a_first_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__monitor__DOT__d_first_counter_1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__d_first_counter1_1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__d_first_1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1);
    VL_RAND_RESET_W(128, vlSelf->__PVT__monitor__DOT__a_set_wo_ready);
    VL_RAND_RESET_W(1039, vlSelf->__PVT__monitor__DOT___GEN_23);
    vlSelf->__PVT__monitor__DOT___GEN_30 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT___GEN_46 = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->__PVT__monitor__DOT___inflight_T_2);
    VL_RAND_RESET_W(512, vlSelf->__PVT__monitor__DOT___inflight_opcodes_T);
    VL_RAND_RESET_W(512, vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2);
    VL_RAND_RESET_W(512, vlSelf->__PVT__monitor__DOT___inflight_sizes_T);
    VL_RAND_RESET_W(512, vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2);
    vlSelf->__PVT__monitor__DOT__watchdog = VL_RAND_RESET_I(32);
    vlSelf->__PVT__monitor__DOT___watchdog_T_1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->__PVT__monitor__DOT__inflight_1);
    VL_RAND_RESET_W(512, vlSelf->__PVT__monitor__DOT__inflight_sizes_1);
    vlSelf->__PVT__monitor__DOT__d_first_counter_2 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__d_first_counter1_2 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__monitor__DOT__d_first_2 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->__PVT__monitor__DOT___inflight_T_5);
    VL_RAND_RESET_W(512, vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5);
    vlSelf->__PVT__monitor__DOT__watchdog_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__monitor__DOT___watchdog_T_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus = VL_RAND_RESET_I(32);
    vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__deq__DOT__ram_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__deq__DOT__ram_strb[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__deq__DOT__ram_last[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__deq__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__deq__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__deq__DOT___do_enq_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__deq__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__deq__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__deq__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__queue_arw_deq__DOT__ram_id[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__queue_arw_deq__DOT__ram_addr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__queue_arw_deq__DOT__ram_len[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__queue_arw_deq__DOT__ram_size[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__queue_arw_deq__DOT__ram_burst[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__queue_arw_deq__DOT__ram_echo_tl_state_size[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__queue_arw_deq__DOT__ram_echo_tl_state_source[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__queue_arw_deq__DOT__ram_wen[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__queue_arw_deq__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__queue_arw_deq__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__queue_arw_deq__DOT___do_enq_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__queue_arw_deq__DOT___GEN_18 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__queue_arw_deq__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__queue_arw_deq__DOT__do_deq = VL_RAND_RESET_I(1);
}
