// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull_TLBusBypass.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__3(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__3\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp7;
    VlWide<5>/*159:0*/ __Vtemp11;
    VlWide<4>/*127:0*/ __Vtemp14;
    VlWide<4>/*127:0*/ __Vtemp15;
    VlWide<4>/*127:0*/ __Vtemp18;
    VlWide<4>/*127:0*/ __Vtemp19;
    VlWide<5>/*159:0*/ __Vtemp23;
    VlWide<5>/*159:0*/ __Vtemp27;
    VlWide<4>/*127:0*/ __Vtemp30;
    VlWide<4>/*127:0*/ __Vtemp31;
    VlWide<4>/*127:0*/ __Vtemp34;
    VlWide<4>/*127:0*/ __Vtemp35;
    VlWide<5>/*159:0*/ __Vtemp39;
    VlWide<5>/*159:0*/ __Vtemp43;
    VlWide<4>/*127:0*/ __Vtemp46;
    VlWide<4>/*127:0*/ __Vtemp47;
    VlWide<4>/*127:0*/ __Vtemp50;
    VlWide<4>/*127:0*/ __Vtemp51;
    VlWide<5>/*159:0*/ __Vtemp55;
    VlWide<5>/*159:0*/ __Vtemp59;
    VlWide<4>/*127:0*/ __Vtemp62;
    VlWide<4>/*127:0*/ __Vtemp63;
    VlWide<4>/*127:0*/ __Vtemp66;
    VlWide<4>/*127:0*/ __Vtemp67;
    VlWide<5>/*159:0*/ __Vtemp71;
    VlWide<5>/*159:0*/ __Vtemp75;
    VlWide<4>/*127:0*/ __Vtemp78;
    VlWide<4>/*127:0*/ __Vtemp79;
    VlWide<4>/*127:0*/ __Vtemp82;
    VlWide<4>/*127:0*/ __Vtemp83;
    VlWide<5>/*159:0*/ __Vtemp87;
    VlWide<5>/*159:0*/ __Vtemp91;
    VlWide<4>/*127:0*/ __Vtemp94;
    VlWide<4>/*127:0*/ __Vtemp95;
    VlWide<4>/*127:0*/ __Vtemp98;
    VlWide<4>/*127:0*/ __Vtemp99;
    VlWide<5>/*159:0*/ __Vtemp103;
    VlWide<5>/*159:0*/ __Vtemp107;
    VlWide<4>/*127:0*/ __Vtemp110;
    VlWide<4>/*127:0*/ __Vtemp111;
    VlWide<4>/*127:0*/ __Vtemp114;
    VlWide<4>/*127:0*/ __Vtemp115;
    VlWide<5>/*159:0*/ __Vtemp119;
    VlWide<5>/*159:0*/ __Vtemp123;
    VlWide<4>/*127:0*/ __Vtemp126;
    VlWide<4>/*127:0*/ __Vtemp127;
    VlWide<4>/*127:0*/ __Vtemp130;
    VlWide<4>/*127:0*/ __Vtemp131;
    VlWide<4>/*127:0*/ __Vtemp133;
    VlWide<4>/*127:0*/ __Vtemp134;
    VlWide<4>/*127:0*/ __Vtemp137;
    VlWide<4>/*127:0*/ __Vtemp140;
    VlWide<4>/*127:0*/ __Vtemp141;
    VlWide<4>/*127:0*/ __Vtemp144;
    VlWide<4>/*127:0*/ __Vtemp147;
    VlWide<4>/*127:0*/ __Vtemp148;
    VlWide<4>/*127:0*/ __Vtemp151;
    VlWide<4>/*127:0*/ __Vtemp154;
    VlWide<4>/*127:0*/ __Vtemp155;
    VlWide<4>/*127:0*/ __Vtemp158;
    VlWide<4>/*127:0*/ __Vtemp161;
    VlWide<4>/*127:0*/ __Vtemp162;
    VlWide<4>/*127:0*/ __Vtemp167;
    // Body
    if (VL_UNLIKELY((1U & (~ (((IData)(vlSelf->__PVT__error__DOT__idle) 
                               | (0U == (IData)(vlSelf->__PVT__error__DOT__counter))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Error.scala:49 assert (idle || da_first) // we only send Grant, never GrantData => simplified flow control below\n");
    }
    if (VL_UNLIKELY((1U & (~ (((IData)(vlSelf->__PVT__error__DOT__idle) 
                               | (0U == (IData)(vlSelf->__PVT__error__DOT__counter))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15558: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15558, "");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15582: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15582, "");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15606: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15606, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp7, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp7[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp11, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp11[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13522: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13522, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13546: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13546, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13570: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13570, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13594: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13594, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp14, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp15, (0xfffU & (~ (0x7ffffffU 
                                                  & ((IData)(0xfffU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp14[0U] 
                                      & __Vtemp15[0U]) 
                                     | (__Vtemp14[1U] 
                                        & __Vtemp15[1U])) 
                                    | (__Vtemp14[2U] 
                                       & __Vtemp15[2U])) 
                                   | (__Vtemp14[3U] 
                                      & __Vtemp15[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp18, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp19, (0xfffU & (~ (0x7ffffffU 
                                                  & ((IData)(0xfffU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp18[0U] 
                                      & __Vtemp19[0U]) 
                                     | (__Vtemp18[1U] 
                                        & __Vtemp19[1U])) 
                                    | (__Vtemp18[2U] 
                                       & __Vtemp19[2U])) 
                                   | (__Vtemp18[3U] 
                                      & __Vtemp19[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13618: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13618, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13642: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13642, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp23, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp23[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp27, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp27[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13666: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13666, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13690: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13690, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13714: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13714, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13738: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13738, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp30, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp31, (0xfffU & (~ (0x7ffffffU 
                                                  & ((IData)(0xfffU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp30[0U] 
                                      & __Vtemp31[0U]) 
                                     | (__Vtemp30[1U] 
                                        & __Vtemp31[1U])) 
                                    | (__Vtemp30[2U] 
                                       & __Vtemp31[2U])) 
                                   | (__Vtemp30[3U] 
                                      & __Vtemp31[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp34, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp35, (0xfffU & (~ (0x7ffffffU 
                                                  & ((IData)(0xfffU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp34[0U] 
                                      & __Vtemp35[0U]) 
                                     | (__Vtemp34[1U] 
                                        & __Vtemp35[1U])) 
                                    | (__Vtemp34[2U] 
                                       & __Vtemp35[2U])) 
                                   | (__Vtemp34[3U] 
                                      & __Vtemp35[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13762: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13762, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13786: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13786, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13810: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13810, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13834: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13834, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp39, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (1U & __Vtemp39[4U])) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp43, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (1U & __Vtemp43[4U])) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13858: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13858, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13882: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13882, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp46, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp47, (0xfffU & (~ (0x7ffffffU 
                                                  & ((IData)(0xfffU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp46[0U] 
                                      & __Vtemp47[0U]) 
                                     | (__Vtemp46[1U] 
                                        & __Vtemp47[1U])) 
                                    | (__Vtemp46[2U] 
                                       & __Vtemp47[2U])) 
                                   | (__Vtemp46[3U] 
                                      & __Vtemp47[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp50, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp51, (0xfffU & (~ (0x7ffffffU 
                                                  & ((IData)(0xfffU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp50[0U] 
                                      & __Vtemp51[0U]) 
                                     | (__Vtemp50[1U] 
                                        & __Vtemp51[1U])) 
                                    | (__Vtemp50[2U] 
                                       & __Vtemp51[2U])) 
                                   | (__Vtemp50[3U] 
                                      & __Vtemp51[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13906: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13906, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13930: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13930, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp55, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp55[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp59, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp59[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13954: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13954, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13978: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13978, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp62, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp63, (0xfffU & (~ (0x7ffffffU 
                                                  & ((IData)(0xfffU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp62[0U] 
                                      & __Vtemp63[0U]) 
                                     | (__Vtemp62[1U] 
                                        & __Vtemp63[1U])) 
                                    | (__Vtemp62[2U] 
                                       & __Vtemp63[2U])) 
                                   | (__Vtemp62[3U] 
                                      & __Vtemp63[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp66, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp67, (0xfffU & (~ (0x7ffffffU 
                                                  & ((IData)(0xfffU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp66[0U] 
                                      & __Vtemp67[0U]) 
                                     | (__Vtemp66[1U] 
                                        & __Vtemp67[1U])) 
                                    | (__Vtemp66[2U] 
                                       & __Vtemp67[2U])) 
                                   | (__Vtemp66[3U] 
                                      & __Vtemp67[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14002: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14002, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14026: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14026, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp71, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp71[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp75, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp75[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14050: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14050, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14074: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14074, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp78, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp79, (0xfffU & (~ (0x7ffffffU 
                                                  & ((IData)(0xfffU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp78[0U] 
                                      & __Vtemp79[0U]) 
                                     | (__Vtemp78[1U] 
                                        & __Vtemp79[1U])) 
                                    | (__Vtemp78[2U] 
                                       & __Vtemp79[2U])) 
                                   | (__Vtemp78[3U] 
                                      & __Vtemp79[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp82, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp83, (0xfffU & (~ (0x7ffffffU 
                                                  & ((IData)(0xfffU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp82[0U] 
                                      & __Vtemp83[0U]) 
                                     | (__Vtemp82[1U] 
                                        & __Vtemp83[1U])) 
                                    | (__Vtemp82[2U] 
                                       & __Vtemp83[2U])) 
                                   | (__Vtemp82[3U] 
                                      & __Vtemp83[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14098: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14098, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14122: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14122, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp87, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & ((4U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (1U & __Vtemp87[4U])))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp91, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & ((4U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (1U & __Vtemp91[4U])))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14146: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14146, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14170: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14170, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp94, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp95, (0xfffU & (~ (0x7ffffffU 
                                                  & ((IData)(0xfffU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp94[0U] 
                                      & __Vtemp95[0U]) 
                                     | (__Vtemp94[1U] 
                                        & __Vtemp95[1U])) 
                                    | (__Vtemp94[2U] 
                                       & __Vtemp95[2U])) 
                                   | (__Vtemp94[3U] 
                                      & __Vtemp95[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp98, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp99, (0xfffU & (~ (0x7ffffffU 
                                                  & ((IData)(0xfffU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp98[0U] 
                                      & __Vtemp99[0U]) 
                                     | (__Vtemp98[1U] 
                                        & __Vtemp99[1U])) 
                                    | (__Vtemp98[2U] 
                                       & __Vtemp99[2U])) 
                                   | (__Vtemp98[3U] 
                                      & __Vtemp99[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14194: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14194, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14218: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14218, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp103, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & ((4U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (1U & __Vtemp103[4U])))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp107, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & ((4U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (1U & __Vtemp107[4U])))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14242: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14242, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14266: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14266, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp110, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp111, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp110[0U] 
                                      & __Vtemp111[0U]) 
                                     | (__Vtemp110[1U] 
                                        & __Vtemp111[1U])) 
                                    | (__Vtemp110[2U] 
                                       & __Vtemp111[2U])) 
                                   | (__Vtemp110[3U] 
                                      & __Vtemp111[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp114, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp115, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp114[0U] 
                                      & __Vtemp115[0U]) 
                                     | (__Vtemp114[1U] 
                                        & __Vtemp115[1U])) 
                                    | (__Vtemp114[2U] 
                                       & __Vtemp115[2U])) 
                                   | (__Vtemp114[3U] 
                                      & __Vtemp115[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14290: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14290, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14314: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14314, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp119, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp119[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp123, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp123[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14338: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14338, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14362: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14362, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp126, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp127, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp126[0U] 
                                      & __Vtemp127[0U]) 
                                     | (__Vtemp126[1U] 
                                        & __Vtemp127[1U])) 
                                    | (__Vtemp126[2U] 
                                       & __Vtemp127[2U])) 
                                   | (__Vtemp126[3U] 
                                      & __Vtemp127[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp130, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp131, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp130[0U] 
                                      & __Vtemp131[0U]) 
                                     | (__Vtemp130[1U] 
                                        & __Vtemp131[1U])) 
                                    | (__Vtemp130[2U] 
                                       & __Vtemp131[2U])) 
                                   | (__Vtemp130[3U] 
                                      & __Vtemp131[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14386: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14386, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14410: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14410, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14434: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14434, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14458: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14458, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14482: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14482, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14506: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14506, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14530: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14530, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14554: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14554, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14578: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14578, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14602: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14602, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14626: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14626, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14650: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14650, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14674: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14674, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14698: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14698, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14722: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14722, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14746: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14746, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14770: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14770, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14794: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14794, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14818: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14818, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14842: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14842, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14866: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14866, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14890: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14890, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp133, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((0U == ((((__Vtemp133[0U] 
                                      ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[0U]) 
                                     | (__Vtemp133[1U] 
                                        ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[1U])) 
                                    | (__Vtemp133[2U] 
                                       ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[2U])) 
                                   | (__Vtemp133[3U] 
                                      ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp134, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((0U == ((((__Vtemp134[0U] 
                                      ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[0U]) 
                                     | (__Vtemp134[1U] 
                                        ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[1U])) 
                                    | (__Vtemp134[2U] 
                                       ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[2U])) 
                                   | (__Vtemp134[3U] 
                                      ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14914: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14914, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14938: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14938, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14962: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14962, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14986: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14986, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15010: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15010, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15034: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15034, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15058: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15058, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15082: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15082, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15106: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15106, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15130: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15130, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp137, vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp140[0U] = (0x7fU & (__Vtemp137[0U] >> 1U));
    __Vtemp140[1U] = 0U;
    __Vtemp140[2U] = 0U;
    __Vtemp140[3U] = 0U;
    VL_EXTEND_WW(128,127, __Vtemp141, __Vtemp140);
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & __Vtemp141[0U])) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp144, vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp147[0U] = (0x7fU & (__Vtemp144[0U] >> 1U));
    __Vtemp147[1U] = 0U;
    __Vtemp147[2U] = 0U;
    __Vtemp147[3U] = 0U;
    VL_EXTEND_WW(128,127, __Vtemp148, __Vtemp147);
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & __Vtemp148[0U])) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15154: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15154, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSelf->__PVT__bar_auto_out_0_a_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))) 
                      & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__bar_auto_out_0_d_ready)) 
                            | (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSelf->__PVT__bar_auto_out_0_a_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))) 
                      & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__bar_auto_out_0_d_ready)) 
                            | (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15176: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15176, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__error__DOT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__error__DOT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15200: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15200, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15224: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15224, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp151, vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp154[0U] = (0x7fU & (__Vtemp151[0U] >> 1U));
    __Vtemp154[1U] = 0U;
    __Vtemp154[2U] = 0U;
    __Vtemp154[3U] = 0U;
    VL_EXTEND_WW(128,127, __Vtemp155, __Vtemp154);
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & __Vtemp155[0U])) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp158, vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp161[0U] = (0x7fU & (__Vtemp158[0U] >> 1U));
    __Vtemp161[1U] = 0U;
    __Vtemp161[2U] = 0U;
    __Vtemp161[3U] = 0U;
    VL_EXTEND_WW(128,127, __Vtemp162, __Vtemp161);
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & __Vtemp162[0U])) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15248: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15248, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15272: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15272, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10725: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10725, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10749: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10749, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10773: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10773, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10797: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10797, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10821: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10821, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10845: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10845, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10869: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10869, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10893: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10893, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10917: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10917, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10941: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10941, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10965: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10965, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10989: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10989, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11013: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11013, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11037: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11037, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11061: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11061, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11085: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11085, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11109: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11109, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11133: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11133, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11157: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11157, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11181: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11181, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11205: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11205, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11229: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11229, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11253: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11253, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11277: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11277, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11301: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11301, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11325: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11325, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11349: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11349, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11373: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11373, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11397: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11397, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11421: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11421, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11445: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11445, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11469: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11469, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11493: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11493, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11517: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11517, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11541: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11541, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11565: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11565, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11589: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11589, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11613: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11613, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11637: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11637, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11661: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11661, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11685: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11685, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11709: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11709, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11733: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11733, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11757: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11757, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11781: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11781, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11805: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11805, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11829: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11829, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11853: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11853, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11877: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11877, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11901: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11901, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11925: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11925, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11949: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11949, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11973: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11973, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11997: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11997, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12021: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12021, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12045: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12045, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12069: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12069, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12093: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12093, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12117: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12117, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12141: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12141, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12165: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12165, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12189: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12189, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12213: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12213, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12237: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12237, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12261: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12261, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12285: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12285, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                            == vlSelf->__PVT__bar__DOT__monitor__DOT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                            == vlSelf->__PVT__bar__DOT__monitor__DOT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12309: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12309, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12333: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12333, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12357: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12357, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12381: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12381, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12405: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12405, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_sink) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_sink) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12429: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12429, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12453: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12453, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12477: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12477, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12501: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12501, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12525: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12525, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12549: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12549, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12573: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12573, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes 
                                                     >> 
                                                     ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes 
                                                     >> 
                                                     ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12597: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12597, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))) 
                      & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_d_ready)) 
                            | (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))) 
                      & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_d_ready)) 
                            | (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12619: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12619, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12643: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12643, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12667: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12667, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
                                                     >> 
                                                     ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
                                                     >> 
                                                     ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12691: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12691, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12715: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12715, "");
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__flight = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_opcodes = 0ULL;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_opcodes = 0ULL;
    } else {
        vlSelf->__PVT__bar__DOT__flight = vlSelf->__PVT__bar__DOT__next_flight;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_opcodes 
            = vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_opcodes_T_2;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_opcodes 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_opcodes_T_2;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__counter_3 = 0U;
    } else if (vlSelf->__PVT__bar__DOT___T_3) {
        vlSelf->__PVT__bar__DOT__counter_3 = (0xfU 
                                              & ((IData)(vlSelf->__PVT__bar__DOT__d_first)
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__PVT__bar__DOT__in_d_bits_opcode))
                                                   ? 
                                                  (~ 
                                                   (0x7ffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlSelf->__PVT__bar__DOT__in_d_bits_size)) 
                                                       >> 2U)))
                                                   : 0U)
                                                  : (IData)(vlSelf->__PVT__bar__DOT__counter1_3)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__state_1 = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__error__DOT__beatsLeft))) {
        vlSelf->__PVT__error__DOT__state_1 = vlSelf->__PVT__error__DOT__da_valid;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__counter = 0U;
    } else if (vlSelf->__PVT__bar__DOT___T) {
        vlSelf->__PVT__bar__DOT__counter = (0xfU & 
                                            ((IData)(vlSelf->__PVT__bar__DOT__a_first)
                                              ? ((4U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                  ? 0U
                                                  : 
                                                 (~ 
                                                  (0x7ffU 
                                                   & (((IData)(0x3fU) 
                                                       << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                      >> 2U))))
                                              : (IData)(vlSelf->__PVT__bar__DOT__counter1)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__stall_counter = 0U;
    } else if (vlSelf->__PVT__bar__DOT___T) {
        vlSelf->__PVT__bar__DOT__stall_counter = (0xfU 
                                                  & ((IData)(vlSelf->__PVT__bar__DOT__stall_first)
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
                                                      : (IData)(vlSelf->__PVT__bar__DOT__stall_counter1)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__a_last_counter = 0U;
    } else if ((((((IData)(vlSelf->__PVT__error__DOT__out_1_ready) 
                   & (IData)(vlSelf->__PVT__error__DOT__da_last)) 
                  & (IData)(vlSelf->__PVT__error__DOT__idle)) 
                 | (~ (IData)(vlSelf->__PVT__error__DOT__a_last))) 
                & (IData)(vlSelf->__PVT__bar_auto_out_0_a_valid))) {
        vlSelf->__PVT__error__DOT__a_last_counter = 
            (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__a_last_first)
                        ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x1ffffffU & 
                                       (((IData)(0xfffU) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                        >> 2U)))) : (IData)(vlSelf->__PVT__error__DOT__a_last_counter1)));
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__in_reset) 
         | (0U == (IData)(vlSelf->__PVT__bar__DOT__next_flight)))) {
        vlSelf->__PVT__bar__DOT__bypass_reg = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass_io_bypass;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__counter = 0U;
    } else if (vlSelf->__PVT__error__DOT___T) {
        vlSelf->__PVT__error__DOT__counter = (0x3ffU 
                                              & ((IData)(vlSelf->__PVT__error__DOT__da_first)
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))
                                                   ? 
                                                  (~ 
                                                   (0x1ffffffU 
                                                    & (((IData)(0xfffU) 
                                                        << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                       >> 2U)))
                                                   : 0U)
                                                  : (IData)(vlSelf->__PVT__error__DOT__counter1)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1 = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[1U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[2U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[3U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_T_5;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[0U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[1U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[2U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[3U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_T_2;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[0U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[0U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[1U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[1U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[2U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[2U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[3U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[3U];
        vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1 
            = ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T)
                ? 0U : vlSelf->__PVT__error__DOT__monitor__DOT___watchdog_T_3);
        vlSelf->__PVT__error__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->__PVT__error__DOT__monitor__DOT___watchdog_T_1);
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2 
            = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))
                              ? (~ (0x1ffffffU & (((IData)(0xfffU) 
                                                   << (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                                                  >> 2U)))
                              : 0U) : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1 
            = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))
                              ? (~ (0x1ffffffU & (((IData)(0xfffU) 
                                                   << (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                                                  >> 2U)))
                              : 0U) : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__denied 
            = vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied;
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__size_1 
            = vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size;
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__opcode_1 
            = vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode;
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__source_1 
            = vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) {
        vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1 
            = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_1)
                          ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                              ? 0U : (~ (0x1ffffffU 
                                         & (((IData)(0xfffU) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                            >> 2U))))
                          : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__size 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size;
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__opcode 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode;
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__source 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source;
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter)))) {
        VL_EXTEND_WI(128,32, __Vtemp167, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
        vlSelf->__PVT__error__DOT__monitor__DOT__address[0U] 
            = __Vtemp167[0U];
        vlSelf->__PVT__error__DOT__monitor__DOT__address[1U] 
            = __Vtemp167[1U];
        vlSelf->__PVT__error__DOT__monitor__DOT__address[2U] 
            = __Vtemp167[2U];
        vlSelf->__PVT__error__DOT__monitor__DOT__address[3U] 
            = __Vtemp167[3U];
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1 = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 = 0ULL;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes = 0ULL;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1 
            = vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_T_5;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
            = vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_sizes_T_5;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes 
            = vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_sizes_T_2;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight 
            = vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_T_2;
        vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1 
            = ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T)
                ? 0U : vlSelf->__PVT__bar__DOT__monitor__DOT___watchdog_T_3);
        vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->__PVT__bar__DOT__monitor__DOT___watchdog_T_1);
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2 
            = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_2)
                        ? ((1U & (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1 
            = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_1)
                        ? ((1U & (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__param_1 
            = vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__sink 
            = vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_sink;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__denied 
            = vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__size_1 
            = vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__opcode_1 
            = vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__source_1 
            = vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1 
            = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_1)
                        ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__size 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__opcode 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__source 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__address 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address;
    }
    vlSelf->__PVT__bar__DOT__counter1_3 = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__counter_3) 
                                                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__d_first = (0U == (IData)(vlSelf->__PVT__bar__DOT__counter_3));
    vlSelf->__PVT__error__DOT__beatsLeft = ((IData)(vlSymsp->TOP.reset)
                                             ? 0U : 
                                            (0x3ffU 
                                             & ((IData)(vlSelf->__PVT__error__DOT__latch)
                                                 ? 
                                                ((IData)(vlSelf->__PVT__error__DOT__da_valid)
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))
                                                   ? 
                                                  (~ 
                                                   (0x1ffffffU 
                                                    & (((IData)(0xfffU) 
                                                        << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                       >> 2U)))
                                                   : 0U)
                                                  : 0U)
                                                 : (IData)(vlSelf->__PVT__error__DOT___beatsLeft_T_4))));
    vlSelf->__PVT__bar__DOT__counter1 = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__counter) 
                                                 - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__a_first = (0U == (IData)(vlSelf->__PVT__bar__DOT__counter));
    vlSelf->__PVT__bar__DOT__stall_first = (0U == (IData)(vlSelf->__PVT__bar__DOT__stall_counter));
    vlSelf->__PVT__bar__DOT__stall_counter1 = (0xfU 
                                               & ((IData)(vlSelf->__PVT__bar__DOT__stall_counter) 
                                                  - (IData)(1U)));
    vlSelf->__PVT__error__DOT__a_last_counter1 = (0x3ffU 
                                                  & ((IData)(vlSelf->__PVT__error__DOT__a_last_counter) 
                                                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__a_last_first = (0U == (IData)(vlSelf->__PVT__error__DOT__a_last_counter));
    vlSelf->__PVT__error__DOT__idle = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelf->__PVT__error__DOT___GEN_12));
    vlSelf->__PVT__bar__DOT__in_reset = vlSymsp->TOP.reset;
    vlSelf->__PVT__error__DOT__counter1 = (0x3ffU & 
                                           ((IData)(vlSelf->__PVT__error__DOT__counter) 
                                            - (IData)(1U)));
    vlSelf->__PVT__error__DOT__da_first = (0U == (IData)(vlSelf->__PVT__error__DOT__counter));
    vlSelf->__PVT__error__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1);
    vlSelf->__PVT__error__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->__PVT__error__DOT__monitor__DOT__watchdog);
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1_2 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1_1 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter 
            = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first)
                          ? ((1U & (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))
                              ? (~ (0x1ffffffU & (((IData)(0xfffU) 
                                                   << (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                                                  >> 2U)))
                              : 0U) : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1)));
    }
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter1_1 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) {
        vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter 
            = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first)
                          ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                              ? 0U : (~ (0x1ffffffU 
                                         & (((IData)(0xfffU) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                            >> 2U))))
                          : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter1)));
    }
    vlSelf->__PVT__bar__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1);
    vlSelf->__PVT__bar__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog);
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter 
            = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first)
                        ? ((1U & (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1)));
    }
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter 
            = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first)
                        ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter1)));
    }
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter));
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter1 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter));
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter));
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__5(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__5\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp168;
    VlWide<4>/*127:0*/ __Vtemp169;
    VlWide<4>/*127:0*/ __Vtemp170;
    VlWide<4>/*127:0*/ __Vtemp171;
    VlWide<4>/*127:0*/ __Vtemp172;
    VlWide<4>/*127:0*/ __Vtemp173;
    VlWide<4>/*127:0*/ __Vtemp174;
    VlWide<4>/*127:0*/ __Vtemp175;
    VlWide<4>/*127:0*/ __Vtemp176;
    VlWide<4>/*127:0*/ __Vtemp177;
    // Body
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
    VL_EXTEND_WI(128,32, __Vtemp168, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (~ (__Vtemp168[0U] 
                                        >> 1U))))));
    VL_EXTEND_WI(128,32, __Vtemp169, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (__Vtemp169[0U] 
                                     >> 1U)))));
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
    VL_EXTEND_WI(128,32, __Vtemp170, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp171, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp172, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp173, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp174, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp175, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp176, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,32, __Vtemp177, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    vlSelf->__PVT__error__DOT__monitor__DOT__mask = 
        ((8U & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc_1) 
                 << 3U) | (0xfffffff8U & ((__Vtemp170[0U] 
                                           << 2U) & 
                                          (__Vtemp171[0U] 
                                           << 3U))))) 
         | ((4U & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc_1) 
                    << 2U) | (0xfffffffcU & ((__Vtemp172[0U] 
                                              << 1U) 
                                             & ((~ 
                                                 __Vtemp173[0U]) 
                                                << 2U))))) 
            | ((2U & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc) 
                       | ((~ (__Vtemp174[0U] >> 1U)) 
                          & __Vtemp175[0U])) << 1U)) 
               | (1U & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask_acc) 
                        | ((~ (__Vtemp176[0U] >> 1U)) 
                           & (~ __Vtemp177[0U])))))));
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
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__14(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__14\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp189;
    VlWide<5>/*159:0*/ __Vtemp190;
    VlWide<5>/*159:0*/ __Vtemp196;
    VlWide<5>/*159:0*/ __Vtemp197;
    VlWide<5>/*159:0*/ __Vtemp203;
    VlWide<5>/*159:0*/ __Vtemp204;
    VlWide<5>/*159:0*/ __Vtemp213;
    VlWide<5>/*159:0*/ __Vtemp214;
    VlWide<5>/*159:0*/ __Vtemp220;
    VlWide<5>/*159:0*/ __Vtemp221;
    VlWide<5>/*159:0*/ __Vtemp227;
    VlWide<5>/*159:0*/ __Vtemp228;
    VlWide<5>/*159:0*/ __Vtemp236;
    VlWide<5>/*159:0*/ __Vtemp237;
    VlWide<5>/*159:0*/ __Vtemp246;
    VlWide<5>/*159:0*/ __Vtemp247;
    VlWide<5>/*159:0*/ __Vtemp253;
    VlWide<5>/*159:0*/ __Vtemp254;
    // Body
    vlSelf->__PVT__bar__DOT___T_3 = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_d_ready) 
                                     & ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                         ? (IData)(vlSelf->__PVT__error_auto_in_d_valid)
                                         : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid)));
    vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_d_ready) 
           & (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid));
    vlSelf->__PVT__bar_auto_out_1_d_ready = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_d_ready) 
                                             & (~ (IData)(vlSelf->__PVT__bar__DOT__bypass)));
    vlSelf->__PVT__bar_auto_out_0_d_ready = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_d_ready) 
                                             & (IData)(vlSelf->__PVT__bar__DOT__bypass));
    vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_T_5 
        = ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1) 
           & (~ ((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode)))
                  ? ((IData)(1U) << (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))
                  : 0U)));
    __Vtemp189[0U] = 0xfU;
    __Vtemp189[1U] = 0U;
    __Vtemp189[2U] = 0U;
    __Vtemp189[3U] = 0U;
    __Vtemp189[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp190, __Vtemp189, 
                  ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_sizes_T_5 
        = (vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
           & (~ (((QData)((IData)(((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
                                     & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                                    & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode)))
                                    ? __Vtemp190[1U]
                                    : 0U))) << 0x20U) 
                 | (QData)((IData)(((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp190[0U]
                                     : 0U))))));
    __Vtemp196[0U] = 0xfU;
    __Vtemp196[1U] = 0U;
    __Vtemp196[2U] = 0U;
    __Vtemp196[3U] = 0U;
    __Vtemp196[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp197, __Vtemp196, 
                  ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    if ((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
         & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[0U] 
            = __Vtemp197[0U];
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[1U] 
            = __Vtemp197[1U];
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[2U] 
            = __Vtemp197[2U];
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[3U] 
            = __Vtemp197[3U];
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[4U] 
            = (0x7fffU & __Vtemp197[4U]);
    } else {
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[0U] = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[1U] = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[2U] = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[3U] = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[4U] = 0U;
    }
    vlSelf->__PVT__error__DOT__latch = ((0U == (IData)(vlSelf->__PVT__error__DOT__beatsLeft)) 
                                        & (IData)(vlSelf->__PVT__bar_auto_out_0_d_ready));
    vlSelf->__PVT__error__DOT___beatsLeft_T_4 = (0x3ffU 
                                                 & ((IData)(vlSelf->__PVT__error__DOT__beatsLeft) 
                                                    - 
                                                    ((IData)(vlSelf->__PVT__bar_auto_out_0_d_ready) 
                                                     & ((0U 
                                                         == (IData)(vlSelf->__PVT__error__DOT__beatsLeft))
                                                         ? (IData)(vlSelf->__PVT__error__DOT__da_valid)
                                                         : (IData)(vlSelf->__PVT__error__DOT___sink_ACancel_earlyValid_T_2)))));
    vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlSelf->__PVT__bar_auto_out_0_d_ready) 
           & (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid));
    vlSelf->__PVT__error__DOT__out_1_ready = ((IData)(vlSelf->__PVT__bar_auto_out_0_d_ready) 
                                              & ((0U 
                                                  == (IData)(vlSelf->__PVT__error__DOT__beatsLeft)) 
                                                 | (IData)(vlSelf->__PVT__error__DOT__state_1)));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_T_5 
        = ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1) 
           & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                  ? ((IData)(1U) << (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))
                  : 0U)));
    __Vtemp203[0U] = 0xffU;
    __Vtemp203[1U] = 0U;
    __Vtemp203[2U] = 0U;
    __Vtemp203[3U] = 0U;
    __Vtemp203[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp204, __Vtemp203, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
           & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp204[0U] : 0U)));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
           & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp204[1U] : 0U)));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
           & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp204[2U] : 0U)));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
           & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                  ? __Vtemp204[3U] : 0U)));
    vlSelf->__PVT__error__DOT___T = ((IData)(vlSelf->__PVT__error__DOT__out_1_ready) 
                                     & (IData)(vlSelf->__PVT__error__DOT__da_valid));
    vlSelf->__PVT__error__DOT__monitor_io_in_a_ready 
        = (1U & ((((IData)(vlSelf->__PVT__error__DOT__out_1_ready) 
                   & (IData)(vlSelf->__PVT__error__DOT__da_last)) 
                  & (IData)(vlSelf->__PVT__error__DOT__idle)) 
                 | (~ (IData)(vlSelf->__PVT__error__DOT__a_last))));
    vlSelf->__PVT__bar__DOT___bundleIn_0_a_ready_T_1 
        = (1U & ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                  ? ((((IData)(vlSelf->__PVT__error__DOT__out_1_ready) 
                       & (IData)(vlSelf->__PVT__error__DOT__da_last)) 
                      & (IData)(vlSelf->__PVT__error__DOT__idle)) 
                     | (~ (IData)(vlSelf->__PVT__error__DOT__a_last)))
                  : (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full))));
    vlSelf->__PVT__error__DOT___GEN_12 = ((~ ((IData)(vlSelf->__PVT__error__DOT___T) 
                                              & (4U 
                                                 == (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode)))) 
                                          & (IData)(vlSelf->__PVT__error__DOT__idle));
    vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSelf->__PVT__bar_auto_out_0_a_valid));
    vlSelf->__PVT__bar__DOT___T = (((~ (IData)(vlSelf->__PVT__bar__DOT__stall)) 
                                    & (IData)(vlSelf->__PVT__bar__DOT___bundleIn_0_a_ready_T_1)) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid));
    vlSelf->__PVT__bar__DOT__monitor_io_in_a_ready 
        = ((~ (IData)(vlSelf->__PVT__bar__DOT__stall)) 
           & (IData)(vlSelf->__PVT__bar__DOT___bundleIn_0_a_ready_T_1));
    vlSelf->__PVT__bar_auto_in_a_ready = ((~ (IData)(vlSelf->__PVT__bar__DOT__stall)) 
                                          & (IData)(vlSelf->__PVT__bar__DOT___bundleIn_0_a_ready_T_1));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_T_2 
        = (0xffffU & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight) 
                       | (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                           & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                           ? ((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source))
                           : 0U)) & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                         & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                         ? ((IData)(1U) 
                                            << (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))
                                         : 0U))));
    VL_EXTEND_WI(131,4, __Vtemp213, (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                                      ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                                               << 1U))
                                      : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp214, __Vtemp213, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    __Vtemp220[0U] = 0xfU;
    __Vtemp220[1U] = 0U;
    __Vtemp220[2U] = 0U;
    __Vtemp220[3U] = 0U;
    __Vtemp220[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp221, __Vtemp220, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_opcodes_T_2 
        = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_opcodes 
            | (((QData)((IData)((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp214[1U] : 0U))) 
                << 0x20U) | (QData)((IData)((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                                              ? __Vtemp214[0U]
                                              : 0U))))) 
           & (~ (((QData)((IData)(((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                                     & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                    & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                    ? __Vtemp221[1U]
                                    : 0U))) << 0x20U) 
                 | (QData)((IData)(((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                     & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp221[0U]
                                     : 0U))))));
    VL_EXTEND_WI(132,5, __Vtemp227, (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                                      ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                                               << 1U))
                                      : 0U));
    VL_SHIFTL_WWI(132,132,7, __Vtemp228, __Vtemp227, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                   << 3U));
    __Vtemp236[0U] = 0xffU;
    __Vtemp236[1U] = 0U;
    __Vtemp236[2U] = 0U;
    __Vtemp236[3U] = 0U;
    __Vtemp236[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp237, __Vtemp236, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[0U] 
            | (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp228[0U] : 0U)) & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                               ? __Vtemp237[0U]
                                               : 0U)));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[1U] 
            | (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp228[1U] : 0U)) & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                               ? __Vtemp237[1U]
                                               : 0U)));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[2U] 
            | (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp228[2U] : 0U)) & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                               ? __Vtemp237[2U]
                                               : 0U)));
    vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[3U] 
            | (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp228[3U] : 0U)) & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)))
                                               ? __Vtemp237[3U]
                                               : 0U)));
    vlSelf->__PVT__bar__DOT__inc = ((((IData)(vlSelf->__PVT__bar__DOT___T) 
                                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__counter))) 
                                     << 1U) | (((IData)(vlSelf->__PVT__bar__DOT___T_3) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__bar__DOT__counter_3))) 
                                               & (IData)(
                                                         (4U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelf->__PVT__bar__DOT__in_d_bits_opcode))))));
    vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid));
    vlSelf->__PVT__bar__DOT__next_flight = (0x3fU & 
                                            (((IData)(vlSelf->__PVT__bar__DOT__flight) 
                                              + (3U 
                                                 & ((1U 
                                                     & (IData)(vlSelf->__PVT__bar__DOT__inc)) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__bar__DOT__inc) 
                                                        >> 1U))))) 
                                             - (3U 
                                                & (((IData)(vlSelf->__PVT__bar__DOT___T_3) 
                                                    & ((1U 
                                                        == (IData)(vlSelf->__PVT__bar__DOT__counter_3)) 
                                                       | (0U 
                                                          == 
                                                          ((1U 
                                                            & (IData)(vlSelf->__PVT__bar__DOT__in_d_bits_opcode))
                                                            ? 
                                                           (0xfU 
                                                            & (~ 
                                                               (0x7ffU 
                                                                & (((IData)(0x3fU) 
                                                                    << (IData)(vlSelf->__PVT__bar__DOT__in_d_bits_size)) 
                                                                   >> 2U))))
                                                            : 0U)))) 
                                                   + 
                                                   (1U 
                                                    & (((IData)(vlSelf->__PVT__bar__DOT___T_3) 
                                                        & ((1U 
                                                            == (IData)(vlSelf->__PVT__bar__DOT__counter_3)) 
                                                           | (0U 
                                                              == 
                                                              ((1U 
                                                                & (IData)(vlSelf->__PVT__bar__DOT__in_d_bits_opcode))
                                                                ? 
                                                               (0xfU 
                                                                & (~ 
                                                                   (0x7ffU 
                                                                    & (((IData)(0x3fU) 
                                                                        << (IData)(vlSelf->__PVT__bar__DOT__in_d_bits_size)) 
                                                                       >> 2U))))
                                                                : 0U)))) 
                                                       >> 1U))))));
    VL_EXTEND_WI(131,4, __Vtemp246, (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                      ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                                               << 1U))
                                      : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp247, __Vtemp246, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_opcodes_T_2 
        = ((vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_opcodes 
            | (((QData)((IData)((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp247[1U] : 0U))) 
                << 0x20U) | (QData)((IData)((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                              ? __Vtemp247[0U]
                                              : 0U))))) 
           & (~ (((QData)((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[1U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[0U])))));
    VL_EXTEND_WI(131,4, __Vtemp253, (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                      ? (1U | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                                               << 1U))
                                      : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp254, __Vtemp253, 
                  ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_sizes_T_2 
        = ((vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes 
            | (((QData)((IData)((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp254[1U] : 0U))) 
                << 0x20U) | (QData)((IData)((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                                              ? __Vtemp254[0U]
                                              : 0U))))) 
           & (~ (((QData)((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[1U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_23[0U])))));
    vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_T_2 
        = (0xffffU & (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight) 
                       | (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                           & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)))
                           ? ((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source))
                           : 0U)) & (~ ((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
                                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                                         & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode)))
                                         ? ((IData)(1U) 
                                            << (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))
                                         : 0U))));
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__15(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__15\n"); );
    // Body
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

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__4(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__4\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp261;
    VlWide<5>/*159:0*/ __Vtemp265;
    VlWide<4>/*127:0*/ __Vtemp268;
    VlWide<4>/*127:0*/ __Vtemp269;
    VlWide<4>/*127:0*/ __Vtemp272;
    VlWide<4>/*127:0*/ __Vtemp273;
    VlWide<5>/*159:0*/ __Vtemp277;
    VlWide<5>/*159:0*/ __Vtemp281;
    VlWide<4>/*127:0*/ __Vtemp284;
    VlWide<4>/*127:0*/ __Vtemp285;
    VlWide<4>/*127:0*/ __Vtemp288;
    VlWide<4>/*127:0*/ __Vtemp289;
    VlWide<5>/*159:0*/ __Vtemp293;
    VlWide<5>/*159:0*/ __Vtemp297;
    VlWide<4>/*127:0*/ __Vtemp300;
    VlWide<4>/*127:0*/ __Vtemp301;
    VlWide<4>/*127:0*/ __Vtemp304;
    VlWide<4>/*127:0*/ __Vtemp305;
    VlWide<5>/*159:0*/ __Vtemp309;
    VlWide<5>/*159:0*/ __Vtemp313;
    VlWide<4>/*127:0*/ __Vtemp316;
    VlWide<4>/*127:0*/ __Vtemp317;
    VlWide<4>/*127:0*/ __Vtemp320;
    VlWide<4>/*127:0*/ __Vtemp321;
    VlWide<5>/*159:0*/ __Vtemp325;
    VlWide<5>/*159:0*/ __Vtemp329;
    VlWide<4>/*127:0*/ __Vtemp332;
    VlWide<4>/*127:0*/ __Vtemp333;
    VlWide<4>/*127:0*/ __Vtemp336;
    VlWide<4>/*127:0*/ __Vtemp337;
    VlWide<5>/*159:0*/ __Vtemp341;
    VlWide<5>/*159:0*/ __Vtemp345;
    VlWide<4>/*127:0*/ __Vtemp348;
    VlWide<4>/*127:0*/ __Vtemp349;
    VlWide<4>/*127:0*/ __Vtemp352;
    VlWide<4>/*127:0*/ __Vtemp353;
    VlWide<5>/*159:0*/ __Vtemp357;
    VlWide<5>/*159:0*/ __Vtemp361;
    VlWide<4>/*127:0*/ __Vtemp364;
    VlWide<4>/*127:0*/ __Vtemp365;
    VlWide<4>/*127:0*/ __Vtemp368;
    VlWide<4>/*127:0*/ __Vtemp369;
    VlWide<5>/*159:0*/ __Vtemp373;
    VlWide<5>/*159:0*/ __Vtemp377;
    VlWide<4>/*127:0*/ __Vtemp380;
    VlWide<4>/*127:0*/ __Vtemp381;
    VlWide<4>/*127:0*/ __Vtemp384;
    VlWide<4>/*127:0*/ __Vtemp385;
    VlWide<4>/*127:0*/ __Vtemp387;
    VlWide<4>/*127:0*/ __Vtemp388;
    VlWide<4>/*127:0*/ __Vtemp391;
    VlWide<4>/*127:0*/ __Vtemp394;
    VlWide<4>/*127:0*/ __Vtemp395;
    VlWide<4>/*127:0*/ __Vtemp398;
    VlWide<4>/*127:0*/ __Vtemp401;
    VlWide<4>/*127:0*/ __Vtemp402;
    VlWide<4>/*127:0*/ __Vtemp405;
    VlWide<4>/*127:0*/ __Vtemp408;
    VlWide<4>/*127:0*/ __Vtemp409;
    VlWide<4>/*127:0*/ __Vtemp412;
    VlWide<4>/*127:0*/ __Vtemp415;
    VlWide<4>/*127:0*/ __Vtemp416;
    VlWide<4>/*127:0*/ __Vtemp421;
    // Body
    if (VL_UNLIKELY((1U & (~ (((IData)(vlSelf->__PVT__error__DOT__idle) 
                               | (0U == (IData)(vlSelf->__PVT__error__DOT__counter))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Error.scala:49 assert (idle || da_first) // we only send Grant, never GrantData => simplified flow control below\n");
    }
    if (VL_UNLIKELY((1U & (~ (((IData)(vlSelf->__PVT__error__DOT__idle) 
                               | (0U == (IData)(vlSelf->__PVT__error__DOT__counter))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15558: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15558, "");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15582: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15582, "");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15606: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15606, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp261, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp261[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp265, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp265[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13522: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13522, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13546: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13546, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13570: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13570, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13594: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13594, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp268, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp269, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp268[0U] 
                                      & __Vtemp269[0U]) 
                                     | (__Vtemp268[1U] 
                                        & __Vtemp269[1U])) 
                                    | (__Vtemp268[2U] 
                                       & __Vtemp269[2U])) 
                                   | (__Vtemp268[3U] 
                                      & __Vtemp269[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp272, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp273, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp272[0U] 
                                      & __Vtemp273[0U]) 
                                     | (__Vtemp272[1U] 
                                        & __Vtemp273[1U])) 
                                    | (__Vtemp272[2U] 
                                       & __Vtemp273[2U])) 
                                   | (__Vtemp272[3U] 
                                      & __Vtemp273[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13618: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13618, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13642: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13642, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp277, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp277[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp281, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp281[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13666: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13666, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13690: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13690, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13714: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13714, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13738: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13738, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp284, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp285, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp284[0U] 
                                      & __Vtemp285[0U]) 
                                     | (__Vtemp284[1U] 
                                        & __Vtemp285[1U])) 
                                    | (__Vtemp284[2U] 
                                       & __Vtemp285[2U])) 
                                   | (__Vtemp284[3U] 
                                      & __Vtemp285[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp288, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp289, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp288[0U] 
                                      & __Vtemp289[0U]) 
                                     | (__Vtemp288[1U] 
                                        & __Vtemp289[1U])) 
                                    | (__Vtemp288[2U] 
                                       & __Vtemp289[2U])) 
                                   | (__Vtemp288[3U] 
                                      & __Vtemp289[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13762: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13762, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13786: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13786, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13810: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13810, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13834: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13834, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp293, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (1U & __Vtemp293[4U])) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp297, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (1U & __Vtemp297[4U])) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13858: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13858, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13882: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13882, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp300, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp301, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp300[0U] 
                                      & __Vtemp301[0U]) 
                                     | (__Vtemp300[1U] 
                                        & __Vtemp301[1U])) 
                                    | (__Vtemp300[2U] 
                                       & __Vtemp301[2U])) 
                                   | (__Vtemp300[3U] 
                                      & __Vtemp301[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp304, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp305, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp304[0U] 
                                      & __Vtemp305[0U]) 
                                     | (__Vtemp304[1U] 
                                        & __Vtemp305[1U])) 
                                    | (__Vtemp304[2U] 
                                       & __Vtemp305[2U])) 
                                   | (__Vtemp304[3U] 
                                      & __Vtemp305[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13906: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13906, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13930: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13930, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp309, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp309[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp313, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp313[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13954: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13954, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:13978: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 13978, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp316, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp317, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp316[0U] 
                                      & __Vtemp317[0U]) 
                                     | (__Vtemp316[1U] 
                                        & __Vtemp317[1U])) 
                                    | (__Vtemp316[2U] 
                                       & __Vtemp317[2U])) 
                                   | (__Vtemp316[3U] 
                                      & __Vtemp317[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp320, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp321, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp320[0U] 
                                      & __Vtemp321[0U]) 
                                     | (__Vtemp320[1U] 
                                        & __Vtemp321[1U])) 
                                    | (__Vtemp320[2U] 
                                       & __Vtemp321[2U])) 
                                   | (__Vtemp320[3U] 
                                      & __Vtemp321[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14002: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14002, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14026: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14026, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp325, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp325[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp329, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp329[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14050: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14050, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14074: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14074, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp332, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp333, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp332[0U] 
                                      & __Vtemp333[0U]) 
                                     | (__Vtemp332[1U] 
                                        & __Vtemp333[1U])) 
                                    | (__Vtemp332[2U] 
                                       & __Vtemp333[2U])) 
                                   | (__Vtemp332[3U] 
                                      & __Vtemp333[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp336, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp337, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp336[0U] 
                                      & __Vtemp337[0U]) 
                                     | (__Vtemp336[1U] 
                                        & __Vtemp337[1U])) 
                                    | (__Vtemp336[2U] 
                                       & __Vtemp337[2U])) 
                                   | (__Vtemp336[3U] 
                                      & __Vtemp337[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14098: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14098, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14122: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14122, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp341, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & ((4U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (1U & __Vtemp341[4U])))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp345, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & ((4U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (1U & __Vtemp345[4U])))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14146: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14146, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14170: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14170, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp348, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp349, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp348[0U] 
                                      & __Vtemp349[0U]) 
                                     | (__Vtemp348[1U] 
                                        & __Vtemp349[1U])) 
                                    | (__Vtemp348[2U] 
                                       & __Vtemp349[2U])) 
                                   | (__Vtemp348[3U] 
                                      & __Vtemp349[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp352, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp353, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp352[0U] 
                                      & __Vtemp353[0U]) 
                                     | (__Vtemp352[1U] 
                                        & __Vtemp353[1U])) 
                                    | (__Vtemp352[2U] 
                                       & __Vtemp353[2U])) 
                                   | (__Vtemp352[3U] 
                                      & __Vtemp353[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14194: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14194, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14218: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14218, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp357, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & ((4U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (1U & __Vtemp357[4U])))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp361, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & ((4U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (1U & __Vtemp361[4U])))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14242: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14242, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14266: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14266, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp364, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp365, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp364[0U] 
                                      & __Vtemp365[0U]) 
                                     | (__Vtemp364[1U] 
                                        & __Vtemp365[1U])) 
                                    | (__Vtemp364[2U] 
                                       & __Vtemp365[2U])) 
                                   | (__Vtemp364[3U] 
                                      & __Vtemp365[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp368, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp369, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp368[0U] 
                                      & __Vtemp369[0U]) 
                                     | (__Vtemp368[1U] 
                                        & __Vtemp369[1U])) 
                                    | (__Vtemp368[2U] 
                                       & __Vtemp369[2U])) 
                                   | (__Vtemp368[3U] 
                                      & __Vtemp369[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14290: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14290, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14314: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14314, "");
    }
    VL_EXTEND_WI(129,32, __Vtemp373, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp373[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(129,32, __Vtemp377, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                            & (0U == (1U & __Vtemp377[4U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14338: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14338, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14362: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14362, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp380, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp381, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp380[0U] 
                                      & __Vtemp381[0U]) 
                                     | (__Vtemp380[1U] 
                                        & __Vtemp381[1U])) 
                                    | (__Vtemp380[2U] 
                                       & __Vtemp381[2U])) 
                                   | (__Vtemp380[3U] 
                                      & __Vtemp381[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp384, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    VL_EXTEND_WI(128,12, __Vtemp385, (0xfffU & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((((__Vtemp384[0U] 
                                      & __Vtemp385[0U]) 
                                     | (__Vtemp384[1U] 
                                        & __Vtemp385[1U])) 
                                    | (__Vtemp384[2U] 
                                       & __Vtemp385[2U])) 
                                   | (__Vtemp384[3U] 
                                      & __Vtemp385[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14386: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14386, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14410: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14410, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14434: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14434, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14458: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14458, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14482: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14482, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14506: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14506, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14530: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14530, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14554: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14554, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14578: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14578, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14602: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14602, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14626: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14626, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14650: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14650, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14674: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14674, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14698: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14698, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14722: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14722, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14746: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14746, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14770: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14770, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14794: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14794, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__error__DOT__muxStateEarly_1) 
                               & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14818: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14818, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14842: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14842, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14866: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14866, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14890: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14890, "");
    }
    VL_EXTEND_WI(128,32, __Vtemp387, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((0U == ((((__Vtemp387[0U] 
                                      ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[0U]) 
                                     | (__Vtemp387[1U] 
                                        ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[1U])) 
                                    | (__Vtemp387[2U] 
                                       ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[2U])) 
                                   | (__Vtemp387[3U] 
                                      ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_EXTEND_WI(128,32, __Vtemp388, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((0U == ((((__Vtemp388[0U] 
                                      ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[0U]) 
                                     | (__Vtemp388[1U] 
                                        ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[1U])) 
                                    | (__Vtemp388[2U] 
                                       ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[2U])) 
                                   | (__Vtemp388[3U] 
                                      ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[3U]))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14914: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14914, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14938: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14938, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14962: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14962, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:14986: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 14986, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15010: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15010, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15034: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15034, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15058: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15058, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15082: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15082, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15106: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15106, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15130: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15130, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp391, vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp394[0U] = (0x7fU & (__Vtemp391[0U] >> 1U));
    __Vtemp394[1U] = 0U;
    __Vtemp394[2U] = 0U;
    __Vtemp394[3U] = 0U;
    VL_EXTEND_WW(128,127, __Vtemp395, __Vtemp394);
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & __Vtemp395[0U])) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp398, vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp401[0U] = (0x7fU & (__Vtemp398[0U] >> 1U));
    __Vtemp401[1U] = 0U;
    __Vtemp401[2U] = 0U;
    __Vtemp401[3U] = 0U;
    VL_EXTEND_WW(128,127, __Vtemp402, __Vtemp401);
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->__PVT__bar_auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & __Vtemp402[0U])) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15154: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15154, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSelf->__PVT__bar_auto_out_0_a_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))) 
                      & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__bar_auto_out_0_d_ready)) 
                            | (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSelf->__PVT__bar_auto_out_0_a_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))) 
                      & (6U != (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__bar_auto_out_0_d_ready)) 
                            | (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15176: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15176, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__error__DOT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__error__DOT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15200: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15200, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15224: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15224, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp405, vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp408[0U] = (0x7fU & (__Vtemp405[0U] >> 1U));
    __Vtemp408[1U] = 0U;
    __Vtemp408[2U] = 0U;
    __Vtemp408[3U] = 0U;
    VL_EXTEND_WW(128,127, __Vtemp409, __Vtemp408);
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & __Vtemp409[0U])) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp412, vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp415[0U] = (0x7fU & (__Vtemp412[0U] >> 1U));
    __Vtemp415[1U] = 0U;
    __Vtemp415[2U] = 0U;
    __Vtemp415[3U] = 0U;
    VL_EXTEND_WW(128,127, __Vtemp416, __Vtemp415);
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & __Vtemp416[0U])) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15248: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15248, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15272: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 15272, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10725: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10725, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10749: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10749, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10773: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10773, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10797: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10797, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10821: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10821, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10845: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10845, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10869: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10869, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10893: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10893, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10917: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10917, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10941: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10941, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10965: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10965, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10989: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 10989, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11013: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11013, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11037: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11037, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11061: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11061, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11085: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11085, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11109: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11109, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11133: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11133, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11157: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11157, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11181: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11181, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11205: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11205, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11229: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11229, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11253: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11253, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11277: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11277, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11301: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11301, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11325: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11325, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11349: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11349, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11373: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11373, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11397: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11397, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11421: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11421, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11445: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11445, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11469: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11469, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11493: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11493, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11517: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11517, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11541: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11541, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11565: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11565, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11589: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11589, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11613: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11613, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11637: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11637, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11661: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11661, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11685: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11685, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11709: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11709, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11733: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11733, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11757: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11757, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11781: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11781, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11805: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11805, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11829: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11829, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11853: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11853, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11877: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11877, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11901: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11901, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11925: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11925, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11949: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11949, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11973: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11973, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:11997: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 11997, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12021: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12021, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12045: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12045, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12069: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12069, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12093: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12093, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12117: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12117, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12141: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12141, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12165: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12165, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12189: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12189, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                ? (IData)(vlSelf->__PVT__error_auto_in_d_bits_corrupt)
                                : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12213: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12213, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12237: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12237, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12261: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12261, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12285: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12285, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                            == vlSelf->__PVT__bar__DOT__monitor__DOT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                            == vlSelf->__PVT__bar__DOT__monitor__DOT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12309: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12309, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12333: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12333, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12357: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12357, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12381: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12381, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12405: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12405, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_sink) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_sink) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12429: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12429, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12453: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12453, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12477: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12477, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12501: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12501, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12525: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12525, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12549: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12549, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12573: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12573, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes 
                                                     >> 
                                                     ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes 
                                                     >> 
                                                     ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12597: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12597, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))) 
                      & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_d_ready)) 
                            | (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_a_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))) 
                      & (6U != (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_d_ready)) 
                            | (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12619: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12619, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12643: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12643, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12667: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12667, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
                                                     >> 
                                                     ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
                                                     >> 
                                                     ((IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12691: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12691, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12715: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 12715, "");
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__flight = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_opcodes = 0ULL;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_opcodes = 0ULL;
    } else {
        vlSelf->__PVT__bar__DOT__flight = vlSelf->__PVT__bar__DOT__next_flight;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_opcodes 
            = vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_opcodes_T_2;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_opcodes 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_opcodes_T_2;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__counter_3 = 0U;
    } else if (vlSelf->__PVT__bar__DOT___T_3) {
        vlSelf->__PVT__bar__DOT__counter_3 = (0xfU 
                                              & ((IData)(vlSelf->__PVT__bar__DOT__d_first)
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__PVT__bar__DOT__in_d_bits_opcode))
                                                   ? 
                                                  (~ 
                                                   (0x7ffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlSelf->__PVT__bar__DOT__in_d_bits_size)) 
                                                       >> 2U)))
                                                   : 0U)
                                                  : (IData)(vlSelf->__PVT__bar__DOT__counter1_3)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__state_1 = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__error__DOT__beatsLeft))) {
        vlSelf->__PVT__error__DOT__state_1 = vlSelf->__PVT__error__DOT__da_valid;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__counter = 0U;
    } else if (vlSelf->__PVT__bar__DOT___T) {
        vlSelf->__PVT__bar__DOT__counter = (0xfU & 
                                            ((IData)(vlSelf->__PVT__bar__DOT__a_first)
                                              ? ((4U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                                  ? 0U
                                                  : 
                                                 (~ 
                                                  (0x7ffU 
                                                   & (((IData)(0x3fU) 
                                                       << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                      >> 2U))))
                                              : (IData)(vlSelf->__PVT__bar__DOT__counter1)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__stall_counter = 0U;
    } else if (vlSelf->__PVT__bar__DOT___T) {
        vlSelf->__PVT__bar__DOT__stall_counter = (0xfU 
                                                  & ((IData)(vlSelf->__PVT__bar__DOT__stall_first)
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
                                                      : (IData)(vlSelf->__PVT__bar__DOT__stall_counter1)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__a_last_counter = 0U;
    } else if ((((((IData)(vlSelf->__PVT__error__DOT__out_1_ready) 
                   & (IData)(vlSelf->__PVT__error__DOT__da_last)) 
                  & (IData)(vlSelf->__PVT__error__DOT__idle)) 
                 | (~ (IData)(vlSelf->__PVT__error__DOT__a_last))) 
                & (IData)(vlSelf->__PVT__bar_auto_out_0_a_valid))) {
        vlSelf->__PVT__error__DOT__a_last_counter = 
            (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__a_last_first)
                        ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x1ffffffU & 
                                       (((IData)(0xfffU) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                        >> 2U)))) : (IData)(vlSelf->__PVT__error__DOT__a_last_counter1)));
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__in_reset) 
         | (0U == (IData)(vlSelf->__PVT__bar__DOT__next_flight)))) {
        vlSelf->__PVT__bar__DOT__bypass_reg = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass_io_bypass;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__counter = 0U;
    } else if (vlSelf->__PVT__error__DOT___T) {
        vlSelf->__PVT__error__DOT__counter = (0x3ffU 
                                              & ((IData)(vlSelf->__PVT__error__DOT__da_first)
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))
                                                   ? 
                                                  (~ 
                                                   (0x1ffffffU 
                                                    & (((IData)(0xfffU) 
                                                        << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                       >> 2U)))
                                                   : 0U)
                                                  : (IData)(vlSelf->__PVT__error__DOT__counter1)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1 = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[1U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[2U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[3U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_T_5;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[0U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[1U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[2U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_5[3U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_T_2;
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[0U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[0U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[1U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[1U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[2U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[2U];
        vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[3U] 
            = vlSelf->__PVT__error__DOT__monitor__DOT___inflight_sizes_T_2[3U];
        vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1 
            = ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T)
                ? 0U : vlSelf->__PVT__error__DOT__monitor__DOT___watchdog_T_3);
        vlSelf->__PVT__error__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->__PVT__error__DOT__monitor__DOT___watchdog_T_1);
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2 
            = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))
                              ? (~ (0x1ffffffU & (((IData)(0xfffU) 
                                                   << (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                                                  >> 2U)))
                              : 0U) : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1 
            = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))
                              ? (~ (0x1ffffffU & (((IData)(0xfffU) 
                                                   << (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                                                  >> 2U)))
                              : 0U) : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__denied 
            = vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_denied;
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__size_1 
            = vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size;
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__opcode_1 
            = vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode;
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__source_1 
            = vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_source;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) {
        vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1 
            = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_1)
                          ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                              ? 0U : (~ (0x1ffffffU 
                                         & (((IData)(0xfffU) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                            >> 2U))))
                          : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__size 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size;
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__opcode 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode;
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__source 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source;
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter)))) {
        VL_EXTEND_WI(128,32, __Vtemp421, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
        vlSelf->__PVT__error__DOT__monitor__DOT__address[0U] 
            = __Vtemp421[0U];
        vlSelf->__PVT__error__DOT__monitor__DOT__address[1U] 
            = __Vtemp421[1U];
        vlSelf->__PVT__error__DOT__monitor__DOT__address[2U] 
            = __Vtemp421[2U];
        vlSelf->__PVT__error__DOT__monitor__DOT__address[3U] 
            = __Vtemp421[3U];
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1 = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 = 0ULL;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes = 0ULL;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1 
            = vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_T_5;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
            = vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_sizes_T_5;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes 
            = vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_sizes_T_2;
        vlSelf->__PVT__bar__DOT__monitor__DOT__inflight 
            = vlSelf->__PVT__bar__DOT__monitor__DOT___inflight_T_2;
        vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1 
            = ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T)
                ? 0U : vlSelf->__PVT__bar__DOT__monitor__DOT___watchdog_T_3);
        vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T))
                ? 0U : vlSelf->__PVT__bar__DOT__monitor__DOT___watchdog_T_1);
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2 
            = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_2)
                        ? ((1U & (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1 
            = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_1)
                        ? ((1U & (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__param_1 
            = vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_param;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__sink 
            = vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_sink;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__denied 
            = vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_denied;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__size_1 
            = vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__opcode_1 
            = vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__source_1 
            = vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_source;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1 
            = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_1)
                        ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__size 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__opcode 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__source 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__address 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address;
    }
    vlSelf->__PVT__bar__DOT__counter1_3 = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__counter_3) 
                                                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__d_first = (0U == (IData)(vlSelf->__PVT__bar__DOT__counter_3));
    vlSelf->__PVT__error__DOT__beatsLeft = ((IData)(vlSymsp->TOP.reset)
                                             ? 0U : 
                                            (0x3ffU 
                                             & ((IData)(vlSelf->__PVT__error__DOT__latch)
                                                 ? 
                                                ((IData)(vlSelf->__PVT__error__DOT__da_valid)
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))
                                                   ? 
                                                  (~ 
                                                   (0x1ffffffU 
                                                    & (((IData)(0xfffU) 
                                                        << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                       >> 2U)))
                                                   : 0U)
                                                  : 0U)
                                                 : (IData)(vlSelf->__PVT__error__DOT___beatsLeft_T_4))));
    vlSelf->__PVT__bar__DOT__counter1 = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__counter) 
                                                 - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__a_first = (0U == (IData)(vlSelf->__PVT__bar__DOT__counter));
    vlSelf->__PVT__bar__DOT__stall_first = (0U == (IData)(vlSelf->__PVT__bar__DOT__stall_counter));
    vlSelf->__PVT__bar__DOT__stall_counter1 = (0xfU 
                                               & ((IData)(vlSelf->__PVT__bar__DOT__stall_counter) 
                                                  - (IData)(1U)));
    vlSelf->__PVT__error__DOT__a_last_counter1 = (0x3ffU 
                                                  & ((IData)(vlSelf->__PVT__error__DOT__a_last_counter) 
                                                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__a_last_first = (0U == (IData)(vlSelf->__PVT__error__DOT__a_last_counter));
    vlSelf->__PVT__error__DOT__idle = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelf->__PVT__error__DOT___GEN_12));
    vlSelf->__PVT__bar__DOT__in_reset = vlSymsp->TOP.reset;
    vlSelf->__PVT__error__DOT__counter1 = (0x3ffU & 
                                           ((IData)(vlSelf->__PVT__error__DOT__counter) 
                                            - (IData)(1U)));
    vlSelf->__PVT__error__DOT__da_first = (0U == (IData)(vlSelf->__PVT__error__DOT__counter));
    vlSelf->__PVT__error__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1);
    vlSelf->__PVT__error__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->__PVT__error__DOT__monitor__DOT__watchdog);
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1_2 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1_1 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlSelf->__PVT__error__DOT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter 
            = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first)
                          ? ((1U & (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_opcode))
                              ? (~ (0x1ffffffU & (((IData)(0xfffU) 
                                                   << (IData)(vlSelf->__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                                                  >> 2U)))
                              : 0U) : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1)));
    }
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter1_1 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T) {
        vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter 
            = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first)
                          ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                              ? 0U : (~ (0x1ffffffU 
                                         & (((IData)(0xfffU) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                            >> 2U))))
                          : (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter1)));
    }
    vlSelf->__PVT__bar__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1);
    vlSelf->__PVT__bar__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog);
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlSelf->__PVT__bar__DOT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter 
            = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first)
                        ? ((1U & (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1)));
    }
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter 
            = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first)
                        ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter1)));
    }
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter1 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter));
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter1 
        = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter) 
                     - (IData)(1U)));
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter1 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter));
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter));
}
