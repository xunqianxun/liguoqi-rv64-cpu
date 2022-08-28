// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

extern const VlWide<8>/*255:0*/ VysyxSoCFull__ConstPool__CONST_db979007_0;
extern const VlWide<8>/*255:0*/ VysyxSoCFull__ConstPool__CONST_57168600_0;
extern const VlWide<16>/*511:0*/ VysyxSoCFull__ConstPool__CONST_0b2d9f06_0;
extern const VlWide<16>/*511:0*/ VysyxSoCFull__ConstPool__CONST_ffd88623_0;

VL_INLINE_OPT void VysyxSoCFull___024root___sequent__TOP__19(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___sequent__TOP__19\n"); );
    // Variables
    VlWide<8>/*255:0*/ __Vtemp1213;
    VlWide<8>/*255:0*/ __Vtemp1214;
    VlWide<8>/*255:0*/ __Vtemp1217;
    VlWide<8>/*255:0*/ __Vtemp1218;
    VlWide<8>/*255:0*/ __Vtemp1221;
    VlWide<8>/*255:0*/ __Vtemp1222;
    VlWide<8>/*255:0*/ __Vtemp1225;
    VlWide<8>/*255:0*/ __Vtemp1226;
    VlWide<8>/*255:0*/ __Vtemp1229;
    VlWide<8>/*255:0*/ __Vtemp1230;
    VlWide<8>/*255:0*/ __Vtemp1233;
    VlWide<8>/*255:0*/ __Vtemp1234;
    VlWide<8>/*255:0*/ __Vtemp1237;
    VlWide<8>/*255:0*/ __Vtemp1238;
    VlWide<8>/*255:0*/ __Vtemp1241;
    VlWide<8>/*255:0*/ __Vtemp1242;
    VlWide<16>/*511:0*/ __Vtemp1243;
    VlWide<16>/*511:0*/ __Vtemp1246;
    VlWide<16>/*511:0*/ __Vtemp1247;
    VlWide<16>/*511:0*/ __Vtemp1248;
    VlWide<16>/*511:0*/ __Vtemp1251;
    VlWide<16>/*511:0*/ __Vtemp1252;
    VlWide<16>/*511:0*/ __Vtemp1253;
    VlWide<16>/*511:0*/ __Vtemp1256;
    VlWide<16>/*511:0*/ __Vtemp1257;
    VlWide<16>/*511:0*/ __Vtemp1258;
    VlWide<16>/*511:0*/ __Vtemp1261;
    VlWide<16>/*511:0*/ __Vtemp1262;
    VlWide<8>/*255:0*/ __Vtemp1265;
    VlWide<8>/*255:0*/ __Vtemp1266;
    VlWide<8>/*255:0*/ __Vtemp1269;
    VlWide<8>/*255:0*/ __Vtemp1270;
    VlWide<8>/*255:0*/ __Vtemp1273;
    VlWide<8>/*255:0*/ __Vtemp1274;
    VlWide<8>/*255:0*/ __Vtemp1277;
    VlWide<8>/*255:0*/ __Vtemp1278;
    VlWide<8>/*255:0*/ __Vtemp1281;
    VlWide<8>/*255:0*/ __Vtemp1282;
    VlWide<8>/*255:0*/ __Vtemp1285;
    VlWide<8>/*255:0*/ __Vtemp1286;
    VlWide<8>/*255:0*/ __Vtemp1289;
    VlWide<8>/*255:0*/ __Vtemp1290;
    VlWide<8>/*255:0*/ __Vtemp1293;
    VlWide<8>/*255:0*/ __Vtemp1294;
    VlWide<16>/*511:0*/ __Vtemp1295;
    VlWide<16>/*511:0*/ __Vtemp1298;
    VlWide<16>/*511:0*/ __Vtemp1299;
    VlWide<16>/*511:0*/ __Vtemp1300;
    VlWide<16>/*511:0*/ __Vtemp1303;
    VlWide<16>/*511:0*/ __Vtemp1304;
    // Body
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_1[0U] 
                                                     | vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_1[1U]) 
                                                    | vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_1[2U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_1[3U])))) 
                                | (0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__watchdog_1 
                                  < vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:113092: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 113092, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_3))) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2406)) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at ChipLinkBridge.scala:171:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_3))) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2406)) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:113116: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 113116, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_2_e_valid) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_84) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:171:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_2_e_valid) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_84) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:113140: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 113140, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:125863: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 125863, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:125887: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 125887, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:125911: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 125911, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:125935: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 125935, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:125959: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 125959, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:125983: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 125983, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126007: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126007, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126031: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126031, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126055: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126055, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126079: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126079, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126103: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126103, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126127: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126127, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126151: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126151, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126175: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126175, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126199: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126199, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_177) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_177) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126223: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126223, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_294)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_294)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126247: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126247, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126271: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126271, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126295: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126295, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126319: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126319, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126343: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126343, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126367: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126367, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126391: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126391, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126415: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126415, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126439: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126439, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126463: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126463, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126487: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126487, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126511: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126511, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126535: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126535, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126559: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126559, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126583: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126583, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_177) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_177) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126607: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126607, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126631: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126631, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126655: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126655, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126679: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126679, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126703: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126703, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_177) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_177) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126727: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126727, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126751: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126751, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126775: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126775, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126799: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126799, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126823: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126823, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126847: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126847, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126871: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126871, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126895: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126895, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126919: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126919, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126943: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126943, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126967: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126967, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:126991: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 126991, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127015: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127015, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127039: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127039, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127063: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127063, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127087: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127087, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127111: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127111, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127135: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127135, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127159: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127159, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127183: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127183, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127207: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127207, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127231: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127231, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127255: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127255, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127279: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127279, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127303: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127303, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127327: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127327, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127351: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127351, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127375: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127375, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127399: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127399, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127423: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127423, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127447: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127447, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127471: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127471, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127495: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127495, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127519: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127519, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127543: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127543, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127567: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127567, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127591: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127591, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127615: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127615, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127639: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127639, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127663: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127663, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127687: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127687, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127711: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127711, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127735: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127735, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127759: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127759, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127783: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127783, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                             & ((((((((0U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U))) 
                                      | (1U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                     | (2U == (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                                    | (3U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                                   | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                  | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))))) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                             & ((((((((0U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U))) 
                                      | (1U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                     | (2U == (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                                    | (3U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                                   | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                  | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))))) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127807: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127807, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127831: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127831, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid source ID (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127855: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127855, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127879: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127879, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127903: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127903, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid report param (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127927: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127927, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                             & ((((((((0U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U))) 
                                      | (1U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                     | (2U == (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                                    | (3U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                                   | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                  | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))))) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                             & ((((((((0U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U))) 
                                      | (1U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                     | (2U == (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                                    | (3U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                                   | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                  | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))))) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127951: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127951, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127975: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127975, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:127999: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 127999, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128023: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128023, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128047: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128047, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid report param (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128071: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128071, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128095: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128095, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128119: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128119, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128143: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128143, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128167: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128167, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128191: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128191, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128215: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128215, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128239: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128239, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128263: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128263, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128287: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128287, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128311: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128311, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128335: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128335, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128359: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128359, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_valid) 
                     & (~ ((1U > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channels carries invalid sink ID (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_valid) 
                     & (~ ((1U > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128383: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128383, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128407: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128407, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128431: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128431, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128455: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128455, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128479: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128479, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                            == vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                            == vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128503: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128503, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128527: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128527, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128551: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128551, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128575: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128575, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                      >> 1U)) == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                      >> 1U)) == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128599: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128599, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128623: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128623, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128647: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128647, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128671: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128671, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128695: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128695, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128719: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128719, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter))) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                            == vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__address_2) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter))) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                            == vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__address_2) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128743: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128743, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128767: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128767, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight 
                                     >> (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 1U)))) 
                            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                  == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight 
                                     >> (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 1U)))) 
                            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                  == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128791: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128791, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                            == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                         >> 1U))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_42)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_42))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                            == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                         >> 1U))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_42)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_42))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128815: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128815, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                            == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                         >> 1U))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                            == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                         >> 1U))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128839: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128839, "");
    }
    __Vtemp1213[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1213[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1213[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1213[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1213[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1213[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1213[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1213[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp1214, __Vtemp1213);
    __Vtemp1217[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1217[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1217[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1217[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1217[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1217[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1217[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1217[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp1218, __Vtemp1217);
    __Vtemp1221[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1221[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1221[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1221[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1221[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1221[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1221[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1221[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp1222, __Vtemp1221);
    __Vtemp1225[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1225[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1225[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1225[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1225[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1225[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1225[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1225[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp1226, __Vtemp1225);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                               == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 1U)))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & __Vtemp1214[0U]))
                                  ? 4U : ((6U == (7U 
                                                  & __Vtemp1218[0U]))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & __Vtemp1222[0U]))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              __Vtemp1226[0U]))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp1229[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1229[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1229[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1229[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1229[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1229[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1229[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1229[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp1230, __Vtemp1229);
    __Vtemp1233[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1233[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1233[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1233[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1233[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1233[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1233[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1233[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp1234, __Vtemp1233);
    __Vtemp1237[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1237[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1237[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1237[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1237[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1237[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1237[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1237[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp1238, __Vtemp1237);
    __Vtemp1241[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1241[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1241[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1241[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1241[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1241[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1241[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1241[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp1242, __Vtemp1241);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                               == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 1U)))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & __Vtemp1230[0U]))
                                  ? 4U : ((6U == (7U 
                                                  & __Vtemp1234[0U]))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & __Vtemp1238[0U]))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              __Vtemp1242[0U]))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128863: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128863, "");
    }
    VL_SHIFTR_WWI(512,512,9, __Vtemp1243, vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes, 
                  (0x1f8U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                             << 2U)));
    __Vtemp1246[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[1U] 
                            & __Vtemp1243[1U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0U] 
                              & __Vtemp1243[0U]) >> 1U)));
    __Vtemp1246[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[2U] 
                            & __Vtemp1243[2U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[1U] 
                              & __Vtemp1243[1U]) >> 1U)));
    __Vtemp1246[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[3U] 
                            & __Vtemp1243[3U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[2U] 
                              & __Vtemp1243[2U]) >> 1U)));
    __Vtemp1246[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[4U] 
                            & __Vtemp1243[4U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[3U] 
                              & __Vtemp1243[3U]) >> 1U)));
    __Vtemp1246[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[5U] 
                            & __Vtemp1243[5U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[4U] 
                              & __Vtemp1243[4U]) >> 1U)));
    __Vtemp1246[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[6U] 
                            & __Vtemp1243[6U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[5U] 
                              & __Vtemp1243[5U]) >> 1U)));
    __Vtemp1246[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[7U] 
                            & __Vtemp1243[7U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[6U] 
                              & __Vtemp1243[6U]) >> 1U)));
    __Vtemp1246[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[8U] 
                            & __Vtemp1243[8U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[7U] 
                              & __Vtemp1243[7U]) >> 1U)));
    __Vtemp1246[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[9U] 
                            & __Vtemp1243[9U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[8U] 
                              & __Vtemp1243[8U]) >> 1U)));
    __Vtemp1246[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xaU] 
                            & __Vtemp1243[0xaU]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[9U] 
                              & __Vtemp1243[9U]) >> 1U)));
    __Vtemp1246[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xbU] 
                              & __Vtemp1243[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xaU] 
                                           & __Vtemp1243[0xaU]) 
                                          >> 1U)));
    __Vtemp1246[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xcU] 
                              & __Vtemp1243[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xbU] 
                                           & __Vtemp1243[0xbU]) 
                                          >> 1U)));
    __Vtemp1246[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xdU] 
                              & __Vtemp1243[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xcU] 
                                           & __Vtemp1243[0xcU]) 
                                          >> 1U)));
    __Vtemp1246[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xeU] 
                              & __Vtemp1243[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xdU] 
                                           & __Vtemp1243[0xdU]) 
                                          >> 1U)));
    __Vtemp1246[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xfU] 
                              & __Vtemp1243[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xeU] 
                                           & __Vtemp1243[0xeU]) 
                                          >> 1U)));
    __Vtemp1246[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xfU] 
                             & __Vtemp1243[0xfU]) >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp1247, __Vtemp1246);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                               == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 1U)))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size) 
                            == (0xffU & __Vtemp1247[0U])) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(512,512,9, __Vtemp1248, vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes, 
                  (0x1f8U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                             << 2U)));
    __Vtemp1251[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[1U] 
                            & __Vtemp1248[1U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0U] 
                              & __Vtemp1248[0U]) >> 1U)));
    __Vtemp1251[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[2U] 
                            & __Vtemp1248[2U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[1U] 
                              & __Vtemp1248[1U]) >> 1U)));
    __Vtemp1251[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[3U] 
                            & __Vtemp1248[3U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[2U] 
                              & __Vtemp1248[2U]) >> 1U)));
    __Vtemp1251[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[4U] 
                            & __Vtemp1248[4U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[3U] 
                              & __Vtemp1248[3U]) >> 1U)));
    __Vtemp1251[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[5U] 
                            & __Vtemp1248[5U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[4U] 
                              & __Vtemp1248[4U]) >> 1U)));
    __Vtemp1251[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[6U] 
                            & __Vtemp1248[6U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[5U] 
                              & __Vtemp1248[5U]) >> 1U)));
    __Vtemp1251[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[7U] 
                            & __Vtemp1248[7U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[6U] 
                              & __Vtemp1248[6U]) >> 1U)));
    __Vtemp1251[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[8U] 
                            & __Vtemp1248[8U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[7U] 
                              & __Vtemp1248[7U]) >> 1U)));
    __Vtemp1251[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[9U] 
                            & __Vtemp1248[9U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[8U] 
                              & __Vtemp1248[8U]) >> 1U)));
    __Vtemp1251[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xaU] 
                            & __Vtemp1248[0xaU]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[9U] 
                              & __Vtemp1248[9U]) >> 1U)));
    __Vtemp1251[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xbU] 
                              & __Vtemp1248[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xaU] 
                                           & __Vtemp1248[0xaU]) 
                                          >> 1U)));
    __Vtemp1251[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xcU] 
                              & __Vtemp1248[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xbU] 
                                           & __Vtemp1248[0xbU]) 
                                          >> 1U)));
    __Vtemp1251[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xdU] 
                              & __Vtemp1248[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xcU] 
                                           & __Vtemp1248[0xcU]) 
                                          >> 1U)));
    __Vtemp1251[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xeU] 
                              & __Vtemp1248[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xdU] 
                                           & __Vtemp1248[0xdU]) 
                                          >> 1U)));
    __Vtemp1251[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xfU] 
                              & __Vtemp1248[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xeU] 
                                           & __Vtemp1248[0xeU]) 
                                          >> 1U)));
    __Vtemp1251[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xfU] 
                             & __Vtemp1248[0xfU]) >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp1252, __Vtemp1251);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                               == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 1U)))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size) 
                            == (0xffU & __Vtemp1252[0U])) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128887: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128887, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid)) 
                       & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                          == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                       >> 1U)))) & 
                      (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_enq_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_enq_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid)) 
                       & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                          == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                       >> 1U)))) & 
                      (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_enq_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_enq_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128909: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128909, "");
    }
    if (VL_UNLIKELY((1U & (~ (((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_set_wo_ready 
                                != ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                     ? (1ULL << (0x3fU 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                    >> 1U)))
                                     : 0ULL)) | (~ (IData)(
                                                           (0U 
                                                            != vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_set_wo_ready)))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_set_wo_ready 
                                != ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                     ? (1ULL << (0x3fU 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                    >> 1U)))
                                     : 0ULL)) | (~ (IData)(
                                                           (0U 
                                                            != vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_set_wo_ready)))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128933: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128933, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight))) 
                                | (0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__watchdog 
                                  < vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight))) 
                                | (0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__watchdog 
                                  < vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128957: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128957, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610)) 
                     & (~ ((~ (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_1 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel re-used a source ID (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610)) 
                     & (~ ((~ (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_1 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:128981: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 128981, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_1 
                                     >> (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 1U)))) 
                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                  == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_1 
                                     >> (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 1U)))) 
                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                  == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:129005: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 129005, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                            == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                         >> 1U))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                            == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                         >> 1U))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:129029: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 129029, "");
    }
    VL_SHIFTR_WWI(512,512,9, __Vtemp1253, vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1, 
                  (0x1f8U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                             << 2U)));
    __Vtemp1256[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[1U] 
                            & __Vtemp1253[1U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0U] 
                              & __Vtemp1253[0U]) >> 1U)));
    __Vtemp1256[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[2U] 
                            & __Vtemp1253[2U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[1U] 
                              & __Vtemp1253[1U]) >> 1U)));
    __Vtemp1256[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[3U] 
                            & __Vtemp1253[3U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[2U] 
                              & __Vtemp1253[2U]) >> 1U)));
    __Vtemp1256[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[4U] 
                            & __Vtemp1253[4U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[3U] 
                              & __Vtemp1253[3U]) >> 1U)));
    __Vtemp1256[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[5U] 
                            & __Vtemp1253[5U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[4U] 
                              & __Vtemp1253[4U]) >> 1U)));
    __Vtemp1256[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[6U] 
                            & __Vtemp1253[6U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[5U] 
                              & __Vtemp1253[5U]) >> 1U)));
    __Vtemp1256[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[7U] 
                            & __Vtemp1253[7U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[6U] 
                              & __Vtemp1253[6U]) >> 1U)));
    __Vtemp1256[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[8U] 
                            & __Vtemp1253[8U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[7U] 
                              & __Vtemp1253[7U]) >> 1U)));
    __Vtemp1256[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[9U] 
                            & __Vtemp1253[9U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[8U] 
                              & __Vtemp1253[8U]) >> 1U)));
    __Vtemp1256[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xaU] 
                            & __Vtemp1253[0xaU]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[9U] 
                              & __Vtemp1253[9U]) >> 1U)));
    __Vtemp1256[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xbU] 
                              & __Vtemp1253[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xaU] 
                                           & __Vtemp1253[0xaU]) 
                                          >> 1U)));
    __Vtemp1256[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xcU] 
                              & __Vtemp1253[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xbU] 
                                           & __Vtemp1253[0xbU]) 
                                          >> 1U)));
    __Vtemp1256[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xdU] 
                              & __Vtemp1253[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xcU] 
                                           & __Vtemp1253[0xcU]) 
                                          >> 1U)));
    __Vtemp1256[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xeU] 
                              & __Vtemp1253[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xdU] 
                                           & __Vtemp1253[0xdU]) 
                                          >> 1U)));
    __Vtemp1256[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xfU] 
                              & __Vtemp1253[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xeU] 
                                           & __Vtemp1253[0xeU]) 
                                          >> 1U)));
    __Vtemp1256[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xfU] 
                             & __Vtemp1253[0xfU]) >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp1257, __Vtemp1256);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610)) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                               == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 1U)))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size) 
                            == (0xffU & __Vtemp1257[0U])) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(512,512,9, __Vtemp1258, vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1, 
                  (0x1f8U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                             << 2U)));
    __Vtemp1261[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[1U] 
                            & __Vtemp1258[1U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0U] 
                              & __Vtemp1258[0U]) >> 1U)));
    __Vtemp1261[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[2U] 
                            & __Vtemp1258[2U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[1U] 
                              & __Vtemp1258[1U]) >> 1U)));
    __Vtemp1261[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[3U] 
                            & __Vtemp1258[3U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[2U] 
                              & __Vtemp1258[2U]) >> 1U)));
    __Vtemp1261[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[4U] 
                            & __Vtemp1258[4U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[3U] 
                              & __Vtemp1258[3U]) >> 1U)));
    __Vtemp1261[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[5U] 
                            & __Vtemp1258[5U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[4U] 
                              & __Vtemp1258[4U]) >> 1U)));
    __Vtemp1261[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[6U] 
                            & __Vtemp1258[6U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[5U] 
                              & __Vtemp1258[5U]) >> 1U)));
    __Vtemp1261[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[7U] 
                            & __Vtemp1258[7U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[6U] 
                              & __Vtemp1258[6U]) >> 1U)));
    __Vtemp1261[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[8U] 
                            & __Vtemp1258[8U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[7U] 
                              & __Vtemp1258[7U]) >> 1U)));
    __Vtemp1261[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[9U] 
                            & __Vtemp1258[9U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[8U] 
                              & __Vtemp1258[8U]) >> 1U)));
    __Vtemp1261[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xaU] 
                            & __Vtemp1258[0xaU]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[9U] 
                              & __Vtemp1258[9U]) >> 1U)));
    __Vtemp1261[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xbU] 
                              & __Vtemp1258[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xaU] 
                                           & __Vtemp1258[0xaU]) 
                                          >> 1U)));
    __Vtemp1261[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xcU] 
                              & __Vtemp1258[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xbU] 
                                           & __Vtemp1258[0xbU]) 
                                          >> 1U)));
    __Vtemp1261[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xdU] 
                              & __Vtemp1258[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xcU] 
                                           & __Vtemp1258[0xcU]) 
                                          >> 1U)));
    __Vtemp1261[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xeU] 
                              & __Vtemp1258[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xdU] 
                                           & __Vtemp1258[0xdU]) 
                                          >> 1U)));
    __Vtemp1261[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xfU] 
                              & __Vtemp1258[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xeU] 
                                           & __Vtemp1258[0xeU]) 
                                          >> 1U)));
    __Vtemp1261[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xfU] 
                             & __Vtemp1258[0xfU]) >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp1262, __Vtemp1261);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610)) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                               == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 1U)))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size) 
                            == (0xffU & __Vtemp1262[0U])) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:129053: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 129053, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid)) 
                       & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                          == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                       >> 1U)))) & 
                      (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_enq_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid)) 
                       & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                          == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                       >> 1U)))) & 
                      (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_enq_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:129075: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 129075, "");
    }
    if (VL_UNLIKELY(((0U != ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                               & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610))
                              ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source))
                              : 0ULL)) & (~ ((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610))
                                                ? (1ULL 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source))
                                                : 0ULL) 
                                              != ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                                                    & (0U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                                   & (6U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                                   ? 
                                                  (1ULL 
                                                   << 
                                                   (0x3fU 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                       >> 1U)))
                                                   : 0ULL)) 
                                             | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((0U != ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                               & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610))
                              ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source))
                              : 0ULL)) & (~ ((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610))
                                                ? (1ULL 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source))
                                                : 0ULL) 
                                              != ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                                                    & (0U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                                   & (6U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                                   ? 
                                                  (1ULL 
                                                   << 
                                                   (0x3fU 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                       >> 1U)))
                                                   : 0ULL)) 
                                             | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:129099: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 129099, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_1))) 
                                | (0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__watchdog_1 
                                  < vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_1))) 
                                | (0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__watchdog_1 
                                  < vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:129123: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 129123, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_3))) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2681)) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_3))) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2681)) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:129147: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 129147, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_valid)) 
                     & (~ (((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_84) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_2))) 
                            >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:170:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_valid)) 
                     & (~ (((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_84) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_2))) 
                            >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:129171: Assertion failed in %NysyxSoCFull.fpga.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 129171, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:130362: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 130362, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:130386: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 130386, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:130410: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 130410, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:130434: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 130434, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:130458: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 130458, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:130482: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 130482, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:130506: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 130506, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:130530: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 130530, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:130554: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 130554, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:130578: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 130578, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:130602: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 130602, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:130626: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 130626, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:130650: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 130650, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:130674: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 130674, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:130698: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 130698, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_177) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_177) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:130722: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 130722, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_294)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_294)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:130746: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 130746, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:130770: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 130770, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:130794: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 130794, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:130818: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 130818, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:130842: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 130842, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:130866: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 130866, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:130890: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 130890, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:130914: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 130914, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:130938: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 130938, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:130962: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 130962, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:130986: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 130986, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131010: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131010, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131034: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131034, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131058: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131058, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131082: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131082, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_177) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_177) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131106: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131106, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131130: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131130, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131154: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131154, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131178: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131178, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131202: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131202, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_177) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_177) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131226: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131226, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131250: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131250, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131274: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131274, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131298: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131298, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131322: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131322, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131346: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131346, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131370: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131370, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131394: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131394, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131418: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131418, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131442: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131442, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131466: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131466, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131490: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131490, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131514: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131514, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131538: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131538, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131562: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131562, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131586: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131586, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131610: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131610, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131634: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131634, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131658: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131658, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131682: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131682, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131706: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131706, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131730: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131730, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131754: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131754, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131778: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131778, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131802: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131802, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131826: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131826, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131850: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131850, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131874: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131874, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131898: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131898, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131922: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131922, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131946: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131946, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131970: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131970, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:131994: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 131994, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132018: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132018, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132042: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132042, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132066: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132066, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132090: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132090, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132114: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132114, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132138: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132138, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132162: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132162, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132186: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132186, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132210: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132210, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132234: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132234, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132258: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132258, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132282: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132282, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                             & ((((((((0U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U))) 
                                      | (1U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                     | (2U == (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                                    | (3U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                                   | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                  | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))))) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                             & ((((((((0U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U))) 
                                      | (1U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                     | (2U == (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                                    | (3U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                                   | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                  | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))))) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132306: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132306, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132330: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132330, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid source ID (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132354: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132354, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132378: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132378, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132402: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132402, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid report param (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132426: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132426, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                             & ((((((((0U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U))) 
                                      | (1U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                     | (2U == (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                                    | (3U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                                   | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                  | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))))) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                             & ((((((((0U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U))) 
                                      | (1U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                     | (2U == (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                                    | (3U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                                   | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                  | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))))) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132450: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132450, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132474: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132474, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132498: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132498, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132522: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132522, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132546: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132546, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid report param (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132570: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132570, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132594: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132594, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132618: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132618, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132642: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132642, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132666: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132666, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132690: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132690, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132714: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132714, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132738: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132738, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132762: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132762, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132786: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132786, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132810: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132810, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132834: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132834, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132858: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132858, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_valid) 
                     & (~ ((1U > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channels carries invalid sink ID (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_valid) 
                     & (~ ((1U > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132882: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132882, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132906: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132906, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132930: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132930, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132954: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132954, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:132978: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 132978, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                            == vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                            == vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133002: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133002, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133026: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133026, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133050: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133050, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133074: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133074, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133098: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133098, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133122: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133122, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133146: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133146, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133170: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133170, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133194: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133194, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133218: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133218, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                            == vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__address_2) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                            == vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__address_2) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133242: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133242, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133266: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133266, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight 
                                     >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))) 
                            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight 
                                     >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))) 
                            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133290: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133290, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode) 
                             == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___GEN_42)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___GEN_42))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode) 
                             == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___GEN_42)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___GEN_42))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133314: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133314, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133338: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133338, "");
    }
    __Vtemp1265[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1265[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1265[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1265[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1265[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1265[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1265[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1265[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp1266, __Vtemp1265);
    __Vtemp1269[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1269[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1269[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1269[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1269[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1269[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1269[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1269[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp1270, __Vtemp1269);
    __Vtemp1273[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1273[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1273[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1273[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1273[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1273[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1273[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1273[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp1274, __Vtemp1273);
    __Vtemp1277[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1277[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1277[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1277[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1277[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1277[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1277[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1277[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp1278, __Vtemp1277);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode) 
                             == ((7U == (7U & __Vtemp1266[0U]))
                                  ? 4U : ((6U == (7U 
                                                  & __Vtemp1270[0U]))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode) 
                               == ((7U == (7U & __Vtemp1274[0U]))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              __Vtemp1278[0U]))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp1281[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1281[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1281[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1281[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1281[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1281[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1281[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1281[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp1282, __Vtemp1281);
    __Vtemp1285[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1285[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1285[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1285[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1285[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1285[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1285[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1285[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp1286, __Vtemp1285);
    __Vtemp1289[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1289[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1289[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1289[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1289[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1289[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1289[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1289[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp1290, __Vtemp1289);
    __Vtemp1293[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1293[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1293[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1293[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1293[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1293[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1293[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1293[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp1294, __Vtemp1293);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode) 
                             == ((7U == (7U & __Vtemp1282[0U]))
                                  ? 4U : ((6U == (7U 
                                                  & __Vtemp1286[0U]))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode) 
                               == ((7U == (7U & __Vtemp1290[0U]))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              __Vtemp1294[0U]))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133362: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133362, "");
    }
    VL_SHIFTR_WWI(512,512,9, __Vtemp1295, vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                   << 3U));
    __Vtemp1298[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[1U] 
                            & __Vtemp1295[1U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0U] 
                              & __Vtemp1295[0U]) >> 1U)));
    __Vtemp1298[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[2U] 
                            & __Vtemp1295[2U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[1U] 
                              & __Vtemp1295[1U]) >> 1U)));
    __Vtemp1298[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[3U] 
                            & __Vtemp1295[3U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[2U] 
                              & __Vtemp1295[2U]) >> 1U)));
    __Vtemp1298[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[4U] 
                            & __Vtemp1295[4U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[3U] 
                              & __Vtemp1295[3U]) >> 1U)));
    __Vtemp1298[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[5U] 
                            & __Vtemp1295[5U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[4U] 
                              & __Vtemp1295[4U]) >> 1U)));
    __Vtemp1298[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[6U] 
                            & __Vtemp1295[6U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[5U] 
                              & __Vtemp1295[5U]) >> 1U)));
    __Vtemp1298[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[7U] 
                            & __Vtemp1295[7U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[6U] 
                              & __Vtemp1295[6U]) >> 1U)));
    __Vtemp1298[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[8U] 
                            & __Vtemp1295[8U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[7U] 
                              & __Vtemp1295[7U]) >> 1U)));
    __Vtemp1298[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[9U] 
                            & __Vtemp1295[9U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[8U] 
                              & __Vtemp1295[8U]) >> 1U)));
    __Vtemp1298[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xaU] 
                            & __Vtemp1295[0xaU]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[9U] 
                              & __Vtemp1295[9U]) >> 1U)));
    __Vtemp1298[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xbU] 
                              & __Vtemp1295[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xaU] 
                                           & __Vtemp1295[0xaU]) 
                                          >> 1U)));
    __Vtemp1298[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xcU] 
                              & __Vtemp1295[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xbU] 
                                           & __Vtemp1295[0xbU]) 
                                          >> 1U)));
    __Vtemp1298[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xdU] 
                              & __Vtemp1295[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xcU] 
                                           & __Vtemp1295[0xcU]) 
                                          >> 1U)));
    __Vtemp1298[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xeU] 
                              & __Vtemp1295[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xdU] 
                                           & __Vtemp1295[0xdU]) 
                                          >> 1U)));
    __Vtemp1298[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xfU] 
                              & __Vtemp1295[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xeU] 
                                           & __Vtemp1295[0xeU]) 
                                          >> 1U)));
    __Vtemp1298[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xfU] 
                             & __Vtemp1295[0xfU]) >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp1299, __Vtemp1298);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size) 
                            == (0xffU & __Vtemp1299[0U])) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(512,512,9, __Vtemp1300, vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                   << 3U));
    __Vtemp1303[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[1U] 
                            & __Vtemp1300[1U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0U] 
                              & __Vtemp1300[0U]) >> 1U)));
    __Vtemp1303[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[2U] 
                            & __Vtemp1300[2U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[1U] 
                              & __Vtemp1300[1U]) >> 1U)));
    __Vtemp1303[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[3U] 
                            & __Vtemp1300[3U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[2U] 
                              & __Vtemp1300[2U]) >> 1U)));
    __Vtemp1303[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[4U] 
                            & __Vtemp1300[4U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[3U] 
                              & __Vtemp1300[3U]) >> 1U)));
    __Vtemp1303[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[5U] 
                            & __Vtemp1300[5U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[4U] 
                              & __Vtemp1300[4U]) >> 1U)));
    __Vtemp1303[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[6U] 
                            & __Vtemp1300[6U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[5U] 
                              & __Vtemp1300[5U]) >> 1U)));
    __Vtemp1303[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[7U] 
                            & __Vtemp1300[7U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[6U] 
                              & __Vtemp1300[6U]) >> 1U)));
    __Vtemp1303[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[8U] 
                            & __Vtemp1300[8U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[7U] 
                              & __Vtemp1300[7U]) >> 1U)));
    __Vtemp1303[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[9U] 
                            & __Vtemp1300[9U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[8U] 
                              & __Vtemp1300[8U]) >> 1U)));
    __Vtemp1303[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xaU] 
                            & __Vtemp1300[0xaU]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[9U] 
                              & __Vtemp1300[9U]) >> 1U)));
    __Vtemp1303[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xbU] 
                              & __Vtemp1300[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xaU] 
                                           & __Vtemp1300[0xaU]) 
                                          >> 1U)));
    __Vtemp1303[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xcU] 
                              & __Vtemp1300[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xbU] 
                                           & __Vtemp1300[0xbU]) 
                                          >> 1U)));
    __Vtemp1303[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xdU] 
                              & __Vtemp1300[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xcU] 
                                           & __Vtemp1300[0xcU]) 
                                          >> 1U)));
    __Vtemp1303[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xeU] 
                              & __Vtemp1300[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xdU] 
                                           & __Vtemp1300[0xdU]) 
                                          >> 1U)));
    __Vtemp1303[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xfU] 
                              & __Vtemp1300[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xeU] 
                                           & __Vtemp1300[0xeU]) 
                                          >> 1U)));
    __Vtemp1303[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xfU] 
                             & __Vtemp1300[0xfU]) >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp1304, __Vtemp1303);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size) 
                            == (0xffU & __Vtemp1304[0U])) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133386: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133386, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid)) 
                       & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))) 
                      & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid)) 
                       & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))) 
                      & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133408: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133408, "");
    }
    if (VL_UNLIKELY((1U & (~ (((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_set_wo_ready 
                                != ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))
                                     : 0ULL)) | (~ (IData)(
                                                           (0U 
                                                            != vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_set_wo_ready)))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_set_wo_ready 
                                != ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))
                                     : 0ULL)) | (~ (IData)(
                                                           (0U 
                                                            != vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_set_wo_ready)))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133432: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133432, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight))) 
                                | (0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__watchdog 
                                  < vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight))) 
                                | (0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__watchdog 
                                  < vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133456: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133456, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610)) 
                     & (~ ((~ (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_1 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel re-used a source ID (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
}
