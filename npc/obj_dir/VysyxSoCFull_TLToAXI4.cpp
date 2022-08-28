// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull_TLToAXI4.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

//==========

extern const VlWide<16>/*511:0*/ VysyxSoCFull__ConstPool__CONST_93e1b771_0;

VL_INLINE_OPT void VysyxSoCFull_TLToAXI4___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__3(VysyxSoCFull_TLToAXI4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLToAXI4___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__3\n"); );
    // Variables
    CData/*7:0*/ __Vdlyvval__deq__DOT__ram_strb__v0;
    CData/*0:0*/ __Vdlyvset__deq__DOT__ram_strb__v0;
    CData/*0:0*/ __Vdlyvset__deq__DOT__ram_data__v0;
    CData/*0:0*/ __Vdlyvval__deq__DOT__ram_last__v0;
    CData/*0:0*/ __Vdlyvset__deq__DOT__ram_last__v0;
    CData/*0:0*/ __Vdlyvset__queue_arw_deq__DOT__ram_burst__v0;
    CData/*2:0*/ __Vdlyvval__queue_arw_deq__DOT__ram_size__v0;
    CData/*0:0*/ __Vdlyvset__queue_arw_deq__DOT__ram_size__v0;
    CData/*0:0*/ __Vdlyvval__queue_arw_deq__DOT__ram_wen__v0;
    CData/*0:0*/ __Vdlyvset__queue_arw_deq__DOT__ram_wen__v0;
    CData/*7:0*/ __Vdlyvval__queue_arw_deq__DOT__ram_len__v0;
    CData/*0:0*/ __Vdlyvset__queue_arw_deq__DOT__ram_len__v0;
    CData/*6:0*/ __Vdlyvval__queue_arw_deq__DOT__ram_echo_tl_state_source__v0;
    CData/*0:0*/ __Vdlyvset__queue_arw_deq__DOT__ram_echo_tl_state_source__v0;
    CData/*4:0*/ __Vdlyvval__queue_arw_deq__DOT__ram_id__v0;
    CData/*0:0*/ __Vdlyvset__queue_arw_deq__DOT__ram_id__v0;
    CData/*0:0*/ __Vdlyvset__queue_arw_deq__DOT__ram_addr__v0;
    CData/*3:0*/ __Vdlyvval__queue_arw_deq__DOT__ram_echo_tl_state_size__v0;
    CData/*0:0*/ __Vdlyvset__queue_arw_deq__DOT__ram_echo_tl_state_size__v0;
    IData/*31:0*/ __Vdlyvval__queue_arw_deq__DOT__ram_addr__v0;
    VlWide<4>/*127:0*/ __Vtemp3;
    VlWide<4>/*127:0*/ __Vtemp4;
    VlWide<16>/*511:0*/ __Vtemp14;
    QData/*63:0*/ __Vdlyvval__deq__DOT__ram_data__v0;
    // Body
    __Vdlyvset__queue_arw_deq__DOT__ram_burst__v0 = 0U;
    __Vdlyvset__deq__DOT__ram_last__v0 = 0U;
    __Vdlyvset__queue_arw_deq__DOT__ram_size__v0 = 0U;
    __Vdlyvset__deq__DOT__ram_data__v0 = 0U;
    __Vdlyvset__deq__DOT__ram_strb__v0 = 0U;
    __Vdlyvset__queue_arw_deq__DOT__ram_id__v0 = 0U;
    __Vdlyvset__queue_arw_deq__DOT__ram_len__v0 = 0U;
    __Vdlyvset__queue_arw_deq__DOT__ram_echo_tl_state_size__v0 = 0U;
    __Vdlyvset__queue_arw_deq__DOT__ram_addr__v0 = 0U;
    __Vdlyvset__queue_arw_deq__DOT__ram_echo_tl_state_source__v0 = 0U;
    __Vdlyvset__queue_arw_deq__DOT__ram_wen__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_1))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_1))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47054: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47054, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc_1)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_2))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc_1)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_2))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47100: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47100, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc_2)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_3))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc_2)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_3))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47146: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47146, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc_3)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_4))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc_3)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_4))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47192: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47192, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc_4)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_5))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc_4)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_5))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47238: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47238, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc_5)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_6))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc_5)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_6))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47284: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47284, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc_6)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_7))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc_6)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_7))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47330: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47330, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 7U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_8))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 7U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_8))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47376: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47376, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 8U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_9))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 8U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_9))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47422: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47422, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 9U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_10))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 9U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_10))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47468: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47468, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0xaU) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_11))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0xaU) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_11))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47514: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47514, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0xbU) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_12))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0xbU) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_12))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47560: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47560, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0xcU) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_13))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0xcU) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_13))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47606: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47606, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0xdU) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_14))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0xdU) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_14))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47652: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47652, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0xeU) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_15))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0xeU) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_15))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47698: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47698, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0xfU) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_16))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0xfU) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_16))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47744: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47744, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x10U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_17))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x10U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_17))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47790: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47790, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x11U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_18))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x11U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_18))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47836: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47836, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x12U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_19))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x12U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_19))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47882: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47882, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x13U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_20))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x13U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_20))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47928: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47928, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x14U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_21))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x14U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_21))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47974: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47974, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x15U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_22))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x15U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_22))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:48020: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 48020, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x16U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_23))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x16U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_23))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:48066: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 48066, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43568: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43568, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                            & (0ULL == (0x180000000ULL 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                            & (0ULL == (0x180000000ULL 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43592: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43592, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43616: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43616, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43640: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43640, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43664: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43664, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43688: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43688, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43712: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43712, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43736: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43736, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43760: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43760, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                            & (0ULL == (0x180000000ULL 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                            & (0ULL == (0x180000000ULL 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43784: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43784, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43808: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43808, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43832: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43832, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43856: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43856, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43880: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43880, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43904: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43904, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43928: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43928, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43952: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43952, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43976: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43976, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                            & (0ULL == (0x180000000ULL 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                            & (0ULL == (0x180000000ULL 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44000: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44000, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44024: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44024, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44048: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44048, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44072: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44072, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44096: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44096, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44120: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44120, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U))) 
                                   | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 4U)))) 
                                  | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            & ((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U))) 
                                   | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 4U)))) 
                                  | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            & ((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44144: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44144, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44168: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44168, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44192: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44192, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44216: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44216, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44240: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44240, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U))) 
                                   | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 4U)))) 
                                  | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            & ((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U))) 
                                   | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 4U)))) 
                                  | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            & ((6U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44264: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44264, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44288: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44288, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44312: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44312, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44336: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44336, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44360: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44360, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44384: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44384, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44408: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44408, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44432: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44432, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44456: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44456, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44480: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44480, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44504: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44504, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44528: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44528, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44552: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44552, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44576: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44576, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44600: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44600, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44624: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44624, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44648: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44648, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44672: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44672, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44696: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44696, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44720: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44720, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44744: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44744, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45224: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45224, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45248: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45248, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45272: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45272, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45296: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45296, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                            == vlSelf->__PVT__monitor__DOT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                            == vlSelf->__PVT__monitor__DOT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45320: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45320, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp3, vlSelf->__PVT__monitor__DOT__inflight, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ __Vtemp3[0U]) | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp4, vlSelf->__PVT__monitor__DOT__inflight, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ __Vtemp4[0U]) | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45440: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45440, "");
    }
    if (VL_UNLIKELY((1U & (~ (((0U != (((vlSelf->__PVT__monitor__DOT__a_set_wo_ready[0U] 
                                         | vlSelf->__PVT__monitor__DOT__a_set_wo_ready[1U]) 
                                        | vlSelf->__PVT__monitor__DOT__a_set_wo_ready[2U]) 
                                       | vlSelf->__PVT__monitor__DOT__a_set_wo_ready[3U])) 
                               | (~ (IData)((0U != 
                                             (((vlSelf->__PVT__monitor__DOT__a_set_wo_ready[0U] 
                                                | vlSelf->__PVT__monitor__DOT__a_set_wo_ready[1U]) 
                                               | vlSelf->__PVT__monitor__DOT__a_set_wo_ready[2U]) 
                                              | vlSelf->__PVT__monitor__DOT__a_set_wo_ready[3U]))))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((0U != (((vlSelf->__PVT__monitor__DOT__a_set_wo_ready[0U] 
                                         | vlSelf->__PVT__monitor__DOT__a_set_wo_ready[1U]) 
                                        | vlSelf->__PVT__monitor__DOT__a_set_wo_ready[2U]) 
                                       | vlSelf->__PVT__monitor__DOT__a_set_wo_ready[3U])) 
                               | (~ (IData)((0U != 
                                             (((vlSelf->__PVT__monitor__DOT__a_set_wo_ready[0U] 
                                                | vlSelf->__PVT__monitor__DOT__a_set_wo_ready[1U]) 
                                               | vlSelf->__PVT__monitor__DOT__a_set_wo_ready[2U]) 
                                              | vlSelf->__PVT__monitor__DOT__a_set_wo_ready[3U]))))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45606: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45606, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlSelf->__PVT__monitor__DOT__inflight[0U] 
                                                     | vlSelf->__PVT__monitor__DOT__inflight[1U]) 
                                                    | vlSelf->__PVT__monitor__DOT__inflight[2U]) 
                                                   | vlSelf->__PVT__monitor__DOT__inflight[3U])))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlSelf->__PVT__monitor__DOT__inflight[0U] 
                                                     | vlSelf->__PVT__monitor__DOT__inflight[1U]) 
                                                    | vlSelf->__PVT__monitor__DOT__inflight[2U]) 
                                                   | vlSelf->__PVT__monitor__DOT__inflight[3U])))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45630: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45630, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlSelf->__PVT__monitor__DOT__inflight_1[0U] 
                                                     | vlSelf->__PVT__monitor__DOT__inflight_1[1U]) 
                                                    | vlSelf->__PVT__monitor__DOT__inflight_1[2U]) 
                                                   | vlSelf->__PVT__monitor__DOT__inflight_1[3U])))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlSelf->__PVT__monitor__DOT__inflight_1[0U] 
                                                     | vlSelf->__PVT__monitor__DOT__inflight_1[1U]) 
                                                    | vlSelf->__PVT__monitor__DOT__inflight_1[2U]) 
                                                   | vlSelf->__PVT__monitor__DOT__inflight_1[3U])))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45702: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45702, "");
    }
    vlSelf->__PVT__b_delay = 0U;
    if (vlSelf->__PVT__queue_arw_deq__DOT___do_enq_T) {
        __Vdlyvset__queue_arw_deq__DOT__ram_burst__v0 = 1U;
    }
    if (vlSelf->__PVT__deq__DOT___do_enq_T) {
        __Vdlyvval__deq__DOT__ram_last__v0 = vlSelf->__PVT__deq_io_enq_bits_last;
        __Vdlyvset__deq__DOT__ram_last__v0 = 1U;
    }
    if (vlSelf->__PVT__queue_arw_deq__DOT___do_enq_T) {
        __Vdlyvval__queue_arw_deq__DOT__ram_size__v0 
            = vlSelf->__PVT__queue_arw_deq_io_enq_bits_size;
        __Vdlyvset__queue_arw_deq__DOT__ram_size__v0 = 1U;
    }
    if (vlSelf->__PVT__deq__DOT___do_enq_T) {
        __Vdlyvval__deq__DOT__ram_data__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_data;
        __Vdlyvset__deq__DOT__ram_data__v0 = 1U;
    }
    if (vlSelf->__PVT__deq__DOT___do_enq_T) {
        __Vdlyvval__deq__DOT__ram_strb__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_mask;
        __Vdlyvset__deq__DOT__ram_strb__v0 = 1U;
    }
    if (vlSelf->__PVT__queue_arw_deq__DOT___do_enq_T) {
        __Vdlyvval__queue_arw_deq__DOT__ram_id__v0 
            = vlSelf->__PVT__queue_arw_deq_io_enq_bits_id;
        __Vdlyvset__queue_arw_deq__DOT__ram_id__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__d_first_counter_2 = 0U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__d_first_counter_1 = 0U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__d_first_counter = 0U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[8U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[9U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[1U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[2U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[3U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[4U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[5U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[6U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[7U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[8U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[9U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[1U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[2U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[3U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[4U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[5U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[6U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[7U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[8U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[9U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xfU];
    } else {
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[1U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[1U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[2U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[2U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[3U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[3U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[4U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[4U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[5U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[5U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[6U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[6U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[7U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[7U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[8U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[8U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[9U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[9U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xaU] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0xaU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xbU] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0xbU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xcU] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0xcU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xdU] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0xdU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xeU] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0xeU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xfU] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0xfU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T[0U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[1U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T[1U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[2U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T[2U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[3U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T[3U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[4U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T[4U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[5U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T[5U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[6U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T[6U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[7U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T[7U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[8U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T[8U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[9U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T[9U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0xaU] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T[0xaU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0xbU] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T[0xbU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0xcU] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T[0xcU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0xdU] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T[0xdU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0xeU] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T[0xeU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0xfU] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T[0xfU];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0U] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[0U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[1U] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[1U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[2U] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[2U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[3U] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[3U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[4U] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[4U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[5U] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[5U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[6U] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[6U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[7U] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[7U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[8U] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[8U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[9U] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[9U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xaU] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[0xaU];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xbU] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[0xbU];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xcU] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[0xcU];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xdU] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[0xdU];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xeU] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[0xeU];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xfU] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[0xfU];
    }
    if (vlSelf->__PVT__queue_arw_deq__DOT___do_enq_T) {
        __Vdlyvval__queue_arw_deq__DOT__ram_len__v0 
            = (0xffU & (~ (0x7fffU & (((IData)(0x7ffU) 
                                       << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                                      >> 3U))));
        __Vdlyvset__queue_arw_deq__DOT__ram_len__v0 = 1U;
    }
    if (vlSelf->__PVT__queue_arw_deq__DOT___do_enq_T) {
        __Vdlyvval__queue_arw_deq__DOT__ram_echo_tl_state_size__v0 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size;
        __Vdlyvset__queue_arw_deq__DOT__ram_echo_tl_state_size__v0 = 1U;
    }
    if (vlSelf->__PVT__r_first) {
        vlSelf->__PVT__r_denied_r = 0U;
    }
    if (vlSelf->__PVT__queue_arw_deq__DOT___do_enq_T) {
        __Vdlyvval__queue_arw_deq__DOT__ram_addr__v0 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address;
        __Vdlyvset__queue_arw_deq__DOT__ram_addr__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__r_holds_d = 0U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__queue_arw_deq__DOT__maybe_full = 0U;
    } else if (vlSelf->__PVT__queue_arw_deq__DOT___do_enq_T) {
        vlSelf->__PVT__queue_arw_deq__DOT__maybe_full 
            = vlSelf->__PVT__queue_arw_deq__DOT___do_enq_T;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__deq__DOT__maybe_full = 0U;
    } else if (vlSelf->__PVT__deq__DOT___do_enq_T) {
        vlSelf->__PVT__deq__DOT__maybe_full = vlSelf->__PVT__deq__DOT___do_enq_T;
    }
    if (vlSelf->__PVT__queue_arw_deq__DOT___do_enq_T) {
        __Vdlyvval__queue_arw_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source;
        __Vdlyvset__queue_arw_deq__DOT__ram_echo_tl_state_source__v0 = 1U;
    }
    if (vlSelf->__PVT__queue_arw_deq__DOT___do_enq_T) {
        __Vdlyvval__queue_arw_deq__DOT__ram_wen__v0 
            = (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                        >> 2U)));
        __Vdlyvset__queue_arw_deq__DOT__ram_wen__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__doneAW = 0U;
    } else if (vlSelf->__PVT___T) {
        vlSelf->__PVT__doneAW = (1U & (~ ((1U == (IData)(vlSelf->__PVT__counter)) 
                                          | (0U == (IData)(vlSelf->__PVT__beats1)))));
    }
    if (vlSelf->__PVT__inc_6) {
        vlSelf->__PVT__write_6 = (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                                           >> 2U)));
    }
    if (vlSelf->__PVT__inc_5) {
        vlSelf->__PVT__write_5 = (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                                           >> 2U)));
    }
    if (vlSelf->__PVT__inc_3) {
        vlSelf->__PVT__write_3 = (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                                           >> 2U)));
    }
    if (vlSelf->__PVT__inc_4) {
        vlSelf->__PVT__write_4 = (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                                           >> 2U)));
    }
    if (vlSelf->__PVT__inc_2) {
        vlSelf->__PVT__write_2 = (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                                           >> 2U)));
    }
    if (vlSelf->__PVT__inc_1) {
        vlSelf->__PVT__write_1 = (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                                           >> 2U)));
    }
    if (vlSelf->__PVT__inc) {
        vlSelf->__PVT__write = (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                                         >> 2U)));
    }
    if (__Vdlyvset__queue_arw_deq__DOT__ram_burst__v0) {
        vlSelf->__PVT__queue_arw_deq__DOT__ram_burst[0U] = 1U;
    }
    if (__Vdlyvset__deq__DOT__ram_last__v0) {
        vlSelf->__PVT__deq__DOT__ram_last[0U] = __Vdlyvval__deq__DOT__ram_last__v0;
    }
    if (__Vdlyvset__queue_arw_deq__DOT__ram_size__v0) {
        vlSelf->__PVT__queue_arw_deq__DOT__ram_size[0U] 
            = __Vdlyvval__queue_arw_deq__DOT__ram_size__v0;
    }
    if (__Vdlyvset__deq__DOT__ram_data__v0) {
        vlSelf->__PVT__deq__DOT__ram_data[0U] = __Vdlyvval__deq__DOT__ram_data__v0;
    }
    if (__Vdlyvset__deq__DOT__ram_strb__v0) {
        vlSelf->__PVT__deq__DOT__ram_strb[0U] = __Vdlyvval__deq__DOT__ram_strb__v0;
    }
    if (__Vdlyvset__queue_arw_deq__DOT__ram_id__v0) {
        vlSelf->__PVT__queue_arw_deq__DOT__ram_id[0U] 
            = __Vdlyvval__queue_arw_deq__DOT__ram_id__v0;
    }
    if (__Vdlyvset__queue_arw_deq__DOT__ram_len__v0) {
        vlSelf->__PVT__queue_arw_deq__DOT__ram_len[0U] 
            = __Vdlyvval__queue_arw_deq__DOT__ram_len__v0;
    }
    if (__Vdlyvset__queue_arw_deq__DOT__ram_echo_tl_state_size__v0) {
        vlSelf->__PVT__queue_arw_deq__DOT__ram_echo_tl_state_size[0U] 
            = __Vdlyvval__queue_arw_deq__DOT__ram_echo_tl_state_size__v0;
    }
    if (__Vdlyvset__queue_arw_deq__DOT__ram_addr__v0) {
        vlSelf->__PVT__queue_arw_deq__DOT__ram_addr[0U] 
            = __Vdlyvval__queue_arw_deq__DOT__ram_addr__v0;
    }
    if (__Vdlyvset__queue_arw_deq__DOT__ram_echo_tl_state_source__v0) {
        vlSelf->__PVT__queue_arw_deq__DOT__ram_echo_tl_state_source[0U] 
            = __Vdlyvval__queue_arw_deq__DOT__ram_echo_tl_state_source__v0;
    }
    if (__Vdlyvset__queue_arw_deq__DOT__ram_wen__v0) {
        vlSelf->__PVT__queue_arw_deq__DOT__ram_wen[0U] 
            = __Vdlyvval__queue_arw_deq__DOT__ram_wen__v0;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__count_7 = 0U;
        vlSelf->__PVT__count_6 = 0U;
        vlSelf->__PVT__count_4 = 0U;
        vlSelf->__PVT__count_5 = 0U;
        vlSelf->__PVT__count_3 = 0U;
    } else {
        vlSelf->__PVT__count_7 = vlSelf->__PVT___count_T_28;
        vlSelf->__PVT__count_6 = vlSelf->__PVT___count_T_24;
        vlSelf->__PVT__count_4 = vlSelf->__PVT___count_T_16;
        vlSelf->__PVT__count_5 = vlSelf->__PVT___count_T_20;
        vlSelf->__PVT__count_3 = vlSelf->__PVT___count_T_12;
    }
    vlSelf->__PVT__count_8 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___count_T_30));
    vlSelf->__PVT__count_9 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___count_T_34));
    vlSelf->__PVT__count_10 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (IData)(vlSelf->__PVT___count_T_38));
    vlSelf->__PVT__count_11 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (IData)(vlSelf->__PVT___count_T_42));
    vlSelf->__PVT__count_12 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (IData)(vlSelf->__PVT___count_T_46));
    vlSelf->__PVT__count_13 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (IData)(vlSelf->__PVT___count_T_50));
    vlSelf->__PVT__count_14 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (IData)(vlSelf->__PVT___count_T_54));
    vlSelf->__PVT__count_15 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (IData)(vlSelf->__PVT___count_T_58));
    vlSelf->__PVT__count_16 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (IData)(vlSelf->__PVT___count_T_62));
    vlSelf->__PVT__count_17 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (IData)(vlSelf->__PVT___count_T_66));
    vlSelf->__PVT__count_18 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (IData)(vlSelf->__PVT___count_T_70));
    vlSelf->__PVT__count_19 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (IData)(vlSelf->__PVT___count_T_74));
    vlSelf->__PVT__count_20 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (IData)(vlSelf->__PVT___count_T_78));
    vlSelf->__PVT__count_21 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (IData)(vlSelf->__PVT___count_T_82));
    vlSelf->__PVT__count_22 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (IData)(vlSelf->__PVT___count_T_86));
    vlSelf->__PVT__count_23 = ((~ (IData)(vlSymsp->TOP.reset)) 
                               & (IData)(vlSelf->__PVT___count_T_90));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__count_2 = 0U;
        vlSelf->__PVT__count_1 = 0U;
        vlSelf->__PVT__monitor__DOT__inflight_1[0U] = 0U;
        vlSelf->__PVT__monitor__DOT__inflight_1[1U] = 0U;
        vlSelf->__PVT__monitor__DOT__inflight_1[2U] = 0U;
        vlSelf->__PVT__monitor__DOT__inflight_1[3U] = 0U;
        vlSelf->__PVT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->__PVT__monitor__DOT__inflight[0U] = 0U;
        vlSelf->__PVT__monitor__DOT__inflight[1U] = 0U;
        vlSelf->__PVT__monitor__DOT__inflight[2U] = 0U;
        vlSelf->__PVT__monitor__DOT__inflight[3U] = 0U;
        vlSelf->__PVT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->__PVT__count_2 = vlSelf->__PVT___count_T_8;
        vlSelf->__PVT__count_1 = vlSelf->__PVT___count_T_4;
        vlSelf->__PVT__monitor__DOT__inflight_1[0U] 
            = vlSelf->__PVT__monitor__DOT___inflight_T_5[0U];
        vlSelf->__PVT__monitor__DOT__inflight_1[1U] 
            = vlSelf->__PVT__monitor__DOT___inflight_T_5[1U];
        vlSelf->__PVT__monitor__DOT__inflight_1[2U] 
            = vlSelf->__PVT__monitor__DOT___inflight_T_5[2U];
        vlSelf->__PVT__monitor__DOT__inflight_1[3U] 
            = vlSelf->__PVT__monitor__DOT___inflight_T_5[3U];
        vlSelf->__PVT__monitor__DOT__watchdog_1 = vlSelf->__PVT__monitor__DOT___watchdog_T_3;
        vlSelf->__PVT__monitor__DOT__inflight[0U] = 
            vlSelf->__PVT__monitor__DOT___inflight_T_2[0U];
        vlSelf->__PVT__monitor__DOT__inflight[1U] = 
            vlSelf->__PVT__monitor__DOT___inflight_T_2[1U];
        vlSelf->__PVT__monitor__DOT__inflight[2U] = 
            vlSelf->__PVT__monitor__DOT___inflight_T_2[2U];
        vlSelf->__PVT__monitor__DOT__inflight[3U] = 
            vlSelf->__PVT__monitor__DOT___inflight_T_2[3U];
        vlSelf->__PVT__monitor__DOT__watchdog = ((IData)(vlSelf->__PVT__monitor__DOT___a_first_T)
                                                  ? 0U
                                                  : vlSelf->__PVT__monitor__DOT___watchdog_T_1);
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->__PVT__monitor__DOT___a_first_T) {
        vlSelf->__PVT__monitor__DOT__a_first_counter_1 
            = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_1)
                      ? ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                          ? 0U : (~ (0x3ffU & (((IData)(0x3fU) 
                                                << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                                               >> 3U))))
                      : (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__param = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__size = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__address = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__source = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__opcode = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode;
    }
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
    vlSelf->__PVT__r_first = ((IData)(vlSymsp->TOP.reset) 
                              | (IData)(vlSelf->__PVT___GEN_260));
    if (vlSelf->__PVT__r_holds_d) {
        vlSelf->__PVT__d_sel_shiftAmount = (((0x10U 
                                              >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__QueueCompatibility__DOT__deq_ptr_value)) 
                                             & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__QueueCompatibility__DOT__ram_extra_id
                                             [vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__QueueCompatibility__DOT__deq_ptr_value]) 
                                            << 4U);
        vlSelf->__PVT__monitor_io_in_d_bits_size = 
            (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__QueueCompatibility__DOT__ram_tl_state_size_io_deq_bits_MPORT_data));
        vlSelf->__PVT__monitor_io_in_d_bits_source 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__QueueCompatibility__DOT__ram_tl_state_source_io_deq_bits_MPORT_data;
        vlSelf->auto_in_d_bits_size = (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__QueueCompatibility__DOT__ram_tl_state_size_io_deq_bits_MPORT_data));
    } else {
        vlSelf->__PVT__d_sel_shiftAmount = (((0x10U 
                                              >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__QueueCompatibility_16__DOT__deq_ptr_value)) 
                                             & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__QueueCompatibility_16__DOT__ram_extra_id
                                             [vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__QueueCompatibility_16__DOT__deq_ptr_value]) 
                                            << 4U);
        vlSelf->__PVT__monitor_io_in_d_bits_size = 
            (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__QueueCompatibility_16__DOT__ram_tl_state_size_io_deq_bits_MPORT_data));
        vlSelf->__PVT__monitor_io_in_d_bits_source 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__QueueCompatibility_16__DOT__ram_tl_state_source_io_deq_bits_MPORT_data;
        vlSelf->auto_in_d_bits_size = (7U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_1.__PVT__QueueCompatibility_16__DOT__ram_tl_state_size_io_deq_bits_MPORT_data));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__counter = 0U;
    } else if (vlSelf->__PVT___T) {
        vlSelf->__PVT__counter = (7U & ((IData)(vlSelf->__PVT__a_first)
                                         ? ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                                             ? 0U : 
                                            (~ (0x3ffU 
                                                & (((IData)(0x3fU) 
                                                    << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                                                   >> 3U))))
                                         : (IData)(vlSelf->__PVT__counter1)));
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp14, vlSelf->__PVT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp14[0U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp14[1U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp14[2U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp14[3U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp14[4U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp14[5U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp14[6U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp14[7U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp14[8U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp14[9U];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp14[0xaU];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp14[0xbU];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp14[0xcU];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp14[0xdU];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp14[0xeU];
    vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp14[0xfU];
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
    vlSelf->__PVT__monitor__DOT___watchdog_T_1 = ((IData)(1U) 
                                                  + vlSelf->__PVT__monitor__DOT__watchdog);
    vlSelf->__PVT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__a_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__a_first_counter = 0U;
    } else if (vlSelf->__PVT__monitor__DOT___a_first_T) {
        vlSelf->__PVT__monitor__DOT__a_first_counter 
            = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__a_first)
                      ? ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                          ? 0U : (~ (0x3ffU & (((IData)(0x3fU) 
                                                << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                                               >> 3U))))
                      : (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter1)));
    }
    vlSelf->__PVT___GEN_260 = vlSelf->__PVT__r_first;
    vlSelf->__PVT___GEN_261 = ((~ (IData)(vlSelf->__PVT__r_first)) 
                               & (IData)(vlSelf->__PVT__r_denied_r));
    vlSelf->__PVT__a_first = (0U == (IData)(vlSelf->__PVT__counter));
    vlSelf->__PVT__counter1 = (7U & ((IData)(vlSelf->__PVT__counter) 
                                     - (IData)(1U)));
    vlSelf->__PVT__monitor_io_in_d_bits_denied = ((IData)(vlSelf->__PVT__r_holds_d) 
                                                  & (IData)(vlSelf->__PVT___GEN_261));
    vlSelf->auto_in_d_bits_denied = ((IData)(vlSelf->__PVT__r_holds_d) 
                                     & (IData)(vlSelf->__PVT___GEN_261));
    vlSelf->__PVT__monitor__DOT__a_first_counter1 = 
        (7U & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter) 
               - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__a_first = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter));
}

VL_INLINE_OPT void VysyxSoCFull_TLToAXI4___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__5(VysyxSoCFull_TLToAXI4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLToAXI4___sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__5\n"); );
    // Body
    vlSelf->auto_in_d_bits_corrupt = ((IData)(vlSelf->__PVT__r_holds_d) 
                                      & (IData)(vlSelf->__PVT___GEN_261));
}

extern const VlWide<33>/*1055:0*/ VysyxSoCFull__ConstPool__CONST_f1d99c76_0;
extern const VlWide<33>/*1055:0*/ VysyxSoCFull__ConstPool__CONST_ac7e6362_0;

VL_INLINE_OPT void VysyxSoCFull_TLToAXI4___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__13(VysyxSoCFull_TLToAXI4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLToAXI4___multiclk__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__13\n"); );
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
    VlWide<4>/*127:0*/ __Vtemp41;
    VlWide<4>/*127:0*/ __Vtemp42;
    VlWide<4>/*127:0*/ __Vtemp46;
    VlWide<4>/*127:0*/ __Vtemp47;
    VlWide<33>/*1055:0*/ __Vtemp52;
    VlWide<33>/*1055:0*/ __Vtemp53;
    VlWide<33>/*1055:0*/ __Vtemp59;
    VlWide<33>/*1055:0*/ __Vtemp60;
    // Body
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
    __Vtemp41[0U] = 1U;
    __Vtemp41[1U] = 0U;
    __Vtemp41[2U] = 0U;
    __Vtemp41[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp42, __Vtemp41, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source));
    if (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))) {
        vlSelf->__PVT__monitor__DOT__a_set_wo_ready[0U] 
            = __Vtemp42[0U];
        vlSelf->__PVT__monitor__DOT__a_set_wo_ready[1U] 
            = __Vtemp42[1U];
        vlSelf->__PVT__monitor__DOT__a_set_wo_ready[2U] 
            = __Vtemp42[2U];
        vlSelf->__PVT__monitor__DOT__a_set_wo_ready[3U] 
            = __Vtemp42[3U];
    } else {
        vlSelf->__PVT__monitor__DOT__a_set_wo_ready[0U] = 0U;
        vlSelf->__PVT__monitor__DOT__a_set_wo_ready[1U] = 0U;
        vlSelf->__PVT__monitor__DOT__a_set_wo_ready[2U] = 0U;
        vlSelf->__PVT__monitor__DOT__a_set_wo_ready[3U] = 0U;
    }
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
    __Vtemp46[0U] = 1U;
    __Vtemp46[1U] = 0U;
    __Vtemp46[2U] = 0U;
    __Vtemp46[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp47, __Vtemp46, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source));
    vlSelf->__PVT__monitor__DOT___inflight_T_2[0U] 
        = (vlSelf->__PVT__monitor__DOT__inflight[0U] 
           | (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
               & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
               ? __Vtemp47[0U] : 0U));
    vlSelf->__PVT__monitor__DOT___inflight_T_2[1U] 
        = (vlSelf->__PVT__monitor__DOT__inflight[1U] 
           | (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
               & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
               ? __Vtemp47[1U] : 0U));
    vlSelf->__PVT__monitor__DOT___inflight_T_2[2U] 
        = (vlSelf->__PVT__monitor__DOT__inflight[2U] 
           | (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
               & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
               ? __Vtemp47[2U] : 0U));
    vlSelf->__PVT__monitor__DOT___inflight_T_2[3U] 
        = (vlSelf->__PVT__monitor__DOT__inflight[3U] 
           | (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
               & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
               ? __Vtemp47[3U] : 0U));
    VL_EXTEND_WI(1027,4, __Vtemp52, (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                                      ? (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                                               << 1U))
                                      : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp53, __Vtemp52, 
                  ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                   << 2U));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[0U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[0U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp53[0U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[1U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[1U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp53[1U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[2U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[2U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp53[2U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[3U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[3U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp53[3U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[4U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[4U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp53[4U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[5U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[5U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp53[5U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[6U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[6U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp53[6U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[7U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[7U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp53[7U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[8U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[8U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp53[8U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[9U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[9U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp53[9U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[0xaU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xaU] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp53[0xaU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[0xbU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xbU] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp53[0xbU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[0xcU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xcU] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp53[0xcU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[0xdU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xdU] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp53[0xdU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[0xeU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xeU] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp53[0xeU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU])));
    vlSelf->__PVT__monitor__DOT___inflight_opcodes_T[0xfU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xfU] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp53[0xfU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU])));
    VL_EXTEND_WI(1027,4, __Vtemp59, (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                                      ? (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size) 
                                               << 1U))
                                      : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp60, __Vtemp59, 
                  ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                   << 2U));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[0U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[0U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp60[0U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[1U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[1U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp60[1U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[2U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[2U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp60[2U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[3U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[3U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp60[3U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[4U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[4U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp60[4U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[5U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[5U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp60[5U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[6U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[6U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp60[6U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[7U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[7U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp60[7U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[8U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[8U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp60[8U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[9U] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[9U] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp60[9U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[0xaU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[0xaU] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp60[0xaU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[0xbU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[0xbU] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp60[0xbU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[0xcU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[0xcU] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp60[0xcU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[0xdU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[0xdU] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp60[0xdU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[0xeU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[0xeU] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp60[0xeU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU])));
    vlSelf->__PVT__monitor__DOT___inflight_sizes_T[0xfU] 
        = (vlSelf->__PVT__monitor__DOT__inflight_sizes[0xfU] 
           | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
              & (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                  & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)))
                  ? __Vtemp60[0xfU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU])));
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

VL_INLINE_OPT void VysyxSoCFull_TLToAXI4___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__4(VysyxSoCFull_TLToAXI4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLToAXI4___sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__4\n"); );
    // Variables
    CData/*7:0*/ __Vdlyvval__deq__DOT__ram_strb__v0;
    CData/*0:0*/ __Vdlyvset__deq__DOT__ram_strb__v0;
    CData/*0:0*/ __Vdlyvset__deq__DOT__ram_data__v0;
    CData/*0:0*/ __Vdlyvval__deq__DOT__ram_last__v0;
    CData/*0:0*/ __Vdlyvset__deq__DOT__ram_last__v0;
    CData/*0:0*/ __Vdlyvset__queue_arw_deq__DOT__ram_burst__v0;
    CData/*2:0*/ __Vdlyvval__queue_arw_deq__DOT__ram_size__v0;
    CData/*0:0*/ __Vdlyvset__queue_arw_deq__DOT__ram_size__v0;
    CData/*0:0*/ __Vdlyvval__queue_arw_deq__DOT__ram_wen__v0;
    CData/*0:0*/ __Vdlyvset__queue_arw_deq__DOT__ram_wen__v0;
    CData/*7:0*/ __Vdlyvval__queue_arw_deq__DOT__ram_len__v0;
    CData/*0:0*/ __Vdlyvset__queue_arw_deq__DOT__ram_len__v0;
    CData/*6:0*/ __Vdlyvval__queue_arw_deq__DOT__ram_echo_tl_state_source__v0;
    CData/*0:0*/ __Vdlyvset__queue_arw_deq__DOT__ram_echo_tl_state_source__v0;
    CData/*4:0*/ __Vdlyvval__queue_arw_deq__DOT__ram_id__v0;
    CData/*0:0*/ __Vdlyvset__queue_arw_deq__DOT__ram_id__v0;
    CData/*0:0*/ __Vdlyvset__queue_arw_deq__DOT__ram_addr__v0;
    CData/*3:0*/ __Vdlyvval__queue_arw_deq__DOT__ram_echo_tl_state_size__v0;
    CData/*0:0*/ __Vdlyvset__queue_arw_deq__DOT__ram_echo_tl_state_size__v0;
    IData/*31:0*/ __Vdlyvval__queue_arw_deq__DOT__ram_addr__v0;
    VlWide<4>/*127:0*/ __Vtemp66;
    VlWide<4>/*127:0*/ __Vtemp67;
    VlWide<4>/*127:0*/ __Vtemp68;
    VlWide<4>/*127:0*/ __Vtemp69;
    VlWide<16>/*511:0*/ __Vtemp72;
    VlWide<16>/*511:0*/ __Vtemp73;
    VlWide<16>/*511:0*/ __Vtemp76;
    VlWide<16>/*511:0*/ __Vtemp77;
    VlWide<16>/*511:0*/ __Vtemp80;
    VlWide<16>/*511:0*/ __Vtemp81;
    VlWide<16>/*511:0*/ __Vtemp84;
    VlWide<16>/*511:0*/ __Vtemp85;
    VlWide<16>/*511:0*/ __Vtemp88;
    VlWide<16>/*511:0*/ __Vtemp89;
    VlWide<16>/*511:0*/ __Vtemp92;
    VlWide<16>/*511:0*/ __Vtemp93;
    VlWide<16>/*511:0*/ __Vtemp96;
    VlWide<16>/*511:0*/ __Vtemp97;
    VlWide<16>/*511:0*/ __Vtemp100;
    VlWide<16>/*511:0*/ __Vtemp101;
    VlWide<16>/*511:0*/ __Vtemp102;
    VlWide<16>/*511:0*/ __Vtemp105;
    VlWide<16>/*511:0*/ __Vtemp106;
    VlWide<16>/*511:0*/ __Vtemp107;
    VlWide<16>/*511:0*/ __Vtemp110;
    VlWide<16>/*511:0*/ __Vtemp111;
    VlWide<4>/*127:0*/ __Vtemp112;
    VlWide<4>/*127:0*/ __Vtemp113;
    VlWide<4>/*127:0*/ __Vtemp117;
    VlWide<4>/*127:0*/ __Vtemp118;
    VlWide<4>/*127:0*/ __Vtemp122;
    VlWide<4>/*127:0*/ __Vtemp123;
    VlWide<16>/*511:0*/ __Vtemp124;
    VlWide<16>/*511:0*/ __Vtemp127;
    VlWide<16>/*511:0*/ __Vtemp128;
    VlWide<16>/*511:0*/ __Vtemp129;
    VlWide<16>/*511:0*/ __Vtemp132;
    VlWide<16>/*511:0*/ __Vtemp133;
    QData/*63:0*/ __Vdlyvval__deq__DOT__ram_data__v0;
    // Body
    __Vdlyvset__deq__DOT__ram_last__v0 = 0U;
    __Vdlyvset__deq__DOT__ram_data__v0 = 0U;
    __Vdlyvset__deq__DOT__ram_strb__v0 = 0U;
    __Vdlyvset__queue_arw_deq__DOT__ram_burst__v0 = 0U;
    __Vdlyvset__queue_arw_deq__DOT__ram_size__v0 = 0U;
    __Vdlyvset__queue_arw_deq__DOT__ram_echo_tl_state_size__v0 = 0U;
    __Vdlyvset__queue_arw_deq__DOT__ram_len__v0 = 0U;
    __Vdlyvset__queue_arw_deq__DOT__ram_id__v0 = 0U;
    __Vdlyvset__queue_arw_deq__DOT__ram_addr__v0 = 0U;
    __Vdlyvset__queue_arw_deq__DOT__ram_echo_tl_state_source__v0 = 0U;
    __Vdlyvset__queue_arw_deq__DOT__ram_wen__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                    & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (0U != (IData)(vlSelf->__PVT__count_1))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                    & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (0U != (IData)(vlSelf->__PVT__count_1))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47031: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47031, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_1))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_1))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47054: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47054, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 1U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (0U != (IData)(vlSelf->__PVT__count_2))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 1U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (0U != (IData)(vlSelf->__PVT__count_2))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47077: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47077, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc_1)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_2))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc_1)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_2))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47100: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47100, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 2U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (0U != (IData)(vlSelf->__PVT__count_3))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 2U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (0U != (IData)(vlSelf->__PVT__count_3))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47123: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47123, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc_2)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_3))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc_2)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_3))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47146: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47146, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 3U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (0U != (IData)(vlSelf->__PVT__count_4))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 3U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (0U != (IData)(vlSelf->__PVT__count_4))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47169: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47169, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc_3)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_4))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc_3)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_4))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47192: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47192, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 4U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (0U != (IData)(vlSelf->__PVT__count_5))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 4U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (0U != (IData)(vlSelf->__PVT__count_5))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47215: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47215, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc_4)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_5))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc_4)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_5))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47238: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47238, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 5U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (0U != (IData)(vlSelf->__PVT__count_6))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 5U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (0U != (IData)(vlSelf->__PVT__count_6))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47261: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47261, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc_5)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_6))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc_5)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_6))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47284: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47284, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 6U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (0U != (IData)(vlSelf->__PVT__count_7))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 6U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (0U != (IData)(vlSelf->__PVT__count_7))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47307: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47307, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc_6)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_7))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->__PVT__inc_6)) 
                               | (0x10U != (IData)(vlSelf->__PVT__count_7))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47330: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47330, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 7U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_8)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 7U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_8)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47353: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47353, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 7U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_8))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 7U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_8))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47376: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47376, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 8U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_9)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 8U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_9)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47399: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47399, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 8U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_9))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 8U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_9))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47422: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47422, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 9U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_10)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 9U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_10)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47445: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47445, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 9U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_10))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 9U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_10))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47468: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47468, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 0xaU) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_11)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 0xaU) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_11)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47491: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47491, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0xaU) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_11))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0xaU) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_11))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47514: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47514, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 0xbU) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_12)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 0xbU) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_12)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47537: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47537, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0xbU) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_12))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0xbU) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_12))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47560: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47560, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 0xcU) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_13)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 0xcU) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_13)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47583: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47583, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0xcU) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_13))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0xcU) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_13))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47606: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47606, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 0xdU) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_14)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 0xdU) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_14)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47629: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47629, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0xdU) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_14))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0xdU) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_14))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47652: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47652, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 0xeU) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_15)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 0xeU) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_15)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47675: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47675, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0xeU) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_15))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0xeU) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_15))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47698: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47698, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 0xfU) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_16)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 0xfU) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_16)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47721: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47721, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0xfU) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_16))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0xfU) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_16))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47744: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47744, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 0x10U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_17)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 0x10U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_17)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47767: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47767, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x10U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_17))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x10U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_17))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47790: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47790, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 0x11U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_18)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 0x11U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_18)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47813: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47813, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x11U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_18))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x11U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_18))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47836: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47836, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 0x12U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_19)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 0x12U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_19)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47859: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47859, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x12U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_19))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x12U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_19))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47882: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47882, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 0x13U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_20)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 0x13U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_20)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47905: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47905, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x13U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_20))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x13U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_20))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47928: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47928, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 0x14U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_21)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 0x14U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_21)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47951: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47951, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x14U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_21))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x14U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_21))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47974: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47974, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 0x15U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_22)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 0x15U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_22)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47997: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 47997, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x15U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_22))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x15U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_22))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:48020: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 48020, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 0x16U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_23)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                     >> 0x16U) & (IData)(vlSelf->__PVT__d_last)) 
                                   & (IData)(vlSelf->__PVT___dec_T_1))) 
                               | (IData)(vlSelf->__PVT__count_23)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:48043: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 48043, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x16U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_23))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->__PVT__out_arw_bits_id)) 
                                    >> 0x16U) & (IData)(vlSelf->__PVT___inc_T))) 
                               | (~ (IData)(vlSelf->__PVT__count_23))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:48066: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 48066, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43568: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43568, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))) 
                            & (0ULL == (0x180000000ULL 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))) 
                            & (0ULL == (0x180000000ULL 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43592: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43592, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43616: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43616, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43640: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43640, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43664: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43664, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43688: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43688, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43712: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43712, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43736: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43736, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43760: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43760, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))) 
                            & (0ULL == (0x180000000ULL 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))) 
                            & (0ULL == (0x180000000ULL 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43784: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43784, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43808: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43808, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43832: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43832, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43856: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43856, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43880: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43880, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43904: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43904, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43928: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43928, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43952: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43952, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43976: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 43976, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                            & (0ULL == (0x180000000ULL 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                            & (0ULL == (0x180000000ULL 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44000: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44000, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44024: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44024, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44048: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44048, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44072: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44072, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44096: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44096, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44120: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44120, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U))) 
                                   | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 4U)))) 
                                  | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            & ((6U >= (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U))) 
                                   | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 4U)))) 
                                  | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            & ((6U >= (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44144: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44144, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44168: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44168, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44192: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44192, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44216: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44216, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44240: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44240, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U))) 
                                   | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 4U)))) 
                                  | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            & ((6U >= (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U))) 
                                   | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 4U)))) 
                                  | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            & ((6U >= (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44264: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44264, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44288: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44288, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44312: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44312, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44336: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44336, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->__PVT__monitor__DOT__mask)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44360: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44360, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44384: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44384, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44408: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44408, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44432: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44432, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44456: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44456, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44480: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44480, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44504: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44504, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44528: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44528, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44552: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44552, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44576: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44576, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44600: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44600, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44624: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44624, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44648: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44648, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44672: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44672, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44696: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44696, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__mask)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44720: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44720, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44744: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44744, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                     & (~ ((6U >= ((IData)(vlSelf->__PVT__r_wins)
                                    ? 1U : 0U)) | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                     & (~ ((6U >= ((IData)(vlSelf->__PVT__r_wins)
                                    ? 1U : 0U)) | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44768: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44768, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44792: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44792, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((3U 
                                                   <= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((3U 
                                                   <= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44816: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44816, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ 
                                                   ((IData)(vlSelf->__PVT__r_wins) 
                                                    & (IData)(vlSelf->__PVT__r_d_corrupt))) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ 
                                                   ((IData)(vlSelf->__PVT__r_wins) 
                                                    & (IData)(vlSelf->__PVT__r_d_corrupt))) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44840: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44840, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ (IData)(vlSelf->__PVT__monitor_io_in_d_bits_denied)) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ (IData)(vlSelf->__PVT__monitor_io_in_d_bits_denied)) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44864: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44864, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44888: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44888, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44912: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44912, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((3U 
                                                   <= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((3U 
                                                   <= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44936: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44936, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ 
                                                   ((IData)(vlSelf->__PVT__r_wins) 
                                                    & (IData)(vlSelf->__PVT__r_d_corrupt))) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (4U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ 
                                                   ((IData)(vlSelf->__PVT__r_wins) 
                                                    & (IData)(vlSelf->__PVT__r_d_corrupt))) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44960: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44960, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44984: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 44984, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45008: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45008, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((3U 
                                                   <= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((3U 
                                                   <= (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45032: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45032, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((~ (IData)(vlSelf->__PVT__monitor_io_in_d_bits_denied)) 
                                                   | ((IData)(vlSelf->__PVT__r_wins) 
                                                      & (IData)(vlSelf->__PVT__r_d_corrupt))) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (5U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((~ (IData)(vlSelf->__PVT__monitor_io_in_d_bits_denied)) 
                                                   | ((IData)(vlSelf->__PVT__r_wins) 
                                                      & (IData)(vlSelf->__PVT__r_d_corrupt))) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45056: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45056, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45080: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45080, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ 
                                                   ((IData)(vlSelf->__PVT__r_wins) 
                                                    & (IData)(vlSelf->__PVT__r_d_corrupt))) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ 
                                                   ((IData)(vlSelf->__PVT__r_wins) 
                                                    & (IData)(vlSelf->__PVT__r_d_corrupt))) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45104: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45104, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45128: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45128, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((~ (IData)(vlSelf->__PVT__monitor_io_in_d_bits_denied)) 
                                                   | ((IData)(vlSelf->__PVT__r_wins) 
                                                      & (IData)(vlSelf->__PVT__r_d_corrupt))) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (1U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((~ (IData)(vlSelf->__PVT__monitor_io_in_d_bits_denied)) 
                                                   | ((IData)(vlSelf->__PVT__r_wins) 
                                                      & (IData)(vlSelf->__PVT__r_d_corrupt))) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45152: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45152, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45176: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45176, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ 
                                                   ((IData)(vlSelf->__PVT__r_wins) 
                                                    & (IData)(vlSelf->__PVT__r_d_corrupt))) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (2U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ 
                                                   ((IData)(vlSelf->__PVT__r_wins) 
                                                    & (IData)(vlSelf->__PVT__r_d_corrupt))) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45200: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45200, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__opcode)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45224: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45224, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__param)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45248: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45248, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45272: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45272, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45296: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45296, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                            == vlSelf->__PVT__monitor__DOT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                            == vlSelf->__PVT__monitor__DOT__address) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45320: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45320, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ ((((IData)(vlSelf->__PVT__r_wins)
                              ? 1U : 0U) == (IData)(vlSelf->__PVT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ ((((IData)(vlSelf->__PVT__r_wins)
                              ? 1U : 0U) == (IData)(vlSelf->__PVT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45344: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45344, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__size_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45368: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45368, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__source_1)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45392: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45392, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlSelf->__PVT__monitor__DOT__denied)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45416: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45416, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp66, vlSelf->__PVT__monitor__DOT__inflight, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ __Vtemp66[0U]) | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp67, vlSelf->__PVT__monitor__DOT__inflight, (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ __Vtemp67[0U]) | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45440: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45440, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp68, vlSelf->__PVT__monitor__DOT__inflight, (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                      & (6U != ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((__Vtemp68[0U] 
                                                   | (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                                                       & (0U 
                                                          == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                                                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                         == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source)))) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp69, vlSelf->__PVT__monitor__DOT__inflight, (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                      & (6U != ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((__Vtemp69[0U] 
                                                   | (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                                                       & (0U 
                                                          == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                                                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                         == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source)))) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45464: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45464, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != ((IData)(vlSelf->__PVT__r_wins)
                                  ? 1U : 0U))) & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                                                  & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                     == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source)))) 
                     & (~ (((((IData)(vlSelf->__PVT__r_wins)
                               ? 1U : 0U) == ((7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                               ? 4U
                                               : ((6U 
                                                   == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                                   ? 4U
                                                   : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30)))) 
                            | (((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U) == ((7U 
                                                 == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                                 ? 4U
                                                 : 
                                                ((6U 
                                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                                  ? 5U
                                                  : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != ((IData)(vlSelf->__PVT__r_wins)
                                  ? 1U : 0U))) & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                                                  & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                     == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source)))) 
                     & (~ (((((IData)(vlSelf->__PVT__r_wins)
                               ? 1U : 0U) == ((7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                               ? 4U
                                               : ((6U 
                                                   == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                                   ? 4U
                                                   : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30)))) 
                            | (((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U) == ((7U 
                                                 == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                                 ? 4U
                                                 : 
                                                ((6U 
                                                  == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                                  ? 5U
                                                  : (IData)(vlSelf->__PVT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45488: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45488, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != ((IData)(vlSelf->__PVT__r_wins)
                                  ? 1U : 0U))) & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                                                  & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                     == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source)))) 
                     & (~ (((7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                            == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != ((IData)(vlSelf->__PVT__r_wins)
                                  ? 1U : 0U))) & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                                                  & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                     == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source)))) 
                     & (~ (((7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                            == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45512: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45512, "");
    }
    __Vtemp72[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                      >> 1U)));
    __Vtemp72[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                      >> 1U)));
    __Vtemp72[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                      >> 1U)));
    __Vtemp72[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                      >> 1U)));
    __Vtemp72[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                      >> 1U)));
    __Vtemp72[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                      >> 1U)));
    __Vtemp72[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                      >> 1U)));
    __Vtemp72[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                      >> 1U)));
    __Vtemp72[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                      >> 1U)));
    __Vtemp72[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                      >> 1U)));
    __Vtemp72[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        >> 1U)));
    __Vtemp72[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                        >> 1U)));
    __Vtemp72[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                        >> 1U)));
    __Vtemp72[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                        >> 1U)));
    __Vtemp72[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                        >> 1U)));
    __Vtemp72[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                       & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                          >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp73, __Vtemp72);
    __Vtemp76[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                      >> 1U)));
    __Vtemp76[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                      >> 1U)));
    __Vtemp76[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                      >> 1U)));
    __Vtemp76[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                      >> 1U)));
    __Vtemp76[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                      >> 1U)));
    __Vtemp76[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                      >> 1U)));
    __Vtemp76[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                      >> 1U)));
    __Vtemp76[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                      >> 1U)));
    __Vtemp76[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                      >> 1U)));
    __Vtemp76[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                      >> 1U)));
    __Vtemp76[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        >> 1U)));
    __Vtemp76[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                        >> 1U)));
    __Vtemp76[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                        >> 1U)));
    __Vtemp76[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                        >> 1U)));
    __Vtemp76[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                        >> 1U)));
    __Vtemp76[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                       & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                          >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp77, __Vtemp76);
    __Vtemp80[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                      >> 1U)));
    __Vtemp80[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                      >> 1U)));
    __Vtemp80[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                      >> 1U)));
    __Vtemp80[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                      >> 1U)));
    __Vtemp80[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                      >> 1U)));
    __Vtemp80[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                      >> 1U)));
    __Vtemp80[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                      >> 1U)));
    __Vtemp80[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                      >> 1U)));
    __Vtemp80[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                      >> 1U)));
    __Vtemp80[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                      >> 1U)));
    __Vtemp80[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        >> 1U)));
    __Vtemp80[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                        >> 1U)));
    __Vtemp80[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                        >> 1U)));
    __Vtemp80[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                        >> 1U)));
    __Vtemp80[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                        >> 1U)));
    __Vtemp80[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                       & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                          >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp81, __Vtemp80);
    __Vtemp84[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                      >> 1U)));
    __Vtemp84[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                      >> 1U)));
    __Vtemp84[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                      >> 1U)));
    __Vtemp84[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                      >> 1U)));
    __Vtemp84[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                      >> 1U)));
    __Vtemp84[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                      >> 1U)));
    __Vtemp84[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                      >> 1U)));
    __Vtemp84[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                      >> 1U)));
    __Vtemp84[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                      >> 1U)));
    __Vtemp84[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                      >> 1U)));
    __Vtemp84[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        >> 1U)));
    __Vtemp84[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                        >> 1U)));
    __Vtemp84[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                        >> 1U)));
    __Vtemp84[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                        >> 1U)));
    __Vtemp84[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                        >> 1U)));
    __Vtemp84[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                       & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                          >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp85, __Vtemp84);
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != ((IData)(vlSelf->__PVT__r_wins)
                                  ? 1U : 0U))) & (~ 
                                                  (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                                                   & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                      == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))))) 
                     & (~ (((((IData)(vlSelf->__PVT__r_wins)
                               ? 1U : 0U) == ((7U == 
                                               (7U 
                                                & __Vtemp73[0U]))
                                               ? 4U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp77[0U]))
                                                   ? 4U
                                                   : (IData)(vlSelf->__PVT__monitor__DOT___GEN_46)))) 
                            | (((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U) == ((7U 
                                                 == 
                                                 (7U 
                                                  & __Vtemp81[0U]))
                                                 ? 4U
                                                 : 
                                                ((6U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp85[0U]))
                                                  ? 5U
                                                  : (IData)(vlSelf->__PVT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp88[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                      >> 1U)));
    __Vtemp88[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                      >> 1U)));
    __Vtemp88[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                      >> 1U)));
    __Vtemp88[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                      >> 1U)));
    __Vtemp88[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                      >> 1U)));
    __Vtemp88[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                      >> 1U)));
    __Vtemp88[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                      >> 1U)));
    __Vtemp88[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                      >> 1U)));
    __Vtemp88[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                      >> 1U)));
    __Vtemp88[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                      >> 1U)));
    __Vtemp88[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        >> 1U)));
    __Vtemp88[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                        >> 1U)));
    __Vtemp88[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                        >> 1U)));
    __Vtemp88[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                        >> 1U)));
    __Vtemp88[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                        >> 1U)));
    __Vtemp88[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                       & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                          >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp89, __Vtemp88);
    __Vtemp92[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                      >> 1U)));
    __Vtemp92[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                      >> 1U)));
    __Vtemp92[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                      >> 1U)));
    __Vtemp92[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                      >> 1U)));
    __Vtemp92[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                      >> 1U)));
    __Vtemp92[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                      >> 1U)));
    __Vtemp92[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                      >> 1U)));
    __Vtemp92[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                      >> 1U)));
    __Vtemp92[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                      >> 1U)));
    __Vtemp92[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                      >> 1U)));
    __Vtemp92[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        >> 1U)));
    __Vtemp92[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                        >> 1U)));
    __Vtemp92[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                        >> 1U)));
    __Vtemp92[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                        >> 1U)));
    __Vtemp92[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                        >> 1U)));
    __Vtemp92[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                       & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                          >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp93, __Vtemp92);
    __Vtemp96[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                      >> 1U)));
    __Vtemp96[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                      >> 1U)));
    __Vtemp96[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                      >> 1U)));
    __Vtemp96[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                      >> 1U)));
    __Vtemp96[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                      >> 1U)));
    __Vtemp96[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                      >> 1U)));
    __Vtemp96[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                      >> 1U)));
    __Vtemp96[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                      >> 1U)));
    __Vtemp96[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                      >> 1U)));
    __Vtemp96[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                     & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                         << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                       & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                      >> 1U)));
    __Vtemp96[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                        >> 1U)));
    __Vtemp96[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                        >> 1U)));
    __Vtemp96[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                        >> 1U)));
    __Vtemp96[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                        >> 1U)));
    __Vtemp96[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                         & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                        >> 1U)));
    __Vtemp96[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                       & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                          >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp97, __Vtemp96);
    __Vtemp100[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                       >> 1U)));
    __Vtemp100[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                       >> 1U)));
    __Vtemp100[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                       >> 1U)));
    __Vtemp100[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                       >> 1U)));
    __Vtemp100[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                       >> 1U)));
    __Vtemp100[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                       >> 1U)));
    __Vtemp100[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                       >> 1U)));
    __Vtemp100[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                       >> 1U)));
    __Vtemp100[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                       >> 1U)));
    __Vtemp100[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                           & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                          << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                        & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                       >> 1U)));
    __Vtemp100[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                             & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                            << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                         >> 1U)));
    __Vtemp100[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                             & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                            << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                         >> 1U)));
    __Vtemp100[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                             & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                            << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                         >> 1U)));
    __Vtemp100[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                             & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                            << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                         >> 1U)));
    __Vtemp100[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                          & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                         >> 1U)));
    __Vtemp100[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                        & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                            & vlSelf->__PVT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                           >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp101, __Vtemp100);
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != ((IData)(vlSelf->__PVT__r_wins)
                                  ? 1U : 0U))) & (~ 
                                                  (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                                                   & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                      == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))))) 
                     & (~ (((((IData)(vlSelf->__PVT__r_wins)
                               ? 1U : 0U) == ((7U == 
                                               (7U 
                                                & __Vtemp89[0U]))
                                               ? 4U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp93[0U]))
                                                   ? 4U
                                                   : (IData)(vlSelf->__PVT__monitor__DOT___GEN_46)))) 
                            | (((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U) == ((7U 
                                                 == 
                                                 (7U 
                                                  & __Vtemp97[0U]))
                                                 ? 4U
                                                 : 
                                                ((6U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp101[0U]))
                                                  ? 5U
                                                  : (IData)(vlSelf->__PVT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45536: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45536, "");
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp102, vlSelf->__PVT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                   << 2U));
    __Vtemp105[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                           & __Vtemp102[1U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                             & __Vtemp102[0U]) >> 1U)));
    __Vtemp105[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                           & __Vtemp102[2U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                             & __Vtemp102[1U]) >> 1U)));
    __Vtemp105[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                           & __Vtemp102[3U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                             & __Vtemp102[2U]) >> 1U)));
    __Vtemp105[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                           & __Vtemp102[4U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                             & __Vtemp102[3U]) >> 1U)));
    __Vtemp105[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                           & __Vtemp102[5U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                             & __Vtemp102[4U]) >> 1U)));
    __Vtemp105[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                           & __Vtemp102[6U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                             & __Vtemp102[5U]) >> 1U)));
    __Vtemp105[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                           & __Vtemp102[7U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                             & __Vtemp102[6U]) >> 1U)));
    __Vtemp105[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                           & __Vtemp102[8U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                             & __Vtemp102[7U]) >> 1U)));
    __Vtemp105[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                           & __Vtemp102[9U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                             & __Vtemp102[8U]) >> 1U)));
    __Vtemp105[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                           & __Vtemp102[0xaU]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                             & __Vtemp102[9U]) >> 1U)));
    __Vtemp105[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                             & __Vtemp102[0xbU]) << 0x1fU) 
                           | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                               & __Vtemp102[0xaU]) 
                              >> 1U)));
    __Vtemp105[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                             & __Vtemp102[0xcU]) << 0x1fU) 
                           | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                               & __Vtemp102[0xbU]) 
                              >> 1U)));
    __Vtemp105[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                             & __Vtemp102[0xdU]) << 0x1fU) 
                           | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                               & __Vtemp102[0xcU]) 
                              >> 1U)));
    __Vtemp105[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                             & __Vtemp102[0xeU]) << 0x1fU) 
                           | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                               & __Vtemp102[0xdU]) 
                              >> 1U)));
    __Vtemp105[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & __Vtemp102[0xfU]) << 0x1fU) 
                           | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                               & __Vtemp102[0xeU]) 
                              >> 1U)));
    __Vtemp105[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                        & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                            & __Vtemp102[0xfU]) >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp106, __Vtemp105);
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != ((IData)(vlSelf->__PVT__r_wins)
                                  ? 1U : 0U))) & (~ 
                                                  (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                                                   & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                      == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_size) 
                            == (0xfU & __Vtemp106[0U])) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp107, vlSelf->__PVT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                   << 2U));
    __Vtemp110[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                           & __Vtemp107[1U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                             & __Vtemp107[0U]) >> 1U)));
    __Vtemp110[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                           & __Vtemp107[2U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                             & __Vtemp107[1U]) >> 1U)));
    __Vtemp110[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                           & __Vtemp107[3U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                             & __Vtemp107[2U]) >> 1U)));
    __Vtemp110[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                           & __Vtemp107[4U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                             & __Vtemp107[3U]) >> 1U)));
    __Vtemp110[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                           & __Vtemp107[5U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                             & __Vtemp107[4U]) >> 1U)));
    __Vtemp110[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                           & __Vtemp107[6U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                             & __Vtemp107[5U]) >> 1U)));
    __Vtemp110[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                           & __Vtemp107[7U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                             & __Vtemp107[6U]) >> 1U)));
    __Vtemp110[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                           & __Vtemp107[8U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                             & __Vtemp107[7U]) >> 1U)));
    __Vtemp110[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                           & __Vtemp107[9U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                             & __Vtemp107[8U]) >> 1U)));
    __Vtemp110[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                           & __Vtemp107[0xaU]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                             & __Vtemp107[9U]) >> 1U)));
    __Vtemp110[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                             & __Vtemp107[0xbU]) << 0x1fU) 
                           | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                               & __Vtemp107[0xaU]) 
                              >> 1U)));
    __Vtemp110[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                             & __Vtemp107[0xcU]) << 0x1fU) 
                           | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                               & __Vtemp107[0xbU]) 
                              >> 1U)));
    __Vtemp110[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                             & __Vtemp107[0xdU]) << 0x1fU) 
                           | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                               & __Vtemp107[0xcU]) 
                              >> 1U)));
    __Vtemp110[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                             & __Vtemp107[0xeU]) << 0x1fU) 
                           | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                               & __Vtemp107[0xdU]) 
                              >> 1U)));
    __Vtemp110[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & __Vtemp107[0xfU]) << 0x1fU) 
                           | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                               & __Vtemp107[0xeU]) 
                              >> 1U)));
    __Vtemp110[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                        & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                            & __Vtemp107[0xfU]) >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp111, __Vtemp110);
    if (VL_UNLIKELY((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                       & (6U != ((IData)(vlSelf->__PVT__r_wins)
                                  ? 1U : 0U))) & (~ 
                                                  (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                                                    & (0U 
                                                       == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                                                   & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                      == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_size) 
                            == (0xfU & __Vtemp111[0U])) 
                           | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45560: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45560, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid)) 
                       & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                          == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))) 
                      & (6U != ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_d_ready)) 
                                                   | (IData)(vlSelf->__PVT__monitor_io_in_a_ready)) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid)) 
                       & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                          == (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source))) 
                      & (6U != ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_d_ready)) 
                                                   | (IData)(vlSelf->__PVT__monitor_io_in_a_ready)) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45582: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45582, "");
    }
    __Vtemp112[0U] = 1U;
    __Vtemp112[1U] = 0U;
    __Vtemp112[2U] = 0U;
    __Vtemp112[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp113, __Vtemp112, (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ (((0U != ((((vlSelf->__PVT__monitor__DOT__a_set_wo_ready[0U] 
                                          ^ ((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != 
                                                 ((IData)(vlSelf->__PVT__r_wins)
                                                   ? 1U
                                                   : 0U)))
                                              ? __Vtemp113[0U]
                                              : 0U)) 
                                         | (vlSelf->__PVT__monitor__DOT__a_set_wo_ready[1U] 
                                            ^ ((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                                                 & (0U 
                                                    == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != 
                                                   ((IData)(vlSelf->__PVT__r_wins)
                                                     ? 1U
                                                     : 0U)))
                                                ? __Vtemp113[1U]
                                                : 0U))) 
                                        | (vlSelf->__PVT__monitor__DOT__a_set_wo_ready[2U] 
                                           ^ ((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != 
                                                  ((IData)(vlSelf->__PVT__r_wins)
                                                    ? 1U
                                                    : 0U)))
                                               ? __Vtemp113[2U]
                                               : 0U))) 
                                       | (vlSelf->__PVT__monitor__DOT__a_set_wo_ready[3U] 
                                          ^ ((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != 
                                                 ((IData)(vlSelf->__PVT__r_wins)
                                                   ? 1U
                                                   : 0U)))
                                              ? __Vtemp113[3U]
                                              : 0U)))) 
                               | (~ (IData)((0U != 
                                             (((vlSelf->__PVT__monitor__DOT__a_set_wo_ready[0U] 
                                                | vlSelf->__PVT__monitor__DOT__a_set_wo_ready[1U]) 
                                               | vlSelf->__PVT__monitor__DOT__a_set_wo_ready[2U]) 
                                              | vlSelf->__PVT__monitor__DOT__a_set_wo_ready[3U]))))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp117[0U] = 1U;
    __Vtemp117[1U] = 0U;
    __Vtemp117[2U] = 0U;
    __Vtemp117[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp118, __Vtemp117, (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ (((0U != ((((vlSelf->__PVT__monitor__DOT__a_set_wo_ready[0U] 
                                          ^ ((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != 
                                                 ((IData)(vlSelf->__PVT__r_wins)
                                                   ? 1U
                                                   : 0U)))
                                              ? __Vtemp118[0U]
                                              : 0U)) 
                                         | (vlSelf->__PVT__monitor__DOT__a_set_wo_ready[1U] 
                                            ^ ((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                                                 & (0U 
                                                    == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != 
                                                   ((IData)(vlSelf->__PVT__r_wins)
                                                     ? 1U
                                                     : 0U)))
                                                ? __Vtemp118[1U]
                                                : 0U))) 
                                        | (vlSelf->__PVT__monitor__DOT__a_set_wo_ready[2U] 
                                           ^ ((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                                                & (0U 
                                                   == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != 
                                                  ((IData)(vlSelf->__PVT__r_wins)
                                                    ? 1U
                                                    : 0U)))
                                               ? __Vtemp118[2U]
                                               : 0U))) 
                                       | (vlSelf->__PVT__monitor__DOT__a_set_wo_ready[3U] 
                                          ^ ((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != 
                                                 ((IData)(vlSelf->__PVT__r_wins)
                                                   ? 1U
                                                   : 0U)))
                                              ? __Vtemp118[3U]
                                              : 0U)))) 
                               | (~ (IData)((0U != 
                                             (((vlSelf->__PVT__monitor__DOT__a_set_wo_ready[0U] 
                                                | vlSelf->__PVT__monitor__DOT__a_set_wo_ready[1U]) 
                                               | vlSelf->__PVT__monitor__DOT__a_set_wo_ready[2U]) 
                                              | vlSelf->__PVT__monitor__DOT__a_set_wo_ready[3U]))))) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45606: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45606, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlSelf->__PVT__monitor__DOT__inflight[0U] 
                                                     | vlSelf->__PVT__monitor__DOT__inflight[1U]) 
                                                    | vlSelf->__PVT__monitor__DOT__inflight[2U]) 
                                                   | vlSelf->__PVT__monitor__DOT__inflight[3U])))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlSelf->__PVT__monitor__DOT__inflight[0U] 
                                                     | vlSelf->__PVT__monitor__DOT__inflight[1U]) 
                                                    | vlSelf->__PVT__monitor__DOT__inflight[2U]) 
                                                   | vlSelf->__PVT__monitor__DOT__inflight[3U])))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45630: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45630, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp122, vlSelf->__PVT__monitor__DOT__inflight_1, (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                      & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (__Vtemp122[0U] 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp123, vlSelf->__PVT__monitor__DOT__inflight_1, (IData)(vlSelf->__PVT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                      & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (__Vtemp123[0U] 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45654: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45654, "");
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp124, vlSelf->__PVT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                   << 2U));
    __Vtemp127[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                           & __Vtemp124[1U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                             & __Vtemp124[0U]) >> 1U)));
    __Vtemp127[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                           & __Vtemp124[2U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                             & __Vtemp124[1U]) >> 1U)));
    __Vtemp127[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                           & __Vtemp124[3U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                             & __Vtemp124[2U]) >> 1U)));
    __Vtemp127[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                           & __Vtemp124[4U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                             & __Vtemp124[3U]) >> 1U)));
    __Vtemp127[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                           & __Vtemp124[5U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                             & __Vtemp124[4U]) >> 1U)));
    __Vtemp127[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                           & __Vtemp124[6U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                             & __Vtemp124[5U]) >> 1U)));
    __Vtemp127[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                           & __Vtemp124[7U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                             & __Vtemp124[6U]) >> 1U)));
    __Vtemp127[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                           & __Vtemp124[8U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                             & __Vtemp124[7U]) >> 1U)));
    __Vtemp127[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                           & __Vtemp124[9U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                             & __Vtemp124[8U]) >> 1U)));
    __Vtemp127[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                           & __Vtemp124[0xaU]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                             & __Vtemp124[9U]) >> 1U)));
    __Vtemp127[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                             & __Vtemp124[0xbU]) << 0x1fU) 
                           | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                               & __Vtemp124[0xaU]) 
                              >> 1U)));
    __Vtemp127[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                             & __Vtemp124[0xcU]) << 0x1fU) 
                           | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                               & __Vtemp124[0xbU]) 
                              >> 1U)));
    __Vtemp127[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                             & __Vtemp124[0xdU]) << 0x1fU) 
                           | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                               & __Vtemp124[0xcU]) 
                              >> 1U)));
    __Vtemp127[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                             & __Vtemp124[0xeU]) << 0x1fU) 
                           | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                               & __Vtemp124[0xdU]) 
                              >> 1U)));
    __Vtemp127[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & __Vtemp124[0xfU]) << 0x1fU) 
                           | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                               & __Vtemp124[0xeU]) 
                              >> 1U)));
    __Vtemp127[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                        & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                            & __Vtemp124[0xfU]) >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp128, __Vtemp127);
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                      & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_size) 
                                                   == 
                                                   (0xfU 
                                                    & __Vtemp128[0U])) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp129, vlSelf->__PVT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->__PVT__monitor_io_in_d_bits_source) 
                   << 2U));
    __Vtemp132[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                           & __Vtemp129[1U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                             & __Vtemp129[0U]) >> 1U)));
    __Vtemp132[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                           & __Vtemp129[2U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                             & __Vtemp129[1U]) >> 1U)));
    __Vtemp132[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                           & __Vtemp129[3U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                             & __Vtemp129[2U]) >> 1U)));
    __Vtemp132[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                           & __Vtemp129[4U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                             & __Vtemp129[3U]) >> 1U)));
    __Vtemp132[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                           & __Vtemp129[5U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                             & __Vtemp129[4U]) >> 1U)));
    __Vtemp132[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                           & __Vtemp129[6U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                             & __Vtemp129[5U]) >> 1U)));
    __Vtemp132[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                           & __Vtemp129[7U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                             & __Vtemp129[6U]) >> 1U)));
    __Vtemp132[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                           & __Vtemp129[8U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                             & __Vtemp129[7U]) >> 1U)));
    __Vtemp132[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                           & __Vtemp129[9U]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                             & __Vtemp129[8U]) >> 1U)));
    __Vtemp132[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                      & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                           & __Vtemp129[0xaU]) << 0x1fU) 
                         | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                             & __Vtemp129[9U]) >> 1U)));
    __Vtemp132[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                             & __Vtemp129[0xbU]) << 0x1fU) 
                           | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                               & __Vtemp129[0xaU]) 
                              >> 1U)));
    __Vtemp132[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                             & __Vtemp129[0xcU]) << 0x1fU) 
                           | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                               & __Vtemp129[0xbU]) 
                              >> 1U)));
    __Vtemp132[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                             & __Vtemp129[0xdU]) << 0x1fU) 
                           | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                               & __Vtemp129[0xcU]) 
                              >> 1U)));
    __Vtemp132[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                             & __Vtemp129[0xeU]) << 0x1fU) 
                           | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                               & __Vtemp129[0xdU]) 
                              >> 1U)));
    __Vtemp132[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                        & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & __Vtemp129[0xfU]) << 0x1fU) 
                           | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                               & __Vtemp129[0xeU]) 
                              >> 1U)));
    __Vtemp132[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                        & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                            & __Vtemp129[0xfU]) >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp133, __Vtemp132);
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
                      & (6U == ((IData)(vlSelf->__PVT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((IData)(vlSelf->__PVT__monitor_io_in_d_bits_size) 
                                                   == 
                                                   (0xfU 
                                                    & __Vtemp133[0U])) 
                                                  | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45678: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45678, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlSelf->__PVT__monitor__DOT__inflight_1[0U] 
                                                     | vlSelf->__PVT__monitor__DOT__inflight_1[1U]) 
                                                    | vlSelf->__PVT__monitor__DOT__inflight_1[2U]) 
                                                   | vlSelf->__PVT__monitor__DOT__inflight_1[3U])))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlSelf->__PVT__monitor__DOT__inflight_1[0U] 
                                                     | vlSelf->__PVT__monitor__DOT__inflight_1[1U]) 
                                                    | vlSelf->__PVT__monitor__DOT__inflight_1[2U]) 
                                                   | vlSelf->__PVT__monitor__DOT__inflight_1[3U])))) 
                                | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->__PVT__monitor__DOT__watchdog_1 
                                  < vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSymsp->TOP.reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45702: Assertion failed in %NysyxSoCFull.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 45702, "");
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[1U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[2U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[3U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[4U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[5U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[6U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[7U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[8U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[9U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xfU];
    } else {
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0U] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[0U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[1U] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[1U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[2U] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[2U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[3U] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[3U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[4U] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[4U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[5U] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[5U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[6U] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[6U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[7U] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[7U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[8U] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[8U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[9U] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[9U];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xaU] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[0xaU];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xbU] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[0xbU];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xcU] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[0xcU];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xdU] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[0xdU];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xeU] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[0xeU];
        vlSelf->__PVT__monitor__DOT__inflight_opcodes[0xfU] 
            = vlSelf->__PVT__monitor__DOT___inflight_opcodes_T_2[0xfU];
    }
    if (vlSelf->__PVT__r_first) {
        vlSelf->__PVT__r_denied_r = (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    }
    if (((IData)(vlSelf->__PVT__deq__DOT__maybe_full)
          ? (IData)(vlSelf->__PVT__deq__DOT___do_enq_T)
          : (IData)(vlSelf->__PVT__deq__DOT___GEN_9))) {
        __Vdlyvval__deq__DOT__ram_last__v0 = vlSelf->__PVT__deq_io_enq_bits_last;
        __Vdlyvset__deq__DOT__ram_last__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__deq__DOT__maybe_full)
          ? (IData)(vlSelf->__PVT__deq__DOT___do_enq_T)
          : (IData)(vlSelf->__PVT__deq__DOT___GEN_9))) {
        __Vdlyvval__deq__DOT__ram_data__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_data;
        __Vdlyvset__deq__DOT__ram_data__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__deq__DOT__maybe_full)
          ? (IData)(vlSelf->__PVT__deq__DOT___do_enq_T)
          : (IData)(vlSelf->__PVT__deq__DOT___GEN_9))) {
        __Vdlyvval__deq__DOT__ram_strb__v0 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_mask;
        __Vdlyvset__deq__DOT__ram_strb__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full)
          ? (IData)(vlSelf->__PVT__queue_arw_deq__DOT___do_enq_T)
          : (IData)(vlSelf->__PVT__queue_arw_deq__DOT___GEN_18))) {
        __Vdlyvset__queue_arw_deq__DOT__ram_burst__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full)
          ? (IData)(vlSelf->__PVT__queue_arw_deq__DOT___do_enq_T)
          : (IData)(vlSelf->__PVT__queue_arw_deq__DOT___GEN_18))) {
        __Vdlyvval__queue_arw_deq__DOT__ram_size__v0 
            = vlSelf->__PVT__queue_arw_deq_io_enq_bits_size;
        __Vdlyvset__queue_arw_deq__DOT__ram_size__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full)
          ? (IData)(vlSelf->__PVT__queue_arw_deq__DOT___do_enq_T)
          : (IData)(vlSelf->__PVT__queue_arw_deq__DOT___GEN_18))) {
        __Vdlyvval__queue_arw_deq__DOT__ram_echo_tl_state_size__v0 
            = (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size));
        __Vdlyvset__queue_arw_deq__DOT__ram_echo_tl_state_size__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full)
          ? (IData)(vlSelf->__PVT__queue_arw_deq__DOT___do_enq_T)
          : (IData)(vlSelf->__PVT__queue_arw_deq__DOT___GEN_18))) {
        __Vdlyvval__queue_arw_deq__DOT__ram_len__v0 
            = (0xffU & (~ (0x7fffU & (((IData)(0x7ffU) 
                                       << (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                      >> 3U))));
        __Vdlyvset__queue_arw_deq__DOT__ram_len__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full)
          ? (IData)(vlSelf->__PVT__queue_arw_deq__DOT___do_enq_T)
          : (IData)(vlSelf->__PVT__queue_arw_deq__DOT___GEN_18))) {
        __Vdlyvval__queue_arw_deq__DOT__ram_id__v0 
            = vlSelf->__PVT__queue_arw_deq_io_enq_bits_id;
        __Vdlyvset__queue_arw_deq__DOT__ram_id__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full)
          ? (IData)(vlSelf->__PVT__queue_arw_deq__DOT___do_enq_T)
          : (IData)(vlSelf->__PVT__queue_arw_deq__DOT___GEN_18))) {
        __Vdlyvval__queue_arw_deq__DOT__ram_addr__v0 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address;
        __Vdlyvset__queue_arw_deq__DOT__ram_addr__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full)
          ? (IData)(vlSelf->__PVT__queue_arw_deq__DOT___do_enq_T)
          : (IData)(vlSelf->__PVT__queue_arw_deq__DOT___GEN_18))) {
        __Vdlyvval__queue_arw_deq__DOT__ram_echo_tl_state_source__v0 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source;
        __Vdlyvset__queue_arw_deq__DOT__ram_echo_tl_state_source__v0 = 1U;
    }
    if (((IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full)
          ? (IData)(vlSelf->__PVT__queue_arw_deq__DOT___do_enq_T)
          : (IData)(vlSelf->__PVT__queue_arw_deq__DOT___GEN_18))) {
        __Vdlyvval__queue_arw_deq__DOT__ram_wen__v0 
            = (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                        >> 2U)));
        __Vdlyvset__queue_arw_deq__DOT__ram_wen__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__doneAW = 0U;
    } else if (vlSelf->__PVT___T) {
        vlSelf->__PVT__doneAW = (1U & (~ ((1U == (IData)(vlSelf->__PVT__counter)) 
                                          | (0U == (IData)(vlSelf->__PVT__beats1)))));
    }
    if (vlSelf->__PVT__inc_6) {
        vlSelf->__PVT__write_6 = (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                           >> 2U)));
    }
    if (vlSelf->__PVT__inc_5) {
        vlSelf->__PVT__write_5 = (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                           >> 2U)));
    }
    if (vlSelf->__PVT__inc_3) {
        vlSelf->__PVT__write_3 = (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                           >> 2U)));
    }
    if (vlSelf->__PVT__inc_4) {
        vlSelf->__PVT__write_4 = (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                           >> 2U)));
    }
    if (vlSelf->__PVT__inc_2) {
        vlSelf->__PVT__write_2 = (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                           >> 2U)));
    }
    if (vlSelf->__PVT__inc_1) {
        vlSelf->__PVT__write_1 = (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                           >> 2U)));
    }
    if (vlSelf->__PVT__inc) {
        vlSelf->__PVT__write = (1U & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                         >> 2U)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__r_holds_d = 0U;
    } else if (vlSelf->__PVT___T_2) {
        vlSelf->__PVT__r_holds_d = (1U & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag_auto_in_rlast)));
    }
    vlSelf->__PVT__b_delay = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag_auto_in_bvalid) 
                               & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_d_ready) 
                                     & (~ (IData)(vlSelf->__PVT__r_wins)))))
                               ? (IData)(vlSelf->__PVT___bdelay_T_1)
                               : 0U);
    if (__Vdlyvset__deq__DOT__ram_last__v0) {
        vlSelf->__PVT__deq__DOT__ram_last[0U] = __Vdlyvval__deq__DOT__ram_last__v0;
    }
    if (__Vdlyvset__deq__DOT__ram_data__v0) {
        vlSelf->__PVT__deq__DOT__ram_data[0U] = __Vdlyvval__deq__DOT__ram_data__v0;
    }
    if (__Vdlyvset__deq__DOT__ram_strb__v0) {
        vlSelf->__PVT__deq__DOT__ram_strb[0U] = __Vdlyvval__deq__DOT__ram_strb__v0;
    }
    if (__Vdlyvset__queue_arw_deq__DOT__ram_burst__v0) {
        vlSelf->__PVT__queue_arw_deq__DOT__ram_burst[0U] = 1U;
    }
    if (__Vdlyvset__queue_arw_deq__DOT__ram_size__v0) {
        vlSelf->__PVT__queue_arw_deq__DOT__ram_size[0U] 
            = __Vdlyvval__queue_arw_deq__DOT__ram_size__v0;
    }
    if (__Vdlyvset__queue_arw_deq__DOT__ram_echo_tl_state_size__v0) {
        vlSelf->__PVT__queue_arw_deq__DOT__ram_echo_tl_state_size[0U] 
            = __Vdlyvval__queue_arw_deq__DOT__ram_echo_tl_state_size__v0;
    }
    if (__Vdlyvset__queue_arw_deq__DOT__ram_len__v0) {
        vlSelf->__PVT__queue_arw_deq__DOT__ram_len[0U] 
            = __Vdlyvval__queue_arw_deq__DOT__ram_len__v0;
    }
    if (__Vdlyvset__queue_arw_deq__DOT__ram_id__v0) {
        vlSelf->__PVT__queue_arw_deq__DOT__ram_id[0U] 
            = __Vdlyvval__queue_arw_deq__DOT__ram_id__v0;
    }
    if (__Vdlyvset__queue_arw_deq__DOT__ram_addr__v0) {
        vlSelf->__PVT__queue_arw_deq__DOT__ram_addr[0U] 
            = __Vdlyvval__queue_arw_deq__DOT__ram_addr__v0;
    }
    if (__Vdlyvset__queue_arw_deq__DOT__ram_echo_tl_state_source__v0) {
        vlSelf->__PVT__queue_arw_deq__DOT__ram_echo_tl_state_source[0U] 
            = __Vdlyvval__queue_arw_deq__DOT__ram_echo_tl_state_source__v0;
    }
    if (__Vdlyvset__queue_arw_deq__DOT__ram_wen__v0) {
        vlSelf->__PVT__queue_arw_deq__DOT__ram_wen[0U] 
            = __Vdlyvval__queue_arw_deq__DOT__ram_wen__v0;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__count_7 = 0U;
        vlSelf->__PVT__count_6 = 0U;
        vlSelf->__PVT__count_4 = 0U;
        vlSelf->__PVT__count_5 = 0U;
        vlSelf->__PVT__count_3 = 0U;
    } else {
        vlSelf->__PVT__count_7 = vlSelf->__PVT___count_T_28;
        vlSelf->__PVT__count_6 = vlSelf->__PVT___count_T_24;
        vlSelf->__PVT__count_4 = vlSelf->__PVT___count_T_16;
        vlSelf->__PVT__count_5 = vlSelf->__PVT___count_T_20;
        vlSelf->__PVT__count_3 = vlSelf->__PVT___count_T_12;
    }
    vlSelf->__PVT__count_8 = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                    & ((IData)(vlSelf->__PVT___count_T_30) 
                                       - (((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->__PVT__d_last)) 
                                          & (IData)(vlSelf->__PVT___dec_T_1)))));
    vlSelf->__PVT__count_9 = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                    & ((IData)(vlSelf->__PVT___count_T_34) 
                                       - (((((IData)(1U) 
                                             << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                            >> 8U) 
                                           & (IData)(vlSelf->__PVT__d_last)) 
                                          & (IData)(vlSelf->__PVT___dec_T_1)))));
    vlSelf->__PVT__count_10 = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                     & ((IData)(vlSelf->__PVT___count_T_38) 
                                        - (((((IData)(1U) 
                                              << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                             >> 9U) 
                                            & (IData)(vlSelf->__PVT__d_last)) 
                                           & (IData)(vlSelf->__PVT___dec_T_1)))));
    vlSelf->__PVT__count_11 = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                     & ((IData)(vlSelf->__PVT___count_T_42) 
                                        - (((((IData)(1U) 
                                              << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                             >> 0xaU) 
                                            & (IData)(vlSelf->__PVT__d_last)) 
                                           & (IData)(vlSelf->__PVT___dec_T_1)))));
    vlSelf->__PVT__count_12 = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                     & ((IData)(vlSelf->__PVT___count_T_46) 
                                        - (((((IData)(1U) 
                                              << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                             >> 0xbU) 
                                            & (IData)(vlSelf->__PVT__d_last)) 
                                           & (IData)(vlSelf->__PVT___dec_T_1)))));
    vlSelf->__PVT__count_13 = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                     & ((IData)(vlSelf->__PVT___count_T_50) 
                                        - (((((IData)(1U) 
                                              << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                             >> 0xcU) 
                                            & (IData)(vlSelf->__PVT__d_last)) 
                                           & (IData)(vlSelf->__PVT___dec_T_1)))));
    vlSelf->__PVT__count_14 = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                     & ((IData)(vlSelf->__PVT___count_T_54) 
                                        - (((((IData)(1U) 
                                              << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                             >> 0xdU) 
                                            & (IData)(vlSelf->__PVT__d_last)) 
                                           & (IData)(vlSelf->__PVT___dec_T_1)))));
    vlSelf->__PVT__count_15 = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                     & ((IData)(vlSelf->__PVT___count_T_58) 
                                        - (((((IData)(1U) 
                                              << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                             >> 0xeU) 
                                            & (IData)(vlSelf->__PVT__d_last)) 
                                           & (IData)(vlSelf->__PVT___dec_T_1)))));
    vlSelf->__PVT__count_16 = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                     & ((IData)(vlSelf->__PVT___count_T_62) 
                                        - (((((IData)(1U) 
                                              << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                             >> 0xfU) 
                                            & (IData)(vlSelf->__PVT__d_last)) 
                                           & (IData)(vlSelf->__PVT___dec_T_1)))));
    vlSelf->__PVT__count_17 = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                     & ((IData)(vlSelf->__PVT___count_T_66) 
                                        - (((((IData)(1U) 
                                              << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                             >> 0x10U) 
                                            & (IData)(vlSelf->__PVT__d_last)) 
                                           & (IData)(vlSelf->__PVT___dec_T_1)))));
    vlSelf->__PVT__count_18 = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                     & ((IData)(vlSelf->__PVT___count_T_70) 
                                        - (((((IData)(1U) 
                                              << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                             >> 0x11U) 
                                            & (IData)(vlSelf->__PVT__d_last)) 
                                           & (IData)(vlSelf->__PVT___dec_T_1)))));
    vlSelf->__PVT__count_19 = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                     & ((IData)(vlSelf->__PVT___count_T_74) 
                                        - (((((IData)(1U) 
                                              << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                             >> 0x12U) 
                                            & (IData)(vlSelf->__PVT__d_last)) 
                                           & (IData)(vlSelf->__PVT___dec_T_1)))));
    vlSelf->__PVT__count_20 = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                     & ((IData)(vlSelf->__PVT___count_T_78) 
                                        - (((((IData)(1U) 
                                              << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                             >> 0x13U) 
                                            & (IData)(vlSelf->__PVT__d_last)) 
                                           & (IData)(vlSelf->__PVT___dec_T_1)))));
    vlSelf->__PVT__count_21 = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                     & ((IData)(vlSelf->__PVT___count_T_82) 
                                        - (((((IData)(1U) 
                                              << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                             >> 0x14U) 
                                            & (IData)(vlSelf->__PVT__d_last)) 
                                           & (IData)(vlSelf->__PVT___dec_T_1)))));
    vlSelf->__PVT__count_22 = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                     & ((IData)(vlSelf->__PVT___count_T_86) 
                                        - (((((IData)(1U) 
                                              << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                             >> 0x15U) 
                                            & (IData)(vlSelf->__PVT__d_last)) 
                                           & (IData)(vlSelf->__PVT___dec_T_1)))));
    vlSelf->__PVT__count_23 = (1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                                     & ((IData)(vlSelf->__PVT___count_T_90) 
                                        - (((((IData)(1U) 
                                              << (IData)(vlSelf->__PVT__d_sel_shiftAmount)) 
                                             >> 0x16U) 
                                            & (IData)(vlSelf->__PVT__d_last)) 
                                           & (IData)(vlSelf->__PVT___dec_T_1)))));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__count_2 = 0U;
        vlSelf->__PVT__count_1 = 0U;
        vlSelf->__PVT__monitor__DOT__inflight_1[0U] = 0U;
        vlSelf->__PVT__monitor__DOT__inflight_1[1U] = 0U;
        vlSelf->__PVT__monitor__DOT__inflight_1[2U] = 0U;
        vlSelf->__PVT__monitor__DOT__inflight_1[3U] = 0U;
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[8U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[9U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[1U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[1U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[2U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[2U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[3U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[3U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[4U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[4U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[5U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[5U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[6U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[6U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[7U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[7U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[8U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[8U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[9U] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[9U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xaU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xbU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xcU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xdU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xeU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_93e1b771_0[0xfU];
        vlSelf->__PVT__monitor__DOT__inflight[0U] = 0U;
        vlSelf->__PVT__monitor__DOT__inflight[1U] = 0U;
        vlSelf->__PVT__monitor__DOT__inflight[2U] = 0U;
        vlSelf->__PVT__monitor__DOT__inflight[3U] = 0U;
        vlSelf->__PVT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->__PVT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->__PVT__count_2 = vlSelf->__PVT___count_T_8;
        vlSelf->__PVT__count_1 = vlSelf->__PVT___count_T_4;
        vlSelf->__PVT__monitor__DOT__inflight_1[0U] 
            = vlSelf->__PVT__monitor__DOT___inflight_T_5[0U];
        vlSelf->__PVT__monitor__DOT__inflight_1[1U] 
            = vlSelf->__PVT__monitor__DOT___inflight_T_5[1U];
        vlSelf->__PVT__monitor__DOT__inflight_1[2U] 
            = vlSelf->__PVT__monitor__DOT___inflight_T_5[2U];
        vlSelf->__PVT__monitor__DOT__inflight_1[3U] 
            = vlSelf->__PVT__monitor__DOT___inflight_T_5[3U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[1U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[1U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[2U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[2U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[3U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[3U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[4U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[4U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[5U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[5U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[6U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[6U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[7U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[7U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[8U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[8U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[9U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[9U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xaU] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0xaU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xbU] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0xbU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xcU] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0xcU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xdU] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0xdU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xeU] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0xeU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes_1[0xfU] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_5[0xfU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[0U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[1U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[1U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[2U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[2U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[3U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[3U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[4U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[4U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[5U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[5U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[6U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[6U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[7U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[7U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[8U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[8U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[9U] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[9U];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0xaU] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[0xaU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0xbU] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[0xbU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0xcU] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[0xcU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0xdU] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[0xdU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0xeU] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[0xeU];
        vlSelf->__PVT__monitor__DOT__inflight_sizes[0xfU] 
            = vlSelf->__PVT__monitor__DOT___inflight_sizes_T_2[0xfU];
        vlSelf->__PVT__monitor__DOT__inflight[0U] = 
            vlSelf->__PVT__monitor__DOT___inflight_T_2[0U];
        vlSelf->__PVT__monitor__DOT__inflight[1U] = 
            vlSelf->__PVT__monitor__DOT___inflight_T_2[1U];
        vlSelf->__PVT__monitor__DOT__inflight[2U] = 
            vlSelf->__PVT__monitor__DOT___inflight_T_2[2U];
        vlSelf->__PVT__monitor__DOT__inflight[3U] = 
            vlSelf->__PVT__monitor__DOT___inflight_T_2[3U];
        vlSelf->__PVT__monitor__DOT__watchdog_1 = ((IData)(vlSelf->__PVT__monitor__DOT___d_first_T)
                                                    ? 0U
                                                    : vlSelf->__PVT__monitor__DOT___watchdog_T_3);
        vlSelf->__PVT__monitor__DOT__watchdog = (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
                                                  | (IData)(vlSelf->__PVT__monitor__DOT___d_first_T))
                                                  ? 0U
                                                  : vlSelf->__PVT__monitor__DOT___watchdog_T_1);
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->__PVT__monitor__DOT___a_first_T) {
        vlSelf->__PVT__monitor__DOT__a_first_counter_1 
            = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_1)
                      ? ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                          ? 0U : (~ (0x3ffU & (((IData)(0x3fU) 
                                                << 
                                                (7U 
                                                 & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                               >> 3U))))
                      : (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter1_1)));
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__param = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__size = (7U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size));
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__address = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__source = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__opcode = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__d_first_counter_2 = 0U;
    } else if (vlSelf->__PVT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__monitor__DOT__d_first_counter_2 
            = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_2)
                      ? (((IData)(vlSelf->__PVT__r_wins)
                           ? 1U : 0U) ? (~ (0x3ffU 
                                            & (((IData)(0x3fU) 
                                                << (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                                               >> 3U)))
                          : 0U) : (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter1_2)));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->__PVT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__monitor__DOT__d_first_counter_1 
            = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_1)
                      ? (((IData)(vlSelf->__PVT__r_wins)
                           ? 1U : 0U) ? (~ (0x3ffU 
                                            & (((IData)(0x3fU) 
                                                << (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                                               >> 3U)))
                          : 0U) : (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter1_1)));
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
        vlSelf->__PVT__monitor__DOT__source_1 = vlSelf->__PVT__monitor_io_in_d_bits_source;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))) {
        vlSelf->__PVT__monitor__DOT__opcode_1 = ((IData)(vlSelf->__PVT__r_wins)
                                                  ? 1U
                                                  : 0U);
    }
    vlSelf->__PVT__r_first = ((IData)(vlSymsp->TOP.reset) 
                              | (IData)(vlSelf->__PVT___GEN_260));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__deq__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__deq__DOT__do_enq) 
                != (IData)(vlSelf->__PVT__deq__DOT__do_deq))) {
        vlSelf->__PVT__deq__DOT__maybe_full = ((IData)(vlSelf->__PVT__deq__DOT__empty)
                                                ? ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full) 
                                                   & (IData)(vlSelf->__PVT__deq__DOT___do_enq_T))
                                                : (IData)(vlSelf->__PVT__deq__DOT___do_enq_T));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__queue_arw_deq__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->__PVT__queue_arw_deq__DOT__do_enq) 
                != (IData)(vlSelf->__PVT__queue_arw_deq__DOT__do_deq))) {
        vlSelf->__PVT__queue_arw_deq__DOT__maybe_full 
            = ((IData)(vlSelf->__PVT__queue_arw_deq__DOT__empty)
                ? ((~ (IData)(vlSelf->__PVT__queue_arw_deq_io_deq_ready)) 
                   & (IData)(vlSelf->__PVT__queue_arw_deq__DOT___do_enq_T))
                : (IData)(vlSelf->__PVT__queue_arw_deq__DOT___do_enq_T));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__counter = 0U;
    } else if (vlSelf->__PVT___T) {
        vlSelf->__PVT__counter = (7U & ((IData)(vlSelf->__PVT__a_first)
                                         ? ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                             ? 0U : 
                                            (~ (0x3ffU 
                                                & (((IData)(0x3fU) 
                                                    << 
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                                   >> 3U))))
                                         : (IData)(vlSelf->__PVT__counter1)));
    }
    vlSelf->__PVT___bdelay_T_1 = (7U & ((IData)(1U) 
                                        + (IData)(vlSelf->__PVT__b_delay)));
    vlSelf->__PVT__monitor__DOT___watchdog_T_3 = ((IData)(1U) 
                                                  + vlSelf->__PVT__monitor__DOT__watchdog_1);
    vlSelf->__PVT__monitor__DOT___watchdog_T_1 = ((IData)(1U) 
                                                  + vlSelf->__PVT__monitor__DOT__watchdog);
    vlSelf->__PVT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__a_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__a_first_counter = 0U;
    } else if (vlSelf->__PVT__monitor__DOT___a_first_T) {
        vlSelf->__PVT__monitor__DOT__a_first_counter 
            = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__a_first)
                      ? ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                          ? 0U : (~ (0x3ffU & (((IData)(0x3fU) 
                                                << 
                                                (7U 
                                                 & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                               >> 3U))))
                      : (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter1)));
    }
    vlSelf->__PVT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first_2 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__monitor__DOT__d_first_counter = 0U;
    } else if (vlSelf->__PVT__monitor__DOT___d_first_T) {
        vlSelf->__PVT__monitor__DOT__d_first_counter 
            = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first)
                      ? (((IData)(vlSelf->__PVT__r_wins)
                           ? 1U : 0U) ? (~ (0x3ffU 
                                            & (((IData)(0x3fU) 
                                                << (IData)(vlSelf->__PVT__monitor_io_in_d_bits_size)) 
                                               >> 3U)))
                          : 0U) : (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter1)));
    }
    vlSelf->__PVT__deq__DOT__empty = (1U & (~ (IData)(vlSelf->__PVT__deq__DOT__maybe_full)));
    vlSelf->__PVT__queue_arw_deq__DOT__empty = (1U 
                                                & (~ (IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full)));
    vlSelf->__PVT__queue_arw_deq_io_deq_bits_burst 
        = ((IData)(vlSelf->__PVT__queue_arw_deq__DOT__maybe_full)
            ? vlSelf->__PVT__queue_arw_deq__DOT__ram_burst
           [0U] : 1U);
    vlSelf->__PVT__a_first = (0U == (IData)(vlSelf->__PVT__counter));
    vlSelf->__PVT__counter1 = (7U & ((IData)(vlSelf->__PVT__counter) 
                                     - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__a_first_counter1 = 
        (7U & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter) 
               - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__a_first = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter));
    vlSelf->__PVT__monitor__DOT__d_first_counter1 = 
        (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter) 
               - (IData)(1U)));
    vlSelf->__PVT__monitor__DOT__d_first = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter));
}
