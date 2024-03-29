// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull_TLXbar_1.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VysyxSoCFull_TLXbar_1___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__3(VysyxSoCFull_TLXbar_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_1___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__3\n"); );
    // Body
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__earlyWinner_0)) 
                               | (~ (IData)(vlSelf->__PVT__earlyWinner_1))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:105 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__earlyWinner_0)) 
                               | (~ (IData)(vlSelf->__PVT__earlyWinner_1))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7432: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 7432, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_valid) 
                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_valid))) 
                               | ((IData)(vlSelf->__PVT__earlyWinner_0) 
                                  | (IData)(vlSelf->__PVT__earlyWinner_1))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_valid) 
                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_valid))) 
                               | ((IData)(vlSelf->__PVT__earlyWinner_0) 
                                  | (IData)(vlSelf->__PVT__earlyWinner_1))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7456: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 7456, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_valid) 
                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_valid))) 
                               | (IData)(vlSelf->__PVT___T_10)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_valid) 
                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_valid))) 
                               | (IData)(vlSelf->__PVT___T_10)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7480: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 7480, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5043: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5043, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5067: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5067, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5091: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5091, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5115: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5115, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5139: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5139, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5163: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5163, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5187: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5187, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5211: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5211, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5235: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5235, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5259: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5259, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5283: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5283, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5307: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5307, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5331: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5331, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5355: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5355, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5379: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5379, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5403: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5403, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5427: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5427, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5451: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5451, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5475: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5475, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5499: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5499, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5523: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5523, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5547: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5547, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5571: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5571, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5595: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5595, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5619: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5619, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5643: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5643, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5667: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5667, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5691: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5691, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5715: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5715, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5739: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5739, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5763: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5763, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5787: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5787, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5811: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5811, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5835: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5835, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5859: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5859, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5883: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5883, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5907: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5907, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5931: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5931, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5955: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5955, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5979: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5979, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6003: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6003, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6027: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6027, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt)) 
                               | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_bits_corrupt)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt)) 
                               | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_bits_corrupt)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6051: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6051, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->__PVT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->__PVT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6075: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6075, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6099: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6099, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSelf->__PVT__monitor_io_in_d_bits_sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSelf->__PVT__monitor_io_in_d_bits_sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6123: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6123, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6147: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6147, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6171: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6171, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6195: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6195, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt)) 
                               | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_bits_corrupt)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt)) 
                               | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_bits_corrupt)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6219: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6219, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6243: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6243, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSelf->__PVT__monitor_io_in_d_bits_sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSelf->__PVT__monitor_io_in_d_bits_sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6267: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6267, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6291: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6291, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6315: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6315, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6339: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6339, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__monitor_io_in_d_bits_denied)) 
                            | (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt)) 
                               | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_bits_corrupt)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__monitor_io_in_d_bits_denied)) 
                            | (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt)) 
                               | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_bits_corrupt)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6363: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6363, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6387: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6387, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6411: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6411, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt)) 
                               | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_bits_corrupt)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt)) 
                               | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_bits_corrupt)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6435: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6435, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6459: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6459, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6483: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6483, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__monitor_io_in_d_bits_denied)) 
                            | (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt)) 
                               | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_bits_corrupt)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__monitor_io_in_d_bits_denied)) 
                            | (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt)) 
                               | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_bits_corrupt)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6507: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6507, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6531: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6531, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6555: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6555, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt)) 
                               | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_bits_corrupt)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt)) 
                               | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_bits_corrupt)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6579: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6579, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6603: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6603, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6627: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6627, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6651: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6651, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                            == vlSelf->__PVT__monitor__DOT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                            == vlSelf->__PVT__monitor__DOT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6675: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6675, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6699: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6699, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__param_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__param_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6723: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6723, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6747: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6747, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6771: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6771, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_sink) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_sink) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6795: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6795, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6819: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6819, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6843: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6843, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6867: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6867, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6891: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6891, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6915: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6915, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode) 
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
                            | ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode) 
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
                            | ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6939: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6939, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__monitor__DOT__inflight_sizes 
                                                     >> 
                                                     ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__monitor__DOT__inflight_sizes 
                                                     >> 
                                                     ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6963: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6963, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))) 
                      & (6U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_d_ready)) 
                            | (IData)(vlSelf->__PVT__monitor_io_in_a_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))) 
                      & (6U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_d_ready)) 
                            | (IData)(vlSelf->__PVT__monitor_io_in_a_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6985: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6985, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7009: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 7009, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7033: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 7033, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__monitor__DOT__inflight_sizes_1 
                                                     >> 
                                                     ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__monitor__DOT__inflight_sizes_1 
                                                     >> 
                                                     ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7057: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 7057, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7081: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 7081, "");
    }
    vlSelf->__PVT__monitor__DOT__inflight_opcodes = 
        ((IData)(vlSymsp->TOP.reset) ? 0ULL : vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2);
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__state_1 = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__beatsLeft))) {
        vlSelf->__PVT__state_1 = vlSelf->__PVT__earlyWinner_1;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__state_0 = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__beatsLeft))) {
        vlSelf->__PVT__state_0 = vlSelf->__PVT__earlyWinner_0;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__readys_mask = 3U;
    } else if (((IData)(vlSelf->__PVT__latch) & (0U 
                                                 != (IData)(vlSelf->__PVT__readys_filter_lo)))) {
        vlSelf->__PVT__readys_mask = ((IData)(vlSelf->__PVT___readys_mask_T) 
                                      | (2U & ((IData)(vlSelf->__PVT___readys_mask_T) 
                                               << 1U)));
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
                        ? ((1U & (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->__PVT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__monitor__DOT__d_first_counter_1 
            = (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_1)
                        ? ((1U & (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__param_1 = vlSelf->__PVT__monitor_io_in_d_bits_param;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__sink = vlSelf->__PVT__monitor_io_in_d_bits_sink;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__denied = vlSelf->__PVT__monitor_io_in_d_bits_denied;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__size_1 = vlSelf->__PVT__monitor_io_in_d_bits_size;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__opcode_1 = vlSelf->__PVT__monitor_io_in_d_bits_opcode;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__source_1 = vlSelf->__PVT__monitor_io_in_d_bits_source;
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
    vlSelf->__PVT__beatsLeft = ((IData)(vlSymsp->TOP.reset)
                                 ? 0U : (0xfU & ((IData)(vlSelf->__PVT__latch)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__earlyWinner_0)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_opcode))
                                                     ? 
                                                    (~ 
                                                     (0x7ffU 
                                                      & (((IData)(0x3fU) 
                                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_size)) 
                                                         >> 2U)))
                                                     : 0U)
                                                    : 0U) 
                                                  | ((IData)(vlSelf->__PVT__earlyWinner_1)
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_bits_opcode))
                                                       ? 
                                                      (~ 
                                                       (0x7ffU 
                                                        & (((IData)(0x3fU) 
                                                            << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_bits_size)) 
                                                           >> 2U)))
                                                       : 0U)
                                                      : 0U))
                                                  : (IData)(vlSelf->__PVT___beatsLeft_T_4))));
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
                        ? ((1U & (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
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

VL_INLINE_OPT void VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__9(VysyxSoCFull_TLXbar_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__9\n"); );
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
    vlSelf->__PVT__requestAIO_0_0 = ((0ULL == (0xc0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                                     | (0ULL == (0x80000000ULL 
                                                 & (QData)((IData)(
                                                                   (0x80000000U 
                                                                    ^ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))));
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
}

VL_INLINE_OPT void VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__11(VysyxSoCFull_TLXbar_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__11\n"); );
    // Body
    vlSelf->auto_out_1_a_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                                  & (0ULL == (0xc0000000ULL 
                                              & (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
    vlSelf->auto_out_0_a_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid) 
                                  & (IData)(vlSelf->__PVT__requestAIO_0_0));
}

VL_INLINE_OPT void VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__13(VysyxSoCFull_TLXbar_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__13\n"); );
    // Variables
    CData/*3:0*/ __PVT___T_36;
    CData/*3:0*/ __PVT___T_37;
    CData/*5:0*/ __PVT___T_33;
    CData/*2:0*/ __PVT___T_39;
    CData/*2:0*/ __PVT___T_40;
    CData/*2:0*/ __PVT___T_45;
    CData/*2:0*/ __PVT___T_46;
    // Body
    vlSelf->__PVT___T_10 = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_valid) 
                            | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_valid));
    vlSelf->__PVT___sink_ACancel_earlyValid_T_3 = (
                                                   ((IData)(vlSelf->__PVT__state_0) 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_valid)) 
                                                   | ((IData)(vlSelf->__PVT__state_1) 
                                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_valid)));
    vlSelf->__PVT__readys_filter_lo = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_valid) 
                                        << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_valid));
    if ((0U == (IData)(vlSelf->__PVT__beatsLeft))) {
        vlSelf->__PVT__monitor_io_in_d_valid = vlSelf->__PVT___T_10;
        vlSelf->auto_in_d_valid = vlSelf->__PVT___T_10;
    } else {
        vlSelf->__PVT__monitor_io_in_d_valid = vlSelf->__PVT___sink_ACancel_earlyValid_T_3;
        vlSelf->auto_in_d_valid = vlSelf->__PVT___sink_ACancel_earlyValid_T_3;
    }
    vlSelf->__PVT__readys_filter = ((((IData)(vlSelf->__PVT__readys_filter_lo) 
                                      & (~ (IData)(vlSelf->__PVT__readys_mask))) 
                                     << 2U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_valid) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_valid)));
    vlSelf->__PVT__readys_unready = ((7U & (((IData)(vlSelf->__PVT__readys_filter) 
                                             >> 1U) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__readys_filter) 
                                                >> 2U)))) 
                                     | ((IData)(vlSelf->__PVT__readys_mask) 
                                        << 2U));
    vlSelf->__PVT___readys_readys_T_2 = (3U & (((IData)(vlSelf->__PVT__readys_unready) 
                                                >> 2U) 
                                               & (IData)(vlSelf->__PVT__readys_unready)));
    vlSelf->__PVT___readys_mask_T = ((~ (IData)(vlSelf->__PVT___readys_readys_T_2)) 
                                     & (IData)(vlSelf->__PVT__readys_filter_lo));
    vlSelf->__PVT__earlyWinner_1 = ((~ ((IData)(vlSelf->__PVT___readys_readys_T_2) 
                                        >> 1U)) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_valid));
    vlSelf->__PVT__earlyWinner_0 = ((~ (IData)(vlSelf->__PVT___readys_readys_T_2)) 
                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_valid));
    if ((0U == (IData)(vlSelf->__PVT__beatsLeft))) {
        vlSelf->__PVT__muxStateEarly_1 = vlSelf->__PVT__earlyWinner_1;
        vlSelf->__PVT__muxStateEarly_0 = vlSelf->__PVT__earlyWinner_0;
    } else {
        vlSelf->__PVT__muxStateEarly_1 = vlSelf->__PVT__state_1;
        vlSelf->__PVT__muxStateEarly_0 = vlSelf->__PVT__state_0;
    }
    if (vlSelf->__PVT__muxStateEarly_1) {
        __PVT___T_37 = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__muxStateEarly_1)
                         ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__a__DOT__ram_source
                        [0U] : 0U);
        __PVT___T_40 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_bits_size;
        __PVT___T_46 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_bits_opcode;
    } else {
        __PVT___T_37 = 0U;
        __PVT___T_40 = 0U;
        __PVT___T_46 = 0U;
    }
    if (vlSelf->__PVT__muxStateEarly_0) {
        vlSelf->auto_in_d_bits_param = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_param;
        vlSelf->__PVT__monitor_io_in_d_bits_param = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_param;
    } else {
        vlSelf->auto_in_d_bits_param = 0U;
        vlSelf->__PVT__monitor_io_in_d_bits_param = 0U;
    }
    vlSelf->__PVT__monitor_io_in_d_bits_denied = (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_denied)) 
                                                  | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_bits_denied)));
    if (vlSelf->__PVT__muxStateEarly_0) {
        __PVT___T_33 = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                         ? 0U : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_sink));
        vlSelf->auto_in_d_bits_data = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                                        ? 0U : vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg);
    } else {
        __PVT___T_33 = 0U;
        vlSelf->auto_in_d_bits_data = 0U;
    }
    vlSelf->auto_in_d_bits_denied = (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_denied)) 
                                     | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_bits_denied)));
    vlSelf->auto_in_d_bits_corrupt = (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt)) 
                                      | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_bits_corrupt)));
    if (vlSelf->__PVT__muxStateEarly_0) {
        __PVT___T_36 = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                         ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_source)
                         : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source));
        __PVT___T_39 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_size;
        __PVT___T_45 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_opcode;
    } else {
        __PVT___T_36 = 0U;
        __PVT___T_39 = 0U;
        __PVT___T_45 = 0U;
    }
    vlSelf->auto_in_d_bits_sink = ((IData)(__PVT___T_33) 
                                   | ((IData)(vlSelf->__PVT__muxStateEarly_1)
                                       ? 0x20U : 0U));
    vlSelf->__PVT__monitor_io_in_d_bits_sink = ((IData)(__PVT___T_33) 
                                                | ((IData)(vlSelf->__PVT__muxStateEarly_1)
                                                    ? 0x20U
                                                    : 0U));
    vlSelf->__PVT__monitor_io_in_d_bits_source = ((IData)(__PVT___T_36) 
                                                  | (IData)(__PVT___T_37));
    vlSelf->auto_in_d_bits_source = ((IData)(__PVT___T_36) 
                                     | (IData)(__PVT___T_37));
    vlSelf->__PVT__monitor_io_in_d_bits_size = ((IData)(__PVT___T_39) 
                                                | (IData)(__PVT___T_40));
    vlSelf->auto_in_d_bits_size = ((IData)(__PVT___T_39) 
                                   | (IData)(__PVT___T_40));
    vlSelf->__PVT__monitor_io_in_d_bits_opcode = ((IData)(__PVT___T_45) 
                                                  | (IData)(__PVT___T_46));
    vlSelf->auto_in_d_bits_opcode = ((IData)(__PVT___T_45) 
                                     | (IData)(__PVT___T_46));
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

VL_INLINE_OPT void VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__16(VysyxSoCFull_TLXbar_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__16\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp4;
    VlWide<5>/*159:0*/ __Vtemp5;
    VlWide<5>/*159:0*/ __Vtemp11;
    VlWide<5>/*159:0*/ __Vtemp12;
    // Body
    vlSelf->__PVT__latch = ((0U == (IData)(vlSelf->__PVT__beatsLeft)) 
                            & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_d_ready));
    vlSelf->__PVT___beatsLeft_T_4 = (0xfU & ((IData)(vlSelf->__PVT__beatsLeft) 
                                             - ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_d_ready) 
                                                & ((0U 
                                                    == (IData)(vlSelf->__PVT__beatsLeft))
                                                    ? (IData)(vlSelf->__PVT___T_10)
                                                    : (IData)(vlSelf->__PVT___sink_ACancel_earlyValid_T_3)))));
    vlSelf->__PVT__monitor__DOT___d_first_T = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_d_ready) 
                                               & (IData)(vlSelf->__PVT__monitor_io_in_d_valid));
    vlSelf->auto_out_1_d_ready = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_d_ready) 
                                  & ((0U == (IData)(vlSelf->__PVT__beatsLeft))
                                      ? (~ ((IData)(vlSelf->__PVT___readys_readys_T_2) 
                                            >> 1U))
                                      : (IData)(vlSelf->__PVT__state_1)));
    vlSelf->auto_out_0_d_ready = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_d_ready) 
                                  & ((0U == (IData)(vlSelf->__PVT__beatsLeft))
                                      ? (~ (IData)(vlSelf->__PVT___readys_readys_T_2))
                                      : (IData)(vlSelf->__PVT__state_0)));
    vlSelf->__PVT__monitor__DOT___inflight_T_5 = ((IData)(vlSelf->__PVT__monitor__DOT__inflight_1) 
                                                  & (~ 
                                                     ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                        & (0U 
                                                           == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                                                       & (6U 
                                                          == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))
                                                       : 0U)));
    __Vtemp4[0U] = 0xfU;
    __Vtemp4[1U] = 0U;
    __Vtemp4[2U] = 0U;
    __Vtemp4[3U] = 0U;
    __Vtemp4[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp5, __Vtemp4, ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                  << 2U));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes_1 
           & (~ (((QData)((IData)(((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                     & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                                    & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode)))
                                    ? __Vtemp5[1U] : 0U))) 
                  << 0x20U) | (QData)((IData)(((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp5[0U]
                                                : 0U))))));
    __Vtemp11[0U] = 0xfU;
    __Vtemp11[1U] = 0U;
    __Vtemp11[2U] = 0U;
    __Vtemp11[3U] = 0U;
    __Vtemp11[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp12, __Vtemp11, 
                  ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                   << 2U));
    if ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
         & (6U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode)))) {
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

VL_INLINE_OPT void VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__18(VysyxSoCFull_TLXbar_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__18\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp18;
    VlWide<5>/*159:0*/ __Vtemp19;
    VlWide<5>/*159:0*/ __Vtemp25;
    VlWide<5>/*159:0*/ __Vtemp26;
    // Body
    vlSelf->__PVT__monitor_io_in_a_ready = (((IData)(vlSelf->__PVT__requestAIO_0_0) 
                                             & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_a_ready)) 
                                            | ((0ULL 
                                                == 
                                                (0xc0000000ULL 
                                                 & (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))) 
                                               & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__a__DOT__maybe_full))));
    vlSelf->auto_in_a_ready = (((IData)(vlSelf->__PVT__requestAIO_0_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_a_ready)) 
                               | ((0ULL == (0xc0000000ULL 
                                            & (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))) 
                                  & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__a__DOT__maybe_full))));
    vlSelf->__PVT__monitor__DOT___a_first_T = ((IData)(vlSelf->__PVT__monitor_io_in_a_ready) 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid));
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
                                                             != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode)))
                                                          ? 
                                                         ((IData)(1U) 
                                                          << (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))
                                                          : 0U))));
}

VL_INLINE_OPT void VysyxSoCFull_TLXbar_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__4(VysyxSoCFull_TLXbar_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__4\n"); );
    // Body
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__earlyWinner_0)) 
                               | (~ (IData)(vlSelf->__PVT__earlyWinner_1))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:105 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__earlyWinner_0)) 
                               | (~ (IData)(vlSelf->__PVT__earlyWinner_1))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7432: Assertion failed in %NysyxSoCFull.fpga.xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 7432, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_valid) 
                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_valid))) 
                               | ((IData)(vlSelf->__PVT__earlyWinner_0) 
                                  | (IData)(vlSelf->__PVT__earlyWinner_1))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_valid) 
                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_valid))) 
                               | ((IData)(vlSelf->__PVT__earlyWinner_0) 
                                  | (IData)(vlSelf->__PVT__earlyWinner_1))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7456: Assertion failed in %NysyxSoCFull.fpga.xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 7456, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_valid) 
                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_valid))) 
                               | (IData)(vlSelf->__PVT___T_10)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_valid) 
                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_valid))) 
                               | (IData)(vlSelf->__PVT___T_10)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7480: Assertion failed in %NysyxSoCFull.fpga.xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 7480, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5043: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5043, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5067: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5067, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5091: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5091, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5115: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5115, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5139: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5139, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5163: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5163, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))) 
                               | (IData)(vlSelf->__PVT__monitor__DOT___T_77))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5187: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5187, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5211: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5211, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5235: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5235, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5259: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5259, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5283: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5283, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5307: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5307, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5331: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5331, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5355: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5355, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5379: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5379, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5403: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5403, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5427: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5427, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5451: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5451, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5475: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5475, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5499: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5499, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5523: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5523, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5547: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5547, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5571: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5571, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5595: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5595, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5619: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5619, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5643: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5643, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5667: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5667, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5691: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5691, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5715: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5715, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5739: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5739, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5763: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5763, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5787: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5787, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5811: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5811, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5835: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5835, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5859: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5859, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlSelf->__PVT__monitor__DOT__source_ok) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5883: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5883, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5907: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5907, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5931: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5931, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5955: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5955, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5979: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 5979, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6003: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6003, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6027: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6027, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt)) 
                               | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_bits_corrupt)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt)) 
                               | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_bits_corrupt)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6051: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6051, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->__PVT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->__PVT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6075: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6075, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6099: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6099, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSelf->__PVT__monitor_io_in_d_bits_sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSelf->__PVT__monitor_io_in_d_bits_sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6123: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6123, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6147: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6147, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6171: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6171, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6195: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6195, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt)) 
                               | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_bits_corrupt)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt)) 
                               | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_bits_corrupt)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6219: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6219, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6243: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6243, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSelf->__PVT__monitor_io_in_d_bits_sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSelf->__PVT__monitor_io_in_d_bits_sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6267: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6267, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6291: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6291, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6315: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6315, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6339: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6339, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__monitor_io_in_d_bits_denied)) 
                            | (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt)) 
                               | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_bits_corrupt)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__monitor_io_in_d_bits_denied)) 
                            | (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt)) 
                               | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_bits_corrupt)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6363: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6363, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6387: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6387, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6411: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6411, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt)) 
                               | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_bits_corrupt)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt)) 
                               | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_bits_corrupt)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6435: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6435, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6459: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6459, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6483: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6483, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__monitor_io_in_d_bits_denied)) 
                            | (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt)) 
                               | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_bits_corrupt)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->__PVT__monitor_io_in_d_bits_denied)) 
                            | (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt)) 
                               | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_bits_corrupt)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6507: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6507, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6531: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6531, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6555: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6555, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt)) 
                               | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_bits_corrupt)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt)) 
                               | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_bits_corrupt)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6579: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6579, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6603: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6603, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6627: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6627, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6651: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6651, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                            == vlSelf->__PVT__monitor__DOT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                            == vlSelf->__PVT__monitor__DOT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6675: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6675, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6699: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6699, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__param_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__param_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6723: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6723, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6747: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6747, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6771: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6771, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_sink) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_sink) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__sink)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6795: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6795, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6819: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6819, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6843: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6843, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                                & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6867: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6867, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6891: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6891, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6915: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6915, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode) 
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
                            | ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode) 
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
                            | ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6939: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6939, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__monitor__DOT__inflight_sizes 
                                                     >> 
                                                     ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__monitor__DOT__inflight_sizes 
                                                     >> 
                                                     ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6963: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6963, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))) 
                      & (6U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_d_ready)) 
                            | (IData)(vlSelf->__PVT__monitor_io_in_a_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid)) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))) 
                      & (6U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_d_ready)) 
                            | (IData)(vlSelf->__PVT__monitor_io_in_a_ready)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6985: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 6985, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__inflight)))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7009: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 7009, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7033: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 7033, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__monitor__DOT__inflight_sizes_1 
                                                     >> 
                                                     ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((((0x3fU 
                                                  >= 
                                                  ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                   << 2U))
                                                  ? 
                                                 (0xfULL 
                                                  & (vlSelf->__PVT__monitor__DOT__inflight_sizes_1 
                                                     >> 
                                                     ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                      << 2U)))
                                                  : 0ULL) 
                                                >> 1U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7057: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 7057, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__inflight_1)))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7081: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 7081, "");
    }
    vlSelf->__PVT__monitor__DOT__inflight_opcodes = 
        ((IData)(vlSymsp->TOP.reset) ? 0ULL : vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2);
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__state_1 = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__beatsLeft))) {
        vlSelf->__PVT__state_1 = vlSelf->__PVT__earlyWinner_1;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__state_0 = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__beatsLeft))) {
        vlSelf->__PVT__state_0 = vlSelf->__PVT__earlyWinner_0;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__readys_mask = 3U;
    } else if (((IData)(vlSelf->__PVT__latch) & (0U 
                                                 != (IData)(vlSelf->__PVT__readys_filter_lo)))) {
        vlSelf->__PVT__readys_mask = ((IData)(vlSelf->__PVT___readys_mask_T) 
                                      | (2U & ((IData)(vlSelf->__PVT___readys_mask_T) 
                                               << 1U)));
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
                        ? ((1U & (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->__PVT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__monitor__DOT__d_first_counter_1 
            = (0xfU & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_1)
                        ? ((1U & (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__param_1 = vlSelf->__PVT__monitor_io_in_d_bits_param;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__sink = vlSelf->__PVT__monitor_io_in_d_bits_sink;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__denied = vlSelf->__PVT__monitor_io_in_d_bits_denied;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__size_1 = vlSelf->__PVT__monitor_io_in_d_bits_size;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__opcode_1 = vlSelf->__PVT__monitor_io_in_d_bits_opcode;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__source_1 = vlSelf->__PVT__monitor_io_in_d_bits_source;
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
    vlSelf->__PVT__beatsLeft = ((IData)(vlSymsp->TOP.reset)
                                 ? 0U : (0xfU & ((IData)(vlSelf->__PVT__latch)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__earlyWinner_0)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_opcode))
                                                     ? 
                                                    (~ 
                                                     (0x7ffU 
                                                      & (((IData)(0x3fU) 
                                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_size)) 
                                                         >> 2U)))
                                                     : 0U)
                                                    : 0U) 
                                                  | ((IData)(vlSelf->__PVT__earlyWinner_1)
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_bits_opcode))
                                                       ? 
                                                      (~ 
                                                       (0x7ffU 
                                                        & (((IData)(0x3fU) 
                                                            << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_bits_size)) 
                                                           >> 2U)))
                                                       : 0U)
                                                      : 0U))
                                                  : (IData)(vlSelf->__PVT___beatsLeft_T_4))));
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
                        ? ((1U & (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
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

VL_INLINE_OPT void VysyxSoCFull_TLXbar_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__5(VysyxSoCFull_TLXbar_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__5\n"); );
    // Body
    vlSelf->__PVT__monitor__DOT__source_ok = 1U;
    vlSelf->__PVT__requestAIO_0_0 = ((0ULL == (0xc0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))) 
                                     | (0ULL == (0x80000000ULL 
                                                 & (QData)((IData)(
                                                                   (0x80000000U 
                                                                    ^ vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))));
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

VL_INLINE_OPT void VysyxSoCFull_TLXbar_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__6(VysyxSoCFull_TLXbar_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_1___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__6\n"); );
    // Body
    vlSelf->auto_out_1_a_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                                  & (0ULL == (0xc0000000ULL 
                                              & (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
    vlSelf->auto_out_0_a_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid) 
                                  & (IData)(vlSelf->__PVT__requestAIO_0_0));
}

VL_INLINE_OPT void VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__14(VysyxSoCFull_TLXbar_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__14\n"); );
    // Variables
    CData/*3:0*/ __PVT___T_36;
    CData/*3:0*/ __PVT___T_37;
    CData/*5:0*/ __PVT___T_33;
    CData/*2:0*/ __PVT___T_39;
    CData/*2:0*/ __PVT___T_40;
    CData/*2:0*/ __PVT___T_45;
    CData/*2:0*/ __PVT___T_46;
    // Body
    vlSelf->__PVT___T_10 = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_valid) 
                            | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_valid));
    vlSelf->__PVT___sink_ACancel_earlyValid_T_3 = (
                                                   ((IData)(vlSelf->__PVT__state_0) 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_valid)) 
                                                   | ((IData)(vlSelf->__PVT__state_1) 
                                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_valid)));
    vlSelf->__PVT__readys_filter_lo = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_valid) 
                                        << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_valid));
    if ((0U == (IData)(vlSelf->__PVT__beatsLeft))) {
        vlSelf->__PVT__monitor_io_in_d_valid = vlSelf->__PVT___T_10;
        vlSelf->auto_in_d_valid = vlSelf->__PVT___T_10;
    } else {
        vlSelf->__PVT__monitor_io_in_d_valid = vlSelf->__PVT___sink_ACancel_earlyValid_T_3;
        vlSelf->auto_in_d_valid = vlSelf->__PVT___sink_ACancel_earlyValid_T_3;
    }
    vlSelf->__PVT__readys_filter = ((((IData)(vlSelf->__PVT__readys_filter_lo) 
                                      & (~ (IData)(vlSelf->__PVT__readys_mask))) 
                                     << 2U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_valid) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_valid)));
    vlSelf->__PVT__readys_unready = ((7U & (((IData)(vlSelf->__PVT__readys_filter) 
                                             >> 1U) 
                                            | (3U & 
                                               ((IData)(vlSelf->__PVT__readys_filter) 
                                                >> 2U)))) 
                                     | ((IData)(vlSelf->__PVT__readys_mask) 
                                        << 2U));
    vlSelf->__PVT___readys_readys_T_2 = (3U & (((IData)(vlSelf->__PVT__readys_unready) 
                                                >> 2U) 
                                               & (IData)(vlSelf->__PVT__readys_unready)));
    vlSelf->__PVT___readys_mask_T = ((~ (IData)(vlSelf->__PVT___readys_readys_T_2)) 
                                     & (IData)(vlSelf->__PVT__readys_filter_lo));
    vlSelf->__PVT__earlyWinner_1 = ((~ ((IData)(vlSelf->__PVT___readys_readys_T_2) 
                                        >> 1U)) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_valid));
    vlSelf->__PVT__earlyWinner_0 = ((~ (IData)(vlSelf->__PVT___readys_readys_T_2)) 
                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_valid));
    if ((0U == (IData)(vlSelf->__PVT__beatsLeft))) {
        vlSelf->__PVT__muxStateEarly_1 = vlSelf->__PVT__earlyWinner_1;
        vlSelf->__PVT__muxStateEarly_0 = vlSelf->__PVT__earlyWinner_0;
    } else {
        vlSelf->__PVT__muxStateEarly_1 = vlSelf->__PVT__state_1;
        vlSelf->__PVT__muxStateEarly_0 = vlSelf->__PVT__state_0;
    }
    if (vlSelf->__PVT__muxStateEarly_1) {
        __PVT___T_37 = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__muxStateEarly_1)
                         ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__a__DOT__ram_source
                        [0U] : 0U);
        __PVT___T_40 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_bits_size;
        __PVT___T_46 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_bits_opcode;
    } else {
        __PVT___T_37 = 0U;
        __PVT___T_40 = 0U;
        __PVT___T_46 = 0U;
    }
    if (vlSelf->__PVT__muxStateEarly_0) {
        vlSelf->auto_in_d_bits_param = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_param;
        vlSelf->__PVT__monitor_io_in_d_bits_param = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_param;
    } else {
        vlSelf->auto_in_d_bits_param = 0U;
        vlSelf->__PVT__monitor_io_in_d_bits_param = 0U;
    }
    vlSelf->__PVT__monitor_io_in_d_bits_denied = (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_denied)) 
                                                  | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_bits_denied)));
    if (vlSelf->__PVT__muxStateEarly_0) {
        vlSelf->auto_in_d_bits_data = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                                        ? 0U : vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg);
        __PVT___T_33 = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                         ? 0U : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_sink));
    } else {
        vlSelf->auto_in_d_bits_data = 0U;
        __PVT___T_33 = 0U;
    }
    vlSelf->auto_in_d_bits_denied = (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_denied)) 
                                     | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_bits_denied)));
    vlSelf->auto_in_d_bits_corrupt = (((IData)(vlSelf->__PVT__muxStateEarly_0) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt)) 
                                      | ((IData)(vlSelf->__PVT__muxStateEarly_1) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_bits_corrupt)));
    if (vlSelf->__PVT__muxStateEarly_0) {
        __PVT___T_36 = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                         ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_source)
                         : (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source));
        __PVT___T_39 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_size;
        __PVT___T_45 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_opcode;
    } else {
        __PVT___T_36 = 0U;
        __PVT___T_39 = 0U;
        __PVT___T_45 = 0U;
    }
    vlSelf->auto_in_d_bits_sink = ((IData)(__PVT___T_33) 
                                   | ((IData)(vlSelf->__PVT__muxStateEarly_1)
                                       ? 0x20U : 0U));
    vlSelf->__PVT__monitor_io_in_d_bits_sink = ((IData)(__PVT___T_33) 
                                                | ((IData)(vlSelf->__PVT__muxStateEarly_1)
                                                    ? 0x20U
                                                    : 0U));
    vlSelf->__PVT__monitor_io_in_d_bits_source = ((IData)(__PVT___T_36) 
                                                  | (IData)(__PVT___T_37));
    vlSelf->auto_in_d_bits_source = ((IData)(__PVT___T_36) 
                                     | (IData)(__PVT___T_37));
    vlSelf->__PVT__monitor_io_in_d_bits_size = ((IData)(__PVT___T_39) 
                                                | (IData)(__PVT___T_40));
    vlSelf->auto_in_d_bits_size = ((IData)(__PVT___T_39) 
                                   | (IData)(__PVT___T_40));
    vlSelf->__PVT__monitor_io_in_d_bits_opcode = ((IData)(__PVT___T_45) 
                                                  | (IData)(__PVT___T_46));
    vlSelf->auto_in_d_bits_opcode = ((IData)(__PVT___T_45) 
                                     | (IData)(__PVT___T_46));
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

VL_INLINE_OPT void VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__15(VysyxSoCFull_TLXbar_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__15\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp32;
    VlWide<5>/*159:0*/ __Vtemp33;
    VlWide<5>/*159:0*/ __Vtemp39;
    VlWide<5>/*159:0*/ __Vtemp40;
    // Body
    vlSelf->__PVT__latch = ((0U == (IData)(vlSelf->__PVT__beatsLeft)) 
                            & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_d_ready));
    vlSelf->__PVT___beatsLeft_T_4 = (0xfU & ((IData)(vlSelf->__PVT__beatsLeft) 
                                             - ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_d_ready) 
                                                & ((0U 
                                                    == (IData)(vlSelf->__PVT__beatsLeft))
                                                    ? (IData)(vlSelf->__PVT___T_10)
                                                    : (IData)(vlSelf->__PVT___sink_ACancel_earlyValid_T_3)))));
    vlSelf->__PVT__monitor__DOT___d_first_T = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_d_ready) 
                                               & (IData)(vlSelf->__PVT__monitor_io_in_d_valid));
    vlSelf->auto_out_1_d_ready = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_d_ready) 
                                  & ((0U == (IData)(vlSelf->__PVT__beatsLeft))
                                      ? (~ ((IData)(vlSelf->__PVT___readys_readys_T_2) 
                                            >> 1U))
                                      : (IData)(vlSelf->__PVT__state_1)));
    vlSelf->auto_out_0_d_ready = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_d_ready) 
                                  & ((0U == (IData)(vlSelf->__PVT__beatsLeft))
                                      ? (~ (IData)(vlSelf->__PVT___readys_readys_T_2))
                                      : (IData)(vlSelf->__PVT__state_0)));
    vlSelf->__PVT__monitor__DOT___inflight_T_5 = ((IData)(vlSelf->__PVT__monitor__DOT__inflight_1) 
                                                  & (~ 
                                                     ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                                        & (0U 
                                                           == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                                                       & (6U 
                                                          == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode)))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))
                                                       : 0U)));
    __Vtemp32[0U] = 0xfU;
    __Vtemp32[1U] = 0U;
    __Vtemp32[2U] = 0U;
    __Vtemp32[3U] = 0U;
    __Vtemp32[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp33, __Vtemp32, 
                  ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes_1 
           & (~ (((QData)((IData)(((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                     & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                                    & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode)))
                                    ? __Vtemp33[1U]
                                    : 0U))) << 0x20U) 
                 | (QData)((IData)(((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode)))
                                     ? __Vtemp33[0U]
                                     : 0U))))));
    __Vtemp39[0U] = 0xfU;
    __Vtemp39[1U] = 0U;
    __Vtemp39[2U] = 0U;
    __Vtemp39[3U] = 0U;
    __Vtemp39[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp40, __Vtemp39, 
                  ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                   << 2U));
    if ((((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
         & (6U != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode)))) {
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

VL_INLINE_OPT void VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__17(VysyxSoCFull_TLXbar_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_1___settle__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__17\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp46;
    VlWide<5>/*159:0*/ __Vtemp47;
    VlWide<5>/*159:0*/ __Vtemp53;
    VlWide<5>/*159:0*/ __Vtemp54;
    // Body
    vlSelf->__PVT__monitor_io_in_a_ready = (((IData)(vlSelf->__PVT__requestAIO_0_0) 
                                             & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_a_ready)) 
                                            | ((0ULL 
                                                == 
                                                (0xc0000000ULL 
                                                 & (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))) 
                                               & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__a__DOT__maybe_full))));
    vlSelf->auto_in_a_ready = (((IData)(vlSelf->__PVT__requestAIO_0_0) 
                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_a_ready)) 
                               | ((0ULL == (0xc0000000ULL 
                                            & (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))) 
                                  & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__a__DOT__maybe_full))));
    vlSelf->__PVT__monitor__DOT___a_first_T = ((IData)(vlSelf->__PVT__monitor_io_in_a_ready) 
                                               & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_out_a_valid));
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
                                                             != (IData)(vlSelf->__PVT__monitor_io_in_d_bits_opcode)))
                                                          ? 
                                                         ((IData)(1U) 
                                                          << (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))
                                                          : 0U))));
}
