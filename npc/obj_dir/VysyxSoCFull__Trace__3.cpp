// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


extern const VlWide<33>/*1055:0*/ VysyxSoCFull__ConstPool__CONST_f1d99c76_0;
extern const VlWide<33>/*1055:0*/ VysyxSoCFull__ConstPool__CONST_ac7e6362_0;

void VysyxSoCFull___024root__traceChgSub3(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<5>/*159:0*/ __Vtemp8023;
    VlWide<5>/*159:0*/ __Vtemp8024;
    VlWide<5>/*159:0*/ __Vtemp8030;
    VlWide<5>/*159:0*/ __Vtemp8031;
    VlWide<5>/*159:0*/ __Vtemp8037;
    VlWide<5>/*159:0*/ __Vtemp8038;
    VlWide<5>/*159:0*/ __Vtemp8044;
    VlWide<5>/*159:0*/ __Vtemp8045;
    VlWide<4>/*127:0*/ __Vtemp8050;
    VlWide<4>/*127:0*/ __Vtemp8051;
    VlWide<4>/*127:0*/ __Vtemp8054;
    VlWide<33>/*1055:0*/ __Vtemp8055;
    VlWide<33>/*1055:0*/ __Vtemp8056;
    VlWide<16>/*511:0*/ __Vtemp8060;
    VlWide<33>/*1055:0*/ __Vtemp8061;
    VlWide<33>/*1055:0*/ __Vtemp8062;
    VlWide<16>/*511:0*/ __Vtemp8066;
    VlWide<5>/*159:0*/ __Vtemp8068;
    VlWide<5>/*159:0*/ __Vtemp8069;
    VlWide<5>/*159:0*/ __Vtemp8075;
    VlWide<5>/*159:0*/ __Vtemp8076;
    VlWide<5>/*159:0*/ __Vtemp8082;
    VlWide<5>/*159:0*/ __Vtemp8083;
    VlWide<4>/*127:0*/ __Vtemp8090;
    VlWide<4>/*127:0*/ __Vtemp8093;
    VlWide<4>/*127:0*/ __Vtemp8094;
    VlWide<5>/*159:0*/ __Vtemp8096;
    VlWide<5>/*159:0*/ __Vtemp8097;
    VlWide<5>/*159:0*/ __Vtemp8103;
    VlWide<5>/*159:0*/ __Vtemp8104;
    VlWide<5>/*159:0*/ __Vtemp8110;
    VlWide<5>/*159:0*/ __Vtemp8111;
    VlWide<4>/*127:0*/ __Vtemp8116;
    VlWide<5>/*159:0*/ __Vtemp8118;
    VlWide<5>/*159:0*/ __Vtemp8119;
    VlWide<4>/*127:0*/ __Vtemp8124;
    VlWide<4>/*127:0*/ __Vtemp8127;
    VlWide<4>/*127:0*/ __Vtemp8130;
    VlWide<4>/*127:0*/ __Vtemp8131;
    VlWide<5>/*159:0*/ __Vtemp8133;
    VlWide<5>/*159:0*/ __Vtemp8134;
    VlWide<4>/*127:0*/ __Vtemp8139;
    VlWide<5>/*159:0*/ __Vtemp8141;
    VlWide<5>/*159:0*/ __Vtemp8142;
    VlWide<5>/*159:0*/ __Vtemp8148;
    VlWide<5>/*159:0*/ __Vtemp8149;
    VlWide<5>/*159:0*/ __Vtemp8155;
    VlWide<5>/*159:0*/ __Vtemp8156;
    VlWide<4>/*127:0*/ __Vtemp8161;
    VlWide<4>/*127:0*/ __Vtemp8164;
    VlWide<4>/*127:0*/ __Vtemp8166;
    VlWide<4>/*127:0*/ __Vtemp8167;
    VlWide<4>/*127:0*/ __Vtemp8169;
    VlWide<4>/*127:0*/ __Vtemp8170;
    VlWide<4>/*127:0*/ __Vtemp8171;
    VlWide<4>/*127:0*/ __Vtemp8172;
    VlWide<4>/*127:0*/ __Vtemp8173;
    VlWide<4>/*127:0*/ __Vtemp8174;
    VlWide<4>/*127:0*/ __Vtemp8175;
    VlWide<4>/*127:0*/ __Vtemp8176;
    VlWide<4>/*127:0*/ __Vtemp8177;
    VlWide<4>/*127:0*/ __Vtemp8178;
    VlWide<4>/*127:0*/ __Vtemp8179;
    VlWide<4>/*127:0*/ __Vtemp8180;
    VlWide<4>/*127:0*/ __Vtemp8181;
    VlWide<4>/*127:0*/ __Vtemp8182;
    VlWide<4>/*127:0*/ __Vtemp8183;
    VlWide<4>/*127:0*/ __Vtemp8184;
    VlWide<4>/*127:0*/ __Vtemp8185;
    VlWide<4>/*127:0*/ __Vtemp8186;
    VlWide<4>/*127:0*/ __Vtemp8187;
    VlWide<4>/*127:0*/ __Vtemp8188;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 16313);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [0x1aU]))) {
            tracep->chgCData(oldp+0,((0xfU & (IData)(
                                                     (((0x3fU 
                                                        >= 
                                                        ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                                                         << 2U))
                                                        ? 
                                                       (0xfULL 
                                                        & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.__PVT__monitor__DOT__inflight_sizes_1 
                                                           >> 
                                                           ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                                                            << 2U)))
                                                        : 0ULL) 
                                                      >> 1U)))),4);
            __Vtemp8023[0U] = 0xfU;
            __Vtemp8023[1U] = 0U;
            __Vtemp8023[2U] = 0U;
            __Vtemp8023[3U] = 0U;
            __Vtemp8023[4U] = 0U;
            VL_SHIFTL_WWI(143,143,7, __Vtemp8024, __Vtemp8023, 
                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                           << 2U));
            tracep->chgQData(oldp+1,((((QData)((IData)(
                                                       ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.__PVT__monitor__DOT___d_first_T) 
                                                          & (0U 
                                                             == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.__PVT__monitor__DOT__d_first_counter_2))) 
                                                         & (6U 
                                                            == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode)))
                                                         ? 
                                                        __Vtemp8024[1U]
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.__PVT__monitor__DOT___d_first_T) 
                                                                      & (0U 
                                                                         == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.__PVT__monitor__DOT__d_first_counter_2))) 
                                                                     & (6U 
                                                                        == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode)))
                                                                     ? 
                                                                    __Vtemp8024[0U]
                                                                     : 0U))))),64);
            tracep->chgBit(oldp+3,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt) 
                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__corrupt_reg))));
            tracep->chgBit(oldp+4,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__count) 
                                             & (~ (0xffU 
                                                   & (((IData)(7U) 
                                                       << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                                                      >> 2U))))))));
            tracep->chgIData(oldp+5,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__bundleIn_0_d_bits_data_masked_enable_0)
                                       ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_data
                                       : vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__bundleIn_0_d_bits_data_rdata_0)),32);
            tracep->chgCData(oldp+6,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode) 
                                                << 1U))
                                       : 0U)),4);
            tracep->chgCData(oldp+7,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size) 
                                                << 1U))
                                       : 0U)),4);
            tracep->chgSData(oldp+8,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT__a_first_counter_1)))
                                       ? (0xffffU & 
                                          ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source)))
                                       : 0U)),16);
            tracep->chgSData(oldp+9,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT__d_first_counter_1))) 
                                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode)))
                                       ? (0xffffU & 
                                          ((IData)(1U) 
                                           << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)))
                                       : 0U)),16);
            tracep->chgBit(oldp+10,((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT__a_first_counter_1))) 
                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                                        == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)))));
            tracep->chgCData(oldp+11,((0xfU & (IData)(
                                                      (((0x3fU 
                                                         >= 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                                                          << 2U))
                                                         ? 
                                                        (0xfULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT__inflight_sizes 
                                                            >> 
                                                            ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                                                             << 2U)))
                                                         : 0ULL) 
                                                       >> 1U)))),4);
            VL_EXTEND_WI(131,4, __Vtemp8030, (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT___a_first_T) 
                                               & (0U 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT__a_first_counter_1)))
                                               ? (1U 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode) 
                                                     << 1U))
                                               : 0U));
            VL_SHIFTL_WWI(131,131,7, __Vtemp8031, __Vtemp8030, 
                          ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                           << 2U));
            tracep->chgQData(oldp+12,((((QData)((IData)(
                                                        (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT___a_first_T) 
                                                          & (0U 
                                                             == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT__a_first_counter_1)))
                                                          ? 
                                                         __Vtemp8031[1U]
                                                          : 0U))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT___a_first_T) 
                                                                      & (0U 
                                                                         == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT__a_first_counter_1)))
                                                                      ? 
                                                                     __Vtemp8031[0U]
                                                                      : 0U))))),64);
            VL_EXTEND_WI(131,4, __Vtemp8037, (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT___a_first_T) 
                                               & (0U 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT__a_first_counter_1)))
                                               ? (1U 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size) 
                                                     << 1U))
                                               : 0U));
            VL_SHIFTL_WWI(131,131,7, __Vtemp8038, __Vtemp8037, 
                          ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                           << 2U));
            tracep->chgQData(oldp+14,((((QData)((IData)(
                                                        (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT___a_first_T) 
                                                          & (0U 
                                                             == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT__a_first_counter_1)))
                                                          ? 
                                                         __Vtemp8038[1U]
                                                          : 0U))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT___a_first_T) 
                                                                      & (0U 
                                                                         == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT__a_first_counter_1)))
                                                                      ? 
                                                                     __Vtemp8038[0U]
                                                                      : 0U))))),64);
            tracep->chgSData(oldp+16,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT___d_first_T) 
                                         & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT__d_first_counter_2))) 
                                        & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode)))
                                        ? (0xffffU 
                                           & ((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source)))
                                        : 0U)),16);
            tracep->chgCData(oldp+17,((0xfU & (IData)(
                                                      (((0x3fU 
                                                         >= 
                                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                                                          << 2U))
                                                         ? 
                                                        (0xfULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT__inflight_sizes_1 
                                                            >> 
                                                            ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                                                             << 2U)))
                                                         : 0ULL) 
                                                       >> 1U)))),4);
            __Vtemp8044[0U] = 0xfU;
            __Vtemp8044[1U] = 0U;
            __Vtemp8044[2U] = 0U;
            __Vtemp8044[3U] = 0U;
            __Vtemp8044[4U] = 0U;
            VL_SHIFTL_WWI(143,143,7, __Vtemp8045, __Vtemp8044, 
                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                           << 2U));
            tracep->chgQData(oldp+18,((((QData)((IData)(
                                                        ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT___d_first_T) 
                                                           & (0U 
                                                              == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT__d_first_counter_2))) 
                                                          & (6U 
                                                             == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode)))
                                                          ? 
                                                         __Vtemp8045[1U]
                                                          : 0U))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT___d_first_T) 
                                                                       & (0U 
                                                                          == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT__d_first_counter_2))) 
                                                                      & (6U 
                                                                         == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode)))
                                                                      ? 
                                                                     __Vtemp8045[0U]
                                                                      : 0U))))),64);
            tracep->chgBit(oldp+20,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility__DOT__full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_io_enq_valid))));
            tracep->chgBit(oldp+21,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_1__DOT__full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_1_io_enq_valid))));
            tracep->chgBit(oldp+22,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_2__DOT__full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_2_io_enq_valid))));
            tracep->chgBit(oldp+23,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_3__DOT__full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_3_io_enq_valid))));
            tracep->chgBit(oldp+24,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_4__DOT__full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_4_io_enq_valid))));
            tracep->chgBit(oldp+25,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_5__DOT__full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_5_io_enq_valid))));
            tracep->chgBit(oldp+26,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_6__DOT__full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_6_io_enq_valid))));
            tracep->chgBit(oldp+27,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_7__DOT__maybe_full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_7_io_enq_valid))));
            tracep->chgBit(oldp+28,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_8__DOT__maybe_full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_8_io_enq_valid))));
            tracep->chgBit(oldp+29,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_9__DOT__maybe_full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_9_io_enq_valid))));
            tracep->chgBit(oldp+30,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_10__DOT__maybe_full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_10_io_enq_valid))));
            tracep->chgBit(oldp+31,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_11__DOT__maybe_full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_11_io_enq_valid))));
            tracep->chgBit(oldp+32,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_12__DOT__maybe_full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_12_io_enq_valid))));
            tracep->chgBit(oldp+33,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_13__DOT__maybe_full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_13_io_enq_valid))));
            tracep->chgBit(oldp+34,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_14__DOT__maybe_full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_14_io_enq_valid))));
            tracep->chgBit(oldp+35,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_15__DOT__maybe_full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_15_io_enq_valid))));
            tracep->chgBit(oldp+36,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_16__DOT__full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_16_io_enq_valid))));
            tracep->chgBit(oldp+37,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_17__DOT__full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_17_io_enq_valid))));
            tracep->chgBit(oldp+38,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_18__DOT__full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_18_io_enq_valid))));
            tracep->chgBit(oldp+39,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_19__DOT__full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_19_io_enq_valid))));
            tracep->chgBit(oldp+40,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_20__DOT__full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_20_io_enq_valid))));
            tracep->chgBit(oldp+41,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_21__DOT__full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_21_io_enq_valid))));
            tracep->chgBit(oldp+42,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_22__DOT__full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_22_io_enq_valid))));
            tracep->chgBit(oldp+43,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_23__DOT__maybe_full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_23_io_enq_valid))));
            tracep->chgBit(oldp+44,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_24__DOT__maybe_full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_24_io_enq_valid))));
            tracep->chgBit(oldp+45,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_25__DOT__maybe_full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_25_io_enq_valid))));
            tracep->chgBit(oldp+46,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_26__DOT__maybe_full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_26_io_enq_valid))));
            tracep->chgBit(oldp+47,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_27__DOT__maybe_full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_27_io_enq_valid))));
            tracep->chgBit(oldp+48,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_28__DOT__maybe_full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_28_io_enq_valid))));
            tracep->chgBit(oldp+49,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_29__DOT__maybe_full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_29_io_enq_valid))));
            tracep->chgBit(oldp+50,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_30__DOT__maybe_full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_30_io_enq_valid))));
            tracep->chgBit(oldp+51,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_31__DOT__maybe_full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_31_io_enq_valid))));
            tracep->chgBit(oldp+52,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__write_6) 
                                     != (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+53,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__write_5) 
                                     != (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+54,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__write_4) 
                                     != (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+55,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__write_3) 
                                     != (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+56,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__write_2) 
                                     != (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+57,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__write_1) 
                                     != (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+58,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__write) 
                                     != (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+59,(((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__counter)) 
                                     | (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__beats1)))));
            tracep->chgCData(oldp+60,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                                 << 1U))
                                        : 0U)),4);
            tracep->chgCData(oldp+61,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | (0xeU 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size) 
                                                    << 1U)))
                                        : 0U)),4);
            __Vtemp8050[0U] = 1U;
            __Vtemp8050[1U] = 0U;
            __Vtemp8050[2U] = 0U;
            __Vtemp8050[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp8051, __Vtemp8050, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source));
            if (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                 & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))) {
                __Vtemp8054[0U] = __Vtemp8051[0U];
                __Vtemp8054[1U] = __Vtemp8051[1U];
                __Vtemp8054[2U] = __Vtemp8051[2U];
                __Vtemp8054[3U] = __Vtemp8051[3U];
            } else {
                __Vtemp8054[0U] = 0U;
                __Vtemp8054[1U] = 0U;
                __Vtemp8054[2U] = 0U;
                __Vtemp8054[3U] = 0U;
            }
            tracep->chgWData(oldp+62,(__Vtemp8054),128);
            tracep->chgBit(oldp+66,((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1))) 
                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                        == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor_io_in_d_bits_source)))));
            VL_EXTEND_WI(1027,4, __Vtemp8055, (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                                & (0U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                                ? (1U 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                                      << 1U))
                                                : 0U));
            VL_SHIFTL_WWI(1027,1027,10, __Vtemp8056, __Vtemp8055, 
                          ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                           << 2U));
            __Vtemp8060[0U] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
                               & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp8056[0U]
                                   : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U]));
            __Vtemp8060[1U] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
                               & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp8056[1U]
                                   : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U]));
            __Vtemp8060[2U] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
                               & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp8056[2U]
                                   : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U]));
            __Vtemp8060[3U] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
                               & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp8056[3U]
                                   : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U]));
            __Vtemp8060[4U] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
                               & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp8056[4U]
                                   : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U]));
            __Vtemp8060[5U] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
                               & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp8056[5U]
                                   : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U]));
            __Vtemp8060[6U] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
                               & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp8056[6U]
                                   : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U]));
            __Vtemp8060[7U] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
                               & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp8056[7U]
                                   : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U]));
            __Vtemp8060[8U] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
                               & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp8056[8U]
                                   : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U]));
            __Vtemp8060[9U] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
                               & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp8056[9U]
                                   : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U]));
            __Vtemp8060[0xaU] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
                                 & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp8056[0xaU]
                                     : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU]));
            __Vtemp8060[0xbU] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
                                 & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp8056[0xbU]
                                     : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU]));
            __Vtemp8060[0xcU] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
                                 & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp8056[0xcU]
                                     : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU]));
            __Vtemp8060[0xdU] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
                                 & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp8056[0xdU]
                                     : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU]));
            __Vtemp8060[0xeU] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
                                 & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp8056[0xeU]
                                     : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU]));
            __Vtemp8060[0xfU] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
                                 & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp8056[0xfU]
                                     : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU]));
            tracep->chgWData(oldp+67,(__Vtemp8060),512);
            VL_EXTEND_WI(1027,4, __Vtemp8061, (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                                & (0U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                                ? (1U 
                                                   | (0xeU 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size) 
                                                         << 1U)))
                                                : 0U));
            VL_SHIFTL_WWI(1027,1027,10, __Vtemp8062, __Vtemp8061, 
                          ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                           << 2U));
            __Vtemp8066[0U] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
                               & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp8062[0U]
                                   : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U]));
            __Vtemp8066[1U] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
                               & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp8062[1U]
                                   : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U]));
            __Vtemp8066[2U] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
                               & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp8062[2U]
                                   : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U]));
            __Vtemp8066[3U] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
                               & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp8062[3U]
                                   : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U]));
            __Vtemp8066[4U] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
                               & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp8062[4U]
                                   : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U]));
            __Vtemp8066[5U] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
                               & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp8062[5U]
                                   : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U]));
            __Vtemp8066[6U] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
                               & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp8062[6U]
                                   : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U]));
            __Vtemp8066[7U] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
                               & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp8062[7U]
                                   : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U]));
            __Vtemp8066[8U] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
                               & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp8062[8U]
                                   : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U]));
            __Vtemp8066[9U] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
                               & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                   & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                   ? __Vtemp8062[9U]
                                   : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U]));
            __Vtemp8066[0xaU] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
                                 & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp8062[0xaU]
                                     : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU]));
            __Vtemp8066[0xbU] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
                                 & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp8062[0xbU]
                                     : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU]));
            __Vtemp8066[0xcU] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
                                 & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp8062[0xcU]
                                     : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU]));
            __Vtemp8066[0xdU] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
                                 & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp8062[0xdU]
                                     : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU]));
            __Vtemp8066[0xeU] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
                                 & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp8062[0xeU]
                                     : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU]));
            __Vtemp8066[0xfU] = (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
                                 & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT___a_first_T) 
                                     & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_first_counter_1)))
                                     ? __Vtemp8062[0xfU]
                                     : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU]));
            tracep->chgWData(oldp+83,(__Vtemp8066),512);
            tracep->chgBit(oldp+99,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__deq__DOT__maybe_full)
                                      ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__deq__DOT___do_enq_T)
                                      : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__deq__DOT___GEN_9))));
            tracep->chgBit(oldp+100,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__deq__DOT__maybe_full) 
                                      & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__deq_io_deq_valid)))));
            tracep->chgBit(oldp+101,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq__DOT__maybe_full)
                                       ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq__DOT___do_enq_T)
                                       : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq__DOT___GEN_18))));
            tracep->chgBit(oldp+102,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq__DOT__maybe_full) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_ready) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_valid)))));
            tracep->chgBit(oldp+103,((1U & ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__out_1_ready) 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__da_last)) 
                                             & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__idle)) 
                                            | (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__a_last))))));
            tracep->chgBit(oldp+104,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                                       ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_corrupt)
                                       : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))));
            tracep->chgBit(oldp+105,(((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__counter_3)) 
                                      | (0U == ((1U 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_opcode))
                                                 ? 
                                                (0xfU 
                                                 & (~ 
                                                    (0x7ffU 
                                                     & (((IData)(0x3fU) 
                                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_size)) 
                                                        >> 2U))))
                                                 : 0U)))));
            tracep->chgBit(oldp+106,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT___T) 
                                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__counter)))));
            tracep->chgBit(oldp+107,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT___T_3) 
                                       & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__counter_3))) 
                                      & (IData)((4U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_opcode)))))));
            tracep->chgBit(oldp+108,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT___T_3) 
                                      & ((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__counter_3)) 
                                         | (0U == (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_opcode))
                                                    ? 
                                                   (0xfU 
                                                    & (~ 
                                                       (0x7ffU 
                                                        & (((IData)(0x3fU) 
                                                            << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_size)) 
                                                           >> 2U))))
                                                    : 0U))))));
            tracep->chgCData(oldp+109,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT___T_3) 
                                        & ((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__counter_3)) 
                                           | (0U == 
                                              ((1U 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_opcode))
                                                ? (0xfU 
                                                   & (~ 
                                                      (0x7ffU 
                                                       & (((IData)(0x3fU) 
                                                           << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_size)) 
                                                          >> 2U))))
                                                : 0U))))),2);
            tracep->chgCData(oldp+110,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                         & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                         ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                                                  << 1U))
                                         : 0U)),4);
            tracep->chgCData(oldp+111,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                         & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                         ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                                                  << 1U))
                                         : 0U)),4);
            tracep->chgSData(oldp+112,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                         & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                         ? (0xffffU 
                                            & ((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))
                                         : 0U)),16);
            tracep->chgSData(oldp+113,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT___d_first_T) 
                                          & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                                         & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_opcode)))
                                         ? (0xffffU 
                                            & ((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_source)))
                                         : 0U)),16);
            tracep->chgBit(oldp+114,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                                       & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                         == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_source)))));
            tracep->chgCData(oldp+115,((0xfU & (IData)(
                                                       (((0x3fU 
                                                          >= 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                           << 2U))
                                                          ? 
                                                         (0xfULL 
                                                          & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__inflight_sizes 
                                                             >> 
                                                             ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                              << 2U)))
                                                          : 0ULL) 
                                                        >> 1U)))),4);
            VL_EXTEND_WI(131,4, __Vtemp8068, (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                               & (0U 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                               ? (1U 
                                                  | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                                                     << 1U))
                                               : 0U));
            VL_SHIFTL_WWI(131,131,7, __Vtemp8069, __Vtemp8068, 
                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                           << 2U));
            tracep->chgQData(oldp+116,((((QData)((IData)(
                                                         (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                                           & (0U 
                                                              == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                                           ? 
                                                          __Vtemp8069[1U]
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                                            & (0U 
                                                               == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                                            ? 
                                                           __Vtemp8069[0U]
                                                            : 0U))))),64);
            VL_EXTEND_WI(131,4, __Vtemp8075, (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                               & (0U 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                               ? (1U 
                                                  | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                                                     << 1U))
                                               : 0U));
            VL_SHIFTL_WWI(131,131,7, __Vtemp8076, __Vtemp8075, 
                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                           << 2U));
            tracep->chgQData(oldp+118,((((QData)((IData)(
                                                         (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                                           & (0U 
                                                              == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                                           ? 
                                                          __Vtemp8076[1U]
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                                            & (0U 
                                                               == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                                            ? 
                                                           __Vtemp8076[0U]
                                                            : 0U))))),64);
            tracep->chgSData(oldp+120,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT___d_first_T) 
                                          & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                                         & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_opcode)))
                                         ? (0xffffU 
                                            & ((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_source)))
                                         : 0U)),16);
            tracep->chgCData(oldp+121,((0xfU & (IData)(
                                                       (((0x3fU 
                                                          >= 
                                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                           << 2U))
                                                          ? 
                                                         (0xfULL 
                                                          & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
                                                             >> 
                                                             ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                              << 2U)))
                                                          : 0ULL) 
                                                        >> 1U)))),4);
            __Vtemp8082[0U] = 0xfU;
            __Vtemp8082[1U] = 0U;
            __Vtemp8082[2U] = 0U;
            __Vtemp8082[3U] = 0U;
            __Vtemp8082[4U] = 0U;
            VL_SHIFTL_WWI(143,143,7, __Vtemp8083, __Vtemp8082, 
                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                           << 2U));
            tracep->chgQData(oldp+122,((((QData)((IData)(
                                                         ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT___d_first_T) 
                                                            & (0U 
                                                               == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                                                           & (6U 
                                                              == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_opcode)))
                                                           ? 
                                                          __Vtemp8083[1U]
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT___d_first_T) 
                                                             & (0U 
                                                                == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                                                            & (6U 
                                                               == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_opcode)))
                                                            ? 
                                                           __Vtemp8083[0U]
                                                            : 0U))))),64);
            tracep->chgBit(oldp+124,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__muxStateEarly_1) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__da_bits_opcode))));
            tracep->chgBit(oldp+125,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__beatsLeft)) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_0_d_ready))));
            tracep->chgBit(oldp+126,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__beatsLeft))
                                       ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__da_valid)
                                       : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT___sink_ACancel_earlyValid_T_2))));
            tracep->chgCData(oldp+127,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT___a_first_T) 
                                         & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                                         ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                                                  << 1U))
                                         : 0U)),4);
            tracep->chgCData(oldp+128,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT___a_first_T) 
                                         & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                                         ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                                                  << 1U))
                                         : 0U)),5);
            tracep->chgSData(oldp+129,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT___a_first_T) 
                                         & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                                         ? (0xffffU 
                                            & ((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))
                                         : 0U)),16);
            tracep->chgSData(oldp+130,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT___d_first_T) 
                                          & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                         & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                         ? (0xffffU 
                                            & ((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_source)))
                                         : 0U)),16);
            tracep->chgBit(oldp+131,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_0_a_valid) 
                                       & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                         == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_source)))));
            VL_SHIFTR_WWI(128,128,7, __Vtemp8090, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__inflight_sizes, 
                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_source) 
                           << 3U));
            __Vtemp8093[0U] = (0x7fU & (__Vtemp8090[0U] 
                                        >> 1U));
            __Vtemp8093[1U] = 0U;
            __Vtemp8093[2U] = 0U;
            __Vtemp8093[3U] = 0U;
            VL_EXTEND_WW(128,127, __Vtemp8094, __Vtemp8093);
            tracep->chgCData(oldp+132,((0xffU & __Vtemp8094[0U])),8);
            VL_EXTEND_WI(131,4, __Vtemp8096, (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT___a_first_T) 
                                               & (0U 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                                               ? (1U 
                                                  | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                                                     << 1U))
                                               : 0U));
            VL_SHIFTL_WWI(131,131,7, __Vtemp8097, __Vtemp8096, 
                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                           << 2U));
            tracep->chgQData(oldp+133,((((QData)((IData)(
                                                         (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT___a_first_T) 
                                                           & (0U 
                                                              == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                                                           ? 
                                                          __Vtemp8097[1U]
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT___a_first_T) 
                                                            & (0U 
                                                               == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                                                            ? 
                                                           __Vtemp8097[0U]
                                                            : 0U))))),64);
            __Vtemp8103[0U] = 0xfU;
            __Vtemp8103[1U] = 0U;
            __Vtemp8103[2U] = 0U;
            __Vtemp8103[3U] = 0U;
            __Vtemp8103[4U] = 0U;
            VL_SHIFTL_WWI(143,143,7, __Vtemp8104, __Vtemp8103, 
                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_source) 
                           << 2U));
            tracep->chgQData(oldp+135,((((QData)((IData)(
                                                         ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT___d_first_T) 
                                                            & (0U 
                                                               == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                                           & (6U 
                                                              != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                                           ? 
                                                          __Vtemp8104[1U]
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT___d_first_T) 
                                                             & (0U 
                                                                == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                                            & (6U 
                                                               != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                                            ? 
                                                           __Vtemp8104[0U]
                                                            : 0U))))),64);
            VL_EXTEND_WI(132,5, __Vtemp8110, (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT___a_first_T) 
                                               & (0U 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                                               ? (1U 
                                                  | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                                                     << 1U))
                                               : 0U));
            VL_SHIFTL_WWI(132,132,7, __Vtemp8111, __Vtemp8110, 
                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                           << 3U));
            if (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT___a_first_T) 
                 & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__a_first_counter_1)))) {
                __Vtemp8116[0U] = __Vtemp8111[0U];
                __Vtemp8116[1U] = __Vtemp8111[1U];
                __Vtemp8116[2U] = __Vtemp8111[2U];
                __Vtemp8116[3U] = __Vtemp8111[3U];
            } else {
                __Vtemp8116[0U] = 0U;
                __Vtemp8116[1U] = 0U;
                __Vtemp8116[2U] = 0U;
                __Vtemp8116[3U] = 0U;
            }
            tracep->chgWData(oldp+137,(__Vtemp8116),128);
            __Vtemp8118[0U] = 0xffU;
            __Vtemp8118[1U] = 0U;
            __Vtemp8118[2U] = 0U;
            __Vtemp8118[3U] = 0U;
            __Vtemp8118[4U] = 0U;
            VL_SHIFTL_WWI(143,143,7, __Vtemp8119, __Vtemp8118, 
                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_source) 
                           << 3U));
            if ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT___d_first_T) 
                  & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                 & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_opcode)))) {
                __Vtemp8124[0U] = __Vtemp8119[0U];
                __Vtemp8124[1U] = __Vtemp8119[1U];
                __Vtemp8124[2U] = __Vtemp8119[2U];
                __Vtemp8124[3U] = __Vtemp8119[3U];
            } else {
                __Vtemp8124[0U] = 0U;
                __Vtemp8124[1U] = 0U;
                __Vtemp8124[2U] = 0U;
                __Vtemp8124[3U] = 0U;
            }
            tracep->chgWData(oldp+141,(__Vtemp8124),128);
            tracep->chgSData(oldp+145,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT___d_first_T) 
                                          & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                                         & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                         ? (0xffffU 
                                            & ((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_source)))
                                         : 0U)),16);
            VL_SHIFTR_WWI(128,128,7, __Vtemp8127, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__inflight_sizes_1, 
                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_source) 
                           << 3U));
            __Vtemp8130[0U] = (0x7fU & (__Vtemp8127[0U] 
                                        >> 1U));
            __Vtemp8130[1U] = 0U;
            __Vtemp8130[2U] = 0U;
            __Vtemp8130[3U] = 0U;
            VL_EXTEND_WW(128,127, __Vtemp8131, __Vtemp8130);
            tracep->chgCData(oldp+146,((0xffU & __Vtemp8131[0U])),8);
            __Vtemp8133[0U] = 0xffU;
            __Vtemp8133[1U] = 0U;
            __Vtemp8133[2U] = 0U;
            __Vtemp8133[3U] = 0U;
            __Vtemp8133[4U] = 0U;
            VL_SHIFTL_WWI(143,143,7, __Vtemp8134, __Vtemp8133, 
                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_source) 
                           << 3U));
            if ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT___d_first_T) 
                  & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                 & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_opcode)))) {
                __Vtemp8139[0U] = __Vtemp8134[0U];
                __Vtemp8139[1U] = __Vtemp8134[1U];
                __Vtemp8139[2U] = __Vtemp8134[2U];
                __Vtemp8139[3U] = __Vtemp8134[3U];
            } else {
                __Vtemp8139[0U] = 0U;
                __Vtemp8139[1U] = 0U;
                __Vtemp8139[2U] = 0U;
                __Vtemp8139[3U] = 0U;
            }
            tracep->chgWData(oldp+147,(__Vtemp8139),128);
            tracep->chgCData(oldp+151,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT___a_first_T) 
                                         & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT__a_first_counter_1)))
                                         ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                                                  << 1U))
                                         : 0U)),4);
            tracep->chgCData(oldp+152,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT___a_first_T) 
                                         & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT__a_first_counter_1)))
                                         ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                                                  << 1U))
                                         : 0U)),4);
            tracep->chgSData(oldp+153,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT___a_first_T) 
                                         & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT__a_first_counter_1)))
                                         ? (0xffffU 
                                            & ((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))
                                         : 0U)),16);
            tracep->chgSData(oldp+154,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT___d_first_T) 
                                          & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT__d_first_counter_1))) 
                                         & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode)))
                                         ? (0xffffU 
                                            & ((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source)))
                                         : 0U)),16);
            tracep->chgBit(oldp+155,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
                                       & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT__a_first_counter_1))) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source)))));
            VL_EXTEND_WI(131,4, __Vtemp8141, (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT___a_first_T) 
                                               & (0U 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT__a_first_counter_1)))
                                               ? (1U 
                                                  | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                                                     << 1U))
                                               : 0U));
            VL_SHIFTL_WWI(131,131,7, __Vtemp8142, __Vtemp8141, 
                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                           << 2U));
            tracep->chgQData(oldp+156,((((QData)((IData)(
                                                         (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT___a_first_T) 
                                                           & (0U 
                                                              == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT__a_first_counter_1)))
                                                           ? 
                                                          __Vtemp8142[1U]
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT___a_first_T) 
                                                            & (0U 
                                                               == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT__a_first_counter_1)))
                                                            ? 
                                                           __Vtemp8142[0U]
                                                            : 0U))))),64);
            VL_EXTEND_WI(131,4, __Vtemp8148, (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT___a_first_T) 
                                               & (0U 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT__a_first_counter_1)))
                                               ? (1U 
                                                  | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                                                     << 1U))
                                               : 0U));
            VL_SHIFTL_WWI(131,131,7, __Vtemp8149, __Vtemp8148, 
                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                           << 2U));
            tracep->chgQData(oldp+158,((((QData)((IData)(
                                                         (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT___a_first_T) 
                                                           & (0U 
                                                              == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT__a_first_counter_1)))
                                                           ? 
                                                          __Vtemp8149[1U]
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT___a_first_T) 
                                                            & (0U 
                                                               == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT__a_first_counter_1)))
                                                            ? 
                                                           __Vtemp8149[0U]
                                                            : 0U))))),64);
            tracep->chgSData(oldp+160,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT___d_first_T) 
                                          & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT__d_first_counter_2))) 
                                         & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode)))
                                         ? (0xffffU 
                                            & ((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source)))
                                         : 0U)),16);
            __Vtemp8155[0U] = 0xfU;
            __Vtemp8155[1U] = 0U;
            __Vtemp8155[2U] = 0U;
            __Vtemp8155[3U] = 0U;
            __Vtemp8155[4U] = 0U;
            VL_SHIFTL_WWI(143,143,7, __Vtemp8156, __Vtemp8155, 
                          ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                           << 2U));
            tracep->chgQData(oldp+161,((((QData)((IData)(
                                                         ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT___d_first_T) 
                                                            & (0U 
                                                               == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT__d_first_counter_2))) 
                                                           & (6U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode)))
                                                           ? 
                                                          __Vtemp8156[1U]
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT___d_first_T) 
                                                             & (0U 
                                                                == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT__d_first_counter_2))) 
                                                            & (6U 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode)))
                                                            ? 
                                                           __Vtemp8156[0U]
                                                            : 0U))))),64);
            tracep->chgIData(oldp+163,(((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__index))
                                         ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_7
                                         : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__index))
                                             ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_6
                                             : ((5U 
                                                 == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__index))
                                                 ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_5
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__index))
                                                  ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_4
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__index))
                                                   ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_3
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__index))
                                                    ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_2
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__index))
                                                     ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_1
                                                     : vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_0)))))))),32);
            tracep->chgIData(oldp+164,(((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__index))
                                         ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_7
                                         : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__index))
                                             ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_6
                                             : ((5U 
                                                 == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__index))
                                                 ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_5
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__index))
                                                  ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_4
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__index))
                                                   ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_3
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__index))
                                                    ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_2
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__index))
                                                     ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_1
                                                     : vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__mem_0)))))))),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+165,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                             >> 4U) 
                                            | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                   >> 6U)) 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp))))));
            tracep->chgBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid));
            tracep->chgBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_valid));
            tracep->chgBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_e_valid));
            tracep->chgBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_valid));
            tracep->chgBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid));
            tracep->chgBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid));
            tracep->chgBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid));
            tracep->chgBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid));
            tracep->chgBit(oldp+174,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.io_deq_valid));
            tracep->chgBit(oldp+175,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid));
            tracep->chgBit(oldp+176,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.io_deq_valid));
            tracep->chgBit(oldp+177,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.io_deq_valid));
            tracep->chgBit(oldp+178,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.io_deq_valid));
            tracep->chgBit(oldp+179,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))));
            tracep->chgCData(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__dec),5);
            tracep->chgQData(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_set_wo_ready),64);
            tracep->chgBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_valid));
            tracep->chgBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam_io_alloc_valid));
            tracep->chgBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+188,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_e_valid)
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__do_enq));
            tracep->chgBit(oldp+190,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                               >> 1U)))));
            tracep->chgBit(oldp+191,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
            tracep->chgBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
            tracep->chgBit(oldp+193,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                            >> 1U))));
            tracep->chgBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
            tracep->chgBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
            tracep->chgCData(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
            tracep->chgCData(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
            tracep->chgCData(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
            tracep->chgCData(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
            tracep->chgCData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
            tracep->chgCData(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
            tracep->chgSData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
            tracep->chgCData(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
            tracep->chgBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
            tracep->chgBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
            tracep->chgBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
            tracep->chgSData(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
            tracep->chgCData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
            tracep->chgBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
            tracep->chgBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
            tracep->chgBit(oldp+211,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                            >> 7U))));
            tracep->chgBit(oldp+212,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                            >> 4U))));
            tracep->chgBit(oldp+213,((1U & (((0x10U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))
                                              ? ((0xcU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                          >> 3U))))
                                              : 8U) 
                                            >> 3U))));
            tracep->chgBit(oldp+214,((1U & (((0x10U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))
                                              ? ((0xcU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                          >> 3U))))
                                              : 8U) 
                                            >> 2U))));
            tracep->chgBit(oldp+215,((1U & (((0x10U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))
                                              ? ((0xcU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                          >> 3U))))
                                              : 8U) 
                                            >> 1U))));
            tracep->chgBit(oldp+216,(((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))
                                       ? (1U & ((0xcU 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                       >> 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                                         >> 3U)))))
                                       : 0U)));
            tracep->chgCData(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr),8);
            tracep->chgBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
            tracep->chgBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
            tracep->chgBit(oldp+220,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                            >> 1U))));
            tracep->chgBit(oldp+221,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out))));
            tracep->chgBit(oldp+222,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                            >> 2U))));
            tracep->chgBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
            tracep->chgBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
            tracep->chgBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
            tracep->chgBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
            tracep->chgBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
            tracep->chgBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
            tracep->chgBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
            tracep->chgBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
            tracep->chgBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
            tracep->chgBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
            tracep->chgBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
            tracep->chgBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
            tracep->chgBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
            tracep->chgBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
            tracep->chgBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
            tracep->chgBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
            tracep->chgBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
            tracep->chgBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
            tracep->chgSData(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out),11);
            tracep->chgBit(oldp+242,((0U != (((((((
                                                   ((((((((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                           [0U] 
                                                           | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                           [1U]) 
                                                          | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [2U]) 
                                                         | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                         [3U]) 
                                                        | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                        [4U]) 
                                                       | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [5U]) 
                                                      | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                      [6U]) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                     [7U]) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [8U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [9U]) 
                                                  | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                  [0xaU]) 
                                                 | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [0xbU]) 
                                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                [0xcU]) 
                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                               [0xdU]) 
                                              | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [0xeU]) 
                                             | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [0xfU]))));
            tracep->chgBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
            tracep->chgCData(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
            tracep->chgCData(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
            tracep->chgCData(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
            tracep->chgCData(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
            tracep->chgSData(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
            tracep->chgBit(oldp+249,((1U & (~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
            tracep->chgCData(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
            tracep->chgCData(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
            tracep->chgBit(oldp+252,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                          >> 6U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp))));
            tracep->chgBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
            tracep->chgCData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
            tracep->chgBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
            tracep->chgBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
            tracep->chgBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
            tracep->chgBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
            tracep->chgBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
            tracep->chgBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
            tracep->chgBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
            tracep->chgBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
            tracep->chgBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
            tracep->chgBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
            tracep->chgBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
            tracep->chgBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
            tracep->chgBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
            tracep->chgBit(oldp+268,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int) 
                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)))));
            tracep->chgBit(oldp+269,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int) 
                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)))));
            tracep->chgBit(oldp+270,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int) 
                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)))));
            tracep->chgBit(oldp+271,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int) 
                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)))));
            tracep->chgBit(oldp+272,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int) 
                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)))));
            tracep->chgBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
            tracep->chgBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
            tracep->chgBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
            tracep->chgBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
            tracep->chgBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
            tracep->chgCData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
            tracep->chgCData(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
            tracep->chgCData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
            tracep->chgBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
            tracep->chgBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
            tracep->chgBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
            tracep->chgBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
            tracep->chgCData(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
            tracep->chgBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
            tracep->chgCData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
            tracep->chgCData(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
            tracep->chgCData(oldp+289,((0xfU & ((IData)(1U) 
                                                + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
            tracep->chgBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
            tracep->chgCData(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
            tracep->chgCData(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
            tracep->chgCData(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
            tracep->chgBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
            tracep->chgBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
            tracep->chgBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
            tracep->chgBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
            tracep->chgBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
            tracep->chgCData(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
            tracep->chgBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
            tracep->chgSData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
            tracep->chgBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
            tracep->chgBit(oldp+303,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
            tracep->chgBit(oldp+304,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
            tracep->chgBit(oldp+305,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
            tracep->chgBit(oldp+306,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
            tracep->chgCData(oldp+307,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                                - (IData)(1U)))),4);
            tracep->chgSData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
            tracep->chgCData(oldp+309,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
            tracep->chgCData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
            tracep->chgCData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
            tracep->chgCData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
            tracep->chgCData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
            tracep->chgCData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
            tracep->chgCData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
            tracep->chgCData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
            tracep->chgCData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
            tracep->chgCData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
            tracep->chgCData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
            tracep->chgCData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
            tracep->chgCData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
            tracep->chgCData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
            tracep->chgCData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
            tracep->chgCData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
            tracep->chgCData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
            tracep->chgCData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
            tracep->chgCData(oldp+328,((0xfU & ((IData)(1U) 
                                                + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
            tracep->chgCData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0U]),3);
            tracep->chgCData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [1U]),3);
            tracep->chgCData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [2U]),3);
            tracep->chgCData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [3U]),3);
            tracep->chgCData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [4U]),3);
            tracep->chgCData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [5U]),3);
            tracep->chgCData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [6U]),3);
            tracep->chgCData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [7U]),3);
            tracep->chgCData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [8U]),3);
            tracep->chgCData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [9U]),3);
            tracep->chgCData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0xaU]),3);
            tracep->chgCData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0xbU]),3);
            tracep->chgCData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0xcU]),3);
            tracep->chgCData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0xdU]),3);
            tracep->chgCData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0xeU]),3);
            tracep->chgCData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0xfU]),3);
            tracep->chgCData(oldp+345,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                                 >> 3U))),8);
            tracep->chgBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid));
            tracep->chgBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_valid));
            tracep->chgBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_2_e_valid));
            tracep->chgBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid));
            tracep->chgBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid));
            tracep->chgBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid));
            tracep->chgBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid));
            tracep->chgBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_valid));
            tracep->chgBit(oldp+354,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.io_deq_valid));
            tracep->chgBit(oldp+355,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid));
            tracep->chgBit(oldp+356,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.io_deq_valid));
            tracep->chgBit(oldp+357,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.io_deq_valid));
            tracep->chgBit(oldp+358,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.io_deq_valid));
            tracep->chgBit(oldp+359,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))));
            tracep->chgCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__dec),5);
            tracep->chgQData(oldp+361,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_set_wo_ready),64);
            tracep->chgBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_valid));
            tracep->chgBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam_io_alloc_valid));
            tracep->chgBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+368,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_2_e_valid)
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__do_enq));
            tracep->chgCData(oldp+370,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray_io_q),4);
            tracep->chgBit(oldp+371,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+372,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_ridx_bin),4);
            tracep->chgBit(oldp+373,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__valid_reg));
            tracep->chgBit(oldp+374,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+375,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+376,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+377,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+378,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+379,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+380,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+381,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+382,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+383,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+384,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+385,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+386,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+387,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+388,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+389,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+390,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray_io_q),4);
            tracep->chgBit(oldp+391,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+392,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_ridx_bin),4);
            tracep->chgBit(oldp+393,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__valid_reg));
            tracep->chgBit(oldp+394,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+395,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+396,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+397,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+398,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+399,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+400,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+401,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+402,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+403,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+404,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+405,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+406,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+407,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+408,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+409,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+410,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray_io_q),4);
            tracep->chgBit(oldp+411,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+412,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_ridx_bin),4);
            tracep->chgBit(oldp+413,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__valid_reg));
            tracep->chgBit(oldp+414,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+415,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+416,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+417,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+418,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+419,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+420,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+421,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+422,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+423,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+424,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+425,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+426,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+427,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+428,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+429,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+430,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray_io_q),4);
            tracep->chgBit(oldp+431,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+432,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_ridx_bin),4);
            tracep->chgBit(oldp+433,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__valid_reg));
            tracep->chgBit(oldp+434,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+435,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+436,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+437,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+438,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+439,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+440,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+441,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+442,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+443,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+444,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+445,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+446,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+447,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+448,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+449,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+450,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray_io_q),4);
            tracep->chgBit(oldp+451,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+452,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_ridx_bin),4);
            tracep->chgBit(oldp+453,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__valid_reg));
            tracep->chgBit(oldp+454,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+455,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+456,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+457,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+458,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+459,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+460,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+461,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+462,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+463,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+464,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+465,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+466,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+467,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+468,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+469,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+470,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray_io_q),4);
            tracep->chgBit(oldp+471,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+472,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_ridx_bin),4);
            tracep->chgBit(oldp+473,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__valid_reg));
            tracep->chgBit(oldp+474,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+475,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+476,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+477,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+478,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+479,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+480,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+481,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+482,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+483,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+484,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+485,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+486,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+487,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+488,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+489,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+490,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray_io_q),4);
            tracep->chgBit(oldp+491,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+492,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_ridx_bin),4);
            tracep->chgBit(oldp+493,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__valid_reg));
            tracep->chgBit(oldp+494,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+495,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+496,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+497,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+498,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+499,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+500,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+501,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+502,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+503,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+504,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+505,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+506,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+507,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+508,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+509,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+510,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray_io_q),4);
            tracep->chgBit(oldp+511,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+512,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_ridx_bin),4);
            tracep->chgBit(oldp+513,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__valid_reg));
            tracep->chgBit(oldp+514,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+515,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+516,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+517,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+518,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+519,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+520,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+521,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+522,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+523,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+524,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+525,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+526,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+527,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+528,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+529,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+530,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray_io_q),4);
            tracep->chgBit(oldp+531,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+532,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_ridx_bin),4);
            tracep->chgBit(oldp+533,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__valid_reg));
            tracep->chgBit(oldp+534,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+535,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+536,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+537,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+538,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+539,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+540,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+541,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+542,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+543,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+544,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+545,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+546,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+547,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+548,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+549,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+550,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray_io_q),4);
            tracep->chgBit(oldp+551,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+552,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_ridx_bin),4);
            tracep->chgBit(oldp+553,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__valid_reg));
            tracep->chgBit(oldp+554,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+555,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+556,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+557,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+558,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+559,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+560,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+561,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+562,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+563,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+564,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+565,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+566,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+567,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+568,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+569,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+570,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+571,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__valid_reg));
            tracep->chgBit(oldp+572,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+573,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+574,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+575,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__valid_reg));
            tracep->chgBit(oldp+576,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+577,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+578,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+579,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__valid_reg));
            tracep->chgBit(oldp+580,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+581,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+582,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+583,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__valid_reg));
            tracep->chgBit(oldp+584,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+585,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [2U] | vlSelf->__Vm_traceActivity
                         [0x14U]))) {
            tracep->chgBit(oldp+586,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx) 
                                         != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray_io_q)))));
            tracep->chgBit(oldp+587,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx) 
                                         != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray_io_q)))));
            tracep->chgBit(oldp+588,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx) 
                                         != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray_io_q)))));
            tracep->chgBit(oldp+589,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx) 
                                         != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray_io_q)))));
            tracep->chgBit(oldp+590,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx) 
                                         != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray_io_q)))));
            tracep->chgBit(oldp+591,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx) 
                                         != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray_io_q)))));
            tracep->chgBit(oldp+592,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_incremented) 
                                         != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))));
            tracep->chgBit(oldp+593,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_incremented) 
                                         != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))));
            tracep->chgBit(oldp+594,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_incremented) 
                                         != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))));
            tracep->chgBit(oldp+595,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_incremented) 
                                         != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgCData(oldp+596,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray),4);
            tracep->chgCData(oldp+597,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray),4);
            tracep->chgCData(oldp+598,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray),4);
            tracep->chgCData(oldp+599,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray),4);
            tracep->chgCData(oldp+600,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray),4);
            tracep->chgBit(oldp+601,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__widx_gray));
            tracep->chgBit(oldp+602,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__widx_gray));
            tracep->chgBit(oldp+603,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))));
            tracep->chgBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+607,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__io_enq_ready));
            tracep->chgBit(oldp+608,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__io_enq_ready));
            tracep->chgBit(oldp+609,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__io_enq_ready));
            tracep->chgBit(oldp+610,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__io_enq_ready));
            tracep->chgBit(oldp+611,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__io_enq_ready));
            tracep->chgBit(oldp+612,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source_io_enq_ready));
            tracep->chgBit(oldp+613,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source_io_enq_ready));
            tracep->chgIData(oldp+614,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT___rxInc_a_T),20);
            tracep->chgIData(oldp+615,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z),21);
            tracep->chgIData(oldp+616,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT___rxInc_bT),20);
            tracep->chgIData(oldp+617,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z_1),21);
            tracep->chgIData(oldp+618,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT___rxInc_c_T),20);
            tracep->chgIData(oldp+619,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z_2),21);
            tracep->chgIData(oldp+620,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT___rxInc_d_T),20);
            tracep->chgIData(oldp+621,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z_3),21);
            tracep->chgIData(oldp+622,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT___rxInc_e_T),20);
            tracep->chgIData(oldp+623,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z_4),21);
            tracep->chgIData(oldp+624,(((0x100000U 
                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z)
                                         ? 0xfffffU
                                         : (0xfffffU 
                                            & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z))),20);
            tracep->chgIData(oldp+625,(((0x100000U 
                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z_1)
                                         ? 0xfffffU
                                         : (0xfffffU 
                                            & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z_1))),20);
            tracep->chgIData(oldp+626,(((0x100000U 
                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z_2)
                                         ? 0xfffffU
                                         : (0xfffffU 
                                            & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z_2))),20);
            tracep->chgIData(oldp+627,(((0x100000U 
                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z_3)
                                         ? 0xfffffU
                                         : (0xfffffU 
                                            & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z_3))),20);
            tracep->chgIData(oldp+628,(((0x100000U 
                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z_4)
                                         ? 0xfffffU
                                         : (0xfffffU 
                                            & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z_4))),20);
            tracep->chgBit(oldp+629,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q_io_enq_ready));
            tracep->chgBit(oldp+630,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__ram_R0_en));
            tracep->chgBit(oldp+631,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_flow));
            tracep->chgBit(oldp+632,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_enq));
            tracep->chgBit(oldp+633,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_deq));
            tracep->chgBit(oldp+634,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__do_enq));
            tracep->chgBit(oldp+635,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q_io_enq_ready));
            tracep->chgBit(oldp+636,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__ram_R0_en));
            tracep->chgBit(oldp+637,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_flow));
            tracep->chgBit(oldp+638,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_enq));
            tracep->chgBit(oldp+639,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_deq));
            tracep->chgBit(oldp+640,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__do_enq));
            tracep->chgBit(oldp+641,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q_io_enq_ready));
            tracep->chgBit(oldp+642,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__ram_R0_en));
            tracep->chgBit(oldp+643,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_flow));
            tracep->chgBit(oldp+644,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_enq));
            tracep->chgBit(oldp+645,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_deq));
            tracep->chgBit(oldp+646,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__do_enq));
            tracep->chgBit(oldp+647,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q_io_enq_ready));
            tracep->chgBit(oldp+648,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__ram_R0_en));
            tracep->chgBit(oldp+649,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_flow));
            tracep->chgBit(oldp+650,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_enq));
            tracep->chgBit(oldp+651,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_deq));
            tracep->chgBit(oldp+652,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__do_enq));
            tracep->chgBit(oldp+653,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q_io_enq_ready));
            tracep->chgBit(oldp+654,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__ram_R0_en));
            tracep->chgBit(oldp+655,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_flow));
            tracep->chgBit(oldp+656,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_enq));
            tracep->chgBit(oldp+657,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_deq));
            tracep->chgBit(oldp+658,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__do_enq));
            tracep->chgBit(oldp+659,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+660,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+661,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__widx_widx_bin));
            tracep->chgBit(oldp+662,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__widx_widx_bin) 
                                         + (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source_io_enq_ready)))));
            tracep->chgBit(oldp+663,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ready_reg));
            tracep->chgBit(oldp+664,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+665,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+666,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+667,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+668,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+669,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+670,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__widx_widx_bin));
            tracep->chgBit(oldp+671,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__widx_widx_bin) 
                                         + (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source_io_enq_ready)))));
            tracep->chgBit(oldp+672,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ready_reg));
            tracep->chgBit(oldp+673,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+674,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+675,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+676,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+677,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray))));
            tracep->chgBit(oldp+678,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                            >> 1U))));
            tracep->chgBit(oldp+679,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                            >> 2U))));
            tracep->chgBit(oldp+680,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                            >> 3U))));
            tracep->chgBit(oldp+681,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray))));
            tracep->chgBit(oldp+682,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                            >> 1U))));
            tracep->chgBit(oldp+683,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                            >> 2U))));
            tracep->chgBit(oldp+684,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                            >> 3U))));
            tracep->chgBit(oldp+685,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray))));
            tracep->chgBit(oldp+686,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                            >> 1U))));
            tracep->chgBit(oldp+687,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                            >> 2U))));
            tracep->chgBit(oldp+688,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                            >> 3U))));
            tracep->chgBit(oldp+689,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray))));
            tracep->chgBit(oldp+690,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                            >> 1U))));
            tracep->chgBit(oldp+691,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                            >> 2U))));
            tracep->chgBit(oldp+692,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                            >> 3U))));
            tracep->chgBit(oldp+693,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray))));
            tracep->chgBit(oldp+694,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                            >> 1U))));
            tracep->chgBit(oldp+695,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                            >> 2U))));
            tracep->chgBit(oldp+696,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                            >> 3U))));
            tracep->chgCData(oldp+697,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                          << 3U) | 
                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U)) | 
                                        (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
            tracep->chgBit(oldp+698,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+699,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_widx_bin),4);
            tracep->chgCData(oldp+700,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_incremented),4);
            tracep->chgCData(oldp+701,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_incremented) 
                                        ^ (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_incremented) 
                                                 >> 1U)))),4);
            tracep->chgCData(oldp+702,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__index),3);
            tracep->chgBit(oldp+703,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ready_reg));
            tracep->chgBit(oldp+704,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+705,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+706,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+707,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+708,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+709,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+710,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+711,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+712,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+713,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+714,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+715,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+716,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+717,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+718,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+719,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+720,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                          << 3U) | 
                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U)) | 
                                        (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
            tracep->chgBit(oldp+721,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+722,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_widx_bin),4);
            tracep->chgCData(oldp+723,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_incremented),4);
            tracep->chgCData(oldp+724,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_incremented) 
                                        ^ (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_incremented) 
                                                 >> 1U)))),4);
            tracep->chgCData(oldp+725,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__index),3);
            tracep->chgBit(oldp+726,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ready_reg));
            tracep->chgBit(oldp+727,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+728,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+729,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+730,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+731,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+732,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+733,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+734,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+735,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+736,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+737,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+738,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+739,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+740,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+741,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+742,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+743,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                          << 3U) | 
                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U)) | 
                                        (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
            tracep->chgBit(oldp+744,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+745,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_widx_bin),4);
            tracep->chgCData(oldp+746,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_incremented),4);
            tracep->chgCData(oldp+747,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_incremented) 
                                        ^ (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_incremented) 
                                                 >> 1U)))),4);
            tracep->chgCData(oldp+748,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__index),3);
            tracep->chgBit(oldp+749,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ready_reg));
            tracep->chgBit(oldp+750,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+751,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+752,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+753,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+754,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+755,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+756,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+757,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+758,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+759,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+760,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+761,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+762,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+763,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+764,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+765,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+766,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                          << 3U) | 
                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U)) | 
                                        (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
            tracep->chgBit(oldp+767,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+768,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_widx_bin),4);
            tracep->chgCData(oldp+769,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_incremented),4);
            tracep->chgCData(oldp+770,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_incremented) 
                                        ^ (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_incremented) 
                                                 >> 1U)))),4);
            tracep->chgCData(oldp+771,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__index),3);
            tracep->chgBit(oldp+772,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ready_reg));
            tracep->chgBit(oldp+773,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+774,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+775,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+776,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+777,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+778,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+779,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+780,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+781,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+782,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+783,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+784,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+785,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+786,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+787,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+788,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+789,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                          << 3U) | 
                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U)) | 
                                        (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
            tracep->chgBit(oldp+790,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+791,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_widx_bin),4);
            tracep->chgCData(oldp+792,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_incremented),4);
            tracep->chgCData(oldp+793,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_incremented) 
                                        ^ (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_incremented) 
                                                 >> 1U)))),4);
            tracep->chgCData(oldp+794,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__index),3);
            tracep->chgBit(oldp+795,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ready_reg));
            tracep->chgBit(oldp+796,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+797,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+798,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+799,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+800,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+801,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+802,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+803,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+804,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+805,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+806,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+807,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+808,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+809,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+810,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+811,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgCData(oldp+812,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray),4);
            tracep->chgCData(oldp+813,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray),4);
            tracep->chgCData(oldp+814,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray),4);
            tracep->chgCData(oldp+815,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray),4);
            tracep->chgCData(oldp+816,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray),4);
            tracep->chgBit(oldp+817,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__widx_gray));
            tracep->chgBit(oldp+818,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__widx_gray));
            tracep->chgBit(oldp+819,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))));
            tracep->chgBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+823,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__io_enq_ready));
            tracep->chgBit(oldp+824,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__io_enq_ready));
            tracep->chgBit(oldp+825,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__io_enq_ready));
            tracep->chgBit(oldp+826,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__io_enq_ready));
            tracep->chgBit(oldp+827,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__io_enq_ready));
            tracep->chgBit(oldp+828,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source_io_enq_ready));
            tracep->chgBit(oldp+829,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source_io_enq_ready));
            tracep->chgIData(oldp+830,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT___rxInc_a_T),20);
            tracep->chgIData(oldp+831,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z),21);
            tracep->chgIData(oldp+832,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT___rxInc_bT),20);
            tracep->chgIData(oldp+833,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z_1),21);
            tracep->chgIData(oldp+834,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT___rxInc_c_T),20);
            tracep->chgIData(oldp+835,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z_2),21);
            tracep->chgIData(oldp+836,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT___rxInc_d_T),20);
            tracep->chgIData(oldp+837,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z_3),21);
            tracep->chgIData(oldp+838,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT___rxInc_e_T),20);
            tracep->chgIData(oldp+839,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z_4),21);
            tracep->chgIData(oldp+840,(((0x100000U 
                                         & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z)
                                         ? 0xfffffU
                                         : (0xfffffU 
                                            & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z))),20);
            tracep->chgIData(oldp+841,(((0x100000U 
                                         & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z_1)
                                         ? 0xfffffU
                                         : (0xfffffU 
                                            & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z_1))),20);
            tracep->chgIData(oldp+842,(((0x100000U 
                                         & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z_2)
                                         ? 0xfffffU
                                         : (0xfffffU 
                                            & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z_2))),20);
            tracep->chgIData(oldp+843,(((0x100000U 
                                         & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z_3)
                                         ? 0xfffffU
                                         : (0xfffffU 
                                            & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z_3))),20);
            tracep->chgIData(oldp+844,(((0x100000U 
                                         & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z_4)
                                         ? 0xfffffU
                                         : (0xfffffU 
                                            & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z_4))),20);
            tracep->chgBit(oldp+845,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q_io_enq_ready));
            tracep->chgBit(oldp+846,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__ram_R0_en));
            tracep->chgBit(oldp+847,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_flow));
            tracep->chgBit(oldp+848,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_enq));
            tracep->chgBit(oldp+849,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_deq));
            tracep->chgBit(oldp+850,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__do_enq));
            tracep->chgBit(oldp+851,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q_io_enq_ready));
            tracep->chgBit(oldp+852,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__ram_R0_en));
            tracep->chgBit(oldp+853,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_flow));
            tracep->chgBit(oldp+854,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_enq));
            tracep->chgBit(oldp+855,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_deq));
            tracep->chgBit(oldp+856,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__do_enq));
            tracep->chgBit(oldp+857,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q_io_enq_ready));
            tracep->chgBit(oldp+858,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__ram_R0_en));
            tracep->chgBit(oldp+859,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_flow));
            tracep->chgBit(oldp+860,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_enq));
            tracep->chgBit(oldp+861,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_deq));
            tracep->chgBit(oldp+862,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__do_enq));
            tracep->chgBit(oldp+863,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q_io_enq_ready));
            tracep->chgBit(oldp+864,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__ram_R0_en));
            tracep->chgBit(oldp+865,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_flow));
            tracep->chgBit(oldp+866,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_enq));
            tracep->chgBit(oldp+867,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_deq));
            tracep->chgBit(oldp+868,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__do_enq));
            tracep->chgBit(oldp+869,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q_io_enq_ready));
            tracep->chgBit(oldp+870,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__ram_R0_en));
            tracep->chgBit(oldp+871,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_flow));
            tracep->chgBit(oldp+872,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_enq));
            tracep->chgBit(oldp+873,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_deq));
            tracep->chgBit(oldp+874,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__do_enq));
            tracep->chgBit(oldp+875,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+876,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+877,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__widx_widx_bin));
            tracep->chgBit(oldp+878,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__widx_widx_bin) 
                                         + (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source_io_enq_ready)))));
            tracep->chgBit(oldp+879,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ready_reg));
            tracep->chgBit(oldp+880,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+881,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+882,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+883,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+884,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+885,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+886,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__widx_widx_bin));
            tracep->chgBit(oldp+887,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__widx_widx_bin) 
                                         + (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source_io_enq_ready)))));
            tracep->chgBit(oldp+888,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ready_reg));
            tracep->chgBit(oldp+889,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+890,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+891,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+892,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+893,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray))));
            tracep->chgBit(oldp+894,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                            >> 1U))));
            tracep->chgBit(oldp+895,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                            >> 2U))));
            tracep->chgBit(oldp+896,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                            >> 3U))));
            tracep->chgBit(oldp+897,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray))));
            tracep->chgBit(oldp+898,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                            >> 1U))));
            tracep->chgBit(oldp+899,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                            >> 2U))));
            tracep->chgBit(oldp+900,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                            >> 3U))));
            tracep->chgBit(oldp+901,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray))));
            tracep->chgBit(oldp+902,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                            >> 1U))));
            tracep->chgBit(oldp+903,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                            >> 2U))));
            tracep->chgBit(oldp+904,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                            >> 3U))));
            tracep->chgBit(oldp+905,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray))));
            tracep->chgBit(oldp+906,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                            >> 1U))));
            tracep->chgBit(oldp+907,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                            >> 2U))));
            tracep->chgBit(oldp+908,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                            >> 3U))));
            tracep->chgBit(oldp+909,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray))));
            tracep->chgBit(oldp+910,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                            >> 1U))));
            tracep->chgBit(oldp+911,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                            >> 2U))));
            tracep->chgBit(oldp+912,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                            >> 3U))));
            tracep->chgCData(oldp+913,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                          << 3U) | 
                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U)) | 
                                        (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
            tracep->chgBit(oldp+914,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+915,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_widx_bin),4);
            tracep->chgCData(oldp+916,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_incremented),4);
            tracep->chgCData(oldp+917,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_incremented) 
                                        ^ (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_incremented) 
                                                 >> 1U)))),4);
            tracep->chgCData(oldp+918,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__index),3);
            tracep->chgBit(oldp+919,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ready_reg));
            tracep->chgBit(oldp+920,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+921,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+922,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+923,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+924,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+925,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+926,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+927,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+928,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+929,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+930,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+931,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+932,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+933,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+934,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+935,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+936,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                          << 3U) | 
                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U)) | 
                                        (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
            tracep->chgBit(oldp+937,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+938,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_widx_bin),4);
            tracep->chgCData(oldp+939,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_incremented),4);
            tracep->chgCData(oldp+940,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_incremented) 
                                        ^ (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_incremented) 
                                                 >> 1U)))),4);
            tracep->chgCData(oldp+941,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__index),3);
            tracep->chgBit(oldp+942,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ready_reg));
            tracep->chgBit(oldp+943,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+944,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+945,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+946,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+947,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+948,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+949,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+950,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+951,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+952,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+953,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+954,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+955,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+956,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+957,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+958,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+959,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                          << 3U) | 
                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U)) | 
                                        (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
            tracep->chgBit(oldp+960,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+961,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_widx_bin),4);
            tracep->chgCData(oldp+962,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_incremented),4);
            tracep->chgCData(oldp+963,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_incremented) 
                                        ^ (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_incremented) 
                                                 >> 1U)))),4);
            tracep->chgCData(oldp+964,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__index),3);
            tracep->chgBit(oldp+965,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ready_reg));
            tracep->chgBit(oldp+966,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+967,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+968,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+969,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+970,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+971,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+972,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+973,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+974,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+975,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+976,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+977,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+978,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+979,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+980,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+981,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+982,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                          << 3U) | 
                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U)) | 
                                        (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
            tracep->chgBit(oldp+983,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+984,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_widx_bin),4);
            tracep->chgCData(oldp+985,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_incremented),4);
            tracep->chgCData(oldp+986,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_incremented) 
                                        ^ (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_incremented) 
                                                 >> 1U)))),4);
            tracep->chgCData(oldp+987,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__index),3);
            tracep->chgBit(oldp+988,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ready_reg));
            tracep->chgBit(oldp+989,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+990,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+991,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+992,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+993,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+994,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+995,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+996,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+997,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+998,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+999,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+1000,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+1001,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+1002,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+1003,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+1004,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+1005,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                           << 3U) | 
                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                           << 2U)) 
                                         | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                             << 1U) 
                                            | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
            tracep->chgBit(oldp+1006,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+1007,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_widx_bin),4);
            tracep->chgCData(oldp+1008,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_incremented),4);
            tracep->chgCData(oldp+1009,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_incremented) 
                                         ^ (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_incremented) 
                                                  >> 1U)))),4);
            tracep->chgCData(oldp+1010,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__index),3);
            tracep->chgBit(oldp+1011,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ready_reg));
            tracep->chgBit(oldp+1012,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+1013,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+1014,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+1015,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+1016,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+1017,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                          << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+1018,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+1019,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+1020,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+1021,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+1022,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+1023,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+1024,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+1025,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+1026,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+1027,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
            tracep->chgBit(oldp+1028,((1U & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__data 
                                                     >> 0x3fU)))));
            tracep->chgCData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state),3);
            tracep->chgCData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__counter),8);
            tracep->chgCData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__cmd),8);
            tracep->chgIData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__addr),22);
            tracep->chgQData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__data),64);
            tracep->chgBit(oldp+1035,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state)) 
                                       & (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__counter)))));
            tracep->chgQData(oldp+1036,(((QData)((IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__addr)) 
                                         << 2U)),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
            tracep->chgBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_awvalid));
            tracep->chgCData(oldp+1039,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                                 >> 8U))),4);
            tracep->chgIData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[4U]),32);
            tracep->chgCData(oldp+1041,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_len 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1042,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_size) 
                                               >> 6U))),3);
            tracep->chgCData(oldp+1043,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_burst) 
                                               >> 4U))),2);
            tracep->chgBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_wvalid));
            tracep->chgQData(oldp+1045,((((QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_data[5U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_data[4U])))),64);
            tracep->chgCData(oldp+1047,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_strb 
                                                  >> 0x10U))),8);
            tracep->chgBit(oldp+1048,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_last) 
                                             >> 2U))));
            tracep->chgBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_bready));
            tracep->chgBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_in_bvalid));
            tracep->chgBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_arvalid));
            tracep->chgCData(oldp+1052,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                                 >> 8U))),4);
            tracep->chgIData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[4U]),32);
            tracep->chgCData(oldp+1054,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_len 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1055,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_size) 
                                               >> 6U))),3);
            tracep->chgCData(oldp+1056,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_burst) 
                                               >> 4U))),2);
            tracep->chgBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_rready));
            tracep->chgBit(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_valid));
            tracep->chgBit(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_in_rlast));
            tracep->chgBit(oldp+1060,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_valid) 
                                             >> 2U))));
            tracep->chgBit(oldp+1061,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_valid))));
            tracep->chgBit(oldp+1062,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_valid) 
                                             >> 2U))));
            tracep->chgBit(oldp+1063,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_ready) 
                                             >> 2U))));
            tracep->chgCData(oldp+1064,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___T_77) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___T_78))),4);
            tracep->chgBit(oldp+1065,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arready) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_47))));
            tracep->chgBit(oldp+1066,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_valid) 
                                             >> 2U))));
            tracep->chgBit(oldp+1067,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_ready) 
                                             >> 2U))));
            tracep->chgCData(oldp+1068,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___T_54) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___T_55))),4);
            tracep->chgBit(oldp+1069,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_in_rlast)) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1))));
            tracep->chgBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_1_awvalid));
            tracep->chgIData(oldp+1071,((0x3fffffffU 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[4U])),30);
            tracep->chgBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_1_wvalid));
            tracep->chgBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_1_arvalid));
            tracep->chgIData(oldp+1074,((0x3fffffffU 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[4U])),30);
            tracep->chgBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset));
            tracep->chgBit(oldp+1076,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_a_ready));
            tracep->chgBit(oldp+1077,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid));
            tracep->chgCData(oldp+1078,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode),3);
            tracep->chgCData(oldp+1079,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size),3);
            tracep->chgCData(oldp+1080,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source),4);
            tracep->chgIData(oldp+1081,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address),32);
            tracep->chgCData(oldp+1082,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask),4);
            tracep->chgIData(oldp+1083,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_data),32);
            tracep->chgBit(oldp+1084,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_d_ready));
            tracep->chgBit(oldp+1085,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid));
            tracep->chgCData(oldp+1086,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode),3);
            tracep->chgCData(oldp+1087,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param),2);
            tracep->chgCData(oldp+1088,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size),3);
            tracep->chgCData(oldp+1089,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source),4);
            tracep->chgCData(oldp+1090,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_sink),6);
            tracep->chgBit(oldp+1091,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_denied));
            tracep->chgIData(oldp+1092,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_data),32);
            tracep->chgBit(oldp+1093,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt));
            tracep->chgBit(oldp+1094,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_1_a_valid));
            tracep->chgSData(oldp+1095,((0x1fffU & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)),13);
            tracep->chgBit(oldp+1096,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_1_d_ready));
            tracep->chgBit(oldp+1097,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_a_ready));
            tracep->chgBit(oldp+1098,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid));
            tracep->chgBit(oldp+1099,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_d_ready));
            tracep->chgBit(oldp+1100,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_valid));
            tracep->chgCData(oldp+1101,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_opcode),3);
            tracep->chgCData(oldp+1102,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_size),3);
            tracep->chgBit(oldp+1103,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_denied));
            tracep->chgBit(oldp+1104,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt));
            tracep->chgBit(oldp+1105,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_in_a_ready));
            tracep->chgBit(oldp+1106,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid));
            tracep->chgBit(oldp+1107,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_enq_ready));
            tracep->chgBit(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid));
            tracep->chgCData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode),3);
            tracep->chgCData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size),3);
            tracep->chgCData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source),4);
            tracep->chgIData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address),32);
            tracep->chgCData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_mask),8);
            tracep->chgQData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_data),64);
            tracep->chgBit(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_d_ready));
            tracep->chgBit(oldp+1117,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_in_d_valid));
            tracep->chgQData(oldp+1118,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_in_d_bits_data),64);
            tracep->chgBit(oldp+1120,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_in_d_bits_corrupt));
            tracep->chgBit(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_awready));
            tracep->chgBit(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_awvalid));
            tracep->chgBit(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_id));
            tracep->chgIData(oldp+1124,((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12)),32);
            tracep->chgCData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awlen),8);
            tracep->chgCData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_size),3);
            tracep->chgBit(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_wready));
            tracep->chgBit(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_wvalid));
            tracep->chgBit(oldp+1129,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_todo))));
            tracep->chgBit(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_bready));
            tracep->chgBit(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_bvalid));
            tracep->chgBit(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id));
            tracep->chgCData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_resp),2);
            tracep->chgBit(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_arready));
            tracep->chgBit(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid));
            tracep->chgBit(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_id));
            tracep->chgIData(oldp+1137,((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_5)),32);
            tracep->chgCData(oldp+1138,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__bad)
                                          ? 0U : (7U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___maxSupported1_T)))),8);
            tracep->chgCData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_size),3);
            tracep->chgBit(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_id));
            tracep->chgBit(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_last));
            tracep->chgBit(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_in_awready));
            tracep->chgBit(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awvalid));
            tracep->chgCData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_echo_extra_id),3);
            tracep->chgBit(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awecho_real_last));
            tracep->chgBit(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_in_becho_real_last));
            tracep->chgBit(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_in_arready));
            tracep->chgBit(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_valid));
            tracep->chgCData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_echo_extra_id),3);
            tracep->chgBit(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_arecho_real_last));
            tracep->chgBit(oldp+1151,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                             >> 8U))));
            tracep->chgCData(oldp+1152,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1153,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                             >> 8U))));
            tracep->chgCData(oldp+1154,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                               >> 9U))),3);
            tracep->chgBit(oldp+1155,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid));
            tracep->chgBit(oldp+1156,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_d_ready));
            tracep->chgBit(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_valid));
            tracep->chgIData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA_io_q_bits_data),32);
            tracep->chgBit(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA_io_q_bits_last));
            tracep->chgCData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___io_q_bits_beats_T_13),7);
            tracep->chgBit(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_ready));
            tracep->chgBit(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last));
            tracep->chgBit(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_last));
            tracep->chgBit(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_ready));
            tracep->chgCData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode),3);
            tracep->chgCData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size),3);
            tracep->chgCData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source),4);
            tracep->chgCData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_mask),4);
            tracep->chgIData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data),32);
            tracep->chgBit(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_ready));
            VL_EXTEND_WI(99,32, __Vtemp8161, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data);
            tracep->chgIData(oldp+1171,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode))
                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[0U]
                                          : __Vtemp8161[0U])),32);
            tracep->chgCData(oldp+1172,((0xfU & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size)) 
                                                     >> 2U))))),4);
            tracep->chgBit(oldp+1173,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode) 
                                                >> 2U)))));
            tracep->chgCData(oldp+1174,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode))
                                          ? 0U : (0xfU 
                                                  & (~ 
                                                     (0x7ffU 
                                                      & (((IData)(0x3fU) 
                                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size)) 
                                                         >> 2U)))))),4);
            tracep->chgBit(oldp+1175,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode))));
            tracep->chgSData(oldp+1176,(((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                          ? 7U : ((0xeU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                   ? 6U
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                    ? 5U
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                     ? 4U
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                      ? 3U
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                       ? 2U
                                                       : 
                                                      ((9U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                        ? 1U
                                                        : 
                                                       ((8U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                         ? 0U
                                                         : 
                                                        ((7U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                          ? 7U
                                                          : 
                                                         ((6U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                           ? 6U
                                                           : 
                                                          ((5U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                            ? 5U
                                                            : 
                                                           ((4U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                             ? 4U
                                                             : 
                                                            ((3U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                              ? 3U
                                                              : 
                                                             ((2U 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                               ? 2U
                                                               : 
                                                              ((1U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                                ? 1U
                                                                : 0U)))))))))))))))),16);
            tracep->chgCData(oldp+1177,(((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                          ? 2U : ((0xeU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                   ? 2U
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                    ? 2U
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                     ? 2U
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                      ? 2U
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                       ? 2U
                                                       : 
                                                      ((9U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                        ? 2U
                                                        : 
                                                       ((8U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                         ? 2U
                                                         : 1U))))))))),3);
            tracep->chgCData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size),4);
            tracep->chgIData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__header),32);
            tracep->chgBit(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__isLastState));
            tracep->chgCData(oldp+1181,((0xfU & (((IData)(1U) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size)) 
                                                 >> 3U))),4);
            tracep->chgBit(oldp+1182,((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size))));
            tracep->chgBit(oldp+1183,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size)) 
                                             >> 6U))));
            tracep->chgBit(oldp+1184,((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size))));
            tracep->chgCData(oldp+1185,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data)),8);
            tracep->chgCData(oldp+1186,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1187,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1188,((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data 
                                         >> 0x18U)),8);
            tracep->chgBit(oldp+1189,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_mask))));
            tracep->chgBit(oldp+1190,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_mask) 
                                             >> 1U))));
            tracep->chgBit(oldp+1191,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_mask) 
                                             >> 2U))));
            tracep->chgBit(oldp+1192,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_mask) 
                                             >> 3U))));
            tracep->chgQData(oldp+1193,((((QData)((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data 
                                                           >> 0x18U))) 
                                          << 0x1cU) 
                                         | (QData)((IData)(
                                                           ((0x8000000U 
                                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_mask) 
                                                                << 0x18U)) 
                                                            | ((0x7f80000U 
                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data 
                                                                   << 3U)) 
                                                               | ((0x40000U 
                                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_mask) 
                                                                      << 0x10U)) 
                                                                  | ((0x3fc00U 
                                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data 
                                                                         << 2U)) 
                                                                     | ((0x200U 
                                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_mask) 
                                                                            << 8U)) 
                                                                        | ((0x1feU 
                                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_mask)))))))))))),36);
            tracep->chgWData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide),99);
            tracep->chgBit(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam_io_alloc_valid));
            tracep->chgBit(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_enq_valid));
            tracep->chgBit(oldp+1201,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source) 
                                             >> 3U))));
            tracep->chgCData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_enq_bits_resp),2);
            tracep->chgBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_enq_bits_last));
            tracep->chgBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_enq_valid));
            tracep->chgCData(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_enq_bits_resp),2);
            tracep->chgBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_ready));
            tracep->chgBit(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_valid));
            tracep->chgSData(oldp+1208,((0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize1_T_1 
                                          >> 8U))),15);
            tracep->chgCData(oldp+1209,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_4) 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1210,((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_4))),8);
            tracep->chgBit(oldp+1211,((0U != (0xffU 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_4) 
                                                 >> 8U)))));
            tracep->chgCData(oldp+1212,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_5) 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1213,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_5))),4);
            tracep->chgBit(oldp+1214,((0U != (0xfU 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_5) 
                                                 >> 4U)))));
            tracep->chgCData(oldp+1215,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_6) 
                                               >> 2U))),2);
            tracep->chgCData(oldp+1216,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_6))),2);
            tracep->chgBit(oldp+1217,((0U != (3U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_6) 
                                               >> 2U)))));
            tracep->chgBit(oldp+1218,((IData)((0U != 
                                               (0xaU 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_6))))));
            tracep->chgCData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size),4);
            tracep->chgBit(oldp+1220,(((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size)) 
                                       & (((0ULL == 
                                            (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ 
                                                                (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_5)))))) 
                                           | (0ULL 
                                              == (0x1c0000000ULL 
                                                  & (QData)((IData)(
                                                                    (0x40000000U 
                                                                     ^ 
                                                                     (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_5))))))) 
                                          | (0ULL == 
                                             (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ 
                                                                 (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_5))))))))));
            tracep->chgIData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr),32);
            tracep->chgCData(oldp+1222,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size))),2);
            tracep->chgCData(oldp+1223,((7U & (1U | 
                                               (0xfU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (3U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size))))))),3);
            tracep->chgBit(oldp+1224,((1U & (((IData)(1U) 
                                              << (3U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size))) 
                                             >> 2U))));
            tracep->chgBit(oldp+1225,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr 
                                             >> 2U))));
            tracep->chgBit(oldp+1226,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr 
                                                >> 2U)))));
            tracep->chgBit(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc));
            tracep->chgBit(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_1));
            tracep->chgBit(oldp+1229,((1U & (((IData)(1U) 
                                              << (3U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size))) 
                                             >> 1U))));
            tracep->chgBit(oldp+1230,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr 
                                             >> 1U))));
            tracep->chgBit(oldp+1231,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr 
                                                >> 1U)))));
            tracep->chgBit(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_2));
            tracep->chgBit(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_2));
            tracep->chgBit(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_3));
            tracep->chgBit(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_3));
            tracep->chgBit(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_4));
            tracep->chgBit(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_4));
            tracep->chgBit(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_5));
            tracep->chgBit(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_5));
            tracep->chgBit(oldp+1240,((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)));
            tracep->chgBit(oldp+1241,((1U & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))));
            tracep->chgBit(oldp+1242,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_2) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))));
            tracep->chgBit(oldp+1243,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_2) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_2) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)))));
            tracep->chgBit(oldp+1244,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_2) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)));
            tracep->chgBit(oldp+1245,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_2) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_2) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))));
            tracep->chgBit(oldp+1246,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_3) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))));
            tracep->chgBit(oldp+1247,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_3) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_3) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)))));
            tracep->chgBit(oldp+1248,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_3) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)));
            tracep->chgBit(oldp+1249,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_3) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_3) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))));
            tracep->chgBit(oldp+1250,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_4) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))));
            tracep->chgBit(oldp+1251,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_4) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_4) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)))));
            tracep->chgBit(oldp+1252,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_4) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)));
            tracep->chgBit(oldp+1253,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_4) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_4) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))));
            tracep->chgBit(oldp+1254,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_5) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))));
            tracep->chgBit(oldp+1255,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_5) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_5) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)))));
            tracep->chgBit(oldp+1256,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_5) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)));
            tracep->chgBit(oldp+1257,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_5) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_5) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))));
            tracep->chgCData(oldp+1258,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_5) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_5) 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)) 
                                          << 7U) | 
                                         ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_5) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_5) 
                                               & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))) 
                                           << 6U) | 
                                          ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_4) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_4) 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)) 
                                            << 5U) 
                                           | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_4) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_4) 
                                                   & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))) 
                                               << 4U) 
                                              | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_3) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_3) 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)) 
                                                  << 3U) 
                                                 | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_3) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_3) 
                                                         & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))) 
                                                     << 2U) 
                                                    | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_2) 
                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_2) 
                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)) 
                                                        << 1U) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_2) 
                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_2) 
                                                             & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))))))))))),8);
            tracep->chgCData(oldp+1259,((3U & ((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_id)))),2);
            tracep->chgBit(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid));
            tracep->chgCData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_filter_lo),2);
            tracep->chgCData(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_filter),4);
            tracep->chgCData(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_unready),4);
            tracep->chgCData(oldp+1264,((3U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_readys_T_2)))),2);
            tracep->chgBit(oldp+1265,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_readys_T_2)))));
            tracep->chgBit(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__allowed_0));
            tracep->chgBit(oldp+1267,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_enq_ready) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__allowed_0))));
            tracep->chgSData(oldp+1268,((0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize1_T_1 
                                          >> 8U))),15);
            tracep->chgCData(oldp+1269,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_4) 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1270,((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_4))),8);
            tracep->chgBit(oldp+1271,((0U != (0xffU 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_4) 
                                                 >> 8U)))));
            tracep->chgCData(oldp+1272,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_5) 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1273,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_5))),4);
            tracep->chgBit(oldp+1274,((0U != (0xfU 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_5) 
                                                 >> 4U)))));
            tracep->chgCData(oldp+1275,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_6) 
                                               >> 2U))),2);
            tracep->chgCData(oldp+1276,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_6))),2);
            tracep->chgBit(oldp+1277,((0U != (3U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_6) 
                                               >> 2U)))));
            tracep->chgBit(oldp+1278,((IData)((0U != 
                                               (0xaU 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_6))))));
            tracep->chgCData(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_size),4);
            tracep->chgBit(oldp+1280,(((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_size)) 
                                       & (((0ULL == 
                                            (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ 
                                                                (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12)))))) 
                                           | (0ULL 
                                              == (0x1c0000000ULL 
                                                  & (QData)((IData)(
                                                                    (0x40000000U 
                                                                     ^ 
                                                                     (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12))))))) 
                                          | (0ULL == 
                                             (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ 
                                                                 (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12))))))))));
            tracep->chgIData(oldp+1281,((((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_size)) 
                                          & (((0ULL 
                                               == (0x1fffff000ULL 
                                                   & (QData)((IData)(
                                                                     (0x1000U 
                                                                      ^ 
                                                                      (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12)))))) 
                                              | (0ULL 
                                                 == 
                                                 (0x1c0000000ULL 
                                                  & (QData)((IData)(
                                                                    (0x40000000U 
                                                                     ^ 
                                                                     (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12))))))) 
                                             | (0ULL 
                                                == 
                                                (0x180000000ULL 
                                                 & (QData)((IData)(
                                                                   (0x80000000U 
                                                                    ^ 
                                                                    (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12))))))))
                                          ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12)
                                          : (0x1000U 
                                             | (7U 
                                                & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12))))),32);
            tracep->chgBit(oldp+1282,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_readys_T_2) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__out_1_ready));
            tracep->chgBit(oldp+1284,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__out_1_ready) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_wvalid)) 
                                       & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_todo)))));
            tracep->chgCData(oldp+1285,((3U & ((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_id)))),2);
            tracep->chgBit(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__latch));
            tracep->chgBit(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__earlyWinner_0));
            tracep->chgBit(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__earlyWinner_1));
            tracep->chgBit(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_0));
            tracep->chgBit(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_1));
            tracep->chgCData(oldp+1291,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size))),3);
            tracep->chgCData(oldp+1292,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_size))),3);
            tracep->chgBit(oldp+1293,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))));
            tracep->chgCData(oldp+1294,((7U & (~ (0x3ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                                                     >> 3U))))),3);
            tracep->chgCData(oldp+1295,(((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))
                                          ? (7U & (~ 
                                                   (0x3ffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                                                       >> 3U))))
                                          : 0U)),3);
            tracep->chgBit(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__b_allow));
            tracep->chgCData(oldp+1297,((3U & ((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)))),2);
            tracep->chgBit(oldp+1298,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_valid) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__b_allow))));
            tracep->chgBit(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_io_enq_valid));
            tracep->chgBit(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_io_deq_ready));
            tracep->chgBit(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_io_deq_valid));
            tracep->chgBit(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1_io_enq_valid));
            tracep->chgBit(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1_io_deq_ready));
            tracep->chgBit(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1_io_deq_valid));
            tracep->chgBit(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2_io_enq_valid));
            tracep->chgBit(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2_io_deq_ready));
            tracep->chgBit(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2_io_deq_valid));
            tracep->chgBit(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3_io_enq_valid));
            tracep->chgBit(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3_io_deq_ready));
            tracep->chgBit(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3_io_deq_valid));
            tracep->chgBit(oldp+1311,((1U & ((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_id)))));
            tracep->chgBit(oldp+1312,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_id)) 
                                             >> 1U))));
            tracep->chgBit(oldp+1313,((1U & ((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_id)))));
            tracep->chgBit(oldp+1314,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_id)) 
                                             >> 1U))));
            tracep->chgBit(oldp+1315,((1U & ((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_id)))));
            tracep->chgBit(oldp+1316,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_id)) 
                                             >> 1U))));
            tracep->chgBit(oldp+1317,((1U & ((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)))));
            tracep->chgBit(oldp+1318,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)) 
                                             >> 1U))));
            tracep->chgBit(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__do_enq));
            tracep->chgBit(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__do_deq));
            tracep->chgBit(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__do_enq));
            tracep->chgBit(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__do_deq));
            tracep->chgBit(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__do_enq));
            tracep->chgBit(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__do_deq));
            tracep->chgBit(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__do_enq));
            tracep->chgBit(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__do_deq));
            tracep->chgBit(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_ready));
            tracep->chgIData(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_addr),32);
            tracep->chgCData(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_len),8);
            tracep->chgCData(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_burst),2);
            tracep->chgBit(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_ready));
            tracep->chgBit(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_valid));
            tracep->chgIData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr),32);
            tracep->chgCData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_len),8);
            tracep->chgCData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_burst),2);
            tracep->chgBit(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_io_deq_ready));
            tracep->chgBit(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_io_deq_valid));
            tracep->chgCData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len),8);
            tracep->chgIData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr),32);
            tracep->chgCData(oldp+1340,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr 
                                                  >> 3U))),8);
            tracep->chgCData(oldp+1341,((0x7fU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_3) 
                                                   >> 1U) 
                                                  | (7U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_3) 
                                                        >> 5U))))),7);
            tracep->chgCData(oldp+1342,((0xffU & (~ 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_6) 
                                                   | (0xf0U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_6) 
                                                         << 4U)))))),8);
            tracep->chgCData(oldp+1343,((0xffU & ((0x7fU 
                                                   & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_3) 
                                                       >> 1U) 
                                                      | (7U 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_3) 
                                                            >> 5U)))) 
                                                  | (~ 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_6) 
                                                      | (0xf0U 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_6) 
                                                            << 4U))))))),8);
            tracep->chgCData(oldp+1344,((0xffU & (~ 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_5) 
                                                   | (0xf0U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_5) 
                                                         << 4U)))))),8);
            tracep->chgCData(oldp+1345,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___maxSupported1_T))),8);
            tracep->chgBit(oldp+1346,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_burst))));
            tracep->chgBit(oldp+1347,((3U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_size))));
            tracep->chgBit(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__bad));
            tracep->chgCData(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats_lo),8);
            tracep->chgSData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats),9);
            tracep->chgIData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__inc_addr),32);
            tracep->chgSData(oldp+1352,((0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wrapMask_T_1 
                                          >> 8U))),15);
            tracep->chgBit(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__ar_last));
            tracep->chgCData(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len_1),8);
            tracep->chgIData(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr_1),32);
            tracep->chgCData(oldp+1356,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr_1 
                                                  >> 3U))),8);
            tracep->chgCData(oldp+1357,((0x7fU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_10) 
                                                   >> 1U) 
                                                  | (7U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_10) 
                                                        >> 5U))))),7);
            tracep->chgCData(oldp+1358,((0xffU & (~ 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_17) 
                                                   | (0xf0U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_17) 
                                                         << 4U)))))),8);
            tracep->chgCData(oldp+1359,((0xffU & ((0x7fU 
                                                   & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_10) 
                                                       >> 1U) 
                                                      | (7U 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_10) 
                                                            >> 5U)))) 
                                                  | (~ 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_17) 
                                                      | (0xf0U 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_17) 
                                                            << 4U))))))),8);
            tracep->chgCData(oldp+1360,((0xffU & (~ 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_15) 
                                                   | (0xf0U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_15) 
                                                         << 4U)))))),8);
            tracep->chgCData(oldp+1361,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___maxSupported1_T_1))),8);
            tracep->chgBit(oldp+1362,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_burst))));
            tracep->chgBit(oldp+1363,((3U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_size))));
            tracep->chgBit(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__bad_1));
            tracep->chgCData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats_lo_1),8);
            tracep->chgSData(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_beats),9);
            tracep->chgIData(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__inc_addr_1),32);
            tracep->chgSData(oldp+1368,((0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wrapMask_T_3 
                                          >> 8U))),15);
            tracep->chgBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__aw_last));
            tracep->chgBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_awready));
            tracep->chgBit(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_valid));
            tracep->chgSData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_todo),9);
            tracep->chgBit(oldp+1373,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_bready) 
                                             | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_in_becho_real_last))))));
            tracep->chgBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
            tracep->chgCData(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_bits),2);
            tracep->chgBit(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_ready));
            tracep->chgBit(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_valid));
            tracep->chgCData(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_bits),2);
            tracep->chgBit(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
            tracep->chgBit(oldp+1380,((0ULL == (0xc0000000ULL 
                                                & (QData)((IData)(
                                                                  vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[4U]))))));
            tracep->chgBit(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
            tracep->chgBit(oldp+1382,((0ULL == (0xc0000000ULL 
                                                & (QData)((IData)(
                                                                  vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[4U]))))));
            tracep->chgBit(oldp+1383,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_bits))));
            tracep->chgBit(oldp+1384,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_bits) 
                                             >> 1U))));
            tracep->chgCData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter_lo),2);
            tracep->chgCData(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter),4);
            tracep->chgCData(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
            tracep->chgCData(oldp+1388,((3U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_2)))),2);
            tracep->chgBit(oldp+1389,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_2)))));
            tracep->chgBit(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_0));
            tracep->chgBit(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
            tracep->chgBit(oldp+1392,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_2) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
            tracep->chgBit(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
            tracep->chgCData(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid),4);
            tracep->chgCData(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter_lo_1),2);
            tracep->chgCData(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter_1),4);
            tracep->chgCData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
            tracep->chgCData(oldp+1399,((3U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_5)))),2);
            tracep->chgBit(oldp+1400,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_5)))));
            tracep->chgBit(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
            tracep->chgBit(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
            tracep->chgBit(oldp+1403,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_5) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
            tracep->chgBit(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
            tracep->chgCData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid),4);
            tracep->chgSData(oldp+1407,((0xffffU & 
                                         ((IData)(1U) 
                                          << (0xfU 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                                 >> 8U))))),16);
            tracep->chgSData(oldp+1408,((0xffffU & 
                                         ((IData)(1U) 
                                          << (0xfU 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                                 >> 8U))))),16);
            tracep->chgSData(oldp+1409,((0xffffU & 
                                         ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)))),16);
            tracep->chgSData(oldp+1410,((0xffffU & 
                                         ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)))),16);
            tracep->chgBit(oldp+1411,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arTag_T) 
                                             >> 1U))));
            tracep->chgBit(oldp+1412,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_enq_bits_T) 
                                             >> 1U))));
            tracep->chgBit(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arready));
            tracep->chgBit(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
            tracep->chgBit(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rlast));
            tracep->chgBit(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
            tracep->chgBit(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
            tracep->chgBit(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
            tracep->chgBit(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
            tracep->chgBit(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
            tracep->chgBit(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
            tracep->chgBit(oldp+1422,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0))));
            tracep->chgBit(oldp+1423,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
                                       & (0ULL == (0xc0000000ULL 
                                                   & (QData)((IData)(
                                                                     vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[4U])))))));
            tracep->chgBit(oldp+1424,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0))));
            tracep->chgBit(oldp+1425,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
                                       & (0ULL == (0xc0000000ULL 
                                                   & (QData)((IData)(
                                                                     vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[4U])))))));
            tracep->chgBit(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
            tracep->chgBit(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
            tracep->chgCData(oldp+1428,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_cache) 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1429,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_prot) 
                                               >> 6U))),3);
            tracep->chgCData(oldp+1430,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_qos) 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1431,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_cache) 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1432,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_prot) 
                                               >> 6U))),3);
            tracep->chgCData(oldp+1433,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_qos) 
                                                 >> 8U))),4);
            tracep->chgQData(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_addr),64);
            tracep->chgCData(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_wmask),8);
            tracep->chgQData(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_o),64);
            tracep->chgBit(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we));
            tracep->chgBit(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re));
            tracep->chgBit(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core_stall_l));
            tracep->chgCData(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we_type),3);
            tracep->chgCData(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re_type),3);
            tracep->chgQData(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_data),64);
            tracep->chgQData(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_addr),64);
            tracep->chgCData(oldp+1448,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_wmask)
                                          : 0U)),8);
            tracep->chgBit(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_we));
            tracep->chgBit(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_re));
            tracep->chgCData(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncahce_arb_size),3);
            tracep->chgQData(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_data),64);
            tracep->chgQData(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr),64);
            tracep->chgCData(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_mask),8);
            tracep->chgBit(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_we));
            tracep->chgBit(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_re));
            tracep->chgBit(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_finish));
            tracep->chgIData(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data),32);
            tracep->chgBit(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_valid));
            tracep->chgBit(oldp+1462,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)))));
            tracep->chgQData(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_data_out),64);
            tracep->chgBit(oldp+1465,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncahche_read_finish)
                                        : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we))
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncahche_write_finish)
                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_finish)))));
            tracep->chgQData(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_addr),64);
            tracep->chgCData(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_type),4);
            tracep->chgBit(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_ready));
            tracep->chgBit(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_ready));
            tracep->chgCData(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_id),4);
            tracep->chgCData(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_resp),2);
            tracep->chgBit(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_valid));
            tracep->chgBit(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_ready));
            tracep->chgCData(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_id),4);
            tracep->chgQData(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_data),64);
            tracep->chgCData(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_resp),2);
            tracep->chgBit(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_last));
            tracep->chgBit(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_valid));
            tracep->chgSData(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id),12);
            tracep->chgWData(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr),192);
            tracep->chgIData(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_len),24);
            tracep->chgSData(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_size),9);
            tracep->chgCData(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_burst),6);
            tracep->chgSData(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_cache),12);
            tracep->chgSData(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_prot),9);
            tracep->chgSData(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_qos),12);
            tracep->chgCData(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_valid),3);
            tracep->chgCData(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_ready),3);
            tracep->chgWData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_data),192);
            tracep->chgIData(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_strb),24);
            tracep->chgCData(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_last),3);
            tracep->chgCData(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_valid),3);
            tracep->chgCData(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_ready),3);
            tracep->chgSData(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_id),12);
            tracep->chgCData(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_resp),6);
            tracep->chgCData(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_valid),3);
            tracep->chgCData(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_ready),3);
            tracep->chgSData(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id),12);
            tracep->chgWData(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr),192);
            tracep->chgIData(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_len),24);
            tracep->chgSData(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_size),9);
            tracep->chgCData(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_burst),6);
            tracep->chgSData(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_cache),12);
            tracep->chgSData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_prot),9);
            tracep->chgSData(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_qos),12);
            tracep->chgCData(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_valid),3);
            tracep->chgCData(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_ready),3);
            tracep->chgSData(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_id),12);
            tracep->chgWData(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_data),192);
            tracep->chgCData(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_resp),6);
            tracep->chgCData(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_last),3);
            tracep->chgCData(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_valid),3);
            tracep->chgCData(oldp+1535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_ready),3);
            tracep->chgQData(oldp+1536,((((QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[5U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[4U])))),64);
            tracep->chgQData(oldp+1538,((((QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[5U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[4U])))),64);
            tracep->chgCData(oldp+1540,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                                 >> 4U))),4);
            tracep->chgQData(oldp+1541,((((QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[2U])))),64);
            tracep->chgCData(oldp+1543,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_len 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1544,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_size) 
                                               >> 3U))),3);
            tracep->chgCData(oldp+1545,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_burst) 
                                               >> 2U))),2);
            tracep->chgCData(oldp+1546,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_cache) 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1547,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_prot) 
                                               >> 3U))),3);
            tracep->chgCData(oldp+1548,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_qos) 
                                                 >> 4U))),4);
            tracep->chgBit(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__tim_axi_aw_ready));
            tracep->chgBit(oldp+1550,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_valid) 
                                             >> 1U))));
            tracep->chgQData(oldp+1551,((((QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_data[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_data[2U])))),64);
            tracep->chgCData(oldp+1553,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_strb 
                                                  >> 8U))),8);
            tracep->chgBit(oldp+1554,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_last) 
                                             >> 1U))));
            tracep->chgBit(oldp+1555,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_valid) 
                                             >> 1U))));
            tracep->chgBit(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__tim_axi_w_ready));
            tracep->chgBit(oldp+1557,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_ready) 
                                             >> 1U))));
            tracep->chgCData(oldp+1558,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                                 >> 4U))),4);
            tracep->chgQData(oldp+1559,((((QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[2U])))),64);
            tracep->chgCData(oldp+1561,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_len 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1562,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_size) 
                                               >> 3U))),3);
            tracep->chgCData(oldp+1563,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_burst) 
                                               >> 2U))),2);
            tracep->chgCData(oldp+1564,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_cache) 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1565,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_prot) 
                                               >> 3U))),3);
            tracep->chgCData(oldp+1566,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_qos) 
                                                 >> 4U))),4);
            tracep->chgBit(oldp+1567,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_valid) 
                                             >> 1U))));
            tracep->chgBit(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__tim_axi_ar_ready));
            tracep->chgQData(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__tim_axi_r_data),64);
            tracep->chgBit(oldp+1571,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_ready) 
                                             >> 1U))));
            tracep->chgCData(oldp+1572,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id))),4);
            tracep->chgQData(oldp+1573,((((QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[0U])))),64);
            tracep->chgCData(oldp+1575,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_len)),8);
            tracep->chgCData(oldp+1576,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_size))),3);
            tracep->chgCData(oldp+1577,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_burst))),2);
            tracep->chgCData(oldp+1578,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_cache))),4);
            tracep->chgCData(oldp+1579,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_prot))),3);
            tracep->chgCData(oldp+1580,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_qos))),4);
            tracep->chgBit(oldp+1581,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_valid))));
            tracep->chgQData(oldp+1582,((((QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_data[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_data[0U])))),64);
            tracep->chgCData(oldp+1584,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_strb)),8);
            tracep->chgBit(oldp+1585,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_last))));
            tracep->chgBit(oldp+1586,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_valid))));
            tracep->chgBit(oldp+1587,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_ready))));
            tracep->chgCData(oldp+1588,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id))),4);
            tracep->chgQData(oldp+1589,((((QData)((IData)(
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[0U])))),64);
            tracep->chgCData(oldp+1591,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_len)),8);
            tracep->chgCData(oldp+1592,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_size))),3);
            tracep->chgCData(oldp+1593,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_burst))),2);
            tracep->chgCData(oldp+1594,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_cache))),4);
            tracep->chgCData(oldp+1595,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_prot))),3);
            tracep->chgCData(oldp+1596,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_qos))),4);
            tracep->chgBit(oldp+1597,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_valid))));
            tracep->chgBit(oldp+1598,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_ready))));
            tracep->chgCData(oldp+1599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing),3);
            tracep->chgBit(oldp+1600,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                                        ? 0U : (1U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)))));
            tracep->chgCData(oldp+1601,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data 
                                                  >> 0xfU))),5);
            tracep->chgQData(oldp+1602,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                                          ? 0ULL : 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                                           ? (0xfffffffffffffffeULL 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc)
                                           : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc))),64);
            tracep->chgBit(oldp+1604,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_valid))));
            tracep->chgQData(oldp+1605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex_id_rd_data),64);
            tracep->chgCData(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_reg_addr1),5);
            tracep->chgBit(oldp+1608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_reg_ena1));
            tracep->chgCData(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_reg_addr2),5);
            tracep->chgBit(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_reg_ena2));
            tracep->chgBit(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ctrl_req));
            tracep->chgCData(oldp+1612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type),8);
            tracep->chgCData(oldp+1613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_opcode),8);
            tracep->chgQData(oldp+1614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_op),64);
            tracep->chgBit(oldp+1616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_rd_ena));
            tracep->chgBit(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_pip_jalrena));
            tracep->chgBit(oldp+1618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_if_flush));
            tracep->chgCData(oldp+1619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__stall_ctrl),5);
            tracep->chgQData(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__mem_id_data),64);
            tracep->chgBit(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__mem_ctrl_req));
            tracep->chgQData(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__mem_mem_wb_pc),64);
            tracep->chgIData(oldp+1625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__mem_mem_wb_inst),32);
            tracep->chgIData(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm),20);
            tracep->chgSData(oldp+1627,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data 
                                         >> 0x14U)),12);
            tracep->chgSData(oldp+1628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm),12);
            tracep->chgCData(oldp+1629,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data)),7);
            tracep->chgBit(oldp+1630,((IData)((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data)))));
            tracep->chgBit(oldp+1631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr));
            tracep->chgBit(oldp+1632,((IData)((0x63U 
                                               == (0x7fU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data)))));
            tracep->chgQData(oldp+1633,(((IData)((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data)))
                                          ? (((- (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm 
                                                                     >> 0x13U))))) 
                                              << 0x14U) 
                                             | (QData)((IData)(
                                                               (0xfffffU 
                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm 
                                                                   << 1U)))))
                                          : ((IData)(
                                                     (0x63U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data)))
                                              ? (((- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm) 
                                                                         >> 0xbU))))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (0xfffU 
                                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm) 
                                                                       << 1U)))))
                                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data 
                                                                       >> 0x1fU)))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data 
                                                                     >> 0x14U))))
                                                  : 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                                                   ? 0ULL
                                                   : 4ULL))))),64);
            tracep->chgQData(oldp+1635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc),64);
            tracep->chgCData(oldp+1637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__rs1),5);
            tracep->chgBit(oldp+1638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_lui));
            tracep->chgBit(oldp+1639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_auipc));
            tracep->chgBit(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_jal));
            tracep->chgBit(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_jalr));
            tracep->chgBit(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_jump));
            tracep->chgBit(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_srai));
            tracep->chgBit(oldp+1644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_addiw));
            tracep->chgBit(oldp+1645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_slliw));
            tracep->chgBit(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_srliw));
            tracep->chgBit(oldp+1647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw));
            tracep->chgBit(oldp+1648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_add));
            tracep->chgBit(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sub));
            tracep->chgBit(oldp+1650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sll));
            tracep->chgBit(oldp+1651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_slt));
            tracep->chgBit(oldp+1652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sltu));
            tracep->chgBit(oldp+1653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_xor));
            tracep->chgBit(oldp+1654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_srl));
            tracep->chgBit(oldp+1655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sra));
            tracep->chgBit(oldp+1656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_or));
            tracep->chgBit(oldp+1657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_and));
            tracep->chgBit(oldp+1658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_div));
            tracep->chgBit(oldp+1659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_divu));
            tracep->chgBit(oldp+1660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_mul));
            tracep->chgBit(oldp+1661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_mulh));
            tracep->chgBit(oldp+1662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_mulhsu));
            tracep->chgBit(oldp+1663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_mulhu));
            tracep->chgBit(oldp+1664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_rem));
            tracep->chgBit(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_remu));
            tracep->chgBit(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_addw));
            tracep->chgBit(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_subw));
            tracep->chgBit(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sllw));
            tracep->chgBit(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_srlw));
            tracep->chgBit(oldp+1670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sraw));
            tracep->chgBit(oldp+1671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_divuw));
            tracep->chgBit(oldp+1672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_divw));
            tracep->chgBit(oldp+1673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_mulw));
            tracep->chgBit(oldp+1674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_remuw));
            tracep->chgBit(oldp+1675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_remw));
            tracep->chgBit(oldp+1676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw));
            tracep->chgBit(oldp+1677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs));
            tracep->chgBit(oldp+1678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc));
            tracep->chgBit(oldp+1679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi));
            tracep->chgBit(oldp+1680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrsi));
            tracep->chgBit(oldp+1681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrci));
            tracep->chgBit(oldp+1682,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs)) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc))));
            tracep->chgBit(oldp+1683,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrsi)) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrci))));
            tracep->chgBit(oldp+1684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak));
            tracep->chgBit(oldp+1685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__ex_op1));
            tracep->chgBit(oldp+1686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__mem_op1));
            tracep->chgBit(oldp+1687,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__stall_ctrl) 
                                             >> 3U))));
            tracep->chgQData(oldp+1688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__exe_res),64);
            tracep->chgQData(oldp+1690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divrem_data),64);
            tracep->chgCData(oldp+1692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__data_byte),8);
            tracep->chgSData(oldp+1693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__data_half_byte),16);
            tracep->chgIData(oldp+1694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__data_word),32);
            tracep->chgQData(oldp+1695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__store_data),64);
            tracep->chgCData(oldp+1697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__store_mask),8);
            tracep->chgBit(oldp+1698,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re))));
            tracep->chgBit(oldp+1699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache));
            tracep->chgCData(oldp+1700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__byte_size),3);
            tracep->chgQData(oldp+1701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__addr_outaxi),64);
            tracep->chgQData(oldp+1703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache_temp),64);
            tracep->chgBit(oldp+1705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncahche_read_finish));
            tracep->chgBit(oldp+1706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache_out_ena));
            tracep->chgQData(oldp+1707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncahce_out_addr),64);
            tracep->chgBit(oldp+1709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache_out_ena1));
            tracep->chgQData(oldp+1710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache_out_addr1),64);
            tracep->chgBit(oldp+1712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncahche_write_finish));
            tracep->chgBit(oldp+1713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__icache_if_shankhand));
            tracep->chgCData(oldp+1714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst_nxt),6);
            tracep->chgBit(oldp+1715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__inst_hit_ok));
            tracep->chgIData(oldp+1716,((0x7fffffU 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                    >> 9U)))),23);
            tracep->chgCData(oldp+1717,((0x3fU & (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                          >> 3U)))),6);
            tracep->chgCData(oldp+1718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread_nxt),6);
            tracep->chgBit(oldp+1719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__mem_hit_ok));
            tracep->chgQData(oldp+1720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__dirty_out_addr),64);
            tracep->chgQData(oldp+1722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__dirty_out_data),64);
            tracep->chgCData(oldp+1724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__dirty_out_type),4);
            tracep->chgBit(oldp+1725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__dirty_clean_o));
            tracep->chgBit(oldp+1726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__dirty_clean_t));
            tracep->chgBit(oldp+1727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__missr_i_ok));
            tracep->chgQData(oldp+1728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__missr_out_addr),64);
            tracep->chgWData(oldp+1730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__missr_data_strb),128);
            tracep->chgBit(oldp+1734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__missr_tag_ena1));
            tracep->chgWData(oldp+1735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__missr_data_temp),128);
            tracep->chgBit(oldp+1739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__missr_tag_ena2));
            tracep->chgCData(oldp+1740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite_nxt),6);
            tracep->chgWData(oldp+1741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__hitw_data_temp),128);
            tracep->chgQData(oldp+1745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__strb_extection),64);
            tracep->chgQData(oldp+1747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__dirtyw_out_addr),64);
            tracep->chgQData(oldp+1749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__dirtyw_out_data),64);
            tracep->chgCData(oldp+1751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__dirtyw_out_type),4);
            tracep->chgBit(oldp+1752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__dirtyw_clean_o));
            tracep->chgBit(oldp+1753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__dirtyw_clean_t));
            tracep->chgBit(oldp+1754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__missw_i_ok));
            tracep->chgQData(oldp+1755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__missw_out_addr),64);
            tracep->chgWData(oldp+1757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__missw_data_strb),128);
            tracep->chgBit(oldp+1761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__missw_tag_ena1));
            tracep->chgWData(oldp+1762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__missw_data_temp),128);
            tracep->chgBit(oldp+1766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__missw_tag_ena2));
            tracep->chgBit(oldp+1767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__oteg_ena_i));
            tracep->chgCData(oldp+1768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__oteg_addr_i),6);
            tracep->chgBit(oldp+1769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__tteg_ena_i));
            tracep->chgCData(oldp+1770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__tteg_addr_i),6);
            tracep->chgBit(oldp+1771,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_icache_shankhand)) 
                                       & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_type)) 
                                          | (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_type))))));
            tracep->chgBit(oldp+1772,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_icache_shankhand)) 
                                       & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_type)) 
                                          | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_type))))));
            tracep->chgBit(oldp+1773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_icache_shankhand));
            tracep->chgBit(oldp+1774,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_icache_shankhand)) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_re))));
            tracep->chgBit(oldp+1775,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_icache_shankhand)) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_we))));
            tracep->chgBit(oldp+1776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__dread_arshankhand));
            tracep->chgBit(oldp+1777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__dread_success));
            tracep->chgBit(oldp+1778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__dread_arshankhand_u));
            tracep->chgBit(oldp+1779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__dread_success_u));
            tracep->chgBit(oldp+1780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__iread_arshankhand));
            tracep->chgBit(oldp+1781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__iread_success));
            tracep->chgBit(oldp+1782,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_valid) 
                                        & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_id))) 
                                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_resp)))));
            tracep->chgBit(oldp+1783,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__mode_right) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__ar_shakehand)) 
                                       & (0x2004000ULL 
                                          == (((QData)((IData)(
                                                               vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[2U])))))));
            tracep->chgBit(oldp+1784,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__mode_right) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__ar_shakehand)) 
                                       & (0x200bff8ULL 
                                          == (((QData)((IData)(
                                                               vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[2U])))))));
            tracep->chgBit(oldp+1785,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__mode_right) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__w_shakehand)) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__aw_shakehand)) 
                                       & (0x2004000ULL 
                                          == (((QData)((IData)(
                                                               vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[2U])))))));
            tracep->chgBit(oldp+1786,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__mode_right) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__w_shakehand)) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__aw_shakehand)) 
                                       & (0x200bff8ULL 
                                          == (((QData)((IData)(
                                                               vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[2U])))))));
            tracep->chgQData(oldp+1787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__wmask),64);
            tracep->chgBit(oldp+1789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__aw_shakehand));
            tracep->chgBit(oldp+1790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__w_shakehand));
            tracep->chgBit(oldp+1791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__mode_right));
            tracep->chgCData(oldp+1792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__state_time_m_nxt),2);
            tracep->chgBit(oldp+1793,((IData)((((((
                                                   (0U 
                                                    == 
                                                    (0xff00U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_len)) 
                                                   & (0x30U 
                                                      == 
                                                      (0x38U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_size)))) 
                                                  & (4U 
                                                     == 
                                                     (0xcU 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_burst)))) 
                                                 & (0U 
                                                    == 
                                                    (0xf0U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_cache)))) 
                                                & (0U 
                                                   == 
                                                   (0x38U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_prot)))) 
                                               & (0U 
                                                  == 
                                                  (0xf0U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_qos)))))));
            tracep->chgBit(oldp+1794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__ar_shakehand));
            tracep->chgCData(oldp+1795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__state_time_r_nxt),2);
            tracep->chgBit(oldp+1796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
            tracep->chgBit(oldp+1797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
            tracep->chgBit(oldp+1798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
            tracep->chgBit(oldp+1799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
            tracep->chgBit(oldp+1800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
            tracep->chgBit(oldp+1801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
            tracep->chgBit(oldp+1802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
            tracep->chgBit(oldp+1803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
            tracep->chgBit(oldp+1804,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor_io_in_a_ready));
            tracep->chgBit(oldp+1805,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor_io_in_d_valid));
            tracep->chgCData(oldp+1806,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor_io_in_d_bits_opcode),3);
            tracep->chgCData(oldp+1807,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor_io_in_d_bits_param),2);
            tracep->chgCData(oldp+1808,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor_io_in_d_bits_size),3);
            tracep->chgCData(oldp+1809,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor_io_in_d_bits_source),4);
            tracep->chgCData(oldp+1810,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor_io_in_d_bits_sink),6);
            tracep->chgBit(oldp+1811,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor_io_in_d_bits_denied));
            tracep->chgCData(oldp+1812,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__readys_filter_lo),2);
            tracep->chgCData(oldp+1813,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__readys_filter),4);
            tracep->chgCData(oldp+1814,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__readys_unready),4);
            tracep->chgCData(oldp+1815,((3U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___readys_readys_T_2)))),2);
            tracep->chgBit(oldp+1816,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___readys_readys_T_2)))));
            tracep->chgBit(oldp+1817,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__earlyWinner_0));
            tracep->chgBit(oldp+1818,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__muxStateEarly_0));
            tracep->chgBit(oldp+1819,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___readys_readys_T_2) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1820,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__earlyWinner_1));
            tracep->chgBit(oldp+1821,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__muxStateEarly_1));
            tracep->chgBit(oldp+1822,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__requestAIO_0_0));
            tracep->chgBit(oldp+1823,((0ULL == (0xc0000000ULL 
                                                & (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))));
            tracep->chgCData(oldp+1824,((0xfU & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_size)) 
                                                     >> 2U))))),4);
            tracep->chgBit(oldp+1825,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_opcode))));
            tracep->chgCData(oldp+1826,(((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_opcode))
                                          ? (0xfU & 
                                             (~ (0x7ffU 
                                                 & (((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_size)) 
                                                    >> 2U))))
                                          : 0U)),4);
            tracep->chgBit(oldp+1827,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__latch));
            tracep->chgCData(oldp+1828,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__earlyWinner_0)
                                          ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_opcode))
                                              ? (0xfU 
                                                 & (~ 
                                                    (0x7ffU 
                                                     & (((IData)(0x3fU) 
                                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_size)) 
                                                        >> 2U))))
                                              : 0U)
                                          : 0U)),4);
            tracep->chgBit(oldp+1829,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor__DOT__source_ok));
            tracep->chgCData(oldp+1830,((0x3fU & (~ 
                                                  (0x1fffU 
                                                   & ((IData)(0x3fU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)))))),6);
            tracep->chgBit(oldp+1831,((0U == (0x3fU 
                                              & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                 & (~ 
                                                    (0x1fffU 
                                                     & ((IData)(0x3fU) 
                                                        << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)))))))));
            tracep->chgBit(oldp+1832,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))));
            tracep->chgCData(oldp+1833,((3U & (1U | 
                                               ((IData)(1U) 
                                                << 
                                                (1U 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)))))),2);
            tracep->chgBit(oldp+1834,((1U & (((IData)(1U) 
                                              << (1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                                             >> 1U))));
            tracep->chgBit(oldp+1835,((1U & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                             >> 1U))));
            tracep->chgBit(oldp+1836,((1U & (~ (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                >> 1U)))));
            tracep->chgBit(oldp+1837,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+1838,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+1839,((1U & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)));
            tracep->chgBit(oldp+1840,((1U & (~ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))));
            tracep->chgBit(oldp+1841,((IData)((0U == 
                                               (3U 
                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgBit(oldp+1842,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor__DOT__mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+1843,((IData)((1U == 
                                               (3U 
                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgBit(oldp+1844,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor__DOT__mask_acc) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+1845,((IData)((2U == 
                                               (3U 
                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgBit(oldp+1846,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor__DOT__mask_acc_1) 
                                             | (IData)(
                                                       (2U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+1847,((IData)((3U == 
                                               (3U 
                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgBit(oldp+1848,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor__DOT__mask_acc_1) 
                                             | ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                 >> 1U) 
                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgCData(oldp+1849,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor__DOT__mask),4);
            tracep->chgBit(oldp+1850,(1U));
            tracep->chgBit(oldp+1851,((0x21U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor_io_in_d_bits_sink))));
            tracep->chgCData(oldp+1852,((0xfU & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                     >> 2U))))),4);
            tracep->chgBit(oldp+1853,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                                                >> 2U)))));
            tracep->chgCData(oldp+1854,((0xfU & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor_io_in_d_bits_size)) 
                                                     >> 2U))))),4);
            tracep->chgBit(oldp+1855,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor_io_in_d_bits_opcode))));
            tracep->chgCData(oldp+1856,((0xfU & (IData)(
                                                        (7ULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U))))),4);
            tracep->chgQData(oldp+1857,((((QData)((IData)(
                                                          vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor__DOT___GEN_23[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor__DOT___GEN_23[0U])))),64);
            tracep->chgBit(oldp+1859,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__a_io_deq_ready));
            tracep->chgBit(oldp+1860,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__out_1_ready));
            tracep->chgBit(oldp+1861,(1U));
            tracep->chgBit(oldp+1862,((0U == (0x3fU 
                                              & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                 & (~ 
                                                    (0x1fffU 
                                                     & ((IData)(0x3fU) 
                                                        << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)))))))));
            tracep->chgBit(oldp+1863,((1U & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                             >> 1U))));
            tracep->chgBit(oldp+1864,((1U & (~ (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                >> 1U)))));
            tracep->chgBit(oldp+1865,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+1866,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+1867,((1U & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)));
            tracep->chgBit(oldp+1868,((1U & (~ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))));
            tracep->chgBit(oldp+1869,((IData)((0U == 
                                               (3U 
                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgBit(oldp+1870,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__monitor__DOT__mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+1871,((IData)((1U == 
                                               (3U 
                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgBit(oldp+1872,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__monitor__DOT__mask_acc) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+1873,((IData)((2U == 
                                               (3U 
                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgBit(oldp+1874,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__monitor__DOT__mask_acc_1) 
                                             | (IData)(
                                                       (2U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+1875,((IData)((3U == 
                                               (3U 
                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgBit(oldp+1876,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__monitor__DOT__mask_acc_1) 
                                             | ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                 >> 1U) 
                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgCData(oldp+1877,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__monitor__DOT__mask),4);
            tracep->chgSData(oldp+1878,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__monitor__DOT__a_set_wo_ready),16);
            tracep->chgQData(oldp+1879,((((QData)((IData)(
                                                          vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__monitor__DOT___GEN_23[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__monitor__DOT___GEN_23[0U])))),64);
            tracep->chgBit(oldp+1881,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__a__DOT__do_enq));
            tracep->chgBit(oldp+1882,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__monitor_io_in_a_ready));
            tracep->chgCData(oldp+1883,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__a_id),2);
            tracep->chgBit(oldp+1884,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__a_id))));
            tracep->chgBit(oldp+1885,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))));
            tracep->chgBit(oldp+1886,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__stall));
            tracep->chgBit(oldp+1887,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_a_ready) 
                                       & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__stall)))));
            tracep->chgCData(oldp+1888,((0xfU & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                                                     >> 2U))))),4);
            tracep->chgBit(oldp+1889,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__d_first));
            tracep->chgBit(oldp+1890,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__monitor__DOT__source_ok));
            tracep->chgBit(oldp+1891,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+1892,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+1893,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__monitor__DOT__mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+1894,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__monitor__DOT__mask_acc) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+1895,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__monitor__DOT__mask_acc_1) 
                                             | (IData)(
                                                       (2U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+1896,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__monitor__DOT__mask_acc_1) 
                                             | ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                 >> 1U) 
                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgCData(oldp+1897,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__monitor__DOT__mask),4);
            tracep->chgBit(oldp+1898,(1U));
            tracep->chgBit(oldp+1899,((0x21U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_sink))));
            tracep->chgCData(oldp+1900,((0xfU & (IData)(
                                                        (7ULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U))))),4);
            tracep->chgQData(oldp+1901,((((QData)((IData)(
                                                          vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__monitor__DOT___GEN_23[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__monitor__DOT___GEN_23[0U])))),64);
            tracep->chgBit(oldp+1903,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor_io_in_d_valid));
            tracep->chgBit(oldp+1904,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeat_last)))));
            tracep->chgCData(oldp+1905,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_mask),8);
            tracep->chgIData(oldp+1906,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_data)),32);
            tracep->chgQData(oldp+1907,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__cated_bits_data),64);
            tracep->chgBit(oldp+1909,((1U & (~ (0xffU 
                                                & (((IData)(7U) 
                                                    << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1910,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeat_last));
            tracep->chgBit(oldp+1911,((1U & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                             >> 2U))));
            tracep->chgBit(oldp+1912,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeat_index));
            tracep->chgIData(oldp+1913,((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__cated_bits_data)),32);
            tracep->chgIData(oldp+1914,((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__cated_bits_data 
                                                 >> 0x20U))),32);
            tracep->chgCData(oldp+1915,((0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_mask))),4);
            tracep->chgCData(oldp+1916,((0xfU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_mask) 
                                                 >> 4U))),4);
            tracep->chgBit(oldp+1917,((1U & (~ (0xffU 
                                                & (((IData)(7U) 
                                                    << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1918,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__last));
            tracep->chgBit(oldp+1919,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_d_ready) 
                                             | (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__last))))));
            tracep->chgBit(oldp+1920,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__bundleIn_0_d_bits_data_masked_enable_0));
            tracep->chgBit(oldp+1921,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__source_ok));
            tracep->chgCData(oldp+1922,((0x3fU & (~ 
                                                  (0x1fffU 
                                                   & ((IData)(0x3fU) 
                                                      << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)))))),6);
            tracep->chgBit(oldp+1923,((0U == (0x3fU 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x1fffU 
                                                     & ((IData)(0x3fU) 
                                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)))))))));
            tracep->chgCData(oldp+1924,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))),2);
            tracep->chgCData(oldp+1925,((7U & (1U | 
                                               (0xfU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (3U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))))))),3);
            tracep->chgBit(oldp+1926,((1U & (((IData)(1U) 
                                              << (3U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))) 
                                             >> 2U))));
            tracep->chgBit(oldp+1927,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                             >> 2U))));
            tracep->chgBit(oldp+1928,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                                >> 2U)))));
            tracep->chgBit(oldp+1929,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+1930,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+1931,((1U & (((IData)(1U) 
                                              << (3U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))) 
                                             >> 1U))));
            tracep->chgBit(oldp+1932,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                             >> 1U))));
            tracep->chgBit(oldp+1933,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                                >> 1U)))));
            tracep->chgBit(oldp+1934,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_2));
            tracep->chgBit(oldp+1935,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc_2));
            tracep->chgBit(oldp+1936,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_3));
            tracep->chgBit(oldp+1937,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc_3));
            tracep->chgBit(oldp+1938,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_4));
            tracep->chgBit(oldp+1939,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc_4));
            tracep->chgBit(oldp+1940,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_5));
            tracep->chgBit(oldp+1941,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc_5));
            tracep->chgBit(oldp+1942,((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)));
            tracep->chgBit(oldp+1943,((1U & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1944,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_2) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1945,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_2) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+1946,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_2) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)));
            tracep->chgBit(oldp+1947,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_2) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1948,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_3) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1949,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_3) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+1950,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_3) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)));
            tracep->chgBit(oldp+1951,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_3) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1952,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_4) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1953,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_4) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+1954,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_4) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)));
            tracep->chgBit(oldp+1955,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_4) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1956,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_5) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1957,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_5) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+1958,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_5) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)));
            tracep->chgBit(oldp+1959,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_5) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))));
            tracep->chgCData(oldp+1960,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask),8);
            tracep->chgCData(oldp+1961,((7U & (~ (0x3ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                                                     >> 3U))))),3);
            tracep->chgBit(oldp+1962,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode) 
                                                >> 2U)))));
            tracep->chgCData(oldp+1963,((0xfU & (IData)(
                                                        (7ULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U))))),4);
            tracep->chgQData(oldp+1964,((((QData)((IData)(
                                                          vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT___GEN_23[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT___GEN_23[0U])))),64);
            tracep->chgBit(oldp+1966,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_0_a_valid));
            tracep->chgCData(oldp+1967,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size),4);
            VL_EXTEND_WI(128,32, __Vtemp8164, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            tracep->chgWData(oldp+1968,(__Vtemp8164),128);
            tracep->chgBit(oldp+1972,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_0_d_ready));
            tracep->chgBit(oldp+1973,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_valid));
            tracep->chgCData(oldp+1974,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_opcode),3);
            tracep->chgCData(oldp+1975,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_size),4);
            tracep->chgCData(oldp+1976,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_source),4);
            tracep->chgBit(oldp+1977,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_denied));
            tracep->chgBit(oldp+1978,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_corrupt));
            tracep->chgBit(oldp+1979,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_a_ready));
            tracep->chgBit(oldp+1980,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_valid));
            tracep->chgCData(oldp+1981,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_opcode),3);
            tracep->chgCData(oldp+1982,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_size),3);
            tracep->chgCData(oldp+1983,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_source),4);
            tracep->chgBit(oldp+1984,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_denied));
            tracep->chgCData(oldp+1985,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_size))),3);
            tracep->chgCData(oldp+1986,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_size),3);
            tracep->chgCData(oldp+1987,((0xfU & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_size)) 
                                                     >> 2U))))),4);
            tracep->chgCData(oldp+1988,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_opcode),3);
            tracep->chgBit(oldp+1989,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_opcode))));
            tracep->chgCData(oldp+1990,(((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_opcode))
                                          ? (0xfU & 
                                             (~ (0x7ffU 
                                                 & (((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_size)) 
                                                    >> 2U))))
                                          : 0U)),4);
            tracep->chgBit(oldp+1991,((IData)((4U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_opcode))))));
            tracep->chgCData(oldp+1992,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__inc),2);
            tracep->chgCData(oldp+1993,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__next_flight),6);
            tracep->chgBit(oldp+1994,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__source_ok));
            tracep->chgBit(oldp+1995,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+1996,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+1997,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+1998,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__mask_acc) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+1999,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__mask_acc_1) 
                                             | (IData)(
                                                       (2U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+2000,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__mask_acc_1) 
                                             | ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                 >> 1U) 
                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgCData(oldp+2001,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__mask),4);
            tracep->chgBit(oldp+2002,(1U));
            tracep->chgCData(oldp+2003,((0xfU & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                                                     >> 2U))))),4);
            tracep->chgBit(oldp+2004,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_opcode))));
            tracep->chgCData(oldp+2005,((0xfU & (IData)(
                                                        (7ULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U))))),4);
            tracep->chgQData(oldp+2006,((((QData)((IData)(
                                                          vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT___GEN_23[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT___GEN_23[0U])))),64);
            tracep->chgBit(oldp+2008,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_a_ready));
            tracep->chgBit(oldp+2009,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_valid));
            tracep->chgCData(oldp+2010,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_opcode),3);
            tracep->chgCData(oldp+2011,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_size),4);
            tracep->chgCData(oldp+2012,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_source),4);
            tracep->chgBit(oldp+2013,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_denied));
            tracep->chgBit(oldp+2014,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__muxStateEarly_1) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__da_bits_opcode))));
            tracep->chgSData(oldp+2015,((0x3ffU & (~ 
                                                   (0x1ffffffU 
                                                    & (((IData)(0xfffU) 
                                                        << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                       >> 2U))))),10);
            tracep->chgSData(oldp+2016,(((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                          ? 0U : (0x3ffU 
                                                  & (~ 
                                                     (0x1ffffffU 
                                                      & (((IData)(0xfffU) 
                                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                         >> 2U)))))),10);
            tracep->chgBit(oldp+2017,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__a_last));
            tracep->chgBit(oldp+2018,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__da_valid));
            tracep->chgBit(oldp+2019,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__out_1_ready));
            tracep->chgCData(oldp+2020,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__da_bits_opcode),3);
            tracep->chgBit(oldp+2021,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__da_bits_opcode))));
            tracep->chgSData(oldp+2022,(((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__da_bits_opcode))
                                          ? (0x3ffU 
                                             & (~ (0x1ffffffU 
                                                   & (((IData)(0xfffU) 
                                                       << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                      >> 2U))))
                                          : 0U)),10);
            tracep->chgBit(oldp+2023,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__da_last));
            tracep->chgBit(oldp+2024,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__muxStateEarly_1));
            tracep->chgBit(oldp+2025,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__source_ok));
            tracep->chgSData(oldp+2026,((0xfffU & (~ 
                                                   (0x7ffffffU 
                                                    & ((IData)(0xfffU) 
                                                       << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)))))),12);
            VL_EXTEND_WI(128,32, __Vtemp8166, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            VL_EXTEND_WI(128,12, __Vtemp8167, (0xfffU 
                                               & (~ 
                                                  (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
            tracep->chgBit(oldp+2027,((0U == ((((__Vtemp8166[0U] 
                                                 & __Vtemp8167[0U]) 
                                                | (__Vtemp8166[1U] 
                                                   & __Vtemp8167[1U])) 
                                               | (__Vtemp8166[2U] 
                                                  & __Vtemp8167[2U])) 
                                              | (__Vtemp8166[3U] 
                                                 & __Vtemp8167[3U])))));
            tracep->chgBit(oldp+2028,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))));
            tracep->chgCData(oldp+2029,((3U & (1U | 
                                               ((IData)(1U) 
                                                << 
                                                (1U 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)))))),2);
            tracep->chgBit(oldp+2030,((1U & (((IData)(1U) 
                                              << (1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                                             >> 1U))));
            VL_EXTEND_WI(128,32, __Vtemp8169, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            tracep->chgBit(oldp+2031,((1U & (__Vtemp8169[0U] 
                                             >> 1U))));
            VL_EXTEND_WI(128,32, __Vtemp8170, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            tracep->chgBit(oldp+2032,((1U & (~ (__Vtemp8170[0U] 
                                                >> 1U)))));
            tracep->chgBit(oldp+2033,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+2034,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__mask_acc_1));
            VL_EXTEND_WI(128,32, __Vtemp8171, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            tracep->chgBit(oldp+2035,((1U & __Vtemp8171[0U])));
            VL_EXTEND_WI(128,32, __Vtemp8172, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            tracep->chgBit(oldp+2036,((1U & (~ __Vtemp8172[0U]))));
            VL_EXTEND_WI(128,32, __Vtemp8173, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            VL_EXTEND_WI(128,32, __Vtemp8174, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            tracep->chgBit(oldp+2037,((1U & ((~ (__Vtemp8173[0U] 
                                                 >> 1U)) 
                                             & (~ __Vtemp8174[0U])))));
            VL_EXTEND_WI(128,32, __Vtemp8175, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            VL_EXTEND_WI(128,32, __Vtemp8176, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            tracep->chgBit(oldp+2038,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__mask_acc) 
                                             | ((~ 
                                                 (__Vtemp8175[0U] 
                                                  >> 1U)) 
                                                & (~ 
                                                   __Vtemp8176[0U]))))));
            VL_EXTEND_WI(128,32, __Vtemp8177, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            VL_EXTEND_WI(128,32, __Vtemp8178, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            tracep->chgBit(oldp+2039,((1U & ((~ (__Vtemp8177[0U] 
                                                 >> 1U)) 
                                             & __Vtemp8178[0U]))));
            VL_EXTEND_WI(128,32, __Vtemp8179, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            VL_EXTEND_WI(128,32, __Vtemp8180, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            tracep->chgBit(oldp+2040,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__mask_acc) 
                                             | ((~ 
                                                 (__Vtemp8179[0U] 
                                                  >> 1U)) 
                                                & __Vtemp8180[0U])))));
            VL_EXTEND_WI(128,32, __Vtemp8181, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            VL_EXTEND_WI(128,32, __Vtemp8182, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            tracep->chgBit(oldp+2041,((1U & ((__Vtemp8181[0U] 
                                              >> 1U) 
                                             & (~ __Vtemp8182[0U])))));
            VL_EXTEND_WI(128,32, __Vtemp8183, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            VL_EXTEND_WI(128,32, __Vtemp8184, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            tracep->chgBit(oldp+2042,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__mask_acc_1) 
                                             | ((__Vtemp8183[0U] 
                                                 >> 1U) 
                                                & (~ 
                                                   __Vtemp8184[0U]))))));
            VL_EXTEND_WI(128,32, __Vtemp8185, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            VL_EXTEND_WI(128,32, __Vtemp8186, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            tracep->chgBit(oldp+2043,((1U & ((__Vtemp8185[0U] 
                                              >> 1U) 
                                             & __Vtemp8186[0U]))));
            VL_EXTEND_WI(128,32, __Vtemp8187, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            VL_EXTEND_WI(128,32, __Vtemp8188, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            tracep->chgBit(oldp+2044,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__mask_acc_1) 
                                             | ((__Vtemp8187[0U] 
                                                 >> 1U) 
                                                & __Vtemp8188[0U])))));
            tracep->chgCData(oldp+2045,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__mask),4);
            tracep->chgBit(oldp+2046,(1U));
            tracep->chgSData(oldp+2047,((0x3ffU & (~ 
                                                   (0x1ffffffU 
                                                    & (((IData)(0xfffU) 
                                                        << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                                                       >> 2U))))),10);
            tracep->chgBit(oldp+2048,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_opcode))));
            tracep->chgCData(oldp+2049,((0xfU & (IData)(
                                                        (7ULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U))))),4);
            tracep->chgBit(oldp+2050,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor.__PVT__source_ok));
            tracep->chgBit(oldp+2051,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor.__PVT__mask_acc));
            tracep->chgBit(oldp+2052,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor.__PVT__mask_acc_1));
            tracep->chgBit(oldp+2053,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor.__PVT__mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+2054,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor.__PVT__mask_acc) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+2055,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor.__PVT__mask_acc_1) 
                                             | (IData)(
                                                       (2U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+2056,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor.__PVT__mask_acc_1) 
                                             | ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                 >> 1U) 
                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgCData(oldp+2057,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor.__PVT__mask),4);
            tracep->chgSData(oldp+2058,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor.__PVT__a_set_wo_ready),16);
            tracep->chgQData(oldp+2059,((((QData)((IData)(
                                                          vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor.__PVT___GEN_23[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor.__PVT___GEN_23[0U])))),64);
            tracep->chgBit(oldp+2061,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0_reset));
            tracep->chgBit(oldp+2062,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0_reset));
            tracep->chgBit(oldp+2063,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0_reset));
            tracep->chgBit(oldp+2064,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0_reset));
            tracep->chgBit(oldp+2065,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0_reset));
            tracep->chgBit(oldp+2066,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0_reset));
            tracep->chgCData(oldp+2067,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_incremented),4);
            tracep->chgCData(oldp+2068,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx),4);
            tracep->chgCData(oldp+2069,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__index),3);
            tracep->chgBit(oldp+2070,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0_reset));
            tracep->chgBit(oldp+2071,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0_reset));
            tracep->chgBit(oldp+2072,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0_reset));
            tracep->chgBit(oldp+2073,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0_reset));
            tracep->chgBit(oldp+2074,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0_reset));
            tracep->chgBit(oldp+2075,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0_reset));
            tracep->chgBit(oldp+2076,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0_reset));
            tracep->chgBit(oldp+2077,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__wen));
            tracep->chgBit(oldp+2078,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__wen_1));
            tracep->chgBit(oldp+2079,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0_reset));
            tracep->chgBit(oldp+2080,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0_reset));
            tracep->chgBit(oldp+2081,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0_reset));
            tracep->chgBit(oldp+2082,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0_reset));
            tracep->chgBit(oldp+2083,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0_reset));
            tracep->chgBit(oldp+2084,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0_reset));
            tracep->chgBit(oldp+2085,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0_reset));
            tracep->chgBit(oldp+2086,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0_reset));
            tracep->chgBit(oldp+2087,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0_reset));
            tracep->chgBit(oldp+2088,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0_reset));
            tracep->chgBit(oldp+2089,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0_reset));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
            tracep->chgBit(oldp+2090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_in_rvalid));
            tracep->chgIData(oldp+2091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr),30);
            tracep->chgBit(oldp+2092,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___bundleIn_0_pready_T_4)))));
            tracep->chgBit(oldp+2093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_psel));
            tracep->chgBit(oldp+2094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_penable));
            tracep->chgIData(oldp+2095,((0x1fffffffU 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)),29);
            tracep->chgBit(oldp+2096,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_psel) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_penable))));
            tracep->chgBit(oldp+2097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_0_psel));
            tracep->chgBit(oldp+2098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_0_penable));
            tracep->chgBit(oldp+2099,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_0_penable) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__ren))));
            tracep->chgBit(oldp+2100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
            tracep->chgBit(oldp+2101,((0U == (0x20001000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr))));
            tracep->chgIData(oldp+2102,((0x1fffffffU 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)),32);
            tracep->chgCData(oldp+2103,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)),3);
            tracep->chgCData(oldp+2104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
            tracep->chgCData(oldp+2105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
            tracep->chgIData(oldp+2106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr),32);
            tracep->chgBit(oldp+2107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__ren));
            tracep->chgQData(oldp+2108,(((QData)((IData)(
                                                         (0x3ffffffU 
                                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr 
                                                             >> 2U)))) 
                                         << 2U)),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
            tracep->chgBit(oldp+2110,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2111,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2112,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
            tracep->chgBit(oldp+2113,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2114,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2115,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
            tracep->chgBit(oldp+2116,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2117,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2118,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
            tracep->chgBit(oldp+2119,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2120,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2121,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xcU])) {
            tracep->chgBit(oldp+2122,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2123,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2124,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xdU])) {
            tracep->chgBit(oldp+2125,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2126,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2127,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xeU])) {
            tracep->chgBit(oldp+2128,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2129,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2130,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xfU])) {
            tracep->chgBit(oldp+2131,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2132,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2133,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x10U])) {
            tracep->chgBit(oldp+2134,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2135,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2136,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x11U])) {
            tracep->chgBit(oldp+2137,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2138,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2139,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x12U])) {
            tracep->chgBit(oldp+2140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_a_ready));
            tracep->chgBit(oldp+2141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_valid));
            tracep->chgCData(oldp+2142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode),3);
            tracep->chgCData(oldp+2143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param),3);
            tracep->chgCData(oldp+2144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size),3);
            tracep->chgCData(oldp+2145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source),7);
            tracep->chgIData(oldp+2146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address),32);
            tracep->chgCData(oldp+2147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_mask),8);
            tracep->chgQData(oldp+2148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_data),64);
            tracep->chgBit(oldp+2150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid));
            tracep->chgSData(oldp+2151,((0x1fffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)),13);
            tracep->chgBit(oldp+2152,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.auto_in_a_ready));
            tracep->chgBit(oldp+2153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid));
            tracep->chgCData(oldp+2154,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_param),2);
            tracep->chgBit(oldp+2155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_in_a_ready));
            tracep->chgBit(oldp+2156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid));
            tracep->chgCData(oldp+2157,((0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))),4);
            tracep->chgCData(oldp+2158,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_echo_tl_state_size),4);
            tracep->chgCData(oldp+2159,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_echo_tl_state_source),7);
            tracep->chgBit(oldp+2160,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id) 
                                             >> 4U))));
            tracep->chgCData(oldp+2161,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id),5);
            tracep->chgBit(oldp+2162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid));
            tracep->chgCData(oldp+2163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode),3);
            tracep->chgCData(oldp+2164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size),3);
            tracep->chgCData(oldp+2165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source),7);
            tracep->chgSData(oldp+2166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address),13);
            tracep->chgCData(oldp+2167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_out_a_bits_mask),4);
            tracep->chgBit(oldp+2168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_a_ready));
            tracep->chgBit(oldp+2169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1_auto_out_a_valid));
            tracep->chgBit(oldp+2170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1_auto_in_a_ready));
            tracep->chgBit(oldp+2171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid));
            tracep->chgBit(oldp+2172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_enq_ready));
            tracep->chgBit(oldp+2173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid));
            tracep->chgBit(oldp+2174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_ready));
            tracep->chgBit(oldp+2175,((0ULL == (0x80000000ULL 
                                                & (QData)((IData)(
                                                                  (0x80000000U 
                                                                   ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))))));
            tracep->chgBit(oldp+2176,((0ULL == (0x80000000ULL 
                                                & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))))));
            tracep->chgBit(oldp+2177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok));
            tracep->chgCData(oldp+2178,((0x3fU & (~ 
                                                  (0x1fffU 
                                                   & ((IData)(0x3fU) 
                                                      << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)))))),6);
            tracep->chgBit(oldp+2179,((0U == (0x3fU 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x1fffU 
                                                     & ((IData)(0x3fU) 
                                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)))))))));
            tracep->chgCData(oldp+2180,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))),2);
            tracep->chgCData(oldp+2181,((7U & (1U | 
                                               (0xfU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (3U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))))))),3);
            tracep->chgBit(oldp+2182,((1U & (((IData)(1U) 
                                              << (3U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                                             >> 2U))));
            tracep->chgBit(oldp+2183,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                             >> 2U))));
            tracep->chgBit(oldp+2184,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                                >> 2U)))));
            tracep->chgBit(oldp+2185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+2186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+2187,((1U & (((IData)(1U) 
                                              << (3U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                                             >> 1U))));
            tracep->chgBit(oldp+2188,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                             >> 1U))));
            tracep->chgBit(oldp+2189,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                                >> 1U)))));
            tracep->chgBit(oldp+2190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_2));
            tracep->chgBit(oldp+2191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_2));
            tracep->chgBit(oldp+2192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_3));
            tracep->chgBit(oldp+2193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_3));
            tracep->chgBit(oldp+2194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_4));
            tracep->chgBit(oldp+2195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_4));
            tracep->chgBit(oldp+2196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_5));
            tracep->chgBit(oldp+2197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_5));
            tracep->chgBit(oldp+2198,((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2199,((1U & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2200,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2201,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2202,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2203,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2204,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2205,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2206,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2207,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2208,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2209,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2210,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2211,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2212,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2213,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2214,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2215,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgCData(oldp+2216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask),8);
            tracep->chgCData(oldp+2217,((7U & (~ (0x3ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                                                     >> 3U))))),3);
            tracep->chgBit(oldp+2218,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                                                >> 2U)))));
            tracep->chgWData(oldp+2219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready),128);
            tracep->chgBit(oldp+2223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass_io_bypass));
            tracep->chgBit(oldp+2224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_in_1_a_ready));
            tracep->chgBit(oldp+2225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_io_bypass));
            tracep->chgIData(oldp+2226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD_io_q_bits_data),32);
            tracep->chgBit(oldp+2227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_ready));
            tracep->chgBit(oldp+2228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_ready));
            tracep->chgBit(oldp+2229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall));
            tracep->chgCData(oldp+2230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__inc),5);
            tracep->chgCData(oldp+2231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__next_flight),8);
            tracep->chgBit(oldp+2232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_alloc_valid));
            tracep->chgBit(oldp+2233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_alloc_valid));
            tracep->chgBit(oldp+2234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_alloc_valid));
            tracep->chgBit(oldp+2235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_alloc_valid));
            tracep->chgBit(oldp+2236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_alloc_valid));
            tracep->chgBit(oldp+2237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_alloc_valid));
            tracep->chgBit(oldp+2238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_alloc_valid));
            tracep->chgBit(oldp+2239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_alloc_valid));
            tracep->chgBit(oldp+2240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready));
            tracep->chgBit(oldp+2241,(((((((((0U == 
                                              (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U))) 
                                             | (1U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                    >> 4U)))) 
                                            | (2U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                   >> 4U)))) 
                                           | (3U == 
                                              (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                                          | (4U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                                         | (5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                      >> 4U)))) 
                                        | (6U == (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                     >> 4U)))) 
                                       | (7U == (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                    >> 4U))))));
            tracep->chgCData(oldp+2242,((0x3fU & (~ 
                                                  (0x1fffU 
                                                   & ((IData)(0x3fU) 
                                                      << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)))))),6);
            tracep->chgBit(oldp+2243,((0U == (0x3fU 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                                 & (~ 
                                                    (0x1fffU 
                                                     & ((IData)(0x3fU) 
                                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)))))))));
            tracep->chgBit(oldp+2244,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))));
            tracep->chgCData(oldp+2245,((3U & (1U | 
                                               ((IData)(1U) 
                                                << 
                                                (1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)))))),2);
            tracep->chgBit(oldp+2246,((1U & (((IData)(1U) 
                                              << (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))) 
                                             >> 1U))));
            tracep->chgBit(oldp+2247,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                             >> 1U))));
            tracep->chgBit(oldp+2248,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+2250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+2251,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))));
            tracep->chgBit(oldp+2252,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgBit(oldp+2253,((IData)((0U == 
                                               (3U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))));
            tracep->chgBit(oldp+2254,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))))));
            tracep->chgBit(oldp+2255,((IData)((1U == 
                                               (3U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))));
            tracep->chgBit(oldp+2256,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))))));
            tracep->chgBit(oldp+2257,((IData)((2U == 
                                               (3U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))));
            tracep->chgBit(oldp+2258,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc_1) 
                                             | (IData)(
                                                       (2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))))));
            tracep->chgBit(oldp+2259,((IData)((3U == 
                                               (3U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))));
            tracep->chgBit(oldp+2260,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc_1) 
                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))));
            tracep->chgCData(oldp+2261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask),4);
            tracep->chgCData(oldp+2262,((0xfU & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                                                     >> 2U))))),4);
            tracep->chgBit(oldp+2263,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode) 
                                                >> 2U)))));
            tracep->chgWData(oldp+2264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready),128);
            tracep->chgBit(oldp+2268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__do_enq));
            tracep->chgBit(oldp+2269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_ready));
            tracep->chgBit(oldp+2270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_i_valid));
            tracep->chgBit(oldp+2271,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___readys_T_3)))));
            tracep->chgBit(oldp+2272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__out_1_ready));
            tracep->chgBit(oldp+2273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__earlyWinner_1));
            tracep->chgBit(oldp+2274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_1));
            tracep->chgWData(oldp+2275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready),128);
            tracep->chgBit(oldp+2279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor_io_in_a_ready));
            tracep->chgWData(oldp+2280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready),128);
            tracep->chgQData(oldp+2284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_set_wo_ready),64);
            tracep->chgBit(oldp+2286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor_io_in_a_ready));
            tracep->chgQData(oldp+2287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_set_wo_ready),64);
            tracep->chgBit(oldp+2289,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_last)))));
            tracep->chgCData(oldp+2290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask),8);
            tracep->chgBit(oldp+2291,((1U & (~ (0xffU 
                                                & (((IData)(7U) 
                                                    << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_last));
            tracep->chgBit(oldp+2293,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                             >> 2U))));
            tracep->chgCData(oldp+2294,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask))),4);
            tracep->chgCData(oldp+2295,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask) 
                                                 >> 4U))),4);
            tracep->chgBit(oldp+2296,(((((((((0U == 
                                              (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                             | (1U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                    >> 4U)))) 
                                            | (2U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 4U)))) 
                                           | (3U == 
                                              (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                                          | (4U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                                         | (5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                      >> 4U)))) 
                                        | (6U == (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                     >> 4U)))) 
                                       | (7U == (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                    >> 4U))))));
            tracep->chgBit(oldp+2297,((0U == (0x3fU 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x1fffU 
                                                     & ((IData)(0x3fU) 
                                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)))))))));
            tracep->chgBit(oldp+2298,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                             >> 2U))));
            tracep->chgBit(oldp+2299,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                                >> 2U)))));
            tracep->chgBit(oldp+2300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+2301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+2302,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                             >> 1U))));
            tracep->chgBit(oldp+2303,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                                >> 1U)))));
            tracep->chgBit(oldp+2304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_2));
            tracep->chgBit(oldp+2305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_2));
            tracep->chgBit(oldp+2306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_3));
            tracep->chgBit(oldp+2307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_3));
            tracep->chgBit(oldp+2308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_4));
            tracep->chgBit(oldp+2309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_4));
            tracep->chgBit(oldp+2310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_5));
            tracep->chgBit(oldp+2311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_5));
            tracep->chgBit(oldp+2312,((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2313,((1U & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2314,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_2) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2315,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_2) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2316,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_2) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2317,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_2) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2318,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_3) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2319,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_3) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2320,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_3) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2321,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_3) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2322,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_4) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2323,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_4) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2324,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_4) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2325,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_4) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2326,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_5) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2327,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_5) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2328,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_5) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2329,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_5) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgCData(oldp+2330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask),8);
            tracep->chgWData(oldp+2331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready),128);
            tracep->chgBit(oldp+2335,((1U & ((IData)(1U) 
                                             << (0xfU 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))))));
            tracep->chgBit(oldp+2336,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 1U))));
            tracep->chgBit(oldp+2337,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 2U))));
            tracep->chgBit(oldp+2338,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 3U))));
            tracep->chgBit(oldp+2339,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 4U))));
            tracep->chgBit(oldp+2340,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 5U))));
            tracep->chgBit(oldp+2341,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 6U))));
            tracep->chgBit(oldp+2342,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 7U))));
            tracep->chgBit(oldp+2343,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 8U))));
            tracep->chgBit(oldp+2344,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 9U))));
            tracep->chgBit(oldp+2345,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2346,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2347,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2348,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2349,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2350,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2351,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor_io_in_a_ready));
            tracep->chgBit(oldp+2352,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__deq_io_enq_valid));
            tracep->chgBit(oldp+2353,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__deq_io_enq_bits_last));
            tracep->chgBit(oldp+2354,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_enq_valid));
            tracep->chgCData(oldp+2355,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_enq_bits_id),5);
            tracep->chgCData(oldp+2356,((0xffU & (~ 
                                                  (0x7fffU 
                                                   & (((IData)(0x7ffU) 
                                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                                                      >> 3U))))),8);
            tracep->chgCData(oldp+2357,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_enq_bits_size),3);
            tracep->chgCData(oldp+2358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size),4);
            tracep->chgBit(oldp+2359,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__idStall_6));
            tracep->chgBit(oldp+2360,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__idStall_5));
            tracep->chgBit(oldp+2361,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__idStall_4));
            tracep->chgBit(oldp+2362,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__idStall_3));
            tracep->chgBit(oldp+2363,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__idStall_2));
            tracep->chgBit(oldp+2364,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__idStall_1));
            tracep->chgBit(oldp+2365,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__idStall_0));
            tracep->chgBit(oldp+2366,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__stall));
            tracep->chgBit(oldp+2367,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__stall)) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___bundleIn_0_a_ready_T_3))));
            tracep->chgCData(oldp+2368,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__beats1),3);
            tracep->chgCData(oldp+2369,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id),5);
            tracep->chgBit(oldp+2370,((((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__stall)) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid)) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___out_arw_valid_T_4))));
            tracep->chgBit(oldp+2371,((1U & ((IData)(1U) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)))));
            tracep->chgBit(oldp+2372,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 1U))));
            tracep->chgBit(oldp+2373,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 2U))));
            tracep->chgBit(oldp+2374,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 3U))));
            tracep->chgBit(oldp+2375,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 4U))));
            tracep->chgBit(oldp+2376,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 5U))));
            tracep->chgBit(oldp+2377,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 6U))));
            tracep->chgBit(oldp+2378,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 7U))));
            tracep->chgBit(oldp+2379,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 8U))));
            tracep->chgBit(oldp+2380,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 9U))));
            tracep->chgBit(oldp+2381,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2382,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2383,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2384,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2385,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2386,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2387,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2388,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2389,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2390,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2391,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2392,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2393,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2394,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc));
            tracep->chgBit(oldp+2395,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_1));
            tracep->chgBit(oldp+2396,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_2));
            tracep->chgBit(oldp+2397,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_3));
            tracep->chgBit(oldp+2398,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_4));
            tracep->chgBit(oldp+2399,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_5));
            tracep->chgBit(oldp+2400,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_6));
            tracep->chgBit(oldp+2401,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 7U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2402,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 8U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2403,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 9U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2404,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0xaU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2405,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0xbU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2406,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0xcU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2407,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0xdU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2408,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0xeU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2409,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0xfU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2410,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x10U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2411,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x11U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2412,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x12U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2413,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x13U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2414,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x14U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2415,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x15U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2416,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x16U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2417,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+2418,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+2419,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_2));
            tracep->chgBit(oldp+2420,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_2));
            tracep->chgBit(oldp+2421,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_3));
            tracep->chgBit(oldp+2422,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_3));
            tracep->chgBit(oldp+2423,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_4));
            tracep->chgBit(oldp+2424,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_4));
            tracep->chgBit(oldp+2425,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_5));
            tracep->chgBit(oldp+2426,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_5));
            tracep->chgBit(oldp+2427,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_2) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2428,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_2) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2429,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_2) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2430,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_2) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2431,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_3) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2432,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_3) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2433,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_3) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2434,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_3) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2435,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_4) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2436,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_4) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2437,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_4) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2438,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_4) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2439,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_5) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2440,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_5) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2441,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_5) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2442,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_5) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgCData(oldp+2443,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask),8);
            tracep->chgWData(oldp+2444,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__a_set_wo_ready),128);
            tracep->chgBit(oldp+2448,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__deq__DOT___do_enq_T));
            tracep->chgBit(oldp+2449,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq__DOT___do_enq_T));
            tracep->chgCData(oldp+2450,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_param),2);
            tracep->chgCData(oldp+2451,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_sink),5);
            tracep->chgBit(oldp+2452,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass));
            tracep->chgBit(oldp+2453,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__stall));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x13U])) {
            tracep->chgBit(oldp+2454,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2455,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2456,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2457,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2458,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2459,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2460,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2461,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2462,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x14U])) {
            tracep->chgCData(oldp+2463,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray),4);
            tracep->chgCData(oldp+2464,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray),4);
            tracep->chgCData(oldp+2465,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray),4);
            tracep->chgCData(oldp+2466,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray),4);
            tracep->chgCData(oldp+2467,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray),4);
            tracep->chgBit(oldp+2468,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_gray));
            tracep->chgBit(oldp+2469,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_gray));
            tracep->chgCData(oldp+2470,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray),4);
            tracep->chgCData(oldp+2471,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray),4);
            tracep->chgCData(oldp+2472,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray),4);
            tracep->chgCData(oldp+2473,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray),4);
            tracep->chgCData(oldp+2474,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray),4);
            tracep->chgBit(oldp+2475,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_gray));
            tracep->chgBit(oldp+2476,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_gray));
            tracep->chgCData(oldp+2477,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_incremented),4);
            tracep->chgCData(oldp+2478,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx),4);
            tracep->chgCData(oldp+2479,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__index),3);
            tracep->chgCData(oldp+2480,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_incremented),4);
            tracep->chgCData(oldp+2481,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx),4);
            tracep->chgCData(oldp+2482,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__index),3);
            tracep->chgCData(oldp+2483,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_incremented),4);
            tracep->chgCData(oldp+2484,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx),4);
            tracep->chgCData(oldp+2485,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__index),3);
            tracep->chgCData(oldp+2486,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_incremented),4);
            tracep->chgCData(oldp+2487,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx),4);
            tracep->chgCData(oldp+2488,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__index),3);
            tracep->chgCData(oldp+2489,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_incremented),4);
            tracep->chgCData(oldp+2490,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx),4);
            tracep->chgCData(oldp+2491,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__index),3);
            tracep->chgCData(oldp+2492,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_incremented),4);
            tracep->chgCData(oldp+2493,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx),4);
            tracep->chgCData(oldp+2494,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__index),3);
            tracep->chgBit(oldp+2495,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink_io_deq_valid));
            tracep->chgBit(oldp+2496,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink_io_deq_valid));
            tracep->chgIData(oldp+2497,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z),21);
            tracep->chgIData(oldp+2498,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z_1),21);
            tracep->chgIData(oldp+2499,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z_2),21);
            tracep->chgIData(oldp+2500,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z_3),21);
            tracep->chgIData(oldp+2501,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z_4),21);
            tracep->chgIData(oldp+2502,(((0x100000U 
                                          & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z)
                                          ? 0xfffffU
                                          : (0xfffffU 
                                             & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z))),20);
            tracep->chgIData(oldp+2503,(((0x100000U 
                                          & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z_1)
                                          ? 0xfffffU
                                          : (0xfffffU 
                                             & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z_1))),20);
            tracep->chgIData(oldp+2504,(((0x100000U 
                                          & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z_2)
                                          ? 0xfffffU
                                          : (0xfffffU 
                                             & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z_2))),20);
            tracep->chgIData(oldp+2505,(((0x100000U 
                                          & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z_3)
                                          ? 0xfffffU
                                          : (0xfffffU 
                                             & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z_3))),20);
            tracep->chgIData(oldp+2506,(((0x100000U 
                                          & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z_4)
                                          ? 0xfffffU
                                          : (0xfffffU 
                                             & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z_4))),20);
            tracep->chgBit(oldp+2507,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2508,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_ridx_bin));
            tracep->chgBit(oldp+2509,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_incremented));
            tracep->chgBit(oldp+2510,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2511,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2512,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2513,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_ridx_bin));
            tracep->chgBit(oldp+2514,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_incremented));
            tracep->chgBit(oldp+2515,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2516,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2517,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink_io_deq_valid));
            tracep->chgBit(oldp+2518,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink_io_deq_valid));
            tracep->chgIData(oldp+2519,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z),21);
            tracep->chgIData(oldp+2520,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z_1),21);
            tracep->chgIData(oldp+2521,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z_2),21);
            tracep->chgIData(oldp+2522,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z_3),21);
            tracep->chgIData(oldp+2523,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z_4),21);
            tracep->chgIData(oldp+2524,(((0x100000U 
                                          & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z)
                                          ? 0xfffffU
                                          : (0xfffffU 
                                             & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z))),20);
            tracep->chgIData(oldp+2525,(((0x100000U 
                                          & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z_1)
                                          ? 0xfffffU
                                          : (0xfffffU 
                                             & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z_1))),20);
            tracep->chgIData(oldp+2526,(((0x100000U 
                                          & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z_2)
                                          ? 0xfffffU
                                          : (0xfffffU 
                                             & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z_2))),20);
            tracep->chgIData(oldp+2527,(((0x100000U 
                                          & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z_3)
                                          ? 0xfffffU
                                          : (0xfffffU 
                                             & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z_3))),20);
            tracep->chgIData(oldp+2528,(((0x100000U 
                                          & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z_4)
                                          ? 0xfffffU
                                          : (0xfffffU 
                                             & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z_4))),20);
            tracep->chgBit(oldp+2529,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2530,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_ridx_bin));
            tracep->chgBit(oldp+2531,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_incremented));
            tracep->chgBit(oldp+2532,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2533,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2534,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2535,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_ridx_bin));
            tracep->chgBit(oldp+2536,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_incremented));
            tracep->chgBit(oldp+2537,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2538,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2539,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray))));
            tracep->chgBit(oldp+2540,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                             >> 1U))));
            tracep->chgBit(oldp+2541,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                             >> 2U))));
            tracep->chgBit(oldp+2542,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                             >> 3U))));
            tracep->chgBit(oldp+2543,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray))));
            tracep->chgBit(oldp+2544,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                             >> 1U))));
            tracep->chgBit(oldp+2545,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                             >> 2U))));
            tracep->chgBit(oldp+2546,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                             >> 3U))));
            tracep->chgBit(oldp+2547,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray))));
            tracep->chgBit(oldp+2548,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                             >> 1U))));
            tracep->chgBit(oldp+2549,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                             >> 2U))));
            tracep->chgBit(oldp+2550,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                             >> 3U))));
            tracep->chgBit(oldp+2551,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray))));
            tracep->chgBit(oldp+2552,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                             >> 1U))));
            tracep->chgBit(oldp+2553,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                             >> 2U))));
            tracep->chgBit(oldp+2554,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                             >> 3U))));
            tracep->chgBit(oldp+2555,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray))));
            tracep->chgBit(oldp+2556,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                             >> 1U))));
            tracep->chgBit(oldp+2557,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                             >> 2U))));
            tracep->chgBit(oldp+2558,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                             >> 3U))));
            tracep->chgBit(oldp+2559,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray))));
            tracep->chgBit(oldp+2560,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                             >> 1U))));
            tracep->chgBit(oldp+2561,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                             >> 2U))));
            tracep->chgBit(oldp+2562,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                             >> 3U))));
            tracep->chgBit(oldp+2563,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray))));
            tracep->chgBit(oldp+2564,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                             >> 1U))));
            tracep->chgBit(oldp+2565,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                             >> 2U))));
            tracep->chgBit(oldp+2566,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                             >> 3U))));
            tracep->chgBit(oldp+2567,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray))));
            tracep->chgBit(oldp+2568,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                             >> 1U))));
            tracep->chgBit(oldp+2569,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                             >> 2U))));
            tracep->chgBit(oldp+2570,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                             >> 3U))));
            tracep->chgBit(oldp+2571,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray))));
            tracep->chgBit(oldp+2572,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                             >> 1U))));
            tracep->chgBit(oldp+2573,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                             >> 2U))));
            tracep->chgBit(oldp+2574,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                             >> 3U))));
            tracep->chgBit(oldp+2575,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray))));
            tracep->chgBit(oldp+2576,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                             >> 1U))));
            tracep->chgBit(oldp+2577,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                             >> 2U))));
            tracep->chgBit(oldp+2578,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                             >> 3U))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x15U])) {
            tracep->chgBit(oldp+2579,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2580,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2581,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2582,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2583,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2584,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2585,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2586,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2587,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x16U])) {
            tracep->chgBit(oldp+2588,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2589,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2590,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2591,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2592,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2593,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2594,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2595,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2596,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x17U])) {
            tracep->chgBit(oldp+2597,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2598,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2599,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2600,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2601,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2602,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2603,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2604,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2605,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x18U])) {
            tracep->chgBit(oldp+2606,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2607,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2608,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2609,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2610,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2611,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2612,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2613,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2614,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x19U])) {
            tracep->chgBit(oldp+2615,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2616,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2617,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2618,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2619,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2620,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1aU])) {
            tracep->chgBit(oldp+2621,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_out_awvalid));
            tracep->chgCData(oldp+2622,((0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))),4);
            tracep->chgIData(oldp+2623,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_addr),32);
            tracep->chgCData(oldp+2624,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_len),8);
            tracep->chgCData(oldp+2625,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_size),3);
            tracep->chgBit(oldp+2626,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__deq_io_deq_valid));
            tracep->chgQData(oldp+2627,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__deq_io_deq_bits_data),64);
            tracep->chgCData(oldp+2629,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__deq_io_deq_bits_strb),8);
            tracep->chgBit(oldp+2630,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_out_arvalid));
            tracep->chgBit(oldp+2631,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_a_ready));
            tracep->chgBit(oldp+2632,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_valid));
            tracep->chgCData(oldp+2633,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode),3);
            tracep->chgCData(oldp+2634,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param),3);
            tracep->chgCData(oldp+2635,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size),4);
            tracep->chgCData(oldp+2636,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source),7);
            tracep->chgIData(oldp+2637,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address),32);
            tracep->chgCData(oldp+2638,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_mask),8);
            tracep->chgQData(oldp+2639,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_data),64);
            tracep->chgBit(oldp+2641,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_2_a_valid));
            tracep->chgCData(oldp+2642,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))),3);
            tracep->chgSData(oldp+2643,((0x1fffU & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)),13);
            tracep->chgBit(oldp+2644,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_in_a_ready));
            tracep->chgBit(oldp+2645,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_1_a_valid));
            tracep->chgIData(oldp+2646,((0x7fffffffU 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)),31);
            tracep->chgBit(oldp+2647,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_in_a_ready));
            tracep->chgBit(oldp+2648,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid));
            tracep->chgBit(oldp+2649,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_a_ready));
            tracep->chgBit(oldp+2650,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_d_ready));
            tracep->chgBit(oldp+2651,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid));
            tracep->chgCData(oldp+2652,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode),3);
            tracep->chgCData(oldp+2653,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param),2);
            tracep->chgCData(oldp+2654,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size),3);
            tracep->chgCData(oldp+2655,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source),4);
            tracep->chgCData(oldp+2656,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_sink),6);
            tracep->chgBit(oldp+2657,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_denied));
            tracep->chgIData(oldp+2658,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_data),32);
            tracep->chgBit(oldp+2659,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt));
            tracep->chgBit(oldp+2660,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_1_d_ready));
            tracep->chgBit(oldp+2661,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_a_ready));
            tracep->chgBit(oldp+2662,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_d_ready));
            tracep->chgBit(oldp+2663,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_valid));
            tracep->chgCData(oldp+2664,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_opcode),3);
            tracep->chgCData(oldp+2665,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_param),2);
            tracep->chgCData(oldp+2666,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_size),3);
            tracep->chgBit(oldp+2667,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_denied));
            tracep->chgBit(oldp+2668,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt));
            tracep->chgBit(oldp+2669,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_in_a_ready));
            tracep->chgBit(oldp+2670,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid));
            tracep->chgBit(oldp+2671,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awvalid));
            tracep->chgCData(oldp+2672,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_echo_tl_state_size),4);
            tracep->chgCData(oldp+2673,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_echo_tl_state_source),7);
            tracep->chgBit(oldp+2674,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id) 
                                             >> 4U))));
            tracep->chgBit(oldp+2675,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_arvalid));
            tracep->chgCData(oldp+2676,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id),5);
            tracep->chgBit(oldp+2677,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_awvalid) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_95))));
            tracep->chgBit(oldp+2678,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq_io_deq_valid));
            tracep->chgBit(oldp+2679,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_arvalid) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_15))));
            tracep->chgBit(oldp+2680,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_awvalid));
            tracep->chgCData(oldp+2681,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))),4);
            tracep->chgCData(oldp+2682,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_size),4);
            tracep->chgCData(oldp+2683,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source),7);
            tracep->chgBit(oldp+2684,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id) 
                                             >> 4U))));
            tracep->chgBit(oldp+2685,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_arvalid));
            tracep->chgCData(oldp+2686,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id),5);
            tracep->chgBit(oldp+2687,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_in_a_ready));
            tracep->chgBit(oldp+2688,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_enq_ready));
            tracep->chgBit(oldp+2689,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_d_ready));
            tracep->chgBit(oldp+2690,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_in_d_valid));
            tracep->chgQData(oldp+2691,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_in_d_bits_data),64);
            tracep->chgBit(oldp+2693,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_in_d_bits_corrupt));
            tracep->chgBit(oldp+2694,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_awready));
            tracep->chgBit(oldp+2695,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_wready));
            tracep->chgBit(oldp+2696,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_in_becho_real_last)))));
            tracep->chgBit(oldp+2697,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_bvalid));
            tracep->chgBit(oldp+2698,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id));
            tracep->chgCData(oldp+2699,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_resp),2);
            tracep->chgBit(oldp+2700,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_arready));
            tracep->chgBit(oldp+2701,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq_io_deq_bits_id));
            tracep->chgBit(oldp+2702,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_in_awready));
            tracep->chgBit(oldp+2703,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_in_becho_real_last));
            tracep->chgBit(oldp+2704,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_in_arready));
            tracep->chgBit(oldp+2705,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_bvalid) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_in_becho_real_last))));
            tracep->chgBit(oldp+2706,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_valid));
            tracep->chgCData(oldp+2707,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode),3);
            tracep->chgCData(oldp+2708,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size),3);
            tracep->chgCData(oldp+2709,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source),7);
            tracep->chgSData(oldp+2710,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address),13);
            tracep->chgCData(oldp+2711,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2_auto_out_a_bits_mask),4);
            tracep->chgBit(oldp+2712,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_a_ready));
            tracep->chgBit(oldp+2713,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid));
            tracep->chgBit(oldp+2714,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_in_a_ready));
            tracep->chgBit(oldp+2715,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid));
            tracep->chgBit(oldp+2716,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_enq_ready));
            tracep->chgBit(oldp+2717,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid));
            tracep->chgBit(oldp+2718,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_ready));
            tracep->chgBit(oldp+2719,((0ULL == (0x80000000ULL 
                                                & (QData)((IData)(
                                                                  (0x80000000U 
                                                                   ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))))));
            tracep->chgBit(oldp+2720,((0ULL == (0xc0000000ULL 
                                                & (QData)((IData)(
                                                                  (0x40000000U 
                                                                   ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))))));
            tracep->chgBit(oldp+2721,((0ULL == (0xc0000000ULL 
                                                & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))));
            tracep->chgBit(oldp+2722,(((((((((0U == 
                                              (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                             | (1U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                    >> 4U)))) 
                                            | (2U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 4U)))) 
                                           | (3U == 
                                              (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                                          | (4U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                                         | (5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                      >> 4U)))) 
                                        | (6U == (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                     >> 4U)))) 
                                       | (7U == (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                    >> 4U))))));
            tracep->chgCData(oldp+2723,((0xffU & (~ 
                                                  (0x7fffffU 
                                                   & ((IData)(0xffU) 
                                                      << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))),8);
            tracep->chgBit(oldp+2724,((0U == (0xffU 
                                              & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x7fffffU 
                                                     & ((IData)(0xffU) 
                                                        << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))));
            tracep->chgCData(oldp+2725,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))),2);
            tracep->chgCData(oldp+2726,((7U & (1U | 
                                               (0xfU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (3U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))),3);
            tracep->chgBit(oldp+2727,((1U & (((IData)(1U) 
                                              << (3U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                             >> 2U))));
            tracep->chgBit(oldp+2728,((1U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                             >> 2U))));
            tracep->chgBit(oldp+2729,((1U & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                                >> 2U)))));
            tracep->chgBit(oldp+2730,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+2731,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+2732,((1U & (((IData)(1U) 
                                              << (3U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                             >> 1U))));
            tracep->chgBit(oldp+2733,((1U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                             >> 1U))));
            tracep->chgBit(oldp+2734,((1U & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                                >> 1U)))));
            tracep->chgBit(oldp+2735,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_2));
            tracep->chgBit(oldp+2736,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_2));
            tracep->chgBit(oldp+2737,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_3));
            tracep->chgBit(oldp+2738,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_3));
            tracep->chgBit(oldp+2739,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_4));
            tracep->chgBit(oldp+2740,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_4));
            tracep->chgBit(oldp+2741,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_5));
            tracep->chgBit(oldp+2742,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_5));
            tracep->chgBit(oldp+2743,((1U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2744,((1U & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2745,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2746,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2747,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2748,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2749,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2750,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2751,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2752,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2753,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2754,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2755,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2756,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2757,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2758,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2759,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2760,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgCData(oldp+2761,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask),8);
            tracep->chgCData(oldp+2762,((0x1fU & (~ 
                                                  (0xfffffU 
                                                   & (((IData)(0xffU) 
                                                       << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                                                      >> 3U))))),5);
            tracep->chgBit(oldp+2763,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                                >> 2U)))));
            tracep->chgWData(oldp+2764,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready),128);
            tracep->chgBit(oldp+2768,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid));
            tracep->chgBit(oldp+2769,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_d_ready));
            tracep->chgBit(oldp+2770,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass_io_bypass));
            tracep->chgBit(oldp+2771,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_in_1_a_ready));
            tracep->chgBit(oldp+2772,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_io_bypass));
            tracep->chgBit(oldp+2773,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_valid));
            tracep->chgIData(oldp+2774,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD_io_q_bits_data),32);
            tracep->chgBit(oldp+2775,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_ready));
            tracep->chgBit(oldp+2776,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_ready));
            tracep->chgBit(oldp+2777,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_ready));
            tracep->chgBit(oldp+2778,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall));
            tracep->chgCData(oldp+2779,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__inc),5);
            tracep->chgCData(oldp+2780,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__next_flight),8);
            tracep->chgBit(oldp+2781,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_alloc_valid));
            tracep->chgBit(oldp+2782,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_alloc_valid));
            tracep->chgBit(oldp+2783,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_alloc_valid));
            tracep->chgBit(oldp+2784,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_alloc_valid));
            tracep->chgBit(oldp+2785,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_alloc_valid));
            tracep->chgBit(oldp+2786,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_alloc_valid));
            tracep->chgBit(oldp+2787,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_alloc_valid));
            tracep->chgBit(oldp+2788,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_alloc_valid));
            tracep->chgBit(oldp+2789,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready));
            tracep->chgBit(oldp+2790,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam_io_alloc_valid));
            tracep->chgBit(oldp+2791,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__do_enq));
            tracep->chgBit(oldp+2792,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__do_enq));
            tracep->chgBit(oldp+2793,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__do_enq));
            tracep->chgBit(oldp+2794,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_io_enq_valid));
            tracep->chgBit(oldp+2795,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1_io_enq_valid));
            tracep->chgBit(oldp+2796,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2_io_enq_valid));
            tracep->chgBit(oldp+2797,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3_io_enq_valid));
            tracep->chgBit(oldp+2798,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4_io_enq_valid));
            tracep->chgBit(oldp+2799,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5_io_enq_valid));
            tracep->chgBit(oldp+2800,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6_io_enq_valid));
            tracep->chgBit(oldp+2801,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7_io_enq_valid));
            tracep->chgBit(oldp+2802,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8_io_enq_valid));
            tracep->chgBit(oldp+2803,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9_io_enq_valid));
            tracep->chgBit(oldp+2804,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10_io_enq_valid));
            tracep->chgBit(oldp+2805,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11_io_enq_valid));
            tracep->chgBit(oldp+2806,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12_io_enq_valid));
            tracep->chgBit(oldp+2807,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13_io_enq_valid));
            tracep->chgBit(oldp+2808,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14_io_enq_valid));
            tracep->chgBit(oldp+2809,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15_io_enq_valid));
            tracep->chgBit(oldp+2810,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16_io_enq_valid));
            tracep->chgBit(oldp+2811,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17_io_enq_valid));
            tracep->chgBit(oldp+2812,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18_io_enq_valid));
            tracep->chgBit(oldp+2813,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19_io_enq_valid));
            tracep->chgBit(oldp+2814,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20_io_enq_valid));
            tracep->chgBit(oldp+2815,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21_io_enq_valid));
            tracep->chgBit(oldp+2816,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22_io_enq_valid));
            tracep->chgBit(oldp+2817,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23_io_enq_valid));
            tracep->chgBit(oldp+2818,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24_io_enq_valid));
            tracep->chgBit(oldp+2819,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25_io_enq_valid));
            tracep->chgBit(oldp+2820,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26_io_enq_valid));
            tracep->chgBit(oldp+2821,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27_io_enq_valid));
            tracep->chgBit(oldp+2822,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28_io_enq_valid));
            tracep->chgBit(oldp+2823,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29_io_enq_valid));
            tracep->chgBit(oldp+2824,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30_io_enq_valid));
            tracep->chgBit(oldp+2825,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31_io_enq_valid));
            tracep->chgBit(oldp+2826,((1U & ((IData)(1U) 
                                             << (0xfU 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))))));
            tracep->chgBit(oldp+2827,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 1U))));
            tracep->chgBit(oldp+2828,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 2U))));
            tracep->chgBit(oldp+2829,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 3U))));
            tracep->chgBit(oldp+2830,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 4U))));
            tracep->chgBit(oldp+2831,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 5U))));
            tracep->chgBit(oldp+2832,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 6U))));
            tracep->chgBit(oldp+2833,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 7U))));
            tracep->chgBit(oldp+2834,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 8U))));
            tracep->chgBit(oldp+2835,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 9U))));
            tracep->chgBit(oldp+2836,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2837,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2838,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2839,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2840,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2841,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2842,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__do_enq));
            tracep->chgBit(oldp+2843,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__do_enq));
            tracep->chgBit(oldp+2844,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__do_enq));
            tracep->chgBit(oldp+2845,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__do_enq));
            tracep->chgBit(oldp+2846,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__do_enq));
            tracep->chgBit(oldp+2847,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__do_enq));
            tracep->chgBit(oldp+2848,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__do_enq));
            tracep->chgBit(oldp+2849,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__do_enq));
            tracep->chgBit(oldp+2850,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__do_enq));
            tracep->chgBit(oldp+2851,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__do_enq));
            tracep->chgBit(oldp+2852,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__do_enq));
            tracep->chgBit(oldp+2853,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__do_enq));
            tracep->chgBit(oldp+2854,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__do_enq));
            tracep->chgBit(oldp+2855,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__do_enq));
            tracep->chgBit(oldp+2856,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__do_enq));
            tracep->chgBit(oldp+2857,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__do_enq));
            tracep->chgBit(oldp+2858,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__do_enq));
            tracep->chgBit(oldp+2859,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__do_enq));
            tracep->chgBit(oldp+2860,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__do_enq));
            tracep->chgBit(oldp+2861,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__do_enq));
            tracep->chgBit(oldp+2862,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__do_enq));
            tracep->chgBit(oldp+2863,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__do_enq));
            tracep->chgBit(oldp+2864,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__do_enq));
            tracep->chgBit(oldp+2865,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__do_enq));
            tracep->chgBit(oldp+2866,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__do_enq));
            tracep->chgBit(oldp+2867,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__do_enq));
            tracep->chgBit(oldp+2868,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__do_enq));
            tracep->chgBit(oldp+2869,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__do_enq));
            tracep->chgBit(oldp+2870,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__do_enq));
            tracep->chgBit(oldp+2871,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__do_enq));
            tracep->chgBit(oldp+2872,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__do_enq));
            tracep->chgBit(oldp+2873,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__do_enq));
            tracep->chgBit(oldp+2874,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_a_ready));
            tracep->chgBit(oldp+2875,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq_io_enq_valid));
            tracep->chgBit(oldp+2876,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq_io_enq_bits_last));
            tracep->chgBit(oldp+2877,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_enq_valid));
            tracep->chgCData(oldp+2878,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_enq_bits_id),5);
            tracep->chgBit(oldp+2879,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_ready));
            tracep->chgBit(oldp+2880,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_valid));
            tracep->chgBit(oldp+2881,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_wen));
            tracep->chgBit(oldp+2882,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_6));
            tracep->chgBit(oldp+2883,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_5));
            tracep->chgBit(oldp+2884,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4));
            tracep->chgBit(oldp+2885,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_3));
            tracep->chgBit(oldp+2886,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2));
            tracep->chgBit(oldp+2887,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_1));
            tracep->chgBit(oldp+2888,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0));
            tracep->chgBit(oldp+2889,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__stall));
            tracep->chgBit(oldp+2890,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__stall)) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___bundleIn_0_a_ready_T_3))));
            tracep->chgCData(oldp+2891,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__beats1),5);
            tracep->chgCData(oldp+2892,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id),5);
            tracep->chgBit(oldp+2893,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__stall)) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_1_a_valid)) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___out_arw_valid_T_4))));
            tracep->chgBit(oldp+2894,((1U & ((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)))));
            tracep->chgBit(oldp+2895,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 1U))));
            tracep->chgBit(oldp+2896,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 2U))));
            tracep->chgBit(oldp+2897,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 3U))));
            tracep->chgBit(oldp+2898,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 4U))));
            tracep->chgBit(oldp+2899,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 5U))));
            tracep->chgBit(oldp+2900,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 6U))));
            tracep->chgBit(oldp+2901,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 7U))));
            tracep->chgBit(oldp+2902,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 8U))));
            tracep->chgBit(oldp+2903,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 9U))));
            tracep->chgBit(oldp+2904,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2905,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2906,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2907,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2908,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2909,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2910,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2911,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2912,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2913,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2914,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2915,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2916,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2917,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc));
            tracep->chgBit(oldp+2918,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_1));
            tracep->chgBit(oldp+2919,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_2));
            tracep->chgBit(oldp+2920,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_3));
            tracep->chgBit(oldp+2921,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_4));
            tracep->chgBit(oldp+2922,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_5));
            tracep->chgBit(oldp+2923,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_6));
            tracep->chgBit(oldp+2924,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2925,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2926,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2927,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2928,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2929,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2930,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2931,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2932,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2933,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 0x10U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2934,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 0x11U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2935,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 0x12U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2936,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 0x13U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2937,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 0x14U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2938,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 0x15U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2939,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 0x16U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2940,((0U == (0xffU 
                                              & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x7fffffU 
                                                     & ((IData)(0xffU) 
                                                        << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))));
            tracep->chgBit(oldp+2941,((1U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                             >> 2U))));
            tracep->chgBit(oldp+2942,((1U & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                                >> 2U)))));
            tracep->chgBit(oldp+2943,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+2944,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+2945,((1U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                             >> 1U))));
            tracep->chgBit(oldp+2946,((1U & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                                >> 1U)))));
            tracep->chgBit(oldp+2947,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_2));
            tracep->chgBit(oldp+2948,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_2));
            tracep->chgBit(oldp+2949,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_3));
            tracep->chgBit(oldp+2950,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_3));
            tracep->chgBit(oldp+2951,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_4));
            tracep->chgBit(oldp+2952,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_4));
            tracep->chgBit(oldp+2953,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_5));
            tracep->chgBit(oldp+2954,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_5));
            tracep->chgBit(oldp+2955,((1U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2956,((1U & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2957,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_2) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2958,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_2) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2959,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_2) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2960,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_2) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2961,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_3) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2962,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_3) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2963,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_3) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2964,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_3) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2965,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_4) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2966,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_4) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2967,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_4) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2968,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_4) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2969,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_5) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2970,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_5) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2971,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_5) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2972,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_5) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgCData(oldp+2973,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask),8);
            tracep->chgWData(oldp+2974,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_set_wo_ready),128);
            tracep->chgBit(oldp+2978,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_in_d_valid) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))));
            tracep->chgBit(oldp+2979,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                                             >> 3U))));
            tracep->chgCData(oldp+2980,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_denied) 
                                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_in_d_bits_corrupt))
                                          ? 2U : 0U)),2);
            tracep->chgBit(oldp+2981,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_enq_valid));
            tracep->chgCData(oldp+2982,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_enq_bits_resp),2);
            tracep->chgBit(oldp+2983,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_ready));
            tracep->chgBit(oldp+2984,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_valid));
            tracep->chgBit(oldp+2985,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__out_1_ready));
            tracep->chgBit(oldp+2986,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__latch));
            tracep->chgBit(oldp+2987,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))));
            tracep->chgCData(oldp+2988,((7U & (~ (0x3ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                                                     >> 3U))))),3);
            tracep->chgCData(oldp+2989,(((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))
                                          ? (7U & (~ 
                                                   (0x3ffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                                                       >> 3U))))
                                          : 0U)),3);
            tracep->chgBit(oldp+2990,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__b_allow));
            tracep->chgCData(oldp+2991,((3U & ((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)))),2);
            tracep->chgBit(oldp+2992,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_valid) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__b_allow))));
            tracep->chgBit(oldp+2993,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT___do_enq_T));
            tracep->chgBit(oldp+2994,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2_io_enq_valid));
            tracep->chgBit(oldp+2995,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2_io_deq_ready));
            tracep->chgBit(oldp+2996,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2_io_deq_valid));
            tracep->chgBit(oldp+2997,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3_io_enq_valid));
            tracep->chgBit(oldp+2998,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3_io_deq_ready));
            tracep->chgBit(oldp+2999,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3_io_deq_valid));
            tracep->chgBit(oldp+3000,((1U & ((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq_io_deq_bits_id)))));
            tracep->chgBit(oldp+3001,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq_io_deq_bits_id)) 
                                             >> 1U))));
            tracep->chgBit(oldp+3002,((1U & ((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)))));
            tracep->chgBit(oldp+3003,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)) 
                                             >> 1U))));
            tracep->chgBit(oldp+3004,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT___do_enq_T));
            tracep->chgBit(oldp+3005,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT___do_enq_T));
            tracep->chgBit(oldp+3006,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__do_enq));
            tracep->chgBit(oldp+3007,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__do_deq));
            tracep->chgBit(oldp+3008,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__do_enq));
            tracep->chgBit(oldp+3009,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__do_deq));
            tracep->chgBit(oldp+3010,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_awready));
            tracep->chgBit(oldp+3011,(((((((((0U == 
                                              (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U))) 
                                             | (1U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                    >> 4U)))) 
                                            | (2U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                   >> 4U)))) 
                                           | (3U == 
                                              (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                                          | (4U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                                         | (5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                      >> 4U)))) 
                                        | (6U == (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                     >> 4U)))) 
                                       | (7U == (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                    >> 4U))))));
            tracep->chgCData(oldp+3012,((0x3fU & (~ 
                                                  (0x1fffU 
                                                   & ((IData)(0x3fU) 
                                                      << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)))))),6);
            tracep->chgBit(oldp+3013,((0U == (0x3fU 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                                 & (~ 
                                                    (0x1fffU 
                                                     & ((IData)(0x3fU) 
                                                        << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)))))))));
            tracep->chgBit(oldp+3014,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))));
            tracep->chgCData(oldp+3015,((3U & (1U | 
                                               ((IData)(1U) 
                                                << 
                                                (1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)))))),2);
            tracep->chgBit(oldp+3016,((1U & (((IData)(1U) 
                                              << (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))) 
                                             >> 1U))));
            tracep->chgBit(oldp+3017,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                             >> 1U))));
            tracep->chgBit(oldp+3018,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                                >> 1U)))));
            tracep->chgBit(oldp+3019,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+3020,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+3021,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))));
            tracep->chgBit(oldp+3022,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgBit(oldp+3023,((IData)((0U == 
                                               (3U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))));
            tracep->chgBit(oldp+3024,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))))));
            tracep->chgBit(oldp+3025,((IData)((1U == 
                                               (3U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))));
            tracep->chgBit(oldp+3026,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask_acc) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))))));
            tracep->chgBit(oldp+3027,((IData)((2U == 
                                               (3U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))));
            tracep->chgBit(oldp+3028,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask_acc_1) 
                                             | (IData)(
                                                       (2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))))));
            tracep->chgBit(oldp+3029,((IData)((3U == 
                                               (3U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))));
            tracep->chgBit(oldp+3030,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask_acc_1) 
                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))));
            tracep->chgCData(oldp+3031,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask),4);
            tracep->chgCData(oldp+3032,((0xfU & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                                                     >> 2U))))),4);
            tracep->chgBit(oldp+3033,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode) 
                                                >> 2U)))));
            tracep->chgWData(oldp+3034,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_set_wo_ready),128);
            tracep->chgBit(oldp+3038,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__do_enq));
            tracep->chgBit(oldp+3039,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_ready));
            tracep->chgBit(oldp+3040,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid));
            tracep->chgBit(oldp+3041,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___readys_T_3)))));
            tracep->chgBit(oldp+3042,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__out_1_ready));
            tracep->chgBit(oldp+3043,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__earlyWinner_1));
            tracep->chgBit(oldp+3044,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_1));
            tracep->chgWData(oldp+3045,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready),128);
            tracep->chgBit(oldp+3049,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_ready));
            tracep->chgWData(oldp+3050,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready),128);
            tracep->chgQData(oldp+3054,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_set_wo_ready),64);
            tracep->chgBit(oldp+3056,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor_io_in_a_ready));
            tracep->chgQData(oldp+3057,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_set_wo_ready),64);
            tracep->chgBit(oldp+3059,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_last)))));
            tracep->chgCData(oldp+3060,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask),8);
            tracep->chgBit(oldp+3061,((1U & (~ (0xffU 
                                                & (((IData)(7U) 
                                                    << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+3062,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_last));
            tracep->chgBit(oldp+3063,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                             >> 2U))));
            tracep->chgCData(oldp+3064,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask))),4);
            tracep->chgCData(oldp+3065,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask) 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+3066,((0x3fU & (~ 
                                                  (0x1fffU 
                                                   & ((IData)(0x3fU) 
                                                      << 
                                                      (7U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))),6);
            tracep->chgBit(oldp+3067,((0U == (0x3fU 
                                              & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x1fffU 
                                                     & ((IData)(0x3fU) 
                                                        << 
                                                        (7U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))))));
            tracep->chgCData(oldp+3068,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))),2);
            tracep->chgCData(oldp+3069,((7U & (1U | 
                                               (0xfU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (3U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))),3);
            tracep->chgBit(oldp+3070,((1U & (((IData)(1U) 
                                              << (3U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                             >> 2U))));
            tracep->chgBit(oldp+3071,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+3072,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+3073,((1U & (((IData)(1U) 
                                              << (3U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                             >> 1U))));
            tracep->chgBit(oldp+3074,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_2));
            tracep->chgBit(oldp+3075,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_2));
            tracep->chgBit(oldp+3076,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_3));
            tracep->chgBit(oldp+3077,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_3));
            tracep->chgBit(oldp+3078,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_4));
            tracep->chgBit(oldp+3079,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_4));
            tracep->chgBit(oldp+3080,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_5));
            tracep->chgBit(oldp+3081,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_5));
            tracep->chgBit(oldp+3082,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_2) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+3083,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_2) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+3084,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_2) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+3085,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_2) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+3086,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_3) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+3087,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_3) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+3088,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_3) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+3089,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_3) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+3090,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_4) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+3091,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_4) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+3092,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_4) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+3093,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_4) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+3094,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_5) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+3095,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_5) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+3096,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_5) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+3097,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_5) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgCData(oldp+3098,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask),8);
            tracep->chgCData(oldp+3099,((7U & (~ (0x3ffU 
                                                  & (((IData)(0x3fU) 
                                                      << 
                                                      (7U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                                     >> 3U))))),3);
            tracep->chgWData(oldp+3100,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready),128);
            tracep->chgBit(oldp+3104,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag_auto_out_awvalid));
            tracep->chgIData(oldp+3105,((~ ((~ vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr_1) 
                                            | (7U & 
                                               (~ (0x3ffU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)))))))),32);
            tracep->chgBit(oldp+3106,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len_1))));
            tracep->chgBit(oldp+3107,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag_auto_out_wvalid));
            tracep->chgBit(oldp+3108,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_valid));
            tracep->chgIData(oldp+3109,((~ ((~ vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr) 
                                            | (7U & 
                                               (~ (0x3ffU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_size)))))))),32);
            tracep->chgBit(oldp+3110,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len))));
            tracep->chgBit(oldp+3111,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__do_enq));
            tracep->chgBit(oldp+3112,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__do_enq));
            tracep->chgBit(oldp+3113,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__do_enq));
            tracep->chgBit(oldp+3114,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_ready));
            tracep->chgIData(oldp+3115,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_addr),32);
            tracep->chgCData(oldp+3116,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_len),8);
            tracep->chgCData(oldp+3117,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_size),3);
            tracep->chgBit(oldp+3118,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_ready));
            tracep->chgBit(oldp+3119,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_valid));
            tracep->chgIData(oldp+3120,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr),32);
            tracep->chgCData(oldp+3121,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_len),8);
            tracep->chgCData(oldp+3122,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_size),3);
            tracep->chgBit(oldp+3123,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_io_deq_ready));
            tracep->chgBit(oldp+3124,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_io_deq_valid));
            tracep->chgCData(oldp+3125,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len),8);
            tracep->chgIData(oldp+3126,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr),32);
            tracep->chgIData(oldp+3127,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__inc_addr),32);
            tracep->chgSData(oldp+3128,((0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___wrapMask_T_1 
                                          >> 8U))),15);
            tracep->chgCData(oldp+3129,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len_1),8);
            tracep->chgIData(oldp+3130,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr_1),32);
            tracep->chgIData(oldp+3131,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__inc_addr_1),32);
            tracep->chgSData(oldp+3132,((0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___wrapMask_T_3 
                                          >> 8U))),15);
            tracep->chgBit(oldp+3133,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_valid));
            tracep->chgBit(oldp+3134,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor_io_in_a_ready));
            tracep->chgBit(oldp+3135,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor_io_in_d_valid));
            tracep->chgCData(oldp+3136,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor_io_in_d_bits_opcode),3);
            tracep->chgCData(oldp+3137,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor_io_in_d_bits_param),2);
            tracep->chgCData(oldp+3138,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor_io_in_d_bits_size),3);
            tracep->chgCData(oldp+3139,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor_io_in_d_bits_source),4);
            tracep->chgCData(oldp+3140,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor_io_in_d_bits_sink),6);
            tracep->chgBit(oldp+3141,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor_io_in_d_bits_denied));
            tracep->chgCData(oldp+3142,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__readys_filter_lo),2);
            tracep->chgCData(oldp+3143,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__readys_filter),4);
            tracep->chgCData(oldp+3144,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__readys_unready),4);
            tracep->chgCData(oldp+3145,((3U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___readys_readys_T_2)))),2);
            tracep->chgBit(oldp+3146,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___readys_readys_T_2)))));
            tracep->chgBit(oldp+3147,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__earlyWinner_0));
            tracep->chgBit(oldp+3148,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__muxStateEarly_0));
            tracep->chgBit(oldp+3149,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___readys_readys_T_2) 
                                                >> 1U)))));
            tracep->chgBit(oldp+3150,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__earlyWinner_1));
            tracep->chgBit(oldp+3151,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__muxStateEarly_1));
            tracep->chgCData(oldp+3152,((0xfU & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_size)) 
                                                     >> 2U))))),4);
            tracep->chgBit(oldp+3153,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_opcode))));
            tracep->chgCData(oldp+3154,(((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_opcode))
                                          ? (0xfU & 
                                             (~ (0x7ffU 
                                                 & (((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_size)) 
                                                    >> 2U))))
                                          : 0U)),4);
            tracep->chgBit(oldp+3155,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__latch));
            tracep->chgCData(oldp+3156,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__earlyWinner_0)
                                          ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_opcode))
                                              ? (0xfU 
                                                 & (~ 
                                                    (0x7ffU 
                                                     & (((IData)(0x3fU) 
                                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_size)) 
                                                        >> 2U))))
                                              : 0U)
                                          : 0U)),4);
            tracep->chgBit(oldp+3157,(1U));
            tracep->chgBit(oldp+3158,((0x21U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor_io_in_d_bits_sink))));
            tracep->chgCData(oldp+3159,((0xfU & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor_io_in_d_bits_size)) 
                                                     >> 2U))))),4);
            tracep->chgBit(oldp+3160,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor_io_in_d_bits_opcode))));
            tracep->chgCData(oldp+3161,((0xfU & (IData)(
                                                        (7ULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U))))),4);
            tracep->chgQData(oldp+3162,((((QData)((IData)(
                                                          vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor__DOT___GEN_23[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor__DOT___GEN_23[0U])))),64);
            tracep->chgBit(oldp+3164,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__a_io_deq_ready));
            tracep->chgBit(oldp+3165,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__out_1_ready));
            tracep->chgQData(oldp+3166,((((QData)((IData)(
                                                          vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__monitor__DOT___GEN_23[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__monitor__DOT___GEN_23[0U])))),64);
            tracep->chgBit(oldp+3168,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.__PVT__monitor_io_in_a_ready));
            tracep->chgCData(oldp+3169,((0xfU & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                                                     >> 2U))))),4);
            tracep->chgBit(oldp+3170,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.__PVT__d_first));
            tracep->chgBit(oldp+3171,(1U));
            tracep->chgBit(oldp+3172,((0x21U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_sink))));
            tracep->chgCData(oldp+3173,((0xfU & (IData)(
                                                        (7ULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U))))),4);
            tracep->chgQData(oldp+3174,((((QData)((IData)(
                                                          vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.__PVT__monitor__DOT___GEN_23[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.__PVT__monitor__DOT___GEN_23[0U])))),64);
            tracep->chgBit(oldp+3176,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor_io_in_d_valid));
            tracep->chgBit(oldp+3177,((1U & (~ (0xffU 
                                                & (((IData)(7U) 
                                                    << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+3178,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__last));
            tracep->chgBit(oldp+3179,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_d_ready) 
                                             | (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__last))))));
            tracep->chgBit(oldp+3180,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__bundleIn_0_d_bits_data_masked_enable_0));
            tracep->chgCData(oldp+3181,((0xfU & (IData)(
                                                        (7ULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U))))),4);
            tracep->chgQData(oldp+3182,((((QData)((IData)(
                                                          vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT___GEN_23[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT___GEN_23[0U])))),64);
            tracep->chgBit(oldp+3184,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_io_enq_valid));
            tracep->chgBit(oldp+3185,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_1_io_enq_valid));
            tracep->chgBit(oldp+3186,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_2_io_enq_valid));
            tracep->chgBit(oldp+3187,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_3_io_enq_valid));
            tracep->chgBit(oldp+3188,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_4_io_enq_valid));
            tracep->chgBit(oldp+3189,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_5_io_enq_valid));
            tracep->chgBit(oldp+3190,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_6_io_enq_valid));
            tracep->chgBit(oldp+3191,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_7_io_enq_valid));
            tracep->chgBit(oldp+3192,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_8_io_enq_valid));
            tracep->chgBit(oldp+3193,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_9_io_enq_valid));
            tracep->chgBit(oldp+3194,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_10_io_enq_valid));
            tracep->chgBit(oldp+3195,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_11_io_enq_valid));
            tracep->chgBit(oldp+3196,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_12_io_enq_valid));
            tracep->chgBit(oldp+3197,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_13_io_enq_valid));
            tracep->chgBit(oldp+3198,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_14_io_enq_valid));
            tracep->chgBit(oldp+3199,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_15_io_enq_valid));
            tracep->chgBit(oldp+3200,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_16_io_enq_valid));
            tracep->chgBit(oldp+3201,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_17_io_enq_valid));
            tracep->chgBit(oldp+3202,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_18_io_enq_valid));
            tracep->chgBit(oldp+3203,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_19_io_enq_valid));
            tracep->chgBit(oldp+3204,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_20_io_enq_valid));
            tracep->chgBit(oldp+3205,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_21_io_enq_valid));
            tracep->chgBit(oldp+3206,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_22_io_enq_valid));
            tracep->chgBit(oldp+3207,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_23_io_enq_valid));
            tracep->chgBit(oldp+3208,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_24_io_enq_valid));
            tracep->chgBit(oldp+3209,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_25_io_enq_valid));
            tracep->chgBit(oldp+3210,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_26_io_enq_valid));
            tracep->chgBit(oldp+3211,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_27_io_enq_valid));
            tracep->chgBit(oldp+3212,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_28_io_enq_valid));
            tracep->chgBit(oldp+3213,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_29_io_enq_valid));
            tracep->chgBit(oldp+3214,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_30_io_enq_valid));
            tracep->chgBit(oldp+3215,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_31_io_enq_valid));
            tracep->chgBit(oldp+3216,((1U & ((IData)(1U) 
                                             << (0xfU 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))))));
            tracep->chgBit(oldp+3217,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 1U))));
            tracep->chgBit(oldp+3218,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 2U))));
            tracep->chgBit(oldp+3219,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 3U))));
            tracep->chgBit(oldp+3220,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 4U))));
            tracep->chgBit(oldp+3221,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 5U))));
            tracep->chgBit(oldp+3222,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 6U))));
            tracep->chgBit(oldp+3223,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 7U))));
            tracep->chgBit(oldp+3224,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 8U))));
            tracep->chgBit(oldp+3225,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 9U))));
            tracep->chgBit(oldp+3226,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+3227,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+3228,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+3229,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+3230,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+3231,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+3232,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility__DOT__do_enq));
            tracep->chgBit(oldp+3233,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_1__DOT__do_enq));
            tracep->chgBit(oldp+3234,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_2__DOT__do_enq));
            tracep->chgBit(oldp+3235,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_3__DOT__do_enq));
            tracep->chgBit(oldp+3236,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_4__DOT__do_enq));
            tracep->chgBit(oldp+3237,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_5__DOT__do_enq));
            tracep->chgBit(oldp+3238,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_6__DOT__do_enq));
            tracep->chgBit(oldp+3239,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_7__DOT__do_enq));
            tracep->chgBit(oldp+3240,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_8__DOT__do_enq));
            tracep->chgBit(oldp+3241,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_9__DOT__do_enq));
            tracep->chgBit(oldp+3242,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_10__DOT__do_enq));
            tracep->chgBit(oldp+3243,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_11__DOT__do_enq));
            tracep->chgBit(oldp+3244,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_12__DOT__do_enq));
            tracep->chgBit(oldp+3245,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_13__DOT__do_enq));
            tracep->chgBit(oldp+3246,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_14__DOT__do_enq));
            tracep->chgBit(oldp+3247,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_15__DOT__do_enq));
            tracep->chgBit(oldp+3248,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_16__DOT__do_enq));
            tracep->chgBit(oldp+3249,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_17__DOT__do_enq));
            tracep->chgBit(oldp+3250,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_18__DOT__do_enq));
            tracep->chgBit(oldp+3251,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_19__DOT__do_enq));
            tracep->chgBit(oldp+3252,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_20__DOT__do_enq));
            tracep->chgBit(oldp+3253,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_21__DOT__do_enq));
            tracep->chgBit(oldp+3254,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_22__DOT__do_enq));
            tracep->chgBit(oldp+3255,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_23__DOT__do_enq));
            tracep->chgBit(oldp+3256,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_24__DOT__do_enq));
            tracep->chgBit(oldp+3257,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_25__DOT__do_enq));
            tracep->chgBit(oldp+3258,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_26__DOT__do_enq));
            tracep->chgBit(oldp+3259,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_27__DOT__do_enq));
            tracep->chgBit(oldp+3260,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_28__DOT__do_enq));
            tracep->chgBit(oldp+3261,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_29__DOT__do_enq));
            tracep->chgBit(oldp+3262,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_30__DOT__do_enq));
            tracep->chgBit(oldp+3263,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_31__DOT__do_enq));
            tracep->chgBit(oldp+3264,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor_io_in_a_ready));
            tracep->chgBit(oldp+3265,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__deq_io_enq_valid));
            tracep->chgBit(oldp+3266,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__deq_io_enq_bits_last));
            tracep->chgBit(oldp+3267,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_enq_valid));
            tracep->chgCData(oldp+3268,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_enq_bits_id),5);
            tracep->chgCData(oldp+3269,((0xffU & (~ 
                                                  (0x7fffU 
                                                   & (((IData)(0x7ffU) 
                                                       << 
                                                       (7U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                                      >> 3U))))),8);
            tracep->chgCData(oldp+3270,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_enq_bits_size),3);
            tracep->chgCData(oldp+3271,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))),4);
            tracep->chgBit(oldp+3272,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_ready));
            tracep->chgBit(oldp+3273,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_valid));
            tracep->chgBit(oldp+3274,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_wen));
            tracep->chgBit(oldp+3275,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__idStall_6));
            tracep->chgBit(oldp+3276,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__idStall_5));
            tracep->chgBit(oldp+3277,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__idStall_4));
            tracep->chgBit(oldp+3278,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__idStall_3));
            tracep->chgBit(oldp+3279,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__idStall_2));
            tracep->chgBit(oldp+3280,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__idStall_1));
            tracep->chgBit(oldp+3281,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__idStall_0));
            tracep->chgBit(oldp+3282,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__stall));
            tracep->chgBit(oldp+3283,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__stall)) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___bundleIn_0_a_ready_T_3))));
            tracep->chgCData(oldp+3284,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__beats1),3);
            tracep->chgCData(oldp+3285,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id),5);
            tracep->chgBit(oldp+3286,((((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__stall)) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid)) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___out_arw_valid_T_4))));
            tracep->chgBit(oldp+3287,((1U & ((IData)(1U) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)))));
            tracep->chgBit(oldp+3288,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 1U))));
            tracep->chgBit(oldp+3289,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 2U))));
            tracep->chgBit(oldp+3290,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 3U))));
            tracep->chgBit(oldp+3291,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 4U))));
            tracep->chgBit(oldp+3292,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 5U))));
            tracep->chgBit(oldp+3293,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 6U))));
            tracep->chgBit(oldp+3294,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 7U))));
            tracep->chgBit(oldp+3295,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 8U))));
            tracep->chgBit(oldp+3296,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 9U))));
            tracep->chgBit(oldp+3297,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+3298,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+3299,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+3300,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+3301,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+3302,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+3303,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+3304,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+3305,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+3306,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+3307,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+3308,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+3309,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+3310,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc));
            tracep->chgBit(oldp+3311,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_1));
            tracep->chgBit(oldp+3312,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_2));
            tracep->chgBit(oldp+3313,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_3));
            tracep->chgBit(oldp+3314,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_4));
            tracep->chgBit(oldp+3315,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_5));
            tracep->chgBit(oldp+3316,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_6));
            tracep->chgBit(oldp+3317,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 7U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+3318,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 8U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+3319,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 9U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+3320,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0xaU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+3321,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0xbU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+3322,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0xcU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+3323,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0xdU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+3324,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0xeU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+3325,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0xfU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+3326,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x10U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+3327,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x11U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+3328,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x12U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+3329,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x13U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+3330,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x14U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+3331,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x15U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+3332,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x16U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+3333,((0U == (0x3fU 
                                              & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x1fffU 
                                                     & ((IData)(0x3fU) 
                                                        << 
                                                        (7U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))))));
            tracep->chgBit(oldp+3334,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+3335,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+3336,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_2));
            tracep->chgBit(oldp+3337,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_2));
            tracep->chgBit(oldp+3338,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_3));
            tracep->chgBit(oldp+3339,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_3));
            tracep->chgBit(oldp+3340,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_4));
            tracep->chgBit(oldp+3341,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_4));
            tracep->chgBit(oldp+3342,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_5));
            tracep->chgBit(oldp+3343,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_5));
            tracep->chgBit(oldp+3344,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_2) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+3345,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_2) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+3346,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_2) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+3347,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_2) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+3348,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_3) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+3349,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_3) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+3350,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_3) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+3351,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_3) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+3352,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_4) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+3353,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_4) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+3354,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_4) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+3355,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_4) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+3356,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_5) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+3357,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_5) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+3358,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_5) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+3359,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_5) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgCData(oldp+3360,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask),8);
            tracep->chgWData(oldp+3361,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_set_wo_ready),128);
            tracep->chgBit(oldp+3365,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_0_a_valid));
            tracep->chgBit(oldp+3366,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_0_d_ready));
            tracep->chgBit(oldp+3367,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_valid));
            tracep->chgCData(oldp+3368,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_opcode),3);
            tracep->chgCData(oldp+3369,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_size),4);
            tracep->chgCData(oldp+3370,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_source),4);
            tracep->chgBit(oldp+3371,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_denied));
            tracep->chgBit(oldp+3372,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_corrupt));
            tracep->chgBit(oldp+3373,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_a_ready));
            tracep->chgBit(oldp+3374,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_valid));
            tracep->chgCData(oldp+3375,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_opcode),3);
            tracep->chgCData(oldp+3376,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_param),2);
            tracep->chgCData(oldp+3377,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_size),3);
            tracep->chgCData(oldp+3378,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_source),4);
            tracep->chgCData(oldp+3379,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_sink),5);
            tracep->chgBit(oldp+3380,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_denied));
            tracep->chgBit(oldp+3381,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass));
            tracep->chgBit(oldp+3382,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__stall));
            tracep->chgBit(oldp+3383,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__stall)) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT___bundleIn_0_a_ready_T_1))));
            tracep->chgCData(oldp+3384,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_size))),3);
            tracep->chgCData(oldp+3385,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_size),3);
            tracep->chgCData(oldp+3386,((0xfU & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_size)) 
                                                     >> 2U))))),4);
            tracep->chgCData(oldp+3387,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_opcode),3);
            tracep->chgBit(oldp+3388,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_opcode))));
            tracep->chgCData(oldp+3389,(((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_opcode))
                                          ? (0xfU & 
                                             (~ (0x7ffU 
                                                 & (((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_size)) 
                                                    >> 2U))))
                                          : 0U)),4);
            tracep->chgBit(oldp+3390,((IData)((4U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_opcode))))));
            tracep->chgCData(oldp+3391,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__inc),2);
            tracep->chgCData(oldp+3392,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__next_flight),6);
            tracep->chgBit(oldp+3393,(1U));
            tracep->chgCData(oldp+3394,((0xfU & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                                                     >> 2U))))),4);
            tracep->chgBit(oldp+3395,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_opcode))));
            tracep->chgCData(oldp+3396,((0xfU & (IData)(
                                                        (7ULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U))))),4);
            tracep->chgQData(oldp+3397,((((QData)((IData)(
                                                          vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT___GEN_23[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT___GEN_23[0U])))),64);
            tracep->chgBit(oldp+3399,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_a_ready));
            tracep->chgBit(oldp+3400,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_valid));
            tracep->chgCData(oldp+3401,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_opcode),3);
            tracep->chgCData(oldp+3402,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_size),4);
            tracep->chgCData(oldp+3403,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_source),4);
            tracep->chgBit(oldp+3404,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_denied));
            tracep->chgBit(oldp+3405,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__da_valid));
            tracep->chgBit(oldp+3406,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__out_1_ready));
            tracep->chgBit(oldp+3407,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__muxStateEarly_1));
            tracep->chgBit(oldp+3408,(1U));
            tracep->chgSData(oldp+3409,((0x3ffU & (~ 
                                                   (0x1ffffffU 
                                                    & (((IData)(0xfffU) 
                                                        << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                                                       >> 2U))))),10);
            tracep->chgBit(oldp+3410,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_opcode))));
            tracep->chgCData(oldp+3411,((0xfU & (IData)(
                                                        (7ULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U))))),4);
            tracep->chgSData(oldp+3412,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT__a_set_wo_ready),16);
            tracep->chgQData(oldp+3413,((((QData)((IData)(
                                                          vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT___GEN_23[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT___GEN_23[0U])))),64);
            tracep->chgCData(oldp+3415,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_incremented),4);
            tracep->chgCData(oldp+3416,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx),4);
            tracep->chgCData(oldp+3417,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__index),3);
            tracep->chgCData(oldp+3418,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_incremented),4);
            tracep->chgCData(oldp+3419,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx),4);
            tracep->chgCData(oldp+3420,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__index),3);
            tracep->chgBit(oldp+3421,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__wen));
            tracep->chgBit(oldp+3422,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__wen_1));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1bU])) {
            tracep->chgBit(oldp+3423,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3424,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3425,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3426,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3427,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3428,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3429,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3430,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3431,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1cU])) {
            tracep->chgBit(oldp+3432,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3433,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3434,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3435,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3436,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3437,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3438,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3439,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3440,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1dU])) {
            tracep->chgBit(oldp+3441,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3442,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3443,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3444,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3445,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3446,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3447,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3448,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3449,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1eU])) {
            tracep->chgBit(oldp+3450,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3451,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3452,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3453,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3454,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3455,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3456,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3457,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3458,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1fU])) {
            tracep->chgBit(oldp+3459,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3460,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3461,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3462,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3463,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3464,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3465,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3466,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3467,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x20U])) {
            tracep->chgBit(oldp+3468,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3469,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3470,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3471,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3472,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3473,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x21U])) {
            tracep->chgBit(oldp+3474,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3475,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3476,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3477,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3478,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3479,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x22U])) {
            tracep->chgCData(oldp+3480,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_incremented),4);
            tracep->chgCData(oldp+3481,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx),4);
            tracep->chgCData(oldp+3482,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__index),3);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x23U])) {
            tracep->chgBit(oldp+3483,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3484,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3485,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3486,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3487,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3488,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3489,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3490,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3491,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3492,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3493,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3494,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3495,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3496,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3497,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3498,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3499,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3500,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x24U])) {
            tracep->chgBit(oldp+3501,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3502,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3503,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3504,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3505,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3506,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3507,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3508,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3509,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3510,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3511,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3512,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3513,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3514,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3515,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3516,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3517,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3518,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x25U])) {
            tracep->chgBit(oldp+3519,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3520,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3521,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3522,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3523,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3524,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x26U])) {
            tracep->chgBit(oldp+3525,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3526,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3527,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3528,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3529,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3530,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x27U])) {
            tracep->chgBit(oldp+3531,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3532,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3533,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3534,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3535,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3536,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x28U])) {
            tracep->chgBit(oldp+3537,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3538,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3539,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3540,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3541,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3542,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x29U])) {
            tracep->chgBit(oldp+3543,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3544,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3545,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3546,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3547,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3548,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2aU])) {
            tracep->chgBit(oldp+3549,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3550,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3551,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3552,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3553,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3554,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2bU])) {
            tracep->chgBit(oldp+3555,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3556,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3557,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3558,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3559,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3560,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2cU])) {
            tracep->chgBit(oldp+3561,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3562,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3563,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3564,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3565,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3566,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2dU])) {
            tracep->chgBit(oldp+3567,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3568,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3569,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3570,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3571,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3572,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2eU])) {
            tracep->chgBit(oldp+3573,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3574,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3575,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3576,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3577,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3578,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3579,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3580,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3581,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3582,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3583,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3584,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2fU])) {
            tracep->chgBit(oldp+3585,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3586,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3587,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3588,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3589,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3590,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3591,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3592,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+3593,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3594,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+3595,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+3596,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        tracep->chgBit(oldp+3597,(vlSelf->clock));
        tracep->chgBit(oldp+3598,(vlSelf->reset));
        tracep->chgBit(oldp+3599,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_));
        tracep->chgBit(oldp+3600,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_));
        tracep->chgQData(oldp+3601,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                       ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__maybe_full)
                                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_data
                                          [0U] : vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_in_d_bits_data)
                                       : 0ULL) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data)
                                                                       : 0U) 
                                                                     | ((0U 
                                                                         == 
                                                                         (0x20001000U 
                                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr))
                                                                         ? 
                                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_psel)
                                                                          ? 
                                                                         ((((4U 
                                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                             ? 
                                                                            ((2U 
                                                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                              ? 
                                                                             ((1U 
                                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                              : 
                                                                             ((1U 
                                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                               : 0U))
                                                                             : 
                                                                            ((2U 
                                                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                              ? 
                                                                             ((1U 
                                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                               : 
                                                                              (0xc0U 
                                                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                              : 
                                                                             ((1U 
                                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                               ? 
                                                                              ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                ? 
                                                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                               : 
                                                                              ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                : 
                                                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U))))) 
                                                                           << 0x18U) 
                                                                          | ((0xff0000U 
                                                                              & (((4U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                                 : 0U))
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                                 : 
                                                                                (0xc0U 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U))))) 
                                                                                << 0x10U)) 
                                                                             | ((0xff00U 
                                                                                & (((4U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                                 : 0U))
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                                 : 
                                                                                (0xc0U 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U))))) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & ((4U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                                 : 0U))
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                                 : 
                                                                                (0xc0U 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U)))))))))
                                                                          : 0U)
                                                                         : 0U)))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data)
                                                                        : 0U) 
                                                                      | ((0U 
                                                                          == 
                                                                          (0x20001000U 
                                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr))
                                                                          ? 
                                                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_psel)
                                                                           ? 
                                                                          ((((4U 
                                                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                              ? 
                                                                             ((2U 
                                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                               ? 
                                                                              ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                               : 
                                                                              ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                                : 0U))
                                                                              : 
                                                                             ((2U 
                                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                               ? 
                                                                              ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                                : 
                                                                               (0xc0U 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                               : 
                                                                              ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                ? 
                                                                               ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                                : 
                                                                               ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U))))) 
                                                                            << 0x18U) 
                                                                           | ((0xff0000U 
                                                                               & (((4U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                                 : 0U))
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                                 : 
                                                                                (0xc0U 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U))))) 
                                                                                << 0x10U)) 
                                                                              | ((0xff00U 
                                                                                & (((4U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                                 : 0U))
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                                 : 
                                                                                (0xc0U 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U))))) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & ((4U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                                 : 0U))
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                                 : 
                                                                                (0xc0U 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U)))))))))
                                                                           : 0U)
                                                                          : 0U)))))
                                                   : 0ULL))),64);
        tracep->chgQData(oldp+3603,((((QData)((IData)(
                                                      (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data)
                                                         : 0U) 
                                                       | ((0U 
                                                           == 
                                                           (0x20001000U 
                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr))
                                                           ? 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_psel)
                                                            ? 
                                                           ((((4U 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                               ? 
                                                              ((2U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                ? 
                                                               ((1U 
                                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                 : 0U))
                                                               : 
                                                              ((2U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                ? 
                                                               ((1U 
                                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                 : 
                                                                (0xc0U 
                                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                 ? 
                                                                ((0x80U 
                                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                  ? 
                                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                  >> 8U)
                                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                 : 
                                                                ((0x80U 
                                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                  : 
                                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                  >> 3U))))) 
                                                             << 0x18U) 
                                                            | ((0xff0000U 
                                                                & (((4U 
                                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                     ? 
                                                                    ((2U 
                                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                      ? 
                                                                     ((1U 
                                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                      : 
                                                                     ((1U 
                                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                       : 0U))
                                                                     : 
                                                                    ((2U 
                                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                      ? 
                                                                     ((1U 
                                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                       : 
                                                                      (0xc0U 
                                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                      : 
                                                                     ((1U 
                                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                       ? 
                                                                      ((0x80U 
                                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                        ? 
                                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                        >> 8U)
                                                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                       : 
                                                                      ((0x80U 
                                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                        : 
                                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                        >> 3U))))) 
                                                                   << 0x10U)) 
                                                               | ((0xff00U 
                                                                   & (((4U 
                                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                        ? 
                                                                       ((2U 
                                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                         ? 
                                                                        ((1U 
                                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                         : 
                                                                        ((1U 
                                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                          : 0U))
                                                                        : 
                                                                       ((2U 
                                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                         ? 
                                                                        ((1U 
                                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                          : 
                                                                         (0xc0U 
                                                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                         : 
                                                                        ((1U 
                                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                          ? 
                                                                         ((0x80U 
                                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                           ? 
                                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                           >> 8U)
                                                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                          : 
                                                                         ((0x80U 
                                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                           : 
                                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                           >> 3U))))) 
                                                                      << 8U)) 
                                                                  | (0xffU 
                                                                     & ((4U 
                                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                         ? 
                                                                        ((2U 
                                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                          ? 
                                                                         ((1U 
                                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                          : 
                                                                         ((1U 
                                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                           : 0U))
                                                                         : 
                                                                        ((2U 
                                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                          ? 
                                                                         ((1U 
                                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                           : 
                                                                          (0xc0U 
                                                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                          : 
                                                                         ((1U 
                                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                           ? 
                                                                          ((0x80U 
                                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                            ? 
                                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                            >> 8U)
                                                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                           : 
                                                                          ((0x80U 
                                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                            : 
                                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                            >> 3U)))))))))
                                                            : 0U)
                                                           : 0U)))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data)
                                                                     : 0U) 
                                                                   | ((0U 
                                                                       == 
                                                                       (0x20001000U 
                                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr))
                                                                       ? 
                                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_psel)
                                                                        ? 
                                                                       ((((4U 
                                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                           ? 
                                                                          ((2U 
                                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                            ? 
                                                                           ((1U 
                                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                            : 
                                                                           ((1U 
                                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                             : 0U))
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                            ? 
                                                                           ((1U 
                                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                             : 
                                                                            (0xc0U 
                                                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                            : 
                                                                           ((1U 
                                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                             ? 
                                                                            ((0x80U 
                                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                              ? 
                                                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                              >> 8U)
                                                                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                             : 
                                                                            ((0x80U 
                                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                              : 
                                                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                              >> 3U))))) 
                                                                         << 0x18U) 
                                                                        | ((0xff0000U 
                                                                            & (((4U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                                 : 0U))
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                                 : 
                                                                                (0xc0U 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U))))) 
                                                                               << 0x10U)) 
                                                                           | ((0xff00U 
                                                                               & (((4U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                                 : 0U))
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                                 : 
                                                                                (0xc0U 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U))))) 
                                                                                << 8U)) 
                                                                              | (0xffU 
                                                                                & ((4U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                                 : 0U))
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                                 : 
                                                                                (0xc0U 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U)))))))))
                                                                        : 0U)
                                                                       : 0U)))))),64);
        tracep->chgIData(oldp+3605,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data)
                                       : 0U) | ((0U 
                                                 == 
                                                 (0x20001000U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr))
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_psel)
                                                  ? 
                                                 ((((4U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                      : 
                                                     ((1U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                       : 0U))
                                                     : 
                                                    ((2U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                       : 
                                                      (0xc0U 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                      : 
                                                     ((1U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                       ? 
                                                      ((0x80U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                        >> 8U)
                                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                       : 
                                                      ((0x80U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                        : 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                        >> 3U))))) 
                                                   << 0x18U) 
                                                  | ((0xff0000U 
                                                      & (((4U 
                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                           ? 
                                                          ((2U 
                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                            ? 
                                                           ((1U 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                            : 
                                                           ((1U 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                             : 0U))
                                                           : 
                                                          ((2U 
                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                            ? 
                                                           ((1U 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                             : 
                                                            (0xc0U 
                                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                            : 
                                                           ((1U 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                             ? 
                                                            ((0x80U 
                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                              ? 
                                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                              >> 8U)
                                                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                             : 
                                                            ((0x80U 
                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                              : 
                                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                              >> 3U))))) 
                                                         << 0x10U)) 
                                                     | ((0xff00U 
                                                         & (((4U 
                                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                              ? 
                                                             ((2U 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                               ? 
                                                              ((1U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                               : 
                                                              ((1U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                : 0U))
                                                              : 
                                                             ((2U 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                               ? 
                                                              ((1U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                : 
                                                               (0xc0U 
                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                               : 
                                                              ((1U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                ? 
                                                               ((0x80U 
                                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                 ? 
                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                 >> 8U)
                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                : 
                                                               ((0x80U 
                                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                 : 
                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                 >> 3U))))) 
                                                            << 8U)) 
                                                        | (0xffU 
                                                           & ((4U 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                               ? 
                                                              ((2U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                ? 
                                                               ((1U 
                                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                 : 0U))
                                                               : 
                                                              ((2U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                ? 
                                                               ((1U 
                                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                 : 
                                                                (0xc0U 
                                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                 ? 
                                                                ((0x80U 
                                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                  ? 
                                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                  >> 8U)
                                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                 : 
                                                                ((0x80U 
                                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                  : 
                                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                  >> 3U)))))))))
                                                  : 0U)
                                                 : 0U))),32);
        tracep->chgIData(oldp+3606,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_psel)
                                      ? ((((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                            ? ((2U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                ? (
                                                   (1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                : (
                                                   (1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                    : 0U))
                                            : ((2U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                ? (
                                                   (1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                    : 
                                                   (0xc0U 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                : (
                                                   (1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                    ? 
                                                   ((0x80U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                     >> 8U)
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                     : 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                     >> 3U))))) 
                                          << 0x18U) 
                                         | ((0xff0000U 
                                             & (((4U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                   : 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                    : 0U))
                                                  : 
                                                 ((2U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                    : 
                                                   (0xc0U 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                   : 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                    ? 
                                                   ((0x80U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                     >> 8U)
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                     : 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                     >> 3U))))) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & (((4U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                      : 
                                                     ((1U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                       : 0U))
                                                     : 
                                                    ((2U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                       : 
                                                      (0xc0U 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                      : 
                                                     ((1U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                       ? 
                                                      ((0x80U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                        >> 8U)
                                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                       : 
                                                      ((0x80U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                        : 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                        >> 3U))))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & ((4U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                       : 
                                                      ((1U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                        : 0U))
                                                      : 
                                                     ((2U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                        : 
                                                       (0xc0U 
                                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                       : 
                                                      ((1U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                        ? 
                                                       ((0x80U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                         ? 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                         >> 8U)
                                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                        : 
                                                       ((0x80U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                         : 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                         >> 3U)))))))))
                                      : 0U)),32);
        tracep->chgCData(oldp+3607,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                                      ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_source)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source))),4);
        tracep->chgBit(oldp+3608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_));
        tracep->chgBit(oldp+3609,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))));
        tracep->chgBit(oldp+3610,((1U & (~ (IData)(vlSelf->reset)))));
        tracep->chgBit(oldp+3611,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___bundleOut_0_a_valid_T_1))));
        tracep->chgSData(oldp+3612,(((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode))
                                      ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___T) 
                                          & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam_io_key)))
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam_io_alloc_bits)
                                          : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data
                                         [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                      : ((7U == (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                    >> 3U)))
                                          ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___T) 
                                              & ((7U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_key)))
                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_alloc_bits)
                                              : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data
                                             [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                          : ((6U == 
                                              (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                >> 3U)))
                                              ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___T) 
                                                  & ((7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_key)))
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_alloc_bits)
                                                  : 
                                                 vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data
                                                 [(7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                              : ((5U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                      >> 3U)))
                                                  ? 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___T) 
                                                   & ((7U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_key)))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_alloc_bits)
                                                   : 
                                                  vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data
                                                  [
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                       >> 3U)))
                                                   ? 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___T) 
                                                    & ((7U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_key)))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_alloc_bits)
                                                    : 
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data
                                                   [
                                                   (7U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                        >> 3U)))
                                                    ? 
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___T) 
                                                     & ((7U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_key)))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_alloc_bits)
                                                     : 
                                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data
                                                    [
                                                    (7U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                         >> 3U)))
                                                     ? 
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___T) 
                                                      & ((7U 
                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_key)))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_alloc_bits)
                                                      : 
                                                     vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data
                                                     [
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                          >> 3U)))
                                                      ? 
                                                     (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___T) 
                                                       & ((7U 
                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_key)))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_alloc_bits)
                                                       : 
                                                      vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data
                                                      [
                                                      (7U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                      : 
                                                     (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___T) 
                                                       & ((7U 
                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_key)))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_alloc_bits)
                                                       : 
                                                      vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data
                                                      [
                                                      (7U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])))))))))),16);
        tracep->chgIData(oldp+3613,((3U | ((((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode))
                                              ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___T) 
                                                  & ((7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam_io_key)))
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam_io_alloc_bits)
                                                  : 
                                                 vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data
                                                 [(7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                              : ((7U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                      >> 3U)))
                                                  ? 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___T) 
                                                   & ((7U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_key)))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_alloc_bits)
                                                   : 
                                                  vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data
                                                  [
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                       >> 3U)))
                                                   ? 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___T) 
                                                    & ((7U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_key)))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_alloc_bits)
                                                    : 
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data
                                                   [
                                                   (7U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                        >> 3U)))
                                                    ? 
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___T) 
                                                     & ((7U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_key)))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_alloc_bits)
                                                     : 
                                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data
                                                    [
                                                    (7U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                         >> 3U)))
                                                     ? 
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___T) 
                                                      & ((7U 
                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_key)))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_alloc_bits)
                                                      : 
                                                     vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data
                                                     [
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                          >> 3U)))
                                                      ? 
                                                     (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___T) 
                                                       & ((7U 
                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_key)))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_alloc_bits)
                                                       : 
                                                      vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data
                                                      [
                                                      (7U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                           >> 3U)))
                                                       ? 
                                                      (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___T) 
                                                        & ((7U 
                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_key)))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_alloc_bits)
                                                        : 
                                                       vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data
                                                       [
                                                       (7U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                            >> 3U)))
                                                        ? 
                                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___T) 
                                                         & ((7U 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_key)))
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_alloc_bits)
                                                         : 
                                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data
                                                        [
                                                        (7U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                        : 
                                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___T) 
                                                         & ((7U 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_key)))
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_alloc_bits)
                                                         : 
                                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data
                                                        [
                                                        (7U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))]))))))))) 
                                            << 0x10U) 
                                           | ((0xe000U 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                  << 0xaU)) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_size) 
                                                  << 9U) 
                                                 | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full)
                                                       ? 
                                                      vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_denied
                                                      [0U]
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                                                     << 8U) 
                                                    | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full)
                                                          ? 
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_param
                                                         [0U]
                                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                                                        << 6U) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode) 
                                                          << 3U)))))))),32);
        tracep->chgCData(oldp+3614,((0xffU & ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                               ? ((2U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                   : 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                    : 0U))
                                               : ((2U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                    : 
                                                   (0xc0U 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                   : 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                    ? 
                                                   ((0x80U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                     >> 8U)
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                     : 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                     >> 3U))))))),8);
        tracep->chgBit(oldp+3615,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_0_penable) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_0_psel)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_pwrite))));
        tracep->chgBit(oldp+3616,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_));
        tracep->chgBit(oldp+3617,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))));
        tracep->chgBit(oldp+3618,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___bundleOut_0_a_valid_T_1))));
        tracep->chgSData(oldp+3619,(((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode))
                                      ? (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___T) 
                                          & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam_io_key)))
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam_io_alloc_bits)
                                          : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data
                                         [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                      : ((7U == (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                    >> 3U)))
                                          ? (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___T) 
                                              & ((7U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_key)))
                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_alloc_bits)
                                              : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data
                                             [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                          : ((6U == 
                                              (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                >> 3U)))
                                              ? (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___T) 
                                                  & ((7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_key)))
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_alloc_bits)
                                                  : 
                                                 vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data
                                                 [(7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                              : ((5U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                      >> 3U)))
                                                  ? 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___T) 
                                                   & ((7U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_key)))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_alloc_bits)
                                                   : 
                                                  vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data
                                                  [
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                       >> 3U)))
                                                   ? 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___T) 
                                                    & ((7U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_key)))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_alloc_bits)
                                                    : 
                                                   vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data
                                                   [
                                                   (7U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                        >> 3U)))
                                                    ? 
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___T) 
                                                     & ((7U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_key)))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_alloc_bits)
                                                     : 
                                                    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data
                                                    [
                                                    (7U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                         >> 3U)))
                                                     ? 
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___T) 
                                                      & ((7U 
                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_key)))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_alloc_bits)
                                                      : 
                                                     vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data
                                                     [
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                          >> 3U)))
                                                      ? 
                                                     (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___T) 
                                                       & ((7U 
                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_key)))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_alloc_bits)
                                                       : 
                                                      vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data
                                                      [
                                                      (7U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                      : 
                                                     (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___T) 
                                                       & ((7U 
                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_key)))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_alloc_bits)
                                                       : 
                                                      vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data
                                                      [
                                                      (7U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])))))))))),16);
        tracep->chgIData(oldp+3620,((3U | ((((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode))
                                              ? (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___T) 
                                                  & ((7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam_io_key)))
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam_io_alloc_bits)
                                                  : 
                                                 vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data
                                                 [(7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                              : ((7U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                      >> 3U)))
                                                  ? 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___T) 
                                                   & ((7U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_key)))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_alloc_bits)
                                                   : 
                                                  vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data
                                                  [
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                       >> 3U)))
                                                   ? 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___T) 
                                                    & ((7U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_key)))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_alloc_bits)
                                                    : 
                                                   vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data
                                                   [
                                                   (7U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                        >> 3U)))
                                                    ? 
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___T) 
                                                     & ((7U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_key)))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_alloc_bits)
                                                     : 
                                                    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data
                                                    [
                                                    (7U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                         >> 3U)))
                                                     ? 
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___T) 
                                                      & ((7U 
                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_key)))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_alloc_bits)
                                                      : 
                                                     vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data
                                                     [
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                          >> 3U)))
                                                      ? 
                                                     (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___T) 
                                                       & ((7U 
                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_key)))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_alloc_bits)
                                                       : 
                                                      vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data
                                                      [
                                                      (7U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                           >> 3U)))
                                                       ? 
                                                      (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___T) 
                                                        & ((7U 
                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_key)))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_alloc_bits)
                                                        : 
                                                       vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data
                                                       [
                                                       (7U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                            >> 3U)))
                                                        ? 
                                                       (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___T) 
                                                         & ((7U 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_key)))
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_alloc_bits)
                                                         : 
                                                        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data
                                                        [
                                                        (7U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                        : 
                                                       (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___T) 
                                                         & ((7U 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_key)))
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_alloc_bits)
                                                         : 
                                                        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data
                                                        [
                                                        (7U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))]))))))))) 
                                            << 0x10U) 
                                           | ((0xe000U 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                  << 0xaU)) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_size) 
                                                  << 9U) 
                                                 | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full)
                                                       ? 
                                                      vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_denied
                                                      [0U]
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                                                     << 8U) 
                                                    | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full)
                                                          ? 
                                                         vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_param
                                                         [0U]
                                                          : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                                                        << 6U) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode) 
                                                          << 3U)))))))),32);
        tracep->chgQData(oldp+3621,(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__rdata),64);
        tracep->chgBit(oldp+3623,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_corrupt)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))));
        tracep->chgBit(oldp+3624,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__stall)) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT___bundleIn_0_a_ready_T_1))));
        tracep->chgBit(oldp+3625,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_valid)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid))));
        tracep->chgBit(oldp+3626,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_valid)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid))));
        tracep->chgIData(oldp+3627,(((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__index))
                                      ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_7
                                      : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__index))
                                          ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_6
                                          : ((5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__index))
                                              ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_5
                                              : ((4U 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__index))
                                                  ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_4
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__index))
                                                   ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_3
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__index))
                                                    ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_2
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__index))
                                                     ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_1
                                                     : vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_0)))))))),32);
        tracep->chgBit(oldp+3628,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx) 
                                      != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray_io_q)))));
        tracep->chgBit(oldp+3629,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx) 
                                      != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray_io_q)))));
        tracep->chgBit(oldp+3630,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx) 
                                      != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray_io_q)))));
        tracep->chgBit(oldp+3631,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx) 
                                      != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray_io_q)))));
    }
}
