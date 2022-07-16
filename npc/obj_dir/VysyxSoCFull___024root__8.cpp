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

VL_INLINE_OPT void VysyxSoCFull___024root___sequent__TOP__29(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___sequent__TOP__29\n"); );
    // Variables
    VlWide<8>/*255:0*/ __Vtemp2666;
    VlWide<8>/*255:0*/ __Vtemp2667;
    VlWide<8>/*255:0*/ __Vtemp2670;
    VlWide<8>/*255:0*/ __Vtemp2671;
    VlWide<8>/*255:0*/ __Vtemp2674;
    VlWide<8>/*255:0*/ __Vtemp2675;
    VlWide<8>/*255:0*/ __Vtemp2678;
    VlWide<8>/*255:0*/ __Vtemp2679;
    VlWide<8>/*255:0*/ __Vtemp2682;
    VlWide<8>/*255:0*/ __Vtemp2683;
    VlWide<8>/*255:0*/ __Vtemp2686;
    VlWide<8>/*255:0*/ __Vtemp2687;
    VlWide<8>/*255:0*/ __Vtemp2690;
    VlWide<8>/*255:0*/ __Vtemp2691;
    VlWide<8>/*255:0*/ __Vtemp2694;
    VlWide<8>/*255:0*/ __Vtemp2695;
    VlWide<16>/*511:0*/ __Vtemp2696;
    VlWide<16>/*511:0*/ __Vtemp2699;
    VlWide<16>/*511:0*/ __Vtemp2700;
    VlWide<16>/*511:0*/ __Vtemp2701;
    VlWide<16>/*511:0*/ __Vtemp2704;
    VlWide<16>/*511:0*/ __Vtemp2705;
    VlWide<16>/*511:0*/ __Vtemp2706;
    VlWide<16>/*511:0*/ __Vtemp2709;
    VlWide<16>/*511:0*/ __Vtemp2710;
    VlWide<16>/*511:0*/ __Vtemp2711;
    VlWide<16>/*511:0*/ __Vtemp2714;
    VlWide<16>/*511:0*/ __Vtemp2715;
    VlWide<8>/*255:0*/ __Vtemp2718;
    VlWide<8>/*255:0*/ __Vtemp2719;
    VlWide<8>/*255:0*/ __Vtemp2722;
    VlWide<8>/*255:0*/ __Vtemp2723;
    VlWide<8>/*255:0*/ __Vtemp2726;
    VlWide<8>/*255:0*/ __Vtemp2727;
    VlWide<8>/*255:0*/ __Vtemp2730;
    VlWide<8>/*255:0*/ __Vtemp2731;
    VlWide<8>/*255:0*/ __Vtemp2734;
    VlWide<8>/*255:0*/ __Vtemp2735;
    VlWide<8>/*255:0*/ __Vtemp2738;
    VlWide<8>/*255:0*/ __Vtemp2739;
    VlWide<8>/*255:0*/ __Vtemp2742;
    VlWide<8>/*255:0*/ __Vtemp2743;
    VlWide<8>/*255:0*/ __Vtemp2746;
    VlWide<8>/*255:0*/ __Vtemp2747;
    VlWide<8>/*255:0*/ __Vtemp2748;
    VlWide<8>/*255:0*/ __Vtemp2751;
    VlWide<8>/*255:0*/ __Vtemp2752;
    VlWide<8>/*255:0*/ __Vtemp2753;
    VlWide<8>/*255:0*/ __Vtemp2756;
    VlWide<8>/*255:0*/ __Vtemp2757;
    VlWide<8>/*255:0*/ __Vtemp2758;
    VlWide<8>/*255:0*/ __Vtemp2761;
    VlWide<8>/*255:0*/ __Vtemp2762;
    VlWide<8>/*255:0*/ __Vtemp2763;
    VlWide<8>/*255:0*/ __Vtemp2766;
    VlWide<8>/*255:0*/ __Vtemp2767;
    // Body
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133315: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133315, "");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133339: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133339, "");
    }
    __Vtemp2666[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2666[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2666[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2666[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2666[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2666[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2666[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2666[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp2667, __Vtemp2666);
    __Vtemp2670[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2670[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2670[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2670[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2670[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2670[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2670[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2670[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp2671, __Vtemp2670);
    __Vtemp2674[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2674[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2674[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2674[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2674[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2674[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2674[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2674[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp2675, __Vtemp2674);
    __Vtemp2678[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2678[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2678[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2678[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2678[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2678[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2678[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2678[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp2679, __Vtemp2678);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode) 
                             == ((7U == (7U & __Vtemp2667[0U]))
                                  ? 4U : ((6U == (7U 
                                                  & __Vtemp2671[0U]))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode) 
                               == ((7U == (7U & __Vtemp2675[0U]))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              __Vtemp2679[0U]))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp2682[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2682[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2682[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2682[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2682[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2682[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2682[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2682[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp2683, __Vtemp2682);
    __Vtemp2686[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2686[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2686[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2686[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2686[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2686[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2686[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2686[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp2687, __Vtemp2686);
    __Vtemp2690[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2690[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2690[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2690[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2690[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2690[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2690[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2690[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp2691, __Vtemp2690);
    __Vtemp2694[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2694[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2694[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2694[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2694[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2694[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2694[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2694[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp2695, __Vtemp2694);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode) 
                             == ((7U == (7U & __Vtemp2683[0U]))
                                  ? 4U : ((6U == (7U 
                                                  & __Vtemp2687[0U]))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode) 
                               == ((7U == (7U & __Vtemp2691[0U]))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              __Vtemp2695[0U]))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133363: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133363, "");
    }
    VL_SHIFTR_WWI(512,512,9, __Vtemp2696, vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                   << 3U));
    __Vtemp2699[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[1U] 
                            & __Vtemp2696[1U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0U] 
                              & __Vtemp2696[0U]) >> 1U)));
    __Vtemp2699[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[2U] 
                            & __Vtemp2696[2U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[1U] 
                              & __Vtemp2696[1U]) >> 1U)));
    __Vtemp2699[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[3U] 
                            & __Vtemp2696[3U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[2U] 
                              & __Vtemp2696[2U]) >> 1U)));
    __Vtemp2699[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[4U] 
                            & __Vtemp2696[4U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[3U] 
                              & __Vtemp2696[3U]) >> 1U)));
    __Vtemp2699[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[5U] 
                            & __Vtemp2696[5U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[4U] 
                              & __Vtemp2696[4U]) >> 1U)));
    __Vtemp2699[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[6U] 
                            & __Vtemp2696[6U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[5U] 
                              & __Vtemp2696[5U]) >> 1U)));
    __Vtemp2699[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[7U] 
                            & __Vtemp2696[7U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[6U] 
                              & __Vtemp2696[6U]) >> 1U)));
    __Vtemp2699[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[8U] 
                            & __Vtemp2696[8U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[7U] 
                              & __Vtemp2696[7U]) >> 1U)));
    __Vtemp2699[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[9U] 
                            & __Vtemp2696[9U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[8U] 
                              & __Vtemp2696[8U]) >> 1U)));
    __Vtemp2699[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xaU] 
                            & __Vtemp2696[0xaU]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[9U] 
                              & __Vtemp2696[9U]) >> 1U)));
    __Vtemp2699[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xbU] 
                              & __Vtemp2696[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xaU] 
                                           & __Vtemp2696[0xaU]) 
                                          >> 1U)));
    __Vtemp2699[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xcU] 
                              & __Vtemp2696[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xbU] 
                                           & __Vtemp2696[0xbU]) 
                                          >> 1U)));
    __Vtemp2699[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xdU] 
                              & __Vtemp2696[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xcU] 
                                           & __Vtemp2696[0xcU]) 
                                          >> 1U)));
    __Vtemp2699[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xeU] 
                              & __Vtemp2696[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xdU] 
                                           & __Vtemp2696[0xdU]) 
                                          >> 1U)));
    __Vtemp2699[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xfU] 
                              & __Vtemp2696[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xeU] 
                                           & __Vtemp2696[0xeU]) 
                                          >> 1U)));
    __Vtemp2699[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xfU] 
                             & __Vtemp2696[0xfU]) >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2700, __Vtemp2699);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size) 
                            == (0xffU & __Vtemp2700[0U])) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(512,512,9, __Vtemp2701, vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                   << 3U));
    __Vtemp2704[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[1U] 
                            & __Vtemp2701[1U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0U] 
                              & __Vtemp2701[0U]) >> 1U)));
    __Vtemp2704[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[2U] 
                            & __Vtemp2701[2U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[1U] 
                              & __Vtemp2701[1U]) >> 1U)));
    __Vtemp2704[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[3U] 
                            & __Vtemp2701[3U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[2U] 
                              & __Vtemp2701[2U]) >> 1U)));
    __Vtemp2704[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[4U] 
                            & __Vtemp2701[4U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[3U] 
                              & __Vtemp2701[3U]) >> 1U)));
    __Vtemp2704[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[5U] 
                            & __Vtemp2701[5U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[4U] 
                              & __Vtemp2701[4U]) >> 1U)));
    __Vtemp2704[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[6U] 
                            & __Vtemp2701[6U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[5U] 
                              & __Vtemp2701[5U]) >> 1U)));
    __Vtemp2704[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[7U] 
                            & __Vtemp2701[7U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[6U] 
                              & __Vtemp2701[6U]) >> 1U)));
    __Vtemp2704[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[8U] 
                            & __Vtemp2701[8U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[7U] 
                              & __Vtemp2701[7U]) >> 1U)));
    __Vtemp2704[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[9U] 
                            & __Vtemp2701[9U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[8U] 
                              & __Vtemp2701[8U]) >> 1U)));
    __Vtemp2704[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xaU] 
                            & __Vtemp2701[0xaU]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[9U] 
                              & __Vtemp2701[9U]) >> 1U)));
    __Vtemp2704[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xbU] 
                              & __Vtemp2701[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xaU] 
                                           & __Vtemp2701[0xaU]) 
                                          >> 1U)));
    __Vtemp2704[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xcU] 
                              & __Vtemp2701[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xbU] 
                                           & __Vtemp2701[0xbU]) 
                                          >> 1U)));
    __Vtemp2704[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xdU] 
                              & __Vtemp2701[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xcU] 
                                           & __Vtemp2701[0xcU]) 
                                          >> 1U)));
    __Vtemp2704[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xeU] 
                              & __Vtemp2701[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xdU] 
                                           & __Vtemp2701[0xdU]) 
                                          >> 1U)));
    __Vtemp2704[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xfU] 
                              & __Vtemp2701[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xeU] 
                                           & __Vtemp2701[0xeU]) 
                                          >> 1U)));
    __Vtemp2704[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xfU] 
                             & __Vtemp2701[0xfU]) >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2705, __Vtemp2704);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size) 
                            == (0xffU & __Vtemp2705[0U])) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133387: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133387, "");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133409: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133409, "");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133433: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133433, "");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133457: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133457, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610)) 
                     & (~ ((~ (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_1 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel re-used a source ID (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610)) 
                     & (~ ((~ (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_1 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133481: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133481, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_1 
                                     >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))) 
                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_1 
                                     >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))) 
                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133505: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133505, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133529: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133529, "");
    }
    VL_SHIFTR_WWI(512,512,9, __Vtemp2706, vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                   << 3U));
    __Vtemp2709[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[1U] 
                            & __Vtemp2706[1U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0U] 
                              & __Vtemp2706[0U]) >> 1U)));
    __Vtemp2709[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[2U] 
                            & __Vtemp2706[2U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[1U] 
                              & __Vtemp2706[1U]) >> 1U)));
    __Vtemp2709[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[3U] 
                            & __Vtemp2706[3U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[2U] 
                              & __Vtemp2706[2U]) >> 1U)));
    __Vtemp2709[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[4U] 
                            & __Vtemp2706[4U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[3U] 
                              & __Vtemp2706[3U]) >> 1U)));
    __Vtemp2709[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[5U] 
                            & __Vtemp2706[5U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[4U] 
                              & __Vtemp2706[4U]) >> 1U)));
    __Vtemp2709[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[6U] 
                            & __Vtemp2706[6U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[5U] 
                              & __Vtemp2706[5U]) >> 1U)));
    __Vtemp2709[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[7U] 
                            & __Vtemp2706[7U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[6U] 
                              & __Vtemp2706[6U]) >> 1U)));
    __Vtemp2709[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[8U] 
                            & __Vtemp2706[8U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[7U] 
                              & __Vtemp2706[7U]) >> 1U)));
    __Vtemp2709[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[9U] 
                            & __Vtemp2706[9U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[8U] 
                              & __Vtemp2706[8U]) >> 1U)));
    __Vtemp2709[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xaU] 
                            & __Vtemp2706[0xaU]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[9U] 
                              & __Vtemp2706[9U]) >> 1U)));
    __Vtemp2709[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xbU] 
                              & __Vtemp2706[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xaU] 
                                           & __Vtemp2706[0xaU]) 
                                          >> 1U)));
    __Vtemp2709[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xcU] 
                              & __Vtemp2706[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xbU] 
                                           & __Vtemp2706[0xbU]) 
                                          >> 1U)));
    __Vtemp2709[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xdU] 
                              & __Vtemp2706[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xcU] 
                                           & __Vtemp2706[0xcU]) 
                                          >> 1U)));
    __Vtemp2709[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xeU] 
                              & __Vtemp2706[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xdU] 
                                           & __Vtemp2706[0xdU]) 
                                          >> 1U)));
    __Vtemp2709[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xfU] 
                              & __Vtemp2706[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xeU] 
                                           & __Vtemp2706[0xeU]) 
                                          >> 1U)));
    __Vtemp2709[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xfU] 
                             & __Vtemp2706[0xfU]) >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2710, __Vtemp2709);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610)) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size) 
                            == (0xffU & __Vtemp2710[0U])) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(512,512,9, __Vtemp2711, vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                   << 3U));
    __Vtemp2714[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[1U] 
                            & __Vtemp2711[1U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0U] 
                              & __Vtemp2711[0U]) >> 1U)));
    __Vtemp2714[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[2U] 
                            & __Vtemp2711[2U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[1U] 
                              & __Vtemp2711[1U]) >> 1U)));
    __Vtemp2714[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[3U] 
                            & __Vtemp2711[3U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[2U] 
                              & __Vtemp2711[2U]) >> 1U)));
    __Vtemp2714[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[4U] 
                            & __Vtemp2711[4U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[3U] 
                              & __Vtemp2711[3U]) >> 1U)));
    __Vtemp2714[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[5U] 
                            & __Vtemp2711[5U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[4U] 
                              & __Vtemp2711[4U]) >> 1U)));
    __Vtemp2714[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[6U] 
                            & __Vtemp2711[6U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[5U] 
                              & __Vtemp2711[5U]) >> 1U)));
    __Vtemp2714[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[7U] 
                            & __Vtemp2711[7U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[6U] 
                              & __Vtemp2711[6U]) >> 1U)));
    __Vtemp2714[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[8U] 
                            & __Vtemp2711[8U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[7U] 
                              & __Vtemp2711[7U]) >> 1U)));
    __Vtemp2714[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[9U] 
                            & __Vtemp2711[9U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[8U] 
                              & __Vtemp2711[8U]) >> 1U)));
    __Vtemp2714[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xaU] 
                            & __Vtemp2711[0xaU]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[9U] 
                              & __Vtemp2711[9U]) >> 1U)));
    __Vtemp2714[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xbU] 
                              & __Vtemp2711[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xaU] 
                                           & __Vtemp2711[0xaU]) 
                                          >> 1U)));
    __Vtemp2714[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xcU] 
                              & __Vtemp2711[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xbU] 
                                           & __Vtemp2711[0xbU]) 
                                          >> 1U)));
    __Vtemp2714[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xdU] 
                              & __Vtemp2711[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xcU] 
                                           & __Vtemp2711[0xcU]) 
                                          >> 1U)));
    __Vtemp2714[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xeU] 
                              & __Vtemp2711[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xdU] 
                                           & __Vtemp2711[0xdU]) 
                                          >> 1U)));
    __Vtemp2714[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xfU] 
                              & __Vtemp2711[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xeU] 
                                           & __Vtemp2711[0xeU]) 
                                          >> 1U)));
    __Vtemp2714[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_ffd88623_0[0xfU] 
                             & __Vtemp2711[0xfU]) >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2715, __Vtemp2714);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610)) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size) 
                            == (0xffU & __Vtemp2715[0U])) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133553: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133553, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid)) 
                       & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor_io_in_c_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid)) 
                       & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor_io_in_c_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133575: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133575, "");
    }
    if (VL_UNLIKELY(((0U != ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                               & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610))
                              ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source))
                              : 0ULL)) & (~ ((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610))
                                                ? (1ULL 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source))
                                                : 0ULL) 
                                              != ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                                                    & (0U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                   & (6U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                                   ? 
                                                  (1ULL 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))
                                                   : 0ULL)) 
                                             | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((0U != ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                               & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610))
                              ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source))
                              : 0ULL)) & (~ ((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1))) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610))
                                                ? (1ULL 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source))
                                                : 0ULL) 
                                              != ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                                                    & (0U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                   & (6U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                                   ? 
                                                  (1ULL 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))
                                                   : 0ULL)) 
                                             | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133599: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133599, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_1))) 
                                | (0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__watchdog_1 
                                  < vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_1))) 
                                | (0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__watchdog_1 
                                  < vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133623: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133623, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_3))) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2681)) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_3))) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2681)) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133647: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133647, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_valid)) 
                     & (~ (((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___GEN_84) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_2))) 
                            >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:170:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_valid)) 
                     & (~ (((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___GEN_84) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_2))) 
                            >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:133671: Assertion failed in %NysyxSoCFull.fpga.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 133671, "");
    }
    if (VL_UNLIKELY((1U & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__idle) 
                               | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__counter))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Error.scala:49 assert (idle || da_first) // we only send Grant, never GrantData => simplified flow control below\n");
    }
    if (VL_UNLIKELY((1U & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__idle) 
                               | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__counter))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:113620: Assertion failed in %NysyxSoCFull.fpga.err\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 113620, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:105 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:113644: Assertion failed in %NysyxSoCFull.fpga.err\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 113644, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_valid))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_valid))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:113668: Assertion failed in %NysyxSoCFull.fpga.err\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 113668, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_valid))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_21)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_valid))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_21)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:113692: Assertion failed in %NysyxSoCFull.fpga.err\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 113692, "");
    }
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data__v0 = 0U;
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:17700: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 17700, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                           >> 3U))) 
                             & (6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)))) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_282)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                           >> 3U))) 
                             & (6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)))) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_282)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:17724: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 17724, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:17748: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 17748, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:17772: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 17772, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:17796: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 17796, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:17820: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 17820, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                                               ? ((8U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                      >> 0x18U)) 
                                                  | ((4U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                         >> 0x10U)) 
                                                     | ((2U 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                            >> 8U)) 
                                                        | (1U 
                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                                               : ((
                                                   (8U 
                                                    & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                                        << 3U) 
                                                       | (0xfffffff8U 
                                                          & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                              << 2U) 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                                << 3U))))) 
                                                   | (4U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                                          | (IData)(
                                                                    (2U 
                                                                     == 
                                                                     (3U 
                                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                                         << 2U))) 
                                                  | ((2U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                                          | (IData)(
                                                                    (1U 
                                                                     == 
                                                                     (3U 
                                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                                           | (IData)(
                                                                     (0U 
                                                                      == 
                                                                      (3U 
                                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6))))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                                               ? ((8U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                      >> 0x18U)) 
                                                  | ((4U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                         >> 0x10U)) 
                                                     | ((2U 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                            >> 8U)) 
                                                        | (1U 
                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                                               : ((
                                                   (8U 
                                                    & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                                        << 3U) 
                                                       | (0xfffffff8U 
                                                          & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                              << 2U) 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                                << 3U))))) 
                                                   | (4U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                                          | (IData)(
                                                                    (2U 
                                                                     == 
                                                                     (3U 
                                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                                         << 2U))) 
                                                  | ((2U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                                          | (IData)(
                                                                    (1U 
                                                                     == 
                                                                     (3U 
                                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                                           | (IData)(
                                                                     (0U 
                                                                      == 
                                                                      (3U 
                                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6))))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:17844: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 17844, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:17868: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 17868, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                           >> 3U))) 
                             & (6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)))) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_282)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                           >> 3U))) 
                             & (6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)))) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_282)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:17892: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 17892, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:17916: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 17916, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:17940: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 17940, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:17964: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 17964, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:17988: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 17988, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18012: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18012, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                                               ? ((8U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                      >> 0x18U)) 
                                                  | ((4U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                         >> 0x10U)) 
                                                     | ((2U 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                            >> 8U)) 
                                                        | (1U 
                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                                               : ((
                                                   (8U 
                                                    & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                                        << 3U) 
                                                       | (0xfffffff8U 
                                                          & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                              << 2U) 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                                << 3U))))) 
                                                   | (4U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                                          | (IData)(
                                                                    (2U 
                                                                     == 
                                                                     (3U 
                                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                                         << 2U))) 
                                                  | ((2U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                                          | (IData)(
                                                                    (1U 
                                                                     == 
                                                                     (3U 
                                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                                           | (IData)(
                                                                     (0U 
                                                                      == 
                                                                      (3U 
                                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6))))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                                               ? ((8U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                      >> 0x18U)) 
                                                  | ((4U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                         >> 0x10U)) 
                                                     | ((2U 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                            >> 8U)) 
                                                        | (1U 
                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                                               : ((
                                                   (8U 
                                                    & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                                        << 3U) 
                                                       | (0xfffffff8U 
                                                          & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                              << 2U) 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                                << 3U))))) 
                                                   | (4U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                                          | (IData)(
                                                                    (2U 
                                                                     == 
                                                                     (3U 
                                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                                         << 2U))) 
                                                  | ((2U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                                          | (IData)(
                                                                    (1U 
                                                                     == 
                                                                     (3U 
                                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                                           | (IData)(
                                                                     (0U 
                                                                      == 
                                                                      (3U 
                                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6))))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18036: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18036, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18060: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18060, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_282)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_282)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18084: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18084, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18108: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18108, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18132: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18132, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18156: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18156, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                              ? ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                        >> 0x18U)) 
                                 | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 0x10U)) 
                                    | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                              >> 8U)) 
                                       | (1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                              : (((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                          << 3U) | 
                                         (0xfffffff8U 
                                          & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                              << 2U) 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                << 3U))))) 
                                  | (4U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                            | (IData)(
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 2U))) 
                                 | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                            | (IData)(
                                                      (1U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))))))) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                              ? ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                        >> 0x18U)) 
                                 | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 0x10U)) 
                                    | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                              >> 8U)) 
                                       | (1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                              : (((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                          << 3U) | 
                                         (0xfffffff8U 
                                          & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                              << 2U) 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                << 3U))))) 
                                  | (4U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                            | (IData)(
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 2U))) 
                                 | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                            | (IData)(
                                                      (1U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))))))) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18180: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18180, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18204: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18204, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18228: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18228, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18252: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18252, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18276: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18276, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                              ? ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                        >> 0x18U)) 
                                 | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 0x10U)) 
                                    | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                              >> 8U)) 
                                       | (1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                              : (((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                          << 3U) | 
                                         (0xfffffff8U 
                                          & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                              << 2U) 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                << 3U))))) 
                                  | (4U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                            | (IData)(
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 2U))) 
                                 | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                            | (IData)(
                                                      (1U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))))))) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                              ? ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                        >> 0x18U)) 
                                 | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 0x10U)) 
                                    | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                              >> 8U)) 
                                       | (1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                              : (((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                          << 3U) | 
                                         (0xfffffff8U 
                                          & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                              << 2U) 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                << 3U))))) 
                                  | (4U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                            | (IData)(
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 2U))) 
                                 | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                            | (IData)(
                                                      (1U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))))))) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18300: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18300, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18324: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18324, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18348: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18348, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18372: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18372, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18396: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18396, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                                     ? ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                               >> 0x18U)) 
                                        | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                  >> 0x10U)) 
                                           | ((2U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                >> 8U)) 
                                              | (1U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                                     : (((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                                 << 3U) 
                                                | (0xfffffff8U 
                                                   & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                       << 2U) 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                         << 3U))))) 
                                         | (4U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                                   | (IData)(
                                                             (2U 
                                                              == 
                                                              (3U 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                                  << 2U))) 
                                        | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                                   | (IData)(
                                                             (1U 
                                                              == 
                                                              (3U 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                                  << 1U)) 
                                           | (1U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                               | (IData)(
                                                         (0U 
                                                          == 
                                                          (3U 
                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))))))) 
                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                                     ? ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                               >> 0x18U)) 
                                        | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                  >> 0x10U)) 
                                           | ((2U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                >> 8U)) 
                                              | (1U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                                     : (((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                                 << 3U) 
                                                | (0xfffffff8U 
                                                   & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                       << 2U) 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                         << 3U))))) 
                                         | (4U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                                   | (IData)(
                                                             (2U 
                                                              == 
                                                              (3U 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                                  << 2U))) 
                                        | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                                   | (IData)(
                                                             (1U 
                                                              == 
                                                              (3U 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                                  << 1U)) 
                                           | (1U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                               | (IData)(
                                                         (0U 
                                                          == 
                                                          (3U 
                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))))))) 
                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18420: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18420, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                            & ((3U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                            & ((3U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18444: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18444, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18468: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18468, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18492: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18492, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18516: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18516, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                              ? ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                        >> 0x18U)) 
                                 | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 0x10U)) 
                                    | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                              >> 8U)) 
                                       | (1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                              : (((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                          << 3U) | 
                                         (0xfffffff8U 
                                          & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                              << 2U) 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                << 3U))))) 
                                  | (4U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                            | (IData)(
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 2U))) 
                                 | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                            | (IData)(
                                                      (1U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))))))) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                              ? ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                        >> 0x18U)) 
                                 | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 0x10U)) 
                                    | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                              >> 8U)) 
                                       | (1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                              : (((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                          << 3U) | 
                                         (0xfffffff8U 
                                          & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                              << 2U) 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                << 3U))))) 
                                  | (4U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                            | (IData)(
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 2U))) 
                                 | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                            | (IData)(
                                                      (1U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))))))) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18540: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18540, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                            & ((3U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                            & ((3U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18564: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18564, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18588: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18588, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18612: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18612, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18636: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18636, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                              ? ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                        >> 0x18U)) 
                                 | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 0x10U)) 
                                    | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                              >> 8U)) 
                                       | (1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                              : (((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                          << 3U) | 
                                         (0xfffffff8U 
                                          & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                              << 2U) 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                << 3U))))) 
                                  | (4U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                            | (IData)(
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 2U))) 
                                 | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                            | (IData)(
                                                      (1U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))))))) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                              ? ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                        >> 0x18U)) 
                                 | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 0x10U)) 
                                    | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                              >> 8U)) 
                                       | (1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                              : (((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                          << 3U) | 
                                         (0xfffffff8U 
                                          & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                              << 2U) 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                << 3U))))) 
                                  | (4U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                            | (IData)(
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 2U))) 
                                 | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                            | (IData)(
                                                      (1U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))))))) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18660: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18660, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18684: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18684, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18708: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18708, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18732: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18732, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18756: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18756, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                              ? ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                        >> 0x18U)) 
                                 | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 0x10U)) 
                                    | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                              >> 8U)) 
                                       | (1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                              : (((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                          << 3U) | 
                                         (0xfffffff8U 
                                          & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                              << 2U) 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                << 3U))))) 
                                  | (4U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                            | (IData)(
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 2U))) 
                                 | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                            | (IData)(
                                                      (1U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))))))) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                              ? ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                        >> 0x18U)) 
                                 | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 0x10U)) 
                                    | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                              >> 8U)) 
                                       | (1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                              : (((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                          << 3U) | 
                                         (0xfffffff8U 
                                          & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                              << 2U) 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                << 3U))))) 
                                  | (4U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                            | (IData)(
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 2U))) 
                                 | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                            | (IData)(
                                                      (1U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))))))) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18780: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18780, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18804: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18804, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18828: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18828, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18852: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18852, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18876: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18876, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18900: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18900, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18924: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18924, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18948: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18948, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18972: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18972, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:18996: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 18996, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19020: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19020, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19044: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19044, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19068: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19068, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19092: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19092, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19116: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19116, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19140: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19140, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19164: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19164, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19188: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19188, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19212: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19212, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19236: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19236, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19260: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19260, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19284: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19284, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19308: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19308, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19332: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19332, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19356: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19356, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19380: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19380, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19404: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19404, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19428: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19428, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19452: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19452, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19476: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19476, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19500: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19500, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19524: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19524, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19548: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19548, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19572: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19572, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19596: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19596, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19620: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19620, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                 >> 3U))) 
                                   | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                   >> 3U)))) 
                                  | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                  >> 3U)))) 
                                 | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                 >> 3U)))) 
                                | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U)))) 
                               | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                               >> 3U)))) 
                              | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                              >> 3U)))) 
                             | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                             >> 3U)))) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3))) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                 >> 3U))) 
                                   | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                   >> 3U)))) 
                                  | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                  >> 3U)))) 
                                 | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                 >> 3U)))) 
                                | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U)))) 
                               | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                               >> 3U)))) 
                              | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                              >> 3U)))) 
                             | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                             >> 3U)))) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3))) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19644: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19644, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                           >> 3U))) 
                             & (6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3)))) 
                            & ((0ULL == (0x1fffff000ULL 
                                         & (QData)((IData)(
                                                           (0x1000U 
                                                            ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1)))))) 
                               | (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                           >> 3U))) 
                             & (6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3)))) 
                            & ((0ULL == (0x1fffff000ULL 
                                         & (QData)((IData)(
                                                           (0x1000U 
                                                            ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1)))))) 
                               | (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19668: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19668, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19692: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19692, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19716: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19716, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19740: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19740, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid report param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19764: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19764, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                 >> 3U))) 
                                   | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                   >> 3U)))) 
                                  | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                  >> 3U)))) 
                                 | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                 >> 3U)))) 
                                | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U)))) 
                               | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                               >> 3U)))) 
                              | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                              >> 3U)))) 
                             | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                             >> 3U)))) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3))) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                 >> 3U))) 
                                   | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                   >> 3U)))) 
                                  | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                  >> 3U)))) 
                                 | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                 >> 3U)))) 
                                | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U)))) 
                               | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                               >> 3U)))) 
                              | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                              >> 3U)))) 
                             | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                             >> 3U)))) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3))) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19788: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19788, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                           >> 3U))) 
                             & (6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3)))) 
                            & ((0ULL == (0x1fffff000ULL 
                                         & (QData)((IData)(
                                                           (0x1000U 
                                                            ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1)))))) 
                               | (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                           >> 3U))) 
                             & (6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3)))) 
                            & ((0ULL == (0x1fffff000ULL 
                                         & (QData)((IData)(
                                                           (0x1000U 
                                                            ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1)))))) 
                               | (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19812: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19812, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19836: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19836, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19860: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19860, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19884: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19884, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid report param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19908: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19908, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19932: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19932, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19956: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19956, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:19980: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 19980, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20004: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20004, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20028: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20028, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20052: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20052, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20076: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20076, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20100: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20100, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20124: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20124, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20148: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20148, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20172: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20172, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20196: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20196, "");
    }
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.io_deq_valid) 
                     & (~ ((1U > (1U & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                        >> 0x10U))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channels carries invalid sink ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.io_deq_valid) 
                     & (~ ((1U > (1U & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                        >> 0x10U))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20220: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20220, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20244: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20244, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20268: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20268, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter))) 
                     & (~ (((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter))) 
                     & (~ (((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20292: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20292, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20316: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20316, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20340: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20340, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20364: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20364, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20388: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20388, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20412: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20412, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20436: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20436, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20460: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20460, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__opcode_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__opcode_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20484: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20484, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__param_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__param_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20508: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20508, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter))) 
                     & (~ (((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3)) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__size_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter))) 
                     & (~ (((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3)) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__size_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20532: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20532, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20556: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20556, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1) 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__address_2) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1) 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__address_2) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20580: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20580, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1))) 
                     & (~ ((~ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1))) 
                     & (~ ((~ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20604: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20604, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight 
                                     >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))) 
                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight 
                                     >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))) 
                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20628: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20628, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode) 
                             == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_42)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_42))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode) 
                             == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_42)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_42))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20652: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20652, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source)))) 
                     & (~ (((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source)))) 
                     & (~ (((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20676: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20676, "");
    }
    __Vtemp2718[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2718[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2718[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2718[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2718[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2718[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2718[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2718[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp2719, __Vtemp2718);
    __Vtemp2722[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2722[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2722[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2722[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2722[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2722[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2722[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2722[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp2723, __Vtemp2722);
    __Vtemp2726[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2726[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2726[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2726[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2726[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2726[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2726[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2726[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp2727, __Vtemp2726);
    __Vtemp2730[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2730[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2730[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2730[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2730[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2730[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2730[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2730[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp2731, __Vtemp2730);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode) 
                             == ((7U == (7U & __Vtemp2719[0U]))
                                  ? 4U : ((6U == (7U 
                                                  & __Vtemp2723[0U]))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode) 
                               == ((7U == (7U & __Vtemp2727[0U]))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              __Vtemp2731[0U]))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp2734[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2734[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2734[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2734[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2734[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2734[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2734[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2734[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp2735, __Vtemp2734);
    __Vtemp2738[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2738[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2738[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2738[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2738[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2738[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2738[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2738[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp2739, __Vtemp2738);
    __Vtemp2742[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2742[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2742[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2742[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2742[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2742[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2742[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2742[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp2743, __Vtemp2742);
    __Vtemp2746[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2746[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2746[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2746[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2746[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2746[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2746[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2746[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[7U]) 
                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp2747, __Vtemp2746);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode) 
                             == ((7U == (7U & __Vtemp2735[0U]))
                                  ? 4U : ((6U == (7U 
                                                  & __Vtemp2739[0U]))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode) 
                               == ((7U == (7U & __Vtemp2743[0U]))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              __Vtemp2747[0U]))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20700: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20700, "");
    }
    VL_SHIFTR_WWI(256,256,9, __Vtemp2748, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    __Vtemp2751[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & __Vtemp2748[1U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                              & __Vtemp2748[0U]) >> 1U)));
    __Vtemp2751[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & __Vtemp2748[2U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                              & __Vtemp2748[1U]) >> 1U)));
    __Vtemp2751[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & __Vtemp2748[3U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                              & __Vtemp2748[2U]) >> 1U)));
    __Vtemp2751[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & __Vtemp2748[4U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                              & __Vtemp2748[3U]) >> 1U)));
    __Vtemp2751[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & __Vtemp2748[5U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                              & __Vtemp2748[4U]) >> 1U)));
    __Vtemp2751[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & __Vtemp2748[6U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                              & __Vtemp2748[5U]) >> 1U)));
    __Vtemp2751[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & __Vtemp2748[7U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                              & __Vtemp2748[6U]) >> 1U)));
    __Vtemp2751[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & __Vtemp2748[7U]) >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp2752, __Vtemp2751);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size) 
                            == (0xfU & __Vtemp2752[0U])) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(256,256,9, __Vtemp2753, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    __Vtemp2756[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & __Vtemp2753[1U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                              & __Vtemp2753[0U]) >> 1U)));
    __Vtemp2756[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & __Vtemp2753[2U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                              & __Vtemp2753[1U]) >> 1U)));
    __Vtemp2756[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & __Vtemp2753[3U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                              & __Vtemp2753[2U]) >> 1U)));
    __Vtemp2756[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & __Vtemp2753[4U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                              & __Vtemp2753[3U]) >> 1U)));
    __Vtemp2756[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & __Vtemp2753[5U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                              & __Vtemp2753[4U]) >> 1U)));
    __Vtemp2756[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & __Vtemp2753[6U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                              & __Vtemp2753[5U]) >> 1U)));
    __Vtemp2756[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & __Vtemp2753[7U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                              & __Vtemp2753[6U]) >> 1U)));
    __Vtemp2756[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & __Vtemp2753[7U]) >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp2757, __Vtemp2756);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size) 
                            == (0xfU & __Vtemp2757[0U])) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20724: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20724, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid)) 
                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))) 
                      & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid)) 
                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))) 
                      & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20746: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20746, "");
    }
    if (VL_UNLIKELY((1U & (~ (((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_set_wo_ready 
                                != ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))
                                     : 0ULL)) | (~ (IData)(
                                                           (0U 
                                                            != vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_set_wo_ready)))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_set_wo_ready 
                                != ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                     ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))
                                     : 0ULL)) | (~ (IData)(
                                                           (0U 
                                                            != vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_set_wo_ready)))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20770: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20770, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight))) 
                                | (0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__watchdog 
                                  < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight))) 
                                | (0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__watchdog 
                                  < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20794: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20794, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2469)) 
                     & (~ ((~ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_1 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel re-used a source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2469)) 
                     & (~ ((~ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_1 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20818: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20818, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_1 
                                     >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))) 
                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2469)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_1 
                                     >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))) 
                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2469)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20842: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20842, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2469)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size) 
                            == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2469)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size) 
                            == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20866: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20866, "");
    }
    VL_SHIFTR_WWI(256,256,9, __Vtemp2758, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    __Vtemp2761[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & __Vtemp2758[1U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                              & __Vtemp2758[0U]) >> 1U)));
    __Vtemp2761[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & __Vtemp2758[2U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                              & __Vtemp2758[1U]) >> 1U)));
    __Vtemp2761[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & __Vtemp2758[3U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                              & __Vtemp2758[2U]) >> 1U)));
    __Vtemp2761[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & __Vtemp2758[4U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                              & __Vtemp2758[3U]) >> 1U)));
    __Vtemp2761[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & __Vtemp2758[5U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                              & __Vtemp2758[4U]) >> 1U)));
    __Vtemp2761[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & __Vtemp2758[6U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                              & __Vtemp2758[5U]) >> 1U)));
    __Vtemp2761[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & __Vtemp2758[7U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                              & __Vtemp2758[6U]) >> 1U)));
    __Vtemp2761[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & __Vtemp2758[7U]) >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp2762, __Vtemp2761);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2469)) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size) 
                            == (0xfU & __Vtemp2762[0U])) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(256,256,9, __Vtemp2763, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    __Vtemp2766[0U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                            & __Vtemp2763[1U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[0U] 
                              & __Vtemp2763[0U]) >> 1U)));
    __Vtemp2766[1U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                            & __Vtemp2763[2U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[1U] 
                              & __Vtemp2763[1U]) >> 1U)));
    __Vtemp2766[2U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                            & __Vtemp2763[3U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[2U] 
                              & __Vtemp2763[2U]) >> 1U)));
    __Vtemp2766[3U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                            & __Vtemp2763[4U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[3U] 
                              & __Vtemp2763[3U]) >> 1U)));
    __Vtemp2766[4U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                            & __Vtemp2763[5U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[4U] 
                              & __Vtemp2763[4U]) >> 1U)));
    __Vtemp2766[5U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                            & __Vtemp2763[6U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[5U] 
                              & __Vtemp2763[5U]) >> 1U)));
    __Vtemp2766[6U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                            & __Vtemp2763[7U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_57168600_0[6U] 
                              & __Vtemp2763[6U]) >> 1U)));
    __Vtemp2766[7U] = (VysyxSoCFull__ConstPool__CONST_db979007_0[7U] 
                       & ((VysyxSoCFull__ConstPool__CONST_57168600_0[7U] 
                           & __Vtemp2763[7U]) >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp2767, __Vtemp2766);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                      & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2469)) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size) 
                            == (0xfU & __Vtemp2767[0U])) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20890: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20890, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid)) 
                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid)) 
                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20912: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20912, "");
    }
    if (VL_UNLIKELY(((0U != ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                               & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2469))
                              ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T))
                              : 0ULL)) & (~ ((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2469))
                                                ? (1ULL 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T))
                                                : 0ULL) 
                                              != ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                                                    & (0U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                                   & (6U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                                   ? 
                                                  (1ULL 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))
                                                   : 0ULL)) 
                                             | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' and 'D' concurrent, despite minlatency 1 (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((0U != ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                               & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2469))
                              ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T))
                              : 0ULL)) & (~ ((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_valid) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1))) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2469))
                                                ? (1ULL 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T))
                                                : 0ULL) 
                                              != ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                                                    & (0U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2))) 
                                                   & (6U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                                   ? 
                                                  (1ULL 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))
                                                   : 0ULL)) 
                                             | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20936: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20936, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_1))) 
                                | (0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__watchdog_1 
                                  < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_1))) 
                                | (0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__watchdog_1 
                                  < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20960: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20960, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_3))) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2540)) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_3))) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2540)) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:20984: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 20984, "");
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c))) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.io_deq_valid)) 
                     & (~ (((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_84) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_2))) 
                            >> (1U & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                      >> 0x10U))) | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c))) 
                      & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.io_deq_valid)) 
                     & (~ (((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_84) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_2))) 
                            >> (1U & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                      >> 0x10U))) | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:21008: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 21008, "");
    }
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data__v0 = 0U;
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:92760: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 92760, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:92784: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 92784, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:92808: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 92808, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:92832: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 92832, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:92856: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 92856, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:92880: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 92880, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                                               ? ((8U 
                                                   & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                      >> 0x18U)) 
                                                  | ((4U 
                                                      & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                         >> 0x10U)) 
                                                     | ((2U 
                                                         & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                            >> 8U)) 
                                                        | (1U 
                                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                                               : ((
                                                   (8U 
                                                    & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                                        << 3U) 
                                                       | (0xfffffff8U 
                                                          & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                              << 2U) 
                                                             & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                                << 3U))))) 
                                                   | (4U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                                          | (IData)(
                                                                    (2U 
                                                                     == 
                                                                     (3U 
                                                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                                         << 2U))) 
                                                  | ((2U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                                          | (IData)(
                                                                    (1U 
                                                                     == 
                                                                     (3U 
                                                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                                           | (IData)(
                                                                     (0U 
                                                                      == 
                                                                      (3U 
                                                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6))))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                                               ? ((8U 
                                                   & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                      >> 0x18U)) 
                                                  | ((4U 
                                                      & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                         >> 0x10U)) 
                                                     | ((2U 
                                                         & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                            >> 8U)) 
                                                        | (1U 
                                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                                               : ((
                                                   (8U 
                                                    & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                                        << 3U) 
                                                       | (0xfffffff8U 
                                                          & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                              << 2U) 
                                                             & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                                << 3U))))) 
                                                   | (4U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                                          | (IData)(
                                                                    (2U 
                                                                     == 
                                                                     (3U 
                                                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                                         << 2U))) 
                                                  | ((2U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                                          | (IData)(
                                                                    (1U 
                                                                     == 
                                                                     (3U 
                                                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                                           | (IData)(
                                                                     (0U 
                                                                      == 
                                                                      (3U 
                                                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6))))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:92904: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 92904, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:92928: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 92928, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:92952: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 92952, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:92976: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 92976, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93000: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93000, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93024: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93024, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93048: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93048, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93072: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93072, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                                               ? ((8U 
                                                   & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                      >> 0x18U)) 
                                                  | ((4U 
                                                      & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                         >> 0x10U)) 
                                                     | ((2U 
                                                         & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                            >> 8U)) 
                                                        | (1U 
                                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                                               : ((
                                                   (8U 
                                                    & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                                        << 3U) 
                                                       | (0xfffffff8U 
                                                          & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                              << 2U) 
                                                             & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                                << 3U))))) 
                                                   | (4U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                                          | (IData)(
                                                                    (2U 
                                                                     == 
                                                                     (3U 
                                                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                                         << 2U))) 
                                                  | ((2U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                                          | (IData)(
                                                                    (1U 
                                                                     == 
                                                                     (3U 
                                                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                                           | (IData)(
                                                                     (0U 
                                                                      == 
                                                                      (3U 
                                                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6))))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                                               ? ((8U 
                                                   & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                      >> 0x18U)) 
                                                  | ((4U 
                                                      & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                         >> 0x10U)) 
                                                     | ((2U 
                                                         & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                            >> 8U)) 
                                                        | (1U 
                                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                                               : ((
                                                   (8U 
                                                    & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                                        << 3U) 
                                                       | (0xfffffff8U 
                                                          & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                              << 2U) 
                                                             & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                                << 3U))))) 
                                                   | (4U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                                          | (IData)(
                                                                    (2U 
                                                                     == 
                                                                     (3U 
                                                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                                         << 2U))) 
                                                  | ((2U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                                          | (IData)(
                                                                    (1U 
                                                                     == 
                                                                     (3U 
                                                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                                           | (IData)(
                                                                     (0U 
                                                                      == 
                                                                      (3U 
                                                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6))))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93096: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93096, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_177) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_177) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93120: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93120, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_294)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_294)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93144: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93144, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93168: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93168, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93192: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93192, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93216: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93216, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                              ? ((8U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                        >> 0x18U)) 
                                 | ((4U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 0x10U)) 
                                    | ((2U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                              >> 8U)) 
                                       | (1U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                              : (((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                          << 3U) | 
                                         (0xfffffff8U 
                                          & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                              << 2U) 
                                             & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                << 3U))))) 
                                  | (4U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                            | (IData)(
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 2U))) 
                                 | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                            | (IData)(
                                                      (1U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))))))) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                              ? ((8U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                        >> 0x18U)) 
                                 | ((4U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 0x10U)) 
                                    | ((2U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                              >> 8U)) 
                                       | (1U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                              : (((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                          << 3U) | 
                                         (0xfffffff8U 
                                          & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                              << 2U) 
                                             & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                << 3U))))) 
                                  | (4U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                            | (IData)(
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 2U))) 
                                 | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                            | (IData)(
                                                      (1U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))))))) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93240: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93240, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1)))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1)))))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1)))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1)))))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93264: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93264, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93288: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93288, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93312: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93312, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93336: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93336, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                              ? ((8U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                        >> 0x18U)) 
                                 | ((4U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 0x10U)) 
                                    | ((2U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                              >> 8U)) 
                                       | (1U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                              : (((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                          << 3U) | 
                                         (0xfffffff8U 
                                          & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                              << 2U) 
                                             & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                << 3U))))) 
                                  | (4U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                            | (IData)(
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 2U))) 
                                 | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                            | (IData)(
                                                      (1U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))))))) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                              ? ((8U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                        >> 0x18U)) 
                                 | ((4U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 0x10U)) 
                                    | ((2U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                              >> 8U)) 
                                       | (1U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                              : (((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                          << 3U) | 
                                         (0xfffffff8U 
                                          & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                              << 2U) 
                                             & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                << 3U))))) 
                                  | (4U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                            | (IData)(
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 2U))) 
                                 | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                            | (IData)(
                                                      (1U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))))))) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93360: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93360, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1)))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1)))))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1)))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1)))))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93384: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93384, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93408: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93408, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93432: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93432, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93456: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93456, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                                     ? ((8U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                               >> 0x18U)) 
                                        | ((4U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                  >> 0x10U)) 
                                           | ((2U & 
                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                >> 8U)) 
                                              | (1U 
                                                 & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                                     : (((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                                 << 3U) 
                                                | (0xfffffff8U 
                                                   & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                       << 2U) 
                                                      & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                         << 3U))))) 
                                         | (4U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                                   | (IData)(
                                                             (2U 
                                                              == 
                                                              (3U 
                                                               & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                                  << 2U))) 
                                        | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                                   | (IData)(
                                                             (1U 
                                                              == 
                                                              (3U 
                                                               & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                                  << 1U)) 
                                           | (1U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                               | (IData)(
                                                         (0U 
                                                          == 
                                                          (3U 
                                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))))))) 
                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                                     ? ((8U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                               >> 0x18U)) 
                                        | ((4U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                  >> 0x10U)) 
                                           | ((2U & 
                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                >> 8U)) 
                                              | (1U 
                                                 & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                                     : (((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                                 << 3U) 
                                                | (0xfffffff8U 
                                                   & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                       << 2U) 
                                                      & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                         << 3U))))) 
                                         | (4U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                                   | (IData)(
                                                             (2U 
                                                              == 
                                                              (3U 
                                                               & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                                  << 2U))) 
                                        | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                                   | (IData)(
                                                             (1U 
                                                              == 
                                                              (3U 
                                                               & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                                  << 1U)) 
                                           | (1U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                               | (IData)(
                                                         (0U 
                                                          == 
                                                          (3U 
                                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))))))) 
                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93480: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93480, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_177) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_177) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93504: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93504, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93528: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93528, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93552: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93552, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93576: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93576, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                              ? ((8U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                        >> 0x18U)) 
                                 | ((4U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 0x10U)) 
                                    | ((2U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                              >> 8U)) 
                                       | (1U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                              : (((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                          << 3U) | 
                                         (0xfffffff8U 
                                          & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                              << 2U) 
                                             & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                << 3U))))) 
                                  | (4U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                            | (IData)(
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 2U))) 
                                 | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                            | (IData)(
                                                      (1U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))))))) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                              ? ((8U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                        >> 0x18U)) 
                                 | ((4U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 0x10U)) 
                                    | ((2U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                              >> 8U)) 
                                       | (1U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                              : (((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                          << 3U) | 
                                         (0xfffffff8U 
                                          & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                              << 2U) 
                                             & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                << 3U))))) 
                                  | (4U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                            | (IData)(
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 2U))) 
                                 | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                            | (IData)(
                                                      (1U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))))))) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93600: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93600, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_177) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_177) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93624: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93624, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93648: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93648, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93672: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93672, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93696: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93696, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                              ? ((8U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                        >> 0x18U)) 
                                 | ((4U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 0x10U)) 
                                    | ((2U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                              >> 8U)) 
                                       | (1U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                              : (((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                          << 3U) | 
                                         (0xfffffff8U 
                                          & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                              << 2U) 
                                             & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                << 3U))))) 
                                  | (4U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                            | (IData)(
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 2U))) 
                                 | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                            | (IData)(
                                                      (1U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))))))) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                              ? ((8U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                        >> 0x18U)) 
                                 | ((4U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 0x10U)) 
                                    | ((2U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                              >> 8U)) 
                                       | (1U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                              : (((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                          << 3U) | 
                                         (0xfffffff8U 
                                          & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                              << 2U) 
                                             & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                << 3U))))) 
                                  | (4U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                            | (IData)(
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 2U))) 
                                 | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                            | (IData)(
                                                      (1U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))))))) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93720: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93720, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1)))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1)))))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1)))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1)))))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93744: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93744, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93768: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93768, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((0U == (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1) 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93792: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93792, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93816: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93816, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                              ? ((8U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                        >> 0x18U)) 
                                 | ((4U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 0x10U)) 
                                    | ((2U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                              >> 8U)) 
                                       | (1U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                              : (((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                          << 3U) | 
                                         (0xfffffff8U 
                                          & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                              << 2U) 
                                             & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                << 3U))))) 
                                  | (4U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                            | (IData)(
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 2U))) 
                                 | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                            | (IData)(
                                                      (1U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))))))) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))) 
                     & (~ ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                              ? ((8U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                        >> 0x18U)) 
                                 | ((4U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 0x10U)) 
                                    | ((2U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                              >> 8U)) 
                                       | (1U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                              : (((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                          << 3U) | 
                                         (0xfffffff8U 
                                          & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                              << 2U) 
                                             & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                << 3U))))) 
                                  | (4U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                            | (IData)(
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 2U))) 
                                 | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                            | (IData)(
                                                      (1U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))))))) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93840: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93840, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93864: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93864, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93888: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93888, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93912: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93912, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93936: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93936, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93960: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93960, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:93984: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 93984, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:94008: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 94008, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:94032: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 94032, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:94056: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 94056, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:94080: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 94080, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:94104: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 94104, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:94128: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 94128, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:94152: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 94152, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:94176: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 94176, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:94200: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 94200, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:94224: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 94224, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:94248: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 94248, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:94272: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 94272, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:94296: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 94296, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:94320: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 94320, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:94344: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 94344, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:94368: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 94368, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:94392: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 94392, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:94416: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 94416, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:94440: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 94440, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1)))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1))))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1)))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1))))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:94464: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 94464, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:94488: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 94488, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:94512: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 94512, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1) 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1) 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:94536: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 94536, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:94560: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 94560, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1)))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1))))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1)))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1))))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:94584: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 94584, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:94608: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 94608, "");
    }
}
