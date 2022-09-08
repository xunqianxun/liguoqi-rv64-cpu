// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VysyxSoCFull___024root___sequent__TOP__32(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___sequent__TOP__32\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)));
}

VL_INLINE_OPT void VysyxSoCFull___024root___sequent__TOP__33(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___sequent__TOP__33\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)));
}

void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(QData/*63:0*/ addr, QData/*63:0*/ &data);

VL_INLINE_OPT void VysyxSoCFull___024root___sequent__TOP__34(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___sequent__TOP__34\n"); );
    // Variables
    QData/*63:0*/ __Vtask_flash_read__1__data;
    // Body
    if (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state)) 
         & (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__counter)))) {
        VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(
                                                                       ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__addr)) 
                                                                        << 2U), __Vtask_flash_read__1__data);
        vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__rdata 
            = __Vtask_flash_read__1__data;
    }
}

VL_INLINE_OPT void VysyxSoCFull___024root___sequent__TOP__35(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___sequent__TOP__35\n"); );
    // Variables
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__state;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__counter;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__cmd;
    IData/*21:0*/ __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__addr;
    QData/*63:0*/ __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__data;
    // Body
    __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__cmd = vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__cmd;
    __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__data = vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__data;
    __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__addr = vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__addr;
    __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__state 
        = vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state;
    if (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__reset) {
        __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__cmd = 0U;
    } else if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state))) {
        __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__cmd 
            = (1U | (0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__cmd) 
                              << 1U)));
    }
    __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__counter 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__reset)
            ? 0U : (0xffU & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state))
                              ? ((7U > (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__counter))
                                  ? ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__counter))
                                  : 0U) : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state))
                                            ? ((0x17U 
                                                > (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__counter))
                                                ? ((IData)(1U) 
                                                   + (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__counter))
                                                : 0U)
                                            : ((IData)(1U) 
                                               + (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__counter))))));
    if (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__reset) {
        __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__data = 0ULL;
    } else if (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state)) 
                & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__counter)))) {
        __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__data 
            = (((QData)((IData)((((IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__rdata) 
                                  << 0x18U) | ((0xff0000U 
                                                & ((IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__rdata 
                                                            >> 8U)) 
                                                   << 0x10U)) 
                                               | ((0xff00U 
                                                   & ((IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__rdata 
                                                               >> 0x10U)) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__rdata 
                                                                >> 0x18U)))))))) 
                << 0x20U) | (QData)((IData)((((IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__rdata 
                                                       >> 0x20U)) 
                                              << 0x18U) 
                                             | ((0xff0000U 
                                                 & ((IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__rdata 
                                                             >> 0x28U)) 
                                                    << 0x10U)) 
                                                | ((0xff00U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__rdata 
                                                                >> 0x30U)) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__rdata 
                                                                 >> 0x38U)))))))));
    } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state))) {
        __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__data 
            = ((vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__data 
                << 1U) | (QData)((IData)((1U & (IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__data 
                                                        >> 0x3fU))))));
    }
    if (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__reset) {
        __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__addr = 0U;
    } else if (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state)) 
                & (0x16U > (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__counter)))) {
        __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__addr 
            = (1U | (0x3ffffeU & (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__addr 
                                  << 1U)));
    }
    if (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__reset) {
        __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__state = 0U;
    } else if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state))) {
        __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__state 
            = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__counter))
                ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state));
    } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state))) {
        __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__state 
            = ((3U != (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__cmd))
                ? 3U : ((0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__counter))
                         ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state)));
    } else if (VL_LIKELY((2U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state)))) {
        __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state;
    } else {
        VL_FWRITEF(0x80000002U,"Assertion failed: only support `03h` read command\n");
        __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state;
        VL_WRITEF("[%0t] %%Error: spiFlash.v:48: Assertion failed in %NysyxSoCFull.spiFlash\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc//spiFlash.v", 48, "");
    }
    vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__data = __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__data;
    vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__addr = __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__addr;
    vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__cmd = __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__cmd;
    vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__counter 
        = __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state 
        = __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__state;
}

extern const VlUnpacked<CData/*1:0*/, 16> VysyxSoCFull__ConstPool__TABLE_440d609d_0;
extern const VlUnpacked<CData/*1:0*/, 16> VysyxSoCFull__ConstPool__TABLE_2039a795_0;
extern const VlUnpacked<CData/*2:0*/, 128> VysyxSoCFull__ConstPool__TABLE_4a137782_0;

VL_INLINE_OPT void VysyxSoCFull___024root___combo__TOP__45(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___combo__TOP__45\n"); );
    // Variables
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_1;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_3;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_2;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_8;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_14;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_12;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_37;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_42;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_1;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_53;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_58;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_1;
    CData/*6:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx2;
    CData/*3:0*/ __Vtableidx3;
    VlWide<4>/*127:0*/ __Vtemp4057;
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0) 
           | (IData)(vlSelf->reset));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__mem_mem_wb_pc = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__mem_mem_wb_inst = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter_n = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__mem_mem_wb_pc 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex_mem_mem_pc;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__mem_mem_wb_inst 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex_mem_mem_inst;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter_n 
            = (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))
                ? ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter))
                    ? 1U : 3U) : ((((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)) 
                                   & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter)))
                                   ? 3U : 0U));
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_type) 
                   >> 7U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value = 0ULL;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value = 0ULL;
        if ((1U & (~ ((0x40U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                      | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)))))) {
            if ((1U & (~ ((0x80U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                          | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)))))) {
                if ((1U & (~ ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                              | (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)))))) {
                    if ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value = 0xbULL;
                    }
                }
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value = 0x8000000000000007ULL;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[3U] = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[0U] 
            = (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))
                ? 0U : (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok))
                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r)
                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r)
                                 ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter1
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                        >> 3U)))] 
                                     >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter2
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                        >> 3U)))])
                                     ? 0xffffffffU : 0U)
                                 : 0U) : 0xffffffffU)
                         : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[1U] 
            = (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))
                ? 0U : (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok))
                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r)
                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r)
                                 ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter1
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                        >> 3U)))] 
                                     >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter2
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                        >> 3U)))])
                                     ? 0xffffffffU : 0U)
                                 : 0U) : 0xffffffffU)
                         : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[2U] 
            = (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))
                ? 0U : (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok))
                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r)
                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r)
                                 ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter1
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                        >> 3U)))] 
                                     >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter2
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                        >> 3U)))])
                                     ? 0U : ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter1
                                              [(0x3fU 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                           >> 3U)))] 
                                              < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter2
                                              [(0x3fU 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                           >> 3U)))])
                                              ? 0xffffffffU
                                              : 0U))
                                 : 0xffffffffU) : 0U)
                         : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[3U] 
            = (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))
                ? 0U : (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok))
                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r)
                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r)
                                 ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter1
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                        >> 3U)))] 
                                     >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter2
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                        >> 3U)))])
                                     ? 0U : ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter1
                                              [(0x3fU 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                           >> 3U)))] 
                                              < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter2
                                              [(0x3fU 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                           >> 3U)))])
                                              ? 0xffffffffU
                                              : 0U))
                                 : 0xffffffffU) : 0U)
                         : 0U));
    }
    if ((((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)) 
         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter)))) {
        __Vtemp4057[0U] = 0U;
        __Vtemp4057[1U] = 0U;
        __Vtemp4057[2U] = 0U;
        __Vtemp4057[3U] = 0U;
    } else {
        __Vtemp4057[0U] = ((((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)) 
                            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter)))
                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r)
                                    ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter1
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                           >> 3U)))] 
                                        >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter2
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                           >> 3U)))])
                                        ? 0xffffffffU
                                        : 0U) : 0U)
                                : 0xffffffffU) : 0U);
        __Vtemp4057[1U] = ((((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)) 
                            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter)))
                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r)
                                    ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter1
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                           >> 3U)))] 
                                        >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter2
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                           >> 3U)))])
                                        ? 0xffffffffU
                                        : 0U) : 0U)
                                : 0xffffffffU) : 0U);
        __Vtemp4057[2U] = ((((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)) 
                            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter)))
                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r)
                                    ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter1
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                           >> 3U)))] 
                                        >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter2
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                           >> 3U)))])
                                        ? 0U : ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter1
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                              >> 3U)))] 
                                                 < 
                                                 vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter2
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                              >> 3U)))])
                                                 ? 0xffffffffU
                                                 : 0U))
                                    : 0xffffffffU) : 0U)
                            : 0U);
        __Vtemp4057[3U] = ((((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)) 
                            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter)))
                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r)
                                    ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter1
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                           >> 3U)))] 
                                        >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter2
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                           >> 3U)))])
                                        ? 0U : ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter1
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                              >> 3U)))] 
                                                 < 
                                                 vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter2
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                              >> 3U)))])
                                                 ? 0xffffffffU
                                                 : 0U))
                                    : 0xffffffffU) : 0U)
                            : 0U);
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_lui = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_auipc = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[0U] 
            = (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))
                ? 0U : __Vtemp4057[0U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[1U] 
            = (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))
                ? 0U : __Vtemp4057[1U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[2U] 
            = (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))
                ? 0U : __Vtemp4057[2U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[3U] 
            = (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))
                ? 0U : __Vtemp4057[3U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_lui 
            = (IData)((0xdU == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                                         >> 2U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_auipc 
            = (IData)((5U == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                                       >> 2U))));
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_type) 
                   >> 7U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en = 0U;
        if (((0x40U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)) 
             | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en = 1U;
        } else if (((0x80U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                    | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en 
                = (0ULL != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1);
        } else if (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                    | (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en 
                = (0ULL != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1);
        } else if ((0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) {
            if ((0x20U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en = 0U;
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_jal 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
            ? 0U : (IData)((0x1bU == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                                               >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divrem_data 
        = (((((0x86U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)) 
              | (0x1aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) 
             | (0x25U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) 
            | (0x51U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                ? 0ULL : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__finish)
                           ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign) 
                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign_y)))
                               ? (1ULL + (~ (((QData)((IData)(
                                                              vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U])))))
                               : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign_y))
                                   ? (1ULL + (~ (((QData)((IData)(
                                                                  vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U])))))
                                   : (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign)) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign_y))
                                       ? (((QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U])))
                                       : (((QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U]))))))
                           : (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U])))))
            : (((((0xc1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                  | (0x85U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) 
                 | (0x43U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) 
                | (0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)))
                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                    ? 0ULL : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__finish)
                               ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign) 
                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign_y)))
                                   ? (((QData)((IData)(
                                                       vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[2U])))
                                   : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign_y))
                                       ? (1ULL + (~ 
                                                  (((QData)((IData)(
                                                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[2U])))))
                                       : (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign)) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign_y))
                                           ? (1ULL 
                                              + (~ 
                                                 (((QData)((IData)(
                                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[2U])))))
                                           : (((QData)((IData)(
                                                               vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[2U]))))))
                               : (((QData)((IData)(
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[2U])))))
                : 0ULL));
    if ((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_type) 
                   >> 7U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en = 0U;
        if (((0x40U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)) 
             | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en 
                = (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_rdaddr));
        } else if (((0x80U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                    | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en = 1U;
        } else if (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                    | (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en = 1U;
        } else if ((0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) {
            if ((0x20U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en = 0U;
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en = 0U;
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_type) 
                   >> 7U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena = 0U;
        if ((1U & (~ ((0x40U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                      | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)))))) {
            if ((1U & (~ ((0x80U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                          | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)))))) {
                if ((1U & (~ ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                              | (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)))))) {
                    if ((0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena 
                            = (0x20U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode));
                    }
                }
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena = 0U;
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_type) 
                   >> 7U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena = 0U;
        if ((1U & (~ ((0x40U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                      | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)))))) {
            if ((1U & (~ ((0x80U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                          | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)))))) {
                if ((1U & (~ ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                              | (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)))))) {
                    if ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena = 1U;
                    } else if ((0x20U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena = 0U;
                    }
                }
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_type 
        = ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                ? 0U : (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread)) 
                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))
                         ? 1U : 0U)) : ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
                                         ? (((0x10U 
                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread)) 
                                             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))
                                             ? 2U : 0U)
                                         : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                                                 ? 0U
                                                 : 
                                                (((8U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite)) 
                                                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))
                                                  ? 4U
                                                  : 0U))
                                             : ((0x10U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                                                 ? 
                                                (((0x10U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite)) 
                                                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))
                                                  ? 8U
                                                  : 0U)
                                                 : 
                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__transt_sign1) 
                                                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))
                                                  ? 1U
                                                  : 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__transt_sign2) 
                                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))
                                                   ? 1U
                                                   : 0U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_finish 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
            ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
               & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread)))
            : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
                   & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite)))
                : (0x81U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__docker_counter))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__store_mask = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__store_data = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_jalr = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__store_mask 
            = ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel))
                ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel))
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel))
                             ? 0xffU : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                                         ? 0U : ((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                             >> 2U)))
                                                  ? 0xf0U
                                                  : 0xfU)))
                         : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel))
                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                                 ? 0U : ((0U == (3U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 1U))))
                                          ? 3U : ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                               >> 1U))))
                                                   ? 0xcU
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                                >> 1U))))
                                                    ? 0x30U
                                                    : 0xc0U))))
                             : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                                 ? 0U : ((1U & (IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                        >> 2U)))
                                          ? ((1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 1U)))
                                              ? ((1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                  ? 0x80U
                                                  : 0x40U)
                                              : ((1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                  ? 0x20U
                                                  : 0x10U))
                                          : ((1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 1U)))
                                              ? ((1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                  ? 8U
                                                  : 4U)
                                              : ((1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                  ? 2U
                                                  : 1U)))))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__store_data 
            = ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel))
                ? 0ULL : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel))
                           ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel))
                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_data
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                                   ? 0ULL : ((1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                              ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_data)) 
                                                 << 0x20U)
                                              : (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_data)))))
                           : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel))
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                                   ? 0ULL : ((0U == 
                                              (3U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                             >> 1U))))
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_data))))
                                              : ((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                              >> 1U))))
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                  << 0x10U)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                               >> 1U))))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                   << 0x20U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                   << 0x30U)))))
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                                   ? 0ULL : ((1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                             >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                   << 0x38U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                   << 0x30U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                   << 0x28U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                   << 0x20U)))
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                             >> 1U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                   << 0x18U)
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                   << 0x10U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_data)))) 
                                                   << 8U)
                                                   : (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_data)))))))))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_jalr 
            = (IData)((0x19U == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                                          >> 2U))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
              ? 0U : (IData)((0x1cU == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                                                 >> 2U))))) 
            << 7U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                         ? 0U : (IData)((0xeU == (0x1fU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                                                     >> 2U))))) 
                       << 6U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                                    ? 0U : (IData)(
                                                   (6U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                                                        >> 2U))))) 
                                  << 5U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                                               ? 0U
                                               : (IData)(
                                                         (4U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                                                              >> 2U))))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                                                  ? 0U
                                                  : (IData)(
                                                            (0xcU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                                                                 >> 2U))))) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                                                     ? 0U
                                                     : (IData)(
                                                               (0x18U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                                                                    >> 2U))))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                                                        ? 0U
                                                        : (IData)(
                                                                  (3U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                                                         ? 0U
                                                         : (IData)(
                                                                   (8U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                                                                        >> 2U))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_addr 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
            ? (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))
                ? (0xfffffffffffffff8ULL & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr)
                : 0ULL) : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                                ? 0ULL : (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                                           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))
                                           ? ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter))
                                               ? (4ULL 
                                                  | (0xfffffffffffffff8ULL 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr))
                                               : (0xfffffffffffffff8ULL 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr))
                                           : ((((8U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)) 
                                               & (1U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter)))
                                               ? (0xfffffffffffffff8ULL 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr)
                                               : 0ULL)))
                            : 0ULL));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we_type = 7U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re_type = 7U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we_type 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_type) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel)))
                ? 0U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_type) 
                         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel)))
                         ? 1U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_type) 
                                  & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel)))
                                  ? 2U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_type) 
                                           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel)))
                                           ? 4U : 7U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re_type 
            = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_type) 
                 >> 1U) & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel)) 
                           | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel))))
                ? 0U : ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_type) 
                          >> 1U) & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel)) 
                                    | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel))))
                         ? 1U : ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_type) 
                                   >> 1U) & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel)) 
                                             | (6U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel))))
                                  ? 2U : ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_type) 
                                            >> 1U) 
                                           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel)))
                                           ? 4U : 7U))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_type)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_type) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
            ? 0ULL : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__oteg_ena_i 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_fence) 
           | (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
               & (0U == ((((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[0U]) 
                           | (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[1U])) 
                          | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[2U]) 
                         | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[3U]))) 
              | ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                 & (0U == ((((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[0U]) 
                             | (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[1U])) 
                            | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[2U]) 
                           | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[3U])))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__tteg_ena_i 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_fence) 
           | (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
               & (0U == (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[0U] 
                           | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[1U]) 
                          | (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[2U])) 
                         | (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[3U])))) 
              | ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                 & (0U == (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[0U] 
                             | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[1U]) 
                            | (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[2U])) 
                           | (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[3U]))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause 
        = ((0x342U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus 
        = ((0x300U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_wr_en));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__exe_res 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
            ? 0ULL : ((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                       ? ((0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                           ? ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                               ? ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                   ? 0ULL : ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                              ? 0ULL
                                              : ((4U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                    ? 0ULL
                                                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__mul_data)))))
                               : ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                   ? 0ULL : ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                              ? 0ULL
                                              : ((4U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divrem_data
                                                    : 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
                                                    << 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2)))))))))
                           : ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                               ? ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                   ? 0ULL : ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                              ? 0ULL
                                              : ((4U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                    ? 0ULL
                                                    : 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
                                                    >> 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2))))))))
                               : ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                   ? ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                       ? 0ULL : ((4U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                    ? 0ULL
                                                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__srlw_res))))
                                   : ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                       ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                             ? 0ULL
                                             : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
                                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__upper_imm))))
                                       : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                           ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 0ULL
                                                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divrem_data)
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divrem_data
                                                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__srlw_res))
                                           : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
                                                   + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__upper_imm)
                                                   : 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
                                                   >> 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2))))))))))
                       : ((0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                           ? ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                               ? ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                   ? ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                       ? 0ULL : ((4U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                    ? 0ULL
                                                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__mul_data))))
                                   : ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                       ? 0ULL : ((4U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                    ? 0ULL
                                                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2)))))
                               : ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                   ? ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                       ? 0ULL : ((4U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divrem_data
                                                    : 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
                                                    ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2)))))
                                   : ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                       ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                             ? 0ULL
                                             : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__sraw_res)))
                                       : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                           ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 0ULL
                                                   : 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2)))
                                           : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divrem_data
                                                   : 
                                                  (4ULL 
                                                   + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2))
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 0ULL
                                                   : 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
                                                   << 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2)))))))))
                           : ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                               ? ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                   ? ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                       ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                             ? 0ULL
                                             : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__mul_data)))
                                       : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                             ? 0ULL
                                             : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2))))
                                   : ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                       ? 0ULL : ((4U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divrem_data
                                                    : 
                                                   (4ULL 
                                                    + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                    ? 0ULL
                                                    : 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2 
                                                                                >> 0x1fU))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2)))
                                                    : 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2))))))
                               : ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                   ? ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                       ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                           ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 0ULL
                                                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__mul_data))
                                           : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 0ULL
                                                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divrem_data)
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 0ULL
                                                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2)))
                                       : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                           ? 0ULL : 
                                          ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divrem_data
                                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__sllw_res)
                                            : ((1U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__shift_res
                                                : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
                                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2)))))
                                   : ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                       ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                           ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 0ULL
                                                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__mul_data)
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 0ULL
                                                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2))
                                           : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 0ULL
                                                   : (QData)((IData)(
                                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
                                                                      < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2))))
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__sllw_res
                                                   : 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
                                                   ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2))))
                                       : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                           ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1
                                                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__sraw_res)
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2))
                                                   : (QData)((IData)(
                                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
                                                                      < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2)))))
                                           : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__shift_res
                                                   : (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2)))
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2
                                                   : 0ULL)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__trap_ena 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
        = (((((((((- (QData)((IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en) 
                                      & (0xb00U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)))))) 
                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcycle) 
                 | ((- (QData)((IData)(((0x300U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))))) 
                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus)) 
                | ((- (QData)((IData)(((((0x305U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena)) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))))) 
                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base 
                      << 2U))) | ((- (QData)((IData)(
                                                     (((0x341U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en)) 
                                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena))))) 
                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mepc)) 
              | ((- (QData)((IData)(((0x342U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))))) 
                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause)) 
             | ((- (QData)((IData)(((0x304U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))))) 
                & ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
                   << 7U))) | ((- (QData)((IData)((
                                                   (0x344U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))))) 
                               & (QData)((IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
                                                  << 7U))))) 
           | ((- (QData)((IData)(((0x340U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_idx)) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_rd_en))))) 
              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mscrstch));
    if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset) 
               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_type))))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_wmask = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_o = 0ULL;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_wmask 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__store_mask;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_o 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__store_data;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_jump 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_jal) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_jalr));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrci 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x7000U == (0x7000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x5000U == (0x7000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrsi 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x6000U == (0x7000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sub 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40000000U == (0x42007000U 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_srl 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x5000U == (0x42007000U 
                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_addiw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0U == (0x7000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_srliw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x5000U == (0x40007000U 
                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_or 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x6000U == (0x2007000U 
                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_addw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0U == (0x42007000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_add 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0U == (0x42007000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sll 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x1000U == (0x2007000U 
                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sltu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x3000U == (0x2007000U 
                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_xor 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x4000U == (0x2007000U 
                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_subw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40000000U == (0x42007000U 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sllw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x1000U == (0x7000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_srlw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x5000U == (0x42007000U 
                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sraw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40005000U == (0x42007000U 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_slliw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x1000U == (0x7000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw 
        = (1U & (IData)(((0x20U == (0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40005000U == (0x40007000U 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sra 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40005000U == (0x42007000U 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_and 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x7000U == (0x2007000U 
                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_srai 
        = (1U & (IData)(((0x10U == (0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x40005000U == (0x40007000U 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_slt 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2000U == (0x2007000U 
                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_mulhsu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2002000U == (0x2007000U 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_mulhu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2003000U == (0x2007000U 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_mulw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2000000U == (0x2007000U 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_mulh 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2001000U == (0x2007000U 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_div 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2004000U == (0x2007000U 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_mul 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2000000U == (0x2007000U 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_divuw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2005000U == (0x2007000U 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_rem 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2006000U == (0x2007000U 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_remu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2007000U == (0x2007000U 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_divw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2004000U == (0x2007000U 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_remw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2006000U == (0x2007000U 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_remuw 
        = (1U & (IData)(((0x40U == (0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2007000U == (0x2007000U 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak 
        = ((IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                    & (0U == (0x7000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))) 
           & (1U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                     >> 0x14U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_divu 
        = (1U & (IData)(((8U == (8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2005000U == (0x2007000U 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_reg_ena2 
        = (IData)((0U != (0x4dU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x2000U == (0x7000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x1000U == (0x7000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc 
        = (1U & (IData)(((0x80U == (0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                         & (0x3000U == (0x7000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__byte_size 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we) 
             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we_type))) 
            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re) 
               & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re_type))))
            ? 0U : ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we_type))) 
                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re) 
                        & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re_type))))
                     ? 1U : ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we) 
                               & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we_type))) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re) 
                                 & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re_type))))
                              ? 2U : ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we) 
                                        & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we_type))) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re) 
                                          & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re_type))))
                                       ? 3U : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re)) 
            & ((0x2000000ULL <= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_addr) 
               & (0x200ffffULL >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_addr)))
            ? 1U : 2U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__addr_outaxi 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we) 
             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we_type))) 
            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re) 
               & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re_type))))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_addr
            : ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we) 
                 & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we_type))) 
                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re) 
                   & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re_type))))
                ? (0xfffffffffffffffeULL & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_addr)
                : ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we) 
                     & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we_type))) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re) 
                       & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re_type))))
                    ? (0xfffffffffffffffcULL & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_addr)
                    : ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we) 
                         & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we_type))) 
                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re) 
                           & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re_type))))
                        ? (0xfffffffffffffff8ULL & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_addr)
                        : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_addr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache 
        = ((((((0x10000000ULL <= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_addr) 
               & (0x10000fffULL >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_addr)) 
              | ((0x10001000ULL <= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_addr) 
                 & (0x10001fffULL >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_addr))) 
             | ((0x30000000ULL <= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_addr) 
                & (0x3fffffffULL >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_addr))) 
            | ((0x2000000ULL <= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_addr) 
               & (0x200ffffULL >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_addr))) 
           | ((0x40000000ULL <= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_addr) 
              & (0x7fffffffULL >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex_pc_branchena 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__trap_ena)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex_id_rd_data 
        = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_type))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2
            : ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_type) 
                 >> 7U) & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data
                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__exe_res));
    if ((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_type) 
                   >> 7U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data = 0ULL;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data = 0ULL;
        if (((0x40U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)) 
             | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1;
        } else if (((0x80U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                    | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1);
        } else if (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                    | (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data 
                   & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1));
        } else if ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_pc;
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_pc;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_rd_ena 
        = ((0U != (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                            >> 7U))) & ((((IData)((0U 
                                                   != 
                                                   (0xfaU 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type)))) 
                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_lui)) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_auipc)) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_jump)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xdfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                ? 0U : (1U & (((((((((((((((IData)(
                                                   ((0x80U 
                                                     == 
                                                     (0x80U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                                                    & (0U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))) 
                                           & (0x18U 
                                              == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                                                  >> 0x19U))) 
                                          | (1U & (IData)(
                                                          ((4U 
                                                            == 
                                                            (4U 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                                                           & (0x7000U 
                                                              == 
                                                              (0x7000U 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                         | (1U & (IData)(
                                                         ((0x10U 
                                                           == 
                                                           (0x10U 
                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                                                          & (0x7000U 
                                                             == 
                                                             (0x7000U 
                                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sub)) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_srl)) 
                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_or)) 
                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_addw)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_subw)) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_mulhsu)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_mulhu)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_mulw)) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_divuw)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_fence_i)))) 
              << 5U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xfbU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                ? 0U : (1U & (((((((((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrsi) 
                                           | (1U & (IData)(
                                                           ((4U 
                                                             == 
                                                             (4U 
                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                                                            & (0x4000U 
                                                               == 
                                                               (0x7000U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                          | (1U & (IData)(
                                                          ((0x10U 
                                                            == 
                                                            (0x10U 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                                                           & (0x3000U 
                                                              == 
                                                              (0x7000U 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_add)) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_slt)) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_and)) 
                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)) 
                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw)) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_srlw)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_mul)) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_mulh)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_div)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_divuw)) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_remu)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)))) 
              << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xf7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                ? 0U : (1U & ((((((((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrci) 
                                          | (1U & (IData)(
                                                          ((4U 
                                                            == 
                                                            (4U 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                                                           & (0x5000U 
                                                              == 
                                                              (0x7000U 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                         | (1U & (IData)(
                                                         ((0x10U 
                                                           == 
                                                           (0x10U 
                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                                                          & (0x4000U 
                                                             == 
                                                             (0x7000U 
                                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_add)) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sltu)) 
                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_lui)) 
                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_addiw)) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_slliw)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sraw)) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_mul)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_mulh)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_mulhsu)) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_divu)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_fence_i)))) 
              << 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xefU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                ? 0U : (1U & ((((((((((((((((IData)(
                                                    ((0x80U 
                                                      == 
                                                      (0x80U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                                                     & (0U 
                                                        == 
                                                        (0x7000U 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))) 
                                            & (0U == 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                                                >> 0x14U))) 
                                           | (1U & (IData)(
                                                           ((4U 
                                                             == 
                                                             (4U 
                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                                                            & (0x6000U 
                                                               == 
                                                               (0x7000U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                          | (1U & (IData)(
                                                          ((0x10U 
                                                            == 
                                                            (0x10U 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                                                           & (0x6000U 
                                                              == 
                                                              (0x7000U 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sub)) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_xor)) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sra)) 
                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_addiw)) 
                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_srliw)) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sllw)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_mulh)) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_mulhsu)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_mulhu)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_divu)) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_divw)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_remw)))) 
              << 4U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xfdU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                ? 0U : (1U & (((((((((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi) 
                                           | (1U & (IData)(
                                                           ((4U 
                                                             == 
                                                             (4U 
                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                                                            & (0x1000U 
                                                               == 
                                                               (0x7000U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                          | (1U & (IData)(
                                                          ((0x10U 
                                                            == 
                                                            (0x10U 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                                                           & (0x2000U 
                                                              == 
                                                              (0x7000U 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_srai)) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sltu)) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_or)) 
                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_jal)) 
                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sraiw)) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sllw)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_mul)) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_div)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_divu)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_remuw)) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_remw)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)))) 
              << 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_reg_addr2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_reg_ena2)
            ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                        >> 0x14U)) : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                ? 0U : (1U & (((((((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs) 
                                         | (1U & (IData)(
                                                         ((0x10U 
                                                           == 
                                                           (0x10U 
                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                                                          & (0x5000U 
                                                             == 
                                                             (0x40007000U 
                                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sll)) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_srl)) 
                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_lui)) 
                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_auipc)) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_srliw)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_srlw)) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_mulw)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_div)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_rem)) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_remu)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_fence_i)))) 
              << 7U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xbfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                ? 0U : (1U & ((((((((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
                                          | (1U & (IData)(
                                                          ((0x10U 
                                                            == 
                                                            (0x10U 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                                                           & (0x1000U 
                                                              == 
                                                              (0x7000U 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sll)) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_xor)) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_and)) 
                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_jal)) 
                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_addw)) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sraw)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_mulhu)) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_mulw)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_divu)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_rem)) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_remuw)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_divw)))) 
              << 6U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_opcode 
        = ((0xfeU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_opcode)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
               ? 0U : (1U & ((((((((((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc) 
                                           | (1U & (IData)(
                                                           ((4U 
                                                             == 
                                                             (4U 
                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                                                            & (0U 
                                                               == 
                                                               (0x7000U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                          | (1U & (IData)(
                                                          ((0x10U 
                                                            == 
                                                            (0x10U 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type))) 
                                                           & (0U 
                                                              == 
                                                              (0x7000U 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))))) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_srai)) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_slt)) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_sra)) 
                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_auipc)) 
                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_slliw)) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_subw)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_divuw)) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_divw)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_rem)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_remu)) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_remuw)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_remw)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_ebreak)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_reg_ena1 
        = (1U & (((IData)((0U != (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type)))) 
                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrw) 
                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrs)) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrc))) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_jalr)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_qos = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_prot = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_cache = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_qos = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_prot = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_cache = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_last = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_ready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_ready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_burst = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_burst = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_valid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_len = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_len = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_valid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_valid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_qos 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? (0xf0U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_qos))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_qos))
                    : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_prot 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_prot))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_prot))
                    : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_cache 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? (2U | (0xf0U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_cache)))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? (0x20U | (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_cache)))
                    : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_qos 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? (0xf0U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_qos))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_qos))
                    : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_prot 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_prot))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_prot))
                    : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_cache 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? (2U | (0xf0U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_cache)))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? (0x20U | (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_cache)))
                    : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_last 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? (1U | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_last))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? (2U | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_last))
                    : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_ready 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? (1U | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_ready))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? (2U | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_ready))
                    : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_ready 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? (1U | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_ready))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? (2U | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_ready))
                    : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_burst 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? (1U | (0xcU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_burst)))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? (4U | (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_burst)))
                    : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_burst 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? (1U | (0xcU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_burst)))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? (4U | (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_burst)))
                    : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_valid 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_valid)) 
                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_valid))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_valid)) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_valid) 
                          << 1U)) : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_len 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? (0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_len))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_len))
                    : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_len 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? (0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_len))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_len))
                    : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_valid 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_valid)) 
                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_valid))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_valid)) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_valid) 
                          << 1U)) : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? ((0xf0U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id)) 
                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_id))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? ((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id)) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_id) 
                          << 4U)) : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_valid 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_valid)) 
                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_valid))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_valid)) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_valid) 
                          << 1U)) : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? ((0xf0U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id)) 
                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_id))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? ((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id)) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_id) 
                          << 4U)) : 0U));
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_data = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_mask = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_o;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_mask 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_wmask;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_we 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_re 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__mem_ctrl_req 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
           & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_fence)) 
              & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re))
                     ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache)) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_finish))
                     : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we))
                         ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_finish)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we))
                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_finish))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_we 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we)) 
              & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_finish))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_re 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re)) 
              & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_finish))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_strb 
        = (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state)))
            ? 0xffU : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
                        & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state)))
                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache)
                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_wmask)
                            : 0U) : 0U));
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncahce_arb_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__byte_size;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_addr 
            = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re)) 
                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_finish)))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__addr_outaxi
                : 0ULL);
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncahce_arb_size 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we))
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__byte_size)
                : 0U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_addr 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we))
                ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we)) 
                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_finish)))
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__addr_outaxi
                    : 0ULL) : 0ULL);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache)
            ? 0ULL : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_addr);
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpp_nxt = 3U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause_nxt 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__trap_mcause_value;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_nxt 
            = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpp_nxt 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                ? 0U : (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                               ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                          >> 0xbU))
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause_nxt 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mcause)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data
                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mcause);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_nxt 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena) 
                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                         ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                    >> 7U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mie_nxt 
        = (1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)
                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)
                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                         ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__wbck_csr_data 
                                    >> 3U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_reg_addr1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_reg_ena1)
            ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                        >> 0xfU)) : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__success_r 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_ready) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__timer_state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__success_b 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_ready) 
           & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__timew_state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_burst 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full)
                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_burst
                 [0U] : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_burst) 
                         >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_burst 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_burst
                 [0U] : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_burst) 
                         >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_len 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full)
                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_len
                    [0U] : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_len) 
                            >> 8U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_len 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_len
                    [0U] : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_len) 
                            >> 8U)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_echo_extra_id 
            = (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_echo_extra_id
               [0U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_id 
            = (1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_id
               [0U]);
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_echo_extra_id 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                     >> 5U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_id 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                     >> 4U));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__success_aw 
        = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_valid) 
                  >> 1U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_echo_extra_id 
            = (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_echo_extra_id
               [0U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_id 
            = (1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_id
               [0U]);
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_echo_extra_id 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                     >> 5U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_id 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                     >> 4U));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__strb_extection 
        = (((QData)((IData)((((- (IData)((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_mask) 
                                                >> 7U)))) 
                              << 0x18U) | ((0xff0000U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_mask) 
                                                              >> 6U)))) 
                                               << 0x10U)) 
                                           | ((0xff00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_mask) 
                                                                 >> 5U)))) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_mask) 
                                                                  >> 4U)))))))))) 
            << 0x20U) | (QData)((IData)((((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_mask) 
                                                         >> 3U)))) 
                                          << 0x18U) 
                                         | ((0xff0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_mask) 
                                                               >> 2U)))) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_mask) 
                                                                  >> 1U)))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_mask)))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_icache_shankhand 
        = ((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_type)) 
             | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_re))) 
            | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_we))) 
           & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
               ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))
               : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                  & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
                     & (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok))) 
                        | (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)) 
                           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_strb 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
            ? 0U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                     ? ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_strb)) 
                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_strb))
                     : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                         ? ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_strb)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_strb) 
                               << 8U)) : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_size 
        = (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state)))
            ? 3U : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
                     & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state)))
                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncahce_arb_size)
                     : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_size 
        = (((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state)))
            ? 3U : (((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
                     & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state)))
                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncahce_arb_size)
                     : ((((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
                          & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state))) 
                         & ((0x10000000ULL <= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_addr) 
                            & (0x3fffffffULL >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_addr)))
                         ? 2U : ((((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
                                   & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state))) 
                                  & ((0x10000000ULL 
                                      > vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_addr) 
                                     | (0x3fffffffULL 
                                        < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_addr)))
                                  ? 3U : 0U))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_fence) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__oteg_addr_i 
            = (0x3fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__fence_index));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__tteg_addr_i 
            = (0x3fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__fence_index));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__oteg_addr_i 
            = (0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                >> 3U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__tteg_addr_i 
            = (0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                >> 3U)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__dirty_clean_o 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
           & (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread)) 
               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok))) 
              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__dirty1
                 [(0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                    >> 3U)))] & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter1
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                              >> 3U)))] 
                                                 >= 
                                                 vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter2
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                              >> 3U)))]))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__dirty_clean_t 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
           & (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread)) 
               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok))) 
              & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__dirty1
                    [(0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                       >> 3U)))] & 
                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter1
                     [(0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                        >> 3U)))] >= 
                     vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter2
                     [(0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                        >> 3U)))])))));
    if ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__oteg_ena_i 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
               & ((~ ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread)) 
                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))) 
                  & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok) 
                       & (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__write_regr_)) 
                     & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r)) 
                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r) 
                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter1
                              [(0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                 >> 3U)))] 
                              >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter2
                              [(0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                 >> 3U)))]))))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__tteg_ena_i 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
               & ((~ ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread)) 
                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))) 
                  & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok) 
                       & (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__write_regr_)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r) 
                        & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r)) 
                           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter1
                              [(0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                 >> 3U)))] 
                              < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter2
                              [(0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                 >> 3U)))]))))));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__oteg_ena_i 
            = ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite)) 
               & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
                  & ((~ ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite)) 
                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))) 
                     & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok) 
                          & (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__write_regw_)) 
                        & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r)) 
                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r) 
                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter1
                                 [(0x3fU & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                    >> 3U)))] 
                                 >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter2
                                 [(0x3fU & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                    >> 3U)))])))))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__tteg_ena_i 
            = ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite)) 
               & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
                  & ((~ ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite)) 
                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))) 
                     & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok) 
                          & (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__write_regw_)) 
                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r) 
                           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r)) 
                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter1
                                 [(0x3fU & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                    >> 3U)))] 
                                 < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter2
                                 [(0x3fU & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                    >> 3U)))])))))));
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread_nxt = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite_nxt = 1U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread_nxt 
            = ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
                ? 1U : ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
                         ? ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
                             ? 1U : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
                                      ? 1U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
                                                   ? 1U
                                                   : 
                                                  (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
                                                    & ((~ 
                                                        ((0x10U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread)) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))) 
                                                       & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok) 
                                                           & (0x10U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))) 
                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__write_regr_))))
                                                    ? 2U
                                                    : 0x10U)))))
                         : ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
                             ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
                                 ? 1U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
                                          ? 1U : ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
                                                   ? 1U
                                                   : 
                                                  (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
                                                    & ((~ 
                                                        ((8U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread)) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))) 
                                                       & ((8U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread)) 
                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__delay_cnt))))
                                                    ? 0x10U
                                                    : 8U))))
                             : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
                                 ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
                                     ? 1U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
                                              ? 1U : 
                                             (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
                                               & (4U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread)))
                                               ? 1U
                                               : 4U)))
                                 : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
                                     ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
                                         ? 1U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__read_ok) 
                                                  & (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                                       == 
                                                       (0x7fffffU 
                                                        & (IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                                   >> 9U)))) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r)) 
                                                     | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                                         == 
                                                         (0x7fffffU 
                                                          & (IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                                     >> 9U)))) 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))))
                                                  ? 4U
                                                  : 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__read_ok) 
                                                   & (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__dirty1
                                                        [
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                                    >> 3U)))] 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter1
                                                           [
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                                       >> 3U)))] 
                                                           >= 
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter2
                                                           [
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                                       >> 3U)))])) 
                                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__dirty2
                                                          [
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                                      >> 3U)))] 
                                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter1
                                                             [
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                                         >> 3U)))] 
                                                             < 
                                                             vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter2
                                                             [
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                                         >> 3U)))]))) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r)))
                                                   ? 8U
                                                   : 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__read_ok)
                                                    ? 0x10U
                                                    : 2U))))
                                     : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
                                         ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_re) 
                                             & (1U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread)))
                                             ? 2U : 1U)
                                         : 1U))))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite_nxt 
            = ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                ? 1U : ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                         ? ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                             ? 1U : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                                      ? 1U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                                                   ? 1U
                                                   : 
                                                  (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
                                                    & ((~ 
                                                        ((0x10U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite)) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))) 
                                                       & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok) 
                                                           & (0x10U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))) 
                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__write_regw_))))
                                                    ? 2U
                                                    : 0x10U)))))
                         : ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                             ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                                 ? 1U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                                          ? 1U : ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                                                   ? 1U
                                                   : 
                                                  (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
                                                    & ((~ 
                                                        ((8U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite)) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))) 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__delayw_cnt) 
                                                          & (8U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite)))))
                                                    ? 0x10U
                                                    : 8U))))
                             : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                                 ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                                     ? 1U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                                              ? 1U : 
                                             (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
                                               & (4U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite)))
                                               ? 1U
                                               : 4U)))
                                 : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                                     ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                                         ? 1U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__read_w_ok) 
                                                  & (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                                       == 
                                                       (0x7fffffU 
                                                        & (IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                                   >> 9U)))) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r)) 
                                                     | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r 
                                                         == 
                                                         (0x7fffffU 
                                                          & (IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                                     >> 9U)))) 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r))))
                                                  ? 4U
                                                  : 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__read_w_ok) 
                                                   & (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__dirty1
                                                        [
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                                    >> 3U)))] 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter1
                                                           [
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                                       >> 3U)))] 
                                                           >= 
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter2
                                                           [
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                                       >> 3U)))])) 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r)) 
                                                      | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__dirty2
                                                          [
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                                      >> 3U)))] 
                                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter1
                                                             [
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                                         >> 3U)))] 
                                                             < 
                                                             vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter2
                                                             [
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                                         >> 3U)))])) 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))))
                                                   ? 8U
                                                   : 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__read_w_ok)
                                                    ? 0x10U
                                                    : 2U))))
                                     : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                                         ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_we) 
                                             & (1U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite)))
                                             ? 2U : 1U)
                                         : 1U))))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_data_out 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache)
            ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache)) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_finish))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_data_o
                : 0ULL) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                            ? 0ULL : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
                                       ? (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r 
                                            == (0x7fffffU 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                           >> 9U)))) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r))
                                           ? (((QData)((IData)(
                                                               vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out1[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out1[0U])))
                                           : (((QData)((IData)(
                                                               vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out1[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out1[2U]))))
                                       : 0ULL)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_data 
        = (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state)))
            ? ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                    ? 0ULL : (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread)) 
                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))
                               ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__dirty1
                                   [(0x3fU & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                      >> 3U)))] 
                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter1
                                      [(0x3fU & (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                         >> 3U)))] 
                                      >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter2
                                      [(0x3fU & (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                         >> 3U)))]))
                                   ? (((QData)((IData)(
                                                       vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out1[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out1[0U])))
                                   : (((QData)((IData)(
                                                       vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out1[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out1[2U]))))
                               : 0ULL)) : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                                                ? 0ULL
                                                : (
                                                   ((8U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite)) 
                                                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))
                                                    ? 
                                                   ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__dirty1
                                                     [
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                                 >> 3U)))] 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter1
                                                        [
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                                    >> 3U)))] 
                                                        >= 
                                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter2
                                                        [
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                                    >> 3U)))]))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out1[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out1[0U])))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out1[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out1[2U]))))
                                                    : 0ULL))
                                            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__transt_sign1) 
                                                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out1[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out1[0U])))
                                                : (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__transt_sign2) 
                                                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out1[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out1[2U])))
                                                    : 0ULL))))
            : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
                & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state)))
                ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we)) 
                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_finish)))
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_o
                    : 0ULL) : 0ULL));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_addr 
        = ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                ? 0ULL : (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread)) 
                           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))
                           ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__dirty1
                               [(0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                  >> 3U)))] 
                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter1
                                  [(0x3fU & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                     >> 3U)))] 
                                  >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter2
                                  [(0x3fU & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                     >> 3U)))]))
                               ? (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r)) 
                                   << 9U) | (QData)((IData)(
                                                            (0x1f8U 
                                                             & ((IData)(
                                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                                         >> 3U)) 
                                                                << 3U)))))
                               : (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r)) 
                                   << 9U) | (QData)((IData)(
                                                            (0x1f8U 
                                                             & ((IData)(
                                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                                         >> 3U)) 
                                                                << 3U))))))
                           : 0ULL)) : ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
                                        ? (((0x10U 
                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread)) 
                                            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))
                                            ? (0xfffffffffffffff8ULL 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr)
                                            : 0ULL)
                                        : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                                                ? 0ULL
                                                : (
                                                   ((8U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite)) 
                                                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))
                                                    ? 
                                                   ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__dirty1
                                                     [
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                                 >> 3U)))] 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter1
                                                        [
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                                    >> 3U)))] 
                                                        >= 
                                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter2
                                                        [
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                                    >> 3U)))]))
                                                     ? 
                                                    (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r)) 
                                                      << 9U) 
                                                     | (QData)((IData)(
                                                                       (0x1f8U 
                                                                        & ((IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                                                >> 3U)) 
                                                                           << 3U)))))
                                                     : 
                                                    (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r)) 
                                                      << 9U) 
                                                     | (QData)((IData)(
                                                                       (0x1f8U 
                                                                        & ((IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                                                                >> 3U)) 
                                                                           << 3U))))))
                                                    : 0ULL))
                                            : ((0x10U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                                                ? (
                                                   ((0x10U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite)) 
                                                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))
                                                    ? 
                                                   (0xfffffffffffffff8ULL 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr)
                                                    : 0ULL)
                                                : (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__transt_sign1) 
                                                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))
                                                    ? 
                                                   (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r)) 
                                                     << 9U) 
                                                    | (QData)((IData)(
                                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__fence_index) 
                                                                       << 3U))))
                                                    : 
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__transt_sign2) 
                                                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))
                                                     ? 
                                                    (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r)) 
                                                      << 9U) 
                                                     | (QData)((IData)(
                                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__fence_index) 
                                                                        << 3U))))
                                                     : 0ULL))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__ex_op1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_reg_addr1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex_id_rd_ena));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__mem_op1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_addr) 
            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_reg_addr1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_ena));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ctrl_req 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
            ? 0U : (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                            ? 0U : (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_reg_ena1) 
                                           & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_reg_addr1) 
                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_rdaddr))))) 
                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                              ? 0U : (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_reg_ena2) 
                                             & (2U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_reg_addr2) 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_rdaddr))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__resp_success 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__success_r) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__success_b));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__busy)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__r_len)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_len));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__busy_1)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__r_len_1)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_len));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_1 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_id)
                  ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__full))
                  : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__full))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_64 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_valid 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_9 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_id)
                  ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__full))
                  : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__full))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_uncahce_shankhand 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_icache_shankhand)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_re));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__write_uncahce_shankhand 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_icache_shankhand)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_we));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_dcache_shankhand 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_icache_shankhand)) 
           & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_type)) 
              | (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_type))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__write_dcache_shankhand 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_icache_shankhand)) 
           & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_type)) 
              | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_type))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__wmask 
        = (((QData)((IData)((((- (IData)((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_strb) 
                                                >> 7U)))) 
                              << 0x18U) | ((0xff0000U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_strb) 
                                                              >> 6U)))) 
                                               << 0x10U)) 
                                           | ((0xff00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_strb) 
                                                                 >> 5U)))) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_strb) 
                                                                  >> 4U)))))))))) 
            << 0x20U) | (QData)((IData)((((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_strb) 
                                                         >> 3U)))) 
                                          << 0x18U) 
                                         | ((0xff0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_strb) 
                                                               >> 2U)))) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_strb) 
                                                                  >> 1U)))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_strb)))))))))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_size = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_size = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_size 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? ((0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_size)) 
                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_size))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_size)) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_size) 
                          << 3U)) : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_size 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? ((0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_size)) 
                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_size))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_size)) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_size) 
                          << 3U)) : 0U));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__data_word 
        = ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                          >> 2U))) ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_data_out 
                                              >> 0x20U))
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_data_out));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__data_byte = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__data_half_byte = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__data_byte 
            = (0xffU & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                       >> 2U))) ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                     ? (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_data_out 
                                                                >> 0x38U))
                                                     : (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_data_out 
                                                                >> 0x30U)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                                     ? (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_data_out 
                                                                >> 0x28U))
                                                     : (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_data_out 
                                                                >> 0x20U))))
                         : ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                           >> 1U)))
                             ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                 ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_data_out 
                                            >> 0x18U))
                                 : (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_data_out 
                                            >> 0x10U)))
                             : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr))
                                 ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_data_out 
                                            >> 8U))
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_data_out)))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__data_half_byte 
            = (0xffffU & ((0U == (3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                >> 1U))))
                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_data_out)
                           : ((1U == (3U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                    >> 1U))))
                               ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_data_out 
                                          >> 0x10U))
                               : ((2U == (3U & (IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                        >> 1U))))
                                   ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_data_out 
                                              >> 0x20U))
                                   : (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_data_out 
                                              >> 0x30U))))));
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_data[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_data[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_data[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_data[3U] = 0U;
    } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_data[0U] 
            = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_data);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_data[1U] 
            = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_data 
                       >> 0x20U));
    } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_data[2U] 
            = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_data);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_data[3U] 
            = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_data 
                       >> 0x20U));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_data[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_data[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_data[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_data[3U] = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_addr 
        = (((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state)))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_addr
            : (((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
                & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state)))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_addr
                : (((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
                    & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state)))
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_addr
                    : 0ULL)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_addr 
        = (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state)))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_addr
            : (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
                & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state)))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_addr
                : 0ULL));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_pip_jalrena 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
            ? 0U : (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_jalr) 
                          & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__ex_op1)) 
                                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__mem_op1))) 
                                & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__wb_id_addr) 
                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__wb_id_ena))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core_stall_l 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__mem_ctrl_req) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__mul_div_req)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ctrl_req));
    __Vtableidx2 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__resp_success) 
                     << 3U) | ((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_valid) 
                                      << 2U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__timer_state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__timer_state_n 
        = VysyxSoCFull__ConstPool__TABLE_440d609d_0
        [__Vtableidx2];
    __Vtableidx3 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__resp_success) 
                     << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__success_aw) 
                                << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__timew_state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__timew_state_n 
        = VysyxSoCFull__ConstPool__TABLE_2039a795_0
        [__Vtableidx3];
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len) 
           | (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len) 
                       >> 1U)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_3 
        = (0xffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len)) 
                    | (0xfeU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len)) 
                                << 1U))));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_8 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len_1) 
           | (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len_1) 
                       >> 1U)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_14 
        = (0xffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len_1)) 
                    | (0xfeU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len_1)) 
                                << 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_valid) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state_nxt 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
            ? 1U : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))
                     ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))
                             ? 1U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__sign_delay_unread)
                                      ? 1U : 6U)) : 
                        ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))
                          ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__sign_delay_dread)
                              ? 1U : 5U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__sign_delay_iread)
                                             ? 1U : 4U)))
                     : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))
                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__sign_delay_unwrite)
                                 ? 1U : 3U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__sign_delay_dwrite)
                                                ? 1U
                                                : 2U))
                         : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))
                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_dcache_shankhand)
                                 ? 5U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_uncahce_shankhand)
                                          ? 6U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__write_dcache_shankhand)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__write_uncahce_shankhand)
                                                    ? 3U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_icache_shankhand)
                                                     ? 4U
                                                     : 1U)))))
                             : 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_size 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_size
                 [0U] : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_size) 
                         >> 3U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_size 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full)
                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_size
                 [0U] : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_size) 
                         >> 3U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__mem_id_data 
        = ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_type))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                ? 0ULL : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_type))
                           ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel))
                               ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel))
                                   ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel))
                                       ? 0ULL : (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__data_word)))
                                   : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel))
                                       ? (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__data_half_byte))
                                       : (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__data_byte))))
                               : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel))
                                   ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel))
                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_data_out
                                       : (((QData)((IData)(
                                                           (- (IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__data_word 
                                                                       >> 0x1fU))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__data_word))))
                                   : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel))
                                       ? (((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__data_half_byte) 
                                                                  >> 0xfU))))) 
                                           << 0x10U) 
                                          | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__data_half_byte)))
                                       : (((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__data_byte) 
                                                                  >> 7U))))) 
                                           << 8U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__data_byte))))))
                           : 0ULL)) : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_data);
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[3U] = 0U;
    } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[0U] 
            = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_addr);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[1U] 
            = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_addr 
                       >> 0x20U));
    } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[2U] 
            = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_addr);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[3U] 
            = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_addr 
                       >> 0x20U));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[3U] = 0U;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[3U] = 0U;
    } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[0U] 
            = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_addr);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[1U] 
            = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_addr 
                       >> 0x20U));
    } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[2U] 
            = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_addr);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[3U] 
            = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_addr 
                       >> 0x20U));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[3U] = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_if_flush 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_pip_jalrena));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
           & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
              & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core_stall_l)) 
                 & (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r 
                      == (0x7fffffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                               >> 9U)))) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r)) 
                    | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_data_r 
                        == (0x7fffffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                 >> 9U)))) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
            ? 0U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core_stall_l)
                         ? 0U : (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r 
                                   == (0x7fffffU & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                            >> 9U)))) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r))
                                  ? (((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                             >> 2U))))) 
                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out0[1U]) 
                                     | ((- (IData)(
                                                   (1U 
                                                    & (~ (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                                  >> 2U)))))) 
                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out0[0U]))
                                  : (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_data_r 
                                       == (0x7fffffU 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                      >> 9U)))) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r))
                                      ? (((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                                 >> 2U))))) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out0[3U]) 
                                         | ((- (IData)(
                                                       (1U 
                                                        & (~ (IData)(
                                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                                      >> 2U)))))) 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out0[2U]))
                                      : 0U))) : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_3 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_1) 
           | (0x3fU & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_1) 
                       >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_6 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_3) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_3) 
                       << 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_10 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_8) 
           | (0x3fU & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_8) 
                       >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_17 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_14) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_14) 
                       << 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wrapMask_T_3 
        = (0x7fffffU & ((0xffU | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_len) 
                                  << 8U)) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__bad_1 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_burst)) 
           | (3U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wrapMask_T_1 
        = (0x7fffffU & ((0xffU | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_len) 
                                  << 8U)) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__bad 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_burst)) 
           | (3U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_op 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
            ? 0ULL : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_reg_ena1)
                       ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__ex_op1)
                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex_id_rd_data
                           : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__mem_op1)
                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__mem_id_data
                               : (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_reg_ena1))
                                   ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__wb_id_addr) 
                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_reg_addr1)) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__wb_id_ena))
                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__wb_regfile_data
                                       : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__regfile10__DOT__regs
                                      [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_reg_addr1])
                                   : 0ULL))) : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_auipc) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_jal))
                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_pc
                                                 : 
                                                ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrwi) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrsi)) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_csrrci))
                                                  ? (QData)((IData)(
                                                                    (0x1fU 
                                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                                                                        >> 0xfU))))
                                                  : 0ULL))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_addr
           [0U] : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[2U]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0 
        = ((0ULL == (0xc0000000ULL & (QData)((IData)(
                                                     (0x40000000U 
                                                      ^ 
                                                      vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[2U]))))) 
           | (0ULL == (0x80000000ULL & (QData)((IData)(
                                                       (0x80000000U 
                                                        ^ 
                                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[2U]))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__csr_mtime_temp 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__success_aw) 
            & (0x200bff8ULL == (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[0U])))))
            ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__wmask 
                & (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_data[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_data[0U])))) 
               | ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__wmask) 
                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__csr_mtime))
            : (1ULL + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__csr_mtime));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__csr_mtimecmp_temp 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__success_aw) 
            & (0x2004000ULL == (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[0U])))))
            ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__wmask 
                & (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_data[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_data[0U])))) 
               | ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__wmask) 
                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__csr_mtimecmp))
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__csr_mtimecmp);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_addr
           [0U] : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[2U]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0 
        = ((0ULL == (0xc0000000ULL & (QData)((IData)(
                                                     (0x40000000U 
                                                      ^ 
                                                      vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[2U]))))) 
           | (0ULL == (0x80000000ULL & (QData)((IData)(
                                                       (0x80000000U 
                                                        ^ 
                                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[2U]))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__stall_ctrl 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
            ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__mem_ctrl_req)
                     ? 0x1fU : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__mul_div_req)
                                 ? 0xfU : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ctrl_req)
                                            ? 7U : 
                                           (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_valid))
                                             ? 0U : 3U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__icache_if_shankhand 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_valid))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm 
        = ((0x80000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data 
                                            >> 0x15U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm 
        = ((0x800U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data 
                      >> 0x14U)) | ((0x400U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data 
                                                  >> 8U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr 
        = (IData)((0x67U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__busy)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__r_addr
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_addr);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arready 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full))) 
           | ((0ULL == (0xc0000000ULL & (QData)((IData)(
                                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[2U])))) 
              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arTag_T 
        = (((0ULL == (0xc0000000ULL & (QData)((IData)(
                                                      vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[2U])))) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__busy_1)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__r_addr_1
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full))) 
           | ((0ULL == (0xc0000000ULL & (QData)((IData)(
                                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[2U])))) 
              & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bundleIn_0_awready_REG)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_bits 
        = (((0ULL == (0xc0000000ULL & (QData)((IData)(
                                                      vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[2U])))) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_enq_bits_T 
        = (((0ULL == (0xc0000000ULL & (QData)((IData)(
                                                      vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[2U])))) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst_nxt 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
            ? 1U : ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
                     ? ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
                         ? 1U : ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
                                  ? 1U : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
                                           ? 1U : (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
                                                     ? 1U
                                                     : 
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__read_ok) 
                                                      & (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r 
                                                           == 
                                                           (0x7fffffU 
                                                            & (IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                                       >> 9U)))) 
                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r)) 
                                                         | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_data_r 
                                                             == 
                                                             (0x7fffffU 
                                                              & (IData)(
                                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                                         >> 9U)))) 
                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r))))
                                                      ? 4U
                                                      : 
                                                     (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__read_ok) 
                                                       & (~ 
                                                          ((0x10000000ULL 
                                                            <= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr) 
                                                           & (0x3fffffffULL 
                                                              >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr))))
                                                       ? 2U
                                                       : 
                                                      (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__read_ok) 
                                                        & ((0x10000000ULL 
                                                            <= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr) 
                                                           & (0x3fffffffULL 
                                                              >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr)))
                                                        ? 8U
                                                        : 0x20U))))))))
                     : ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
                         ? 1U : ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
                                  ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
                                      ? 1U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
                                                   ? 1U
                                                   : 
                                                  (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
                                                    & ((~ 
                                                        ((8U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))) 
                                                       & ((~ 
                                                           (((8U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)) 
                                                            & (1U 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter)))) 
                                                          & (((8U 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)) 
                                                             & (3U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter))))))
                                                    ? 0x20U
                                                    : 8U))))
                                  : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
                                      ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
                                          ? 1U : ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
                                                   ? 1U
                                                   : 
                                                  (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
                                                    & ((4U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                                                       & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core_stall_l)) 
                                                          & (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r 
                                                               == 
                                                               (0x7fffffU 
                                                                & (IData)(
                                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                                           >> 9U)))) 
                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r)) 
                                                             | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_data_r 
                                                                 == 
                                                                 (0x7fffffU 
                                                                  & (IData)(
                                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                                             >> 9U)))) 
                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r))))))
                                                    ? 1U
                                                    : 4U)))
                                      : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
                                          ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
                                              ? 1U : 
                                             (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
                                               & ((~ 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                                                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))) 
                                                  & ((2U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok))))
                                               ? 0x20U
                                               : 2U))
                                          : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
                                              ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__icache_if_shankhand)
                                                  ? 0x20U
                                                  : 1U)
                                              : 1U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
             ? ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                           ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr))))
                 ? ((((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data 
                                >> 0xfU)) == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__wb_id_addr)) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__wb_id_ena))
                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__wb_regfile_data
                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__regfile10__DOT__regs
                    [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data 
                               >> 0xfU))]) : 0ULL) : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr) 
           + ((IData)((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data)))
               ? (((- (QData)((IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm 
                                             >> 0x13U))))) 
                   << 0x14U) | (QData)((IData)((0xfffffU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__pip_fore0__DOT__j_imm 
                                                   << 1U)))))
               : ((IData)((0x63U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data)))
                   ? (((- (QData)((IData)((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm) 
                                                 >> 0xbU))))) 
                       << 0xcU) | (QData)((IData)((0xfffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__pip_fore0__DOT__b_imm) 
                                                      << 1U)))))
                   : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
                       ? (((- (QData)((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data 
                                               >> 0x1fU)))) 
                           << 0xcU) | (QData)((IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data 
                                                       >> 0x14U))))
                       : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                           ? 0ULL : 4ULL)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_5 
        = ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr) 
           | (7U & (~ (0x3ffU & ((IData)(7U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_size))))));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_2 
        = (0xffU & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr 
                     >> 3U) | (0xfeU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr 
                                        >> 2U))));
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_37 
        = ((5U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                           >> 4U))) ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count)) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last) 
                                           == (1U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arTag_T) 
                                                >> 1U)))) 
                                       & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count)))
            : ((4U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                               >> 4U))) ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count)) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last) 
                                               == (1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arTag_T) 
                                                      >> 1U)))) 
                                           & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count)))
                : ((3U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                   >> 4U))) ? (((0U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count)) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last) 
                                                   == 
                                                   (1U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arTag_T) 
                                                       >> 1U)))) 
                                               & (7U 
                                                  != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count)))
                    : ((2U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                       >> 4U))) ? (
                                                   ((0U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count)) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last) 
                                                       == 
                                                       (1U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arTag_T) 
                                                           >> 1U)))) 
                                                   & (7U 
                                                      != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count)))
                        : ((1U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                           >> 4U)))
                            ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count)) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last) 
                                   == (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arTag_T) 
                                             >> 1U)))) 
                               & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count)))
                            : (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count)) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last) 
                                   == (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arTag_T) 
                                             >> 1U)))) 
                               & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12 
        = ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr_1) 
           | (7U & (~ (0x3ffU & ((IData)(7U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_size))))));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_12 
        = (0xffU & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr_1 
                     >> 3U) | (0xfeU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr_1 
                                        >> 2U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_bits 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_bits)
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__deq_ptr_value]);
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_53 
        = ((5U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                           >> 4U))) ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count)) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last) 
                                           == (1U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_enq_bits_T) 
                                                >> 1U)))) 
                                       & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count)))
            : ((4U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                               >> 4U))) ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count)) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last) 
                                               == (1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_enq_bits_T) 
                                                      >> 1U)))) 
                                           & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count)))
                : ((3U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                   >> 4U))) ? (((0U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count)) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last) 
                                                   == 
                                                   (1U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_enq_bits_T) 
                                                       >> 1U)))) 
                                               & (7U 
                                                  != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count)))
                    : ((2U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                       >> 4U))) ? (
                                                   ((0U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count)) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last) 
                                                       == 
                                                       (1U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_enq_bits_T) 
                                                           >> 1U)))) 
                                                   & (7U 
                                                      != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count)))
                        : ((1U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                           >> 4U)))
                            ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count)) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last) 
                                   == (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_enq_bits_T) 
                                             >> 1U)))) 
                               & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count)))
                            : (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count)) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last) 
                                   == (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_enq_bits_T) 
                                             >> 1U)))) 
                               & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_5 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_2) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_2) 
                       << 2U)));
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_42 
        = ((0xaU == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                             >> 4U))) ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count)) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last) 
                                             == (1U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arTag_T) 
                                                    >> 1U)))) 
                                         & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count)))
            : ((9U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                               >> 4U))) ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count)) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last) 
                                               == (1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arTag_T) 
                                                      >> 1U)))) 
                                           & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count)))
                : ((8U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                   >> 4U))) ? (((0U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count)) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last) 
                                                   == 
                                                   (1U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arTag_T) 
                                                       >> 1U)))) 
                                               & (7U 
                                                  != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count)))
                    : ((7U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                       >> 4U))) ? (
                                                   ((0U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count)) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last) 
                                                       == 
                                                       (1U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arTag_T) 
                                                           >> 1U)))) 
                                                   & (7U 
                                                      != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count)))
                        : ((6U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                           >> 4U)))
                            ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count)) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last) 
                                   == (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arTag_T) 
                                             >> 1U)))) 
                               & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count)))
                            : (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_37))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_15 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_12) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_12) 
                       << 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_1_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_bits) 
              >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_bits) 
                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full))) 
                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_bits) 
                     >> 1U) & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bundleIn_0_wready_REG))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_bits));
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_58 
        = ((0xaU == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                             >> 4U))) ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count)) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last) 
                                             == (1U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_enq_bits_T) 
                                                    >> 1U)))) 
                                         & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count)))
            : ((9U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                               >> 4U))) ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count)) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last) 
                                               == (1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_enq_bits_T) 
                                                      >> 1U)))) 
                                           & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count)))
                : ((8U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                   >> 4U))) ? (((0U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count)) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last) 
                                                   == 
                                                   (1U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_enq_bits_T) 
                                                       >> 1U)))) 
                                               & (7U 
                                                  != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count)))
                    : ((7U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                       >> 4U))) ? (
                                                   ((0U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count)) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last) 
                                                       == 
                                                       (1U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_enq_bits_T) 
                                                           >> 1U)))) 
                                                   & (7U 
                                                      != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count)))
                        : ((6U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                           >> 4U)))
                            ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count)) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last) 
                                   == (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_enq_bits_T) 
                                             >> 1U)))) 
                               & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count)))
                            : (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_53))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___maxSupported1_T 
        = (0xffU & (((0x7fU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_3) 
                                >> 1U) | (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_3) 
                                                >> 5U)))) 
                     | (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_6) 
                           | (0xf0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_6) 
                                       << 4U))))) & 
                    (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_5) 
                        | (0xf0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_5) 
                                    << 4U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_47 
        = ((0xfU == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                             >> 4U))) ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count)) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last) 
                                             == (1U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arTag_T) 
                                                    >> 1U)))) 
                                         & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count)))
            : ((0xeU == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                 >> 4U))) ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count)) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last) 
                                                 == 
                                                 (1U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arTag_T) 
                                                     >> 1U)))) 
                                             & (7U 
                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count)))
                : ((0xdU == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                     >> 4U))) ? (((0U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count)) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last) 
                                                     == 
                                                     (1U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arTag_T) 
                                                         >> 1U)))) 
                                                 & (7U 
                                                    != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count)))
                    : ((0xcU == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                         >> 4U))) ? 
                       (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count)) 
                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last) 
                            == (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arTag_T) 
                                      >> 1U)))) & (7U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count)))
                        : ((0xbU == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                             >> 4U)))
                            ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count)) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last) 
                                   == (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arTag_T) 
                                             >> 1U)))) 
                               & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count)))
                            : (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_42))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___maxSupported1_T_1 
        = (0xffU & (((0x7fU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_10) 
                                >> 1U) | (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_10) 
                                                >> 5U)))) 
                     | (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_17) 
                           | (0xf0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_17) 
                                       << 4U))))) & 
                    (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_15) 
                        | (0xf0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_15) 
                                    << 4U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___wdata_reg_T 
        = (((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bundleIn_0_wready_REG))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_1_wvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_ready 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_valid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_last)) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_ready 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_valid)) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__success_aw));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_wvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_wvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_63 
        = ((0xfU == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                             >> 4U))) ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count)) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last) 
                                             == (1U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_enq_bits_T) 
                                                    >> 1U)))) 
                                         & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count)))
            : ((0xeU == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                 >> 4U))) ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count)) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last) 
                                                 == 
                                                 (1U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_enq_bits_T) 
                                                     >> 1U)))) 
                                             & (7U 
                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count)))
                : ((0xdU == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                     >> 4U))) ? (((0U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count)) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last) 
                                                     == 
                                                     (1U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_enq_bits_T) 
                                                         >> 1U)))) 
                                                 & (7U 
                                                    != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count)))
                    : ((0xcU == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                         >> 4U))) ? 
                       (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count)) 
                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last) 
                            == (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_enq_bits_T) 
                                      >> 1U)))) & (7U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count)))
                        : ((0xbU == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                             >> 4U)))
                            ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count)) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last) 
                                   == (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_enq_bits_T) 
                                             >> 1U)))) 
                               & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count)))
                            : (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_58))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats_lo 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__bad)
            ? 0U : (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___maxSupported1_T)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize1_T_1 
        = (0x7fffffU & ((0xffU | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__bad)
                                    ? 0U : (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___maxSupported1_T))) 
                                  << 8U)) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_size)));
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arready) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_47)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_valid) 
              >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_valid) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_47));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__bad_1) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats_lo_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awlen = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats_lo_1 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___maxSupported1_T_1));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awlen 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___maxSupported1_T_1));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT___GEN_9 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_ready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT___do_enq_T));
    __Vtableidx1 = (((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__sign_delay_dread) 
                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__sign_delay_dwrite)) 
                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__sign_delay_iread)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__sign_delay_unread)) 
                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__sign_delay_unwrite)) 
                     << 6U) | ((0x20U & ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
                                           & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_ready)
                                               : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_ready)) 
                                                  >> 1U))) 
                                          << 5U) | 
                                         (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)) 
                                           << 5U) & 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing) 
                                            << 5U) 
                                           | (0xffffffe0U 
                                              & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing) 
                                                  << 4U) 
                                                 & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arready) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_47)) 
                                                    << 5U))))))) 
                               | (((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_dcache_shankhand) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__write_dcache_shankhand)) 
                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_icache_shankhand)) 
                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_uncahce_shankhand)) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__write_uncahce_shankhand)) 
                                   << 4U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state_n 
        = VysyxSoCFull__ConstPool__TABLE_4a137782_0
        [__Vtableidx1];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_ready 
        = (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_63)) 
            << 1U) | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_valid)));
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_1 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready) 
             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched) 
                | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_63)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_valid) 
              >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_valid) 
             >> 1U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched) 
                       | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_63));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats 
        = ((1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats_lo) 
                  << 1U)) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats_lo)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__ar_last 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats_lo) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_arecho_real_last 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats_lo) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_4 
        = ((1U | (0xfffeU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize1_T_1 
                             >> 7U))) & (~ (0x7fffU 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize1_T_1 
                                               >> 8U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_2 
        = (0xffffU & (((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                               >> 4U))) 
                      & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_1_T_2 
        = (0x7fffU & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                                >> 4U))) 
                       >> 1U) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_2_T_2 
        = (0x3fffU & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                                >> 4U))) 
                       >> 2U) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_3_T_2 
        = (0x1fffU & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                                >> 4U))) 
                       >> 3U) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_4_T_2 
        = (0xfffU & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                               >> 4U))) 
                      >> 4U) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_5_T_2 
        = (0x7ffU & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                               >> 4U))) 
                      >> 5U) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_6_T_2 
        = (0x3ffU & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                               >> 4U))) 
                      >> 6U) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_T_2 
        = (0x1ffU & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                               >> 4U))) 
                      >> 7U) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_8_T_2 
        = (0xffU & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                              >> 4U))) 
                     >> 8U) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_9_T_2 
        = (0x7fU & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                              >> 4U))) 
                     >> 9U) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_10_T_2 
        = (0x3fU & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                              >> 4U))) 
                     >> 0xaU) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_11_T_2 
        = (0x1fU & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                              >> 4U))) 
                     >> 0xbU) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_12_T_2 
        = (0xfU & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                             >> 4U))) 
                    >> 0xcU) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_13_T_2 
        = (7U & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                           >> 4U))) 
                  >> 0xdU) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_14_T_2 
        = (3U & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                           >> 4U))) 
                  >> 0xeU) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_T_2 
        = (1U & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id) 
                                           >> 4U))) 
                  >> 0xfU) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_1_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
           & (0ULL == (0xc0000000ULL & (QData)((IData)(
                                                       vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_addr[2U])))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__aw_last 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats_lo_1) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_beats 
        = ((1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats_lo_1) 
                  << 1U)) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats_lo_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awecho_real_last 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats_lo_1) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize1_T_1 
        = (0x7fffffU & ((0xffU | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awlen) 
                                  << 8U)) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT___GEN_9)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_2 
        = (0xffffU & (((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                               >> 4U))) 
                      & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_1_T_2 
        = (0x7fffU & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                                >> 4U))) 
                       >> 1U) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_2_T_2 
        = (0x3fffU & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                                >> 4U))) 
                       >> 2U) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_3_T_2 
        = (0x1fffU & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                                >> 4U))) 
                       >> 3U) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_4_T_2 
        = (0xfffU & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                               >> 4U))) 
                      >> 4U) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_5_T_2 
        = (0x7ffU & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                               >> 4U))) 
                      >> 5U) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_6_T_2 
        = (0x3ffU & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                               >> 4U))) 
                      >> 6U) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_T_2 
        = (0x1ffU & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                               >> 4U))) 
                      >> 7U) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_8_T_2 
        = (0xffU & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                              >> 4U))) 
                     >> 8U) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_9_T_2 
        = (0x7fU & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                              >> 4U))) 
                     >> 9U) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_10_T_2 
        = (0x3fU & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                              >> 4U))) 
                     >> 0xaU) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_11_T_2 
        = (0x1fU & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                              >> 4U))) 
                     >> 0xbU) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_12_T_2 
        = (0xfU & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                             >> 4U))) 
                    >> 0xcU) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_13_T_2 
        = (7U & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                           >> 4U))) 
                  >> 0xdU) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_14_T_2 
        = (3U & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                           >> 4U))) 
                  >> 0xeU) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_T_2 
        = (1U & ((((IData)(1U) << (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id) 
                                           >> 4U))) 
                  >> 0xfU) & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_1_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
           & (0ULL == (0xc0000000ULL & (QData)((IData)(
                                                       vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_addr[2U])))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__inc_addr 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr 
           + (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats) 
                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_size))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_5 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_4) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_4)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___rid_reg_T 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_1_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_arvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__inc_addr_1 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr_1 
           + (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_beats) 
                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_size))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_4 
        = ((1U | (0xfffeU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize1_T_1 
                             >> 7U))) & (~ (0x7fffU 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize1_T_1 
                                               >> 8U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___bid_reg_T 
        = (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bundleIn_0_awready_REG))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_1_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_awvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_6 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_5) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_5)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_5 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_4) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_4)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___in_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_valid) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_latched)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size 
        = (((IData)((0U != (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_4) 
                                     >> 8U)))) << 3U) 
           | (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_5) 
                                       >> 4U)))) << 2U) 
              | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_6) 
                                        >> 2U)))) << 1U) 
                 | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_6)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_6 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_5) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_5)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_9));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___GEN_10 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_counter))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_latched));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_todo 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_counter))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_valid)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_beats)
                : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_io_deq_valid) 
           & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_counter)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr 
        = (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size)) 
            & (((0ULL == (0x1fffff000ULL & (QData)((IData)(
                                                           (0x1000U 
                                                            ^ 
                                                            (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_5)))))) 
                | (0ULL == (0x1c0000000ULL & (QData)((IData)(
                                                             (0x40000000U 
                                                              ^ 
                                                              (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_5))))))) 
               | (0ULL == (0x180000000ULL & (QData)((IData)(
                                                            (0x80000000U 
                                                             ^ 
                                                             (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_5))))))))
            ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_5)
            : (0x1000U | (7U & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_5))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_size 
        = (((IData)((0U != (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_4) 
                                     >> 8U)))) << 3U) 
           | (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_5) 
                                       >> 4U)))) << 2U) 
              | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_6) 
                                        >> 2U)))) << 1U) 
                 | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_6)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_wvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_2 
        = (IData)((0U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_3 
        = (IData)((2U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_4 
        = (IData)((4U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_5 
        = (IData)((6U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size))) 
                           >> 2U) & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr 
                                        >> 2U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_1 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size))) 
                           >> 2U) & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr 
                                     >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___T_50 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___sink_ACancel_earlyValid_T_3 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__state_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__state_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_filter_lo 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_2))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_3))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_4))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_5))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__beatsLeft))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___T_50)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___sink_ACancel_earlyValid_T_3));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_filter 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_filter_lo) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_mask))) 
            << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid) 
                       << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_unready 
        = ((7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_filter) 
                   >> 1U) | (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_filter) 
                                   >> 2U)))) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_mask) 
                                                << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_readys_T_2 
        = (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_unready) 
                  >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_unready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_mask_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_readys_T_2)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_filter_lo));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__allowed_0 
        = (1U & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__beatsLeft))
                  ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_readys_T_2))
                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__state_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__earlyWinner_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_readys_T_2)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__earlyWinner_1 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_readys_T_2) 
               >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid));
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__beatsLeft))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__earlyWinner_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__earlyWinner_1;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__state_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__state_1;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_mask 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_0)
                      ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_5) 
                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_5) 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)) 
                          << 7U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_5) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_5) 
                                         & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))) 
                                     << 6U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_4) 
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
                                                                 & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))))))))))
                      : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_1)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_strb
                                   [0U] : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_strb) 
                                           >> 8U)) : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_1)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_data
               [0U] : (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_data[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_data[2U]))))
            : 0ULL);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_0)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size)
                   : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_1)
                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_size)
                             : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_0)
             ? 4U : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_1)
                            ? 1U : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_0)
             ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_id) 
                 << 3U) | (6U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_id)
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_count_1)
                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_count_0)) 
                                 << 1U))) : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_1)
                                                    ? 
                                                   (1U 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_id) 
                                                        << 3U) 
                                                       | (6U 
                                                          & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_id)
                                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_count_1)
                                                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_count_0)) 
                                                             << 1U))))
                                                    : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_0)
             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_1)
                       ? (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_size)) 
                           & (((0ULL == (0x1fffff000ULL 
                                         & (QData)((IData)(
                                                           (0x1000U 
                                                            ^ 
                                                            (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12)))))) 
                               | (0ULL == (0x1c0000000ULL 
                                           & (QData)((IData)(
                                                             (0x40000000U 
                                                              ^ 
                                                              (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12))))))) 
                              | (0ULL == (0x180000000ULL 
                                          & (QData)((IData)(
                                                            (0x80000000U 
                                                             ^ 
                                                             (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12))))))))
                           ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12)
                           : (0x1000U | (7U & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12))))
                       : 0U));
}

VL_INLINE_OPT void VysyxSoCFull___024root___combo__TOP__46(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___combo__TOP__46\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp4066;
    VlWide<4>/*127:0*/ __Vtemp4067;
    VlWide<4>/*127:0*/ __Vtemp4068;
    VlWide<4>/*127:0*/ __Vtemp4071;
    // Body
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_size
            [0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_opcode
            [0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_source
            [0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_mask 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_mask
            [0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_data
            [0U];
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_mask 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_data;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___io_q_bits_beats_T_13 
        = (0x1fU & ((IData)(3U) + (((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode))
                                     ? 0U : ((0x1eU 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size)) 
                                                 >> 2U)) 
                                             | (2U 
                                                >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size)))) 
                                   + ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode))
                                       ? ((2U & (((IData)(1U) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size)) 
                                                 >> 5U)) 
                                          | (5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size)))
                                       : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_counter)) 
           | (0U == ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode))
                      ? 0U : (0xfU & (~ (0x7ffU & (
                                                   ((IData)(0x3fU) 
                                                    << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size)) 
                                                   >> 2U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__isLastState 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state) 
           == ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode))
                ? 2U : 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__header 
        = ((((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
              ? 7U : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                       ? 6U : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                ? 5U : ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                         ? 4U : ((0xbU 
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
                                                            : 0U))))))))))))))) 
            << 0x10U) | ((((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                            ? 2U : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                     ? 2U : ((0xdU 
                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                              ? 2U : 
                                             ((0xcU 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                               ? 2U
                                               : ((0xbU 
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
                                                      : 1U)))))))) 
                          << 0xdU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size) 
                                       << 9U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full)
                                                    ? 
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_param
                                                   [0U]
                                                    : 0U) 
                                                  << 6U) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode) 
                                                    << 3U)))));
    VL_EXTEND_WI(99,32, __Vtemp4066, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__shift);
    VL_EXTEND_WQ(99,36, __Vtemp4067, (((QData)((IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data 
                                                        >> 0x18U))) 
                                       << 0x1cU) | (QData)((IData)(
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
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_mask))))))))))));
    VL_SHIFTL_WWI(99,99,6, __Vtemp4068, __Vtemp4067, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[0U] 
        = (__Vtemp4066[0U] | __Vtemp4068[0U]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[1U] 
        = (__Vtemp4066[1U] | __Vtemp4068[1U]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[2U] 
        = (__Vtemp4066[2U] | __Vtemp4068[2U]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[3U] 
        = (7U & (__Vtemp4066[3U] | __Vtemp4068[3U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_ready 
        = ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__valid_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__isLastState));
    VL_EXTEND_WI(99,32, __Vtemp4071, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA_io_q_bits_data 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state))
            ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[0U]
                : __Vtemp4071[0U]) : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state))
                                       ? 0U : ((1U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state))
                                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full)
                                                    ? 
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_address
                                                   [0U]
                                                    : vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)
                                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__header)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA_io_q_bits_last 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_last) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__isLastState));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___GEN_2 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state))
            ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode))
                ? 0U : 3U) : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state))
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_last)
                                   ? 0U : 3U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_ready 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode))
            ? ((~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                       >> 3U)) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last)))) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_ready))
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_ready));
}

VL_INLINE_OPT void VysyxSoCFull___024root___sequent__TOP__47(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___sequent__TOP__47\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr 
        = ((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
             | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))) 
            | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w 
        = (0xffU & ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                     ? ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                         ? (((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg)
                              ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg 
                                         >> 0x20U))
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg)) 
                            >> 0x18U) : (((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg)
                                           ? (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg 
                                                      >> 0x20U))
                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg)) 
                                         >> 0x10U))
                     : ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                         ? (((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg)
                              ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg 
                                         >> 0x20U))
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg)) 
                            >> 8U) : ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg 
                                                  >> 0x20U))
                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_penable 
        = ((0U == (0x20001000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_penable));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_psel 
        = ((0U == (0x20001000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0 
        = ((0U == (0x20001000U & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr))) 
           | (0U == (0x20000000U & (0x20000000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_pwrite)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_0_penable 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_penable));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_0_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__ren 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_0_psel) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_pwrite)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___bundleIn_0_pready_T_4 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
            & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_0_penable) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__ren)))) 
           | ((0U == (0x20001000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)) 
              & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_psel) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_penable)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_in_rvalid 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___bundleIn_0_pready_T_4)));
}

extern const VlWide<33>/*1055:0*/ VysyxSoCFull__ConstPool__CONST_f1d99c76_0;
extern const VlWide<33>/*1055:0*/ VysyxSoCFull__ConstPool__CONST_ac7e6362_0;

VL_INLINE_OPT void VysyxSoCFull___024root___multiclk__TOP__48(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___multiclk__TOP__48\n"); );
    // Variables
    CData/*1:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___readys_T;
    VlWide<4>/*127:0*/ __Vtemp4074;
    VlWide<4>/*127:0*/ __Vtemp4075;
    VlWide<4>/*127:0*/ __Vtemp4079;
    VlWide<4>/*127:0*/ __Vtemp4080;
    VlWide<4>/*127:0*/ __Vtemp4084;
    VlWide<4>/*127:0*/ __Vtemp4085;
    VlWide<4>/*127:0*/ __Vtemp4089;
    VlWide<4>/*127:0*/ __Vtemp4090;
    VlWide<4>/*127:0*/ __Vtemp4094;
    VlWide<4>/*127:0*/ __Vtemp4095;
    VlWide<4>/*127:0*/ __Vtemp4100;
    VlWide<4>/*127:0*/ __Vtemp4101;
    VlWide<33>/*1055:0*/ __Vtemp4107;
    VlWide<33>/*1055:0*/ __Vtemp4108;
    VlWide<33>/*1055:0*/ __Vtemp4117;
    VlWide<33>/*1055:0*/ __Vtemp4118;
    VlWide<4>/*127:0*/ __Vtemp4127;
    VlWide<4>/*127:0*/ __Vtemp4128;
    VlWide<4>/*127:0*/ __Vtemp4132;
    VlWide<4>/*127:0*/ __Vtemp4133;
    VlWide<4>/*127:0*/ __Vtemp4138;
    VlWide<4>/*127:0*/ __Vtemp4139;
    VlWide<33>/*1055:0*/ __Vtemp4145;
    VlWide<33>/*1055:0*/ __Vtemp4146;
    VlWide<33>/*1055:0*/ __Vtemp4155;
    VlWide<33>/*1055:0*/ __Vtemp4156;
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass_io_bypass 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_io_bypass 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass) 
            != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_io_bypass)) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall_counter)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___bundleOut_0_a_valid_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_set_wo_ready 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
            ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))
            : 0ULL);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__last));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_set_wo_ready 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
            ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))
            : 0ULL);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__full));
    __Vtemp4074[0U] = 1U;
    __Vtemp4074[1U] = 0U;
    __Vtemp4074[2U] = 0U;
    __Vtemp4074[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4075, __Vtemp4074, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source));
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[0U] 
            = __Vtemp4075[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[1U] 
            = __Vtemp4075[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[2U] 
            = __Vtemp4075[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[3U] 
            = __Vtemp4075[3U];
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[3U] = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1_auto_out_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stall)));
    __Vtemp4079[0U] = 1U;
    __Vtemp4079[1U] = 0U;
    __Vtemp4079[2U] = 0U;
    __Vtemp4079[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4080, __Vtemp4079, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source));
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1_auto_out_a_valid) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[0U] 
            = __Vtemp4080[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[1U] 
            = __Vtemp4080[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[2U] 
            = __Vtemp4080[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[3U] 
            = __Vtemp4080[3U];
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[3U] = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_i_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1_auto_out_a_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_allow));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___T_12 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_i_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___sink_ACancel_earlyValid_T_3 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__state_0) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state))) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__state_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_i_valid)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___readys_T 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_i_valid) 
            << 1U) | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_valid 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__beatsLeft))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___T_12)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___sink_ACancel_earlyValid_T_3));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___readys_T_3 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___readys_T) 
           | (2U & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___readys_T) 
                    << 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__earlyWinner_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___readys_T_3)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_i_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_1 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__beatsLeft))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__earlyWinner_1)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__state_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_1)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_isSupported)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_param)
                : 0U) : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_0)
             ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_opcode))
                 ? (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_hi)) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_lo)))
                 : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_param))
                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__adder_out
                     : (((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_param)) 
                         == (1U & (((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_a_ext 
                                                   >> 0x3fU))) 
                                    == (1U & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_d_ext 
                                                      >> 0x3fU))))
                                    ? (~ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__adder_out 
                                                  >> 0x3fU)))
                                    : ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_param) 
                                              >> 1U)) 
                                       == (1U & (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_a_ext 
                                                         >> 0x3fU)))))))
                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data
                         : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data)))
             : 0ULL) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_1)
                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_bits_data
                         : 0ULL));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_mask 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_0)
             ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_5) 
                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_5) 
                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address)) 
                 << 7U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_5) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_5) 
                                & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address))) 
                            << 6U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_4) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_4) 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address)) 
                                       << 5U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_4) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_4) 
                                                      & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_3) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_3) 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address)) 
                                                     << 3U) 
                                                    | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_3) 
                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_3) 
                                                            & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address))) 
                                                        << 2U) 
                                                       | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_2) 
                                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_2) 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_2) 
                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_2) 
                                                                & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address))))))))))
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_mask)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_size)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_0)
             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_1)
                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_source)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_1)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_isSupported)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode)
                : 4U) : 0U);
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_mask;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_size;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_mask;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_282 
        = ((0ULL == (0x1fffff000ULL & (QData)((IData)(
                                                      (0x1000U 
                                                       ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))))) 
           | (0ULL == (0x180000000ULL & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address 
        = (0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_address)
                       : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                           >> 2U) & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                        >> 2U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                           >> 2U) & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                     >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                           >> 2U) & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                        >> 2U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                           >> 2U) & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                     >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_valid) 
           & (0ULL == (0x80000000ULL & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_valid) 
           & (0ULL == (0x80000000ULL & (QData)((IData)(
                                                       (0x80000000U 
                                                        ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok 
        = ((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                               >> 4U))) | (1U == (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                     >> 4U)))) 
                | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                >> 4U)))) | (3U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
              | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                              >> 4U)))) | (5U == (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                     >> 4U)))) 
            | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                            >> 4U)))) | (7U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 4U))));
    __Vtemp4084[0U] = 1U;
    __Vtemp4084[1U] = 0U;
    __Vtemp4084[2U] = 0U;
    __Vtemp4084[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4085, __Vtemp4084, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source));
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_valid) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[0U] 
            = __Vtemp4085[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[1U] 
            = __Vtemp4085[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[2U] 
            = __Vtemp4085[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[3U] 
            = __Vtemp4085[3U];
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[3U] = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_source)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source));
    if ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_42 = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_42 = 2U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_42 
            = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                ? 1U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                         ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                                  ? 1U : 0U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_42 
            = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                ? 1U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                         ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                                  ? 1U : 0U)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_opcode)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_out_a_bits_mask 
        = (0xfU & ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                           >> 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_count)))
                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask) 
                       >> 4U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                        >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                     >> 1U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_2))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_3))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_4))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_5))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_2))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_3))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_4))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_5))));
    __Vtemp4089[0U] = 1U;
    __Vtemp4089[1U] = 0U;
    __Vtemp4089[2U] = 0U;
    __Vtemp4089[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4090, __Vtemp4089, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source));
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[0U] 
            = __Vtemp4090[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[1U] 
            = __Vtemp4090[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[2U] 
            = __Vtemp4090[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[3U] 
            = __Vtemp4090[3U];
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[3U] = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT___T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_42 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))
            ? 2U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))
                     ? 1U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))
                              ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))
                                       ? 1U : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_last 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_count) 
                  == (1U & (~ (0xffU & (((IData)(7U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                                        >> 2U))))) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode) 
                    >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask 
        = ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc_1) 
                   << 3U) | (0xfffffff8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                             << 2U) 
                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                               << 3U))))) 
           | ((4U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc_1) 
                      | (IData)((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))) 
                     << 2U)) | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc) 
                                        | (IData)((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc) 
                                                     | (IData)(
                                                               (0U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)) 
            << 7U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))) 
                       << 6U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                                 & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                                           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_5) 
                & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)) 
            << 7U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_5) 
                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_5) 
                           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))) 
                       << 6U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_4) 
                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_4) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_4) 
                                                 & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_3) 
                                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_2) 
                                                           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))))))))));
    __Vtemp4094[0U] = 1U;
    __Vtemp4094[1U] = 0U;
    __Vtemp4094[2U] = 0U;
    __Vtemp4094[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4095, __Vtemp4094, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source));
    __Vtemp4100[0U] = 1U;
    __Vtemp4100[1U] = 0U;
    __Vtemp4100[2U] = 0U;
    __Vtemp4100[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4101, __Vtemp4100, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4095[0U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                                ? __Vtemp4101[0U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4095[1U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                                ? __Vtemp4101[1U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4095[2U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                                ? __Vtemp4101[2U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4095[3U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                                ? __Vtemp4101[3U]
                                                : 0U)));
    VL_EXTEND_WI(1027,4, __Vtemp4107, (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4108, __Vtemp4107, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4108[0U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4108[1U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[1U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4108[2U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[2U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4108[3U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[3U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4108[4U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[4U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4108[5U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[5U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4108[6U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[6U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4108[7U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[7U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4108[8U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[8U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4108[9U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[9U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4108[0xaU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xaU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4108[0xbU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xbU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4108[0xcU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xcU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4108[0xdU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xdU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4108[0xeU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xeU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4108[0xfU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xfU]));
    VL_EXTEND_WI(1027,4, __Vtemp4117, (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4118, __Vtemp4117, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4118[0U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4118[1U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[1U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4118[2U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[2U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4118[3U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[3U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4118[4U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[4U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4118[5U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[5U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4118[6U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[6U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4118[7U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[7U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4118[8U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[8U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4118[9U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[9U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4118[0xaU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xaU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4118[0xbU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xbU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4118[0xcU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xcU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4118[0xdU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xdU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4118[0xeU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xeU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4118[0xfU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xfU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid));
    __Vtemp4127[0U] = 1U;
    __Vtemp4127[1U] = 0U;
    __Vtemp4127[2U] = 0U;
    __Vtemp4127[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4128, __Vtemp4127, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source));
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[0U] 
            = __Vtemp4128[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[1U] 
            = __Vtemp4128[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[2U] 
            = __Vtemp4128[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[3U] 
            = __Vtemp4128[3U];
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[3U] = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT___GEN_0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT___T) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_last))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full));
    __Vtemp4132[0U] = 1U;
    __Vtemp4132[1U] = 0U;
    __Vtemp4132[2U] = 0U;
    __Vtemp4132[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4133, __Vtemp4132, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source));
    __Vtemp4138[0U] = 1U;
    __Vtemp4138[1U] = 0U;
    __Vtemp4138[2U] = 0U;
    __Vtemp4138[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4139, __Vtemp4138, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4133[0U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4139[0U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4133[1U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4139[1U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4133[2U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4139[2U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4133[3U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4139[3U]
                                                : 0U)));
    VL_EXTEND_WI(1027,4, __Vtemp4145, (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4146, __Vtemp4145, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4146[0U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4146[1U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[1U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4146[2U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[2U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4146[3U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[3U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4146[4U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[4U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4146[5U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[5U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4146[6U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[6U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4146[7U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[7U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4146[8U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[8U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4146[9U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[9U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4146[0xaU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0xaU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4146[0xbU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0xbU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4146[0xcU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0xcU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4146[0xdU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0xdU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4146[0xeU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0xeU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4146[0xfU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0xfU]));
    VL_EXTEND_WI(1027,4, __Vtemp4155, (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4156, __Vtemp4155, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4156[0U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4156[1U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[1U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4156[2U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[2U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4156[3U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[3U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4156[4U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[4U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4156[5U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[5U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4156[6U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[6U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4156[7U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[7U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4156[8U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[8U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4156[9U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[9U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4156[0xaU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0xaU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4156[0xbU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0xbU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4156[0xcU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0xcU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4156[0xdU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0xdU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4156[0xeU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0xeU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4156[0xfU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_35[0xfU]));
}

extern const VlWide<17>/*543:0*/ VysyxSoCFull__ConstPool__CONST_00a54009_0;
extern const VlWide<17>/*543:0*/ VysyxSoCFull__ConstPool__CONST_0123e283_0;

VL_INLINE_OPT void VysyxSoCFull___024root___multiclk__TOP__49(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___multiclk__TOP__49\n"); );
    // Variables
    CData/*1:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___GEN_23;
    VlWide<33>/*1055:0*/ __Vtemp4165;
    VlWide<33>/*1055:0*/ __Vtemp4166;
    VlWide<33>/*1055:0*/ __Vtemp4175;
    VlWide<33>/*1055:0*/ __Vtemp4176;
    VlWide<4>/*127:0*/ __Vtemp4185;
    VlWide<4>/*127:0*/ __Vtemp4186;
    VlWide<4>/*127:0*/ __Vtemp4191;
    VlWide<4>/*127:0*/ __Vtemp4192;
    VlWide<33>/*1055:0*/ __Vtemp4198;
    VlWide<33>/*1055:0*/ __Vtemp4199;
    VlWide<33>/*1055:0*/ __Vtemp4208;
    VlWide<33>/*1055:0*/ __Vtemp4209;
    VlWide<4>/*127:0*/ __Vtemp4218;
    VlWide<4>/*127:0*/ __Vtemp4219;
    VlWide<4>/*127:0*/ __Vtemp4224;
    VlWide<4>/*127:0*/ __Vtemp4225;
    VlWide<33>/*1055:0*/ __Vtemp4231;
    VlWide<33>/*1055:0*/ __Vtemp4232;
    VlWide<33>/*1055:0*/ __Vtemp4241;
    VlWide<33>/*1055:0*/ __Vtemp4242;
    VlWide<4>/*127:0*/ __Vtemp4251;
    VlWide<4>/*127:0*/ __Vtemp4252;
    VlWide<4>/*127:0*/ __Vtemp4257;
    VlWide<4>/*127:0*/ __Vtemp4258;
    VlWide<17>/*543:0*/ __Vtemp4264;
    VlWide<17>/*543:0*/ __Vtemp4265;
    VlWide<17>/*543:0*/ __Vtemp4274;
    VlWide<17>/*543:0*/ __Vtemp4275;
    VlWide<17>/*543:0*/ __Vtemp4284;
    VlWide<17>/*543:0*/ __Vtemp4285;
    VlWide<17>/*543:0*/ __Vtemp4294;
    VlWide<17>/*543:0*/ __Vtemp4295;
    VlWide<17>/*543:0*/ __Vtemp4304;
    VlWide<17>/*543:0*/ __Vtemp4305;
    VlWide<17>/*543:0*/ __Vtemp4314;
    VlWide<17>/*543:0*/ __Vtemp4315;
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_ready 
        = (((0ULL == (0x80000000ULL & (QData)((IData)(
                                                      (0x80000000U 
                                                       ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))))) 
            & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.auto_in_a_ready)) 
           | ((0ULL == (0x80000000ULL & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_enq_ready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_a_ready 
        = (((0ULL == (0x80000000ULL & (QData)((IData)(
                                                      (0x80000000U 
                                                       ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))))) 
            & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.auto_in_a_ready)) 
           | ((0ULL == (0x80000000ULL & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_enq_ready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__latch 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__beatsLeft)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_a_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___beatsLeft_T_4 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__beatsLeft) 
                 - ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_a_ready) 
                    & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__beatsLeft))
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___T_12)
                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___sink_ACancel_earlyValid_T_3)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__out_1_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_a_ready) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__beatsLeft))
               ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___readys_T_3))
               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__state_1)));
    VL_EXTEND_WI(1027,4, __Vtemp4165, (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4166, __Vtemp4165, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4166[0U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4166[1U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[1U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4166[2U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[2U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4166[3U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[3U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4166[4U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[4U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4166[5U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[5U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4166[6U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[6U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4166[7U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[7U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4166[8U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[8U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4166[9U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[9U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4166[0xaU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0xaU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4166[0xbU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0xbU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4166[0xcU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0xcU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4166[0xdU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0xdU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4166[0xeU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0xeU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4166[0xfU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0xfU]));
    VL_EXTEND_WI(1027,4, __Vtemp4175, (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4176, __Vtemp4175, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4176[0U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4176[1U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[1U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4176[2U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[2U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4176[3U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[3U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4176[4U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[4U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4176[5U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[5U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4176[6U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[6U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4176[7U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[7U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4176[8U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[8U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4176[9U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[9U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4176[0xaU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0xaU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4176[0xbU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0xbU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4176[0xcU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0xcU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4176[0xdU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0xdU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4176[0xeU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0xeU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4176[0xfU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_35[0xfU]));
    __Vtemp4185[0U] = 1U;
    __Vtemp4185[1U] = 0U;
    __Vtemp4185[2U] = 0U;
    __Vtemp4185[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4186, __Vtemp4185, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source));
    __Vtemp4191[0U] = 1U;
    __Vtemp4191[1U] = 0U;
    __Vtemp4191[2U] = 0U;
    __Vtemp4191[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4192, __Vtemp4191, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4186[0U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4192[0U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4186[1U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4192[1U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4186[2U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4192[2U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4186[3U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4192[3U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___T_50 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__out_1_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_i_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__out_1_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_allow));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_a_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__out_1_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_allow));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___GEN_23 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___T_50) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_isSupported)))
            ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state))
                ? 3U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state))
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1_auto_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor_io_in_a_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_a_ready) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stall)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___a_first_T 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_a_ready) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stall))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1_auto_in_a_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_a_ready) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stall)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___GEN_25 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_a_ready) 
             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__beatsLeft)) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__state_0))) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state)))
            ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state))
                ? 1U : (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___GEN_23))
            : (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___GEN_23));
    VL_EXTEND_WI(1027,4, __Vtemp4198, (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4199, __Vtemp4198, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4199[0U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4199[1U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[1U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4199[2U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[2U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4199[3U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[3U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4199[4U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[4U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4199[5U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[5U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4199[6U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[6U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4199[7U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[7U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4199[8U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[8U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4199[9U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[9U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4199[0xaU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0xaU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4199[0xbU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0xbU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4199[0xcU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0xcU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4199[0xdU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0xdU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4199[0xeU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0xeU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4199[0xfU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0xfU]));
    VL_EXTEND_WI(1027,4, __Vtemp4208, (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4209, __Vtemp4208, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4209[0U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4209[1U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[1U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4209[2U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[2U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4209[3U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[3U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4209[4U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[4U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4209[5U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[5U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4209[6U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[6U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4209[7U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[7U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4209[8U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[8U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4209[9U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[9U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4209[0xaU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0xaU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4209[0xbU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0xbU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4209[0xcU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0xcU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4209[0xdU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0xdU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4209[0xeU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0xeU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4209[0xfU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_35[0xfU]));
    __Vtemp4218[0U] = 1U;
    __Vtemp4218[1U] = 0U;
    __Vtemp4218[2U] = 0U;
    __Vtemp4218[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4219, __Vtemp4218, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source));
    __Vtemp4224[0U] = 1U;
    __Vtemp4224[1U] = 0U;
    __Vtemp4224[2U] = 0U;
    __Vtemp4224[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4225, __Vtemp4224, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4219[0U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4225[0U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4219[1U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4225[1U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4219[2U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4225[2U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4219[3U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4225[3U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid));
    if (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_first_counter)) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___a_first_T))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_146 
            = ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_16));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_147 
            = ((0x11U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_17));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_148 
            = ((0x12U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_18));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_149 
            = ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_19));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_150 
            = ((0x14U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_20));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_151 
            = ((0x15U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_21));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_152 
            = ((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_22));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_153 
            = ((0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_23));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_154 
            = ((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_24));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_155 
            = ((0x19U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_25));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_156 
            = ((0x1aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_26));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_157 
            = ((0x1bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_27));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_158 
            = ((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_28));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_159 
            = ((0x1dU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_29));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_160 
            = ((0x1eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_30));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_161 
            = ((0x1fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_31));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_162 
            = ((0x20U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_32));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_163 
            = ((0x21U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_33));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_164 
            = ((0x22U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_34));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_165 
            = ((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_35));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_166 
            = ((0x24U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_36));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_167 
            = ((0x25U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_37));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_168 
            = ((0x26U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_38));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_169 
            = ((0x27U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_39));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_170 
            = ((0x28U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_40));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_171 
            = ((0x29U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_41));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_172 
            = ((0x2aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_42));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_173 
            = ((0x2bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_43));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_174 
            = ((0x2cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_44));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_175 
            = ((0x2dU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_45));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_176 
            = ((0x2eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_46));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_177 
            = ((0x2fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_47));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_178 
            = ((0x30U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_48));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_179 
            = ((0x31U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_49));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_180 
            = ((0x32U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_50));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_181 
            = ((0x33U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_51));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_182 
            = ((0x34U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_52));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_183 
            = ((0x35U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_53));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_184 
            = ((0x36U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_54));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_185 
            = ((0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_55));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_186 
            = ((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_56));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_187 
            = ((0x39U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_57));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_188 
            = ((0x3aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_58));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_189 
            = ((0x3bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_59));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_190 
            = ((0x3cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_60));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_191 
            = ((0x3dU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_61));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_192 
            = ((0x3eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_62));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_193 
            = ((0x3fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_63));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_194 
            = ((0x40U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_64));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_195 
            = ((0x41U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_65));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_196 
            = ((0x42U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_66));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_197 
            = ((0x43U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_67));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_198 
            = ((0x44U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_68));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_199 
            = ((0x45U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_69));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_200 
            = ((0x46U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_70));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_201 
            = ((0x47U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_71));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_202 
            = ((0x48U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_72));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_203 
            = ((0x49U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_73));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_204 
            = ((0x4aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_74));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_205 
            = ((0x4bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_75));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_206 
            = ((0x4cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_76));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_207 
            = ((0x4dU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_77));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_208 
            = ((0x4eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_78));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_209 
            = ((0x4fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_79));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_210 
            = ((0x50U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_80));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_211 
            = ((0x51U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_81));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_212 
            = ((0x52U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_82));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_213 
            = ((0x53U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_83));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_214 
            = ((0x54U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_84));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_215 
            = ((0x55U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_85));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_216 
            = ((0x56U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_86));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_217 
            = ((0x57U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_87));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_218 
            = ((0x58U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_88));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_219 
            = ((0x59U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_89));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_220 
            = ((0x5aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_90));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_221 
            = ((0x5bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_91));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_222 
            = ((0x5cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_92));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_223 
            = ((0x5dU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_93));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_224 
            = ((0x5eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_94));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_225 
            = ((0x5fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_95));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_226 
            = ((0x60U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_96));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_227 
            = ((0x61U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_97));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_228 
            = ((0x62U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_98));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_229 
            = ((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_99));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_230 
            = ((0x64U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_100));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_231 
            = ((0x65U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_101));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_232 
            = ((0x66U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_102));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_233 
            = ((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_103));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_234 
            = ((0x68U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_104));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_235 
            = ((0x69U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_105));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_236 
            = ((0x6aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_106));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_237 
            = ((0x6bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_107));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_238 
            = ((0x6cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_108));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_239 
            = ((0x6dU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_109));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_240 
            = ((0x6eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_110));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_241 
            = ((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_111));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_242 
            = ((0x70U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_112));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_243 
            = ((0x71U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_113));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_244 
            = ((0x72U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_114));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_245 
            = ((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_115));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_246 
            = ((0x74U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_116));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_247 
            = ((0x75U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_117));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_248 
            = ((0x76U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_118));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_249 
            = ((0x77U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_119));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_250 
            = ((0x78U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_120));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_251 
            = ((0x79U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_121));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_252 
            = ((0x7aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_122));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_253 
            = ((0x7bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_123));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_254 
            = ((0x7cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_124));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_255 
            = ((0x7dU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_125));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_256 
            = ((0x7eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_126));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_257 
            = ((0x7fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_127));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_146 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_16;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_147 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_17;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_148 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_18;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_149 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_19;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_150 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_20;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_21;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_152 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_22;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_153 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_23;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_154 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_24;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_155 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_25;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_156 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_26;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_157 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_27;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_158 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_28;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_159 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_29;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_160 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_30;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_161 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_31;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_162 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_32;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_163 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_33;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_164 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_34;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_165 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_35;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_166 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_36;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_167 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_37;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_168 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_38;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_169 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_39;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_170 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_40;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_171 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_41;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_172 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_42;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_173 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_43;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_174 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_44;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_175 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_45;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_176 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_46;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_177 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_47;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_178 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_48;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_179 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_49;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_180 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_50;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_181 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_51;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_182 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_52;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_183 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_53;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_184 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_54;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_185 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_55;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_186 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_56;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_187 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_57;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_188 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_58;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_189 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_59;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_190 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_60;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_191 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_61;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_192 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_62;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_193 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_63;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_194 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_64;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_195 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_65;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_196 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_66;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_197 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_67;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_198 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_68;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_199 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_69;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_200 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_70;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_201 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_71;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_202 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_72;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_203 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_73;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_204 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_74;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_205 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_75;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_206 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_76;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_207 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_77;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_208 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_78;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_209 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_79;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_210 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_80;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_211 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_81;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_212 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_82;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_213 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_83;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_214 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_84;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_215 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_85;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_216 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_86;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_217 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_87;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_218 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_88;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_219 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_89;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_220 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_90;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_221 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_91;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_222 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_92;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_223 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_93;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_224 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_94;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_225 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_95;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_226 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_96;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_227 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_97;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_228 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_98;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_229 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_99;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_230 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_100;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_231 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_101;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_232 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_102;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_233 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_103;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_234 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_104;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_235 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_105;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_236 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_106;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_237 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_107;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_238 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_108;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_239 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_109;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_240 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_110;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_241 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_111;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_242 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_112;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_243 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_113;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_244 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_114;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_245 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_115;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_246 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_116;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_247 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_117;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_248 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_118;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_249 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_119;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_250 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_120;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_251 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_121;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_252 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_122;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_253 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_123;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_254 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_124;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_255 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_125;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_256 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_126;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT___GEN_257 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_127;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_enq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1_auto_in_a_ready) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__full)));
    VL_EXTEND_WI(1027,4, __Vtemp4231, (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4232, __Vtemp4231, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4232[0U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4232[1U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[1U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4232[2U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[2U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4232[3U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[3U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4232[4U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[4U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4232[5U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[5U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4232[6U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[6U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4232[7U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[7U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4232[8U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[8U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4232[9U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[9U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4232[0xaU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0xaU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4232[0xbU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0xbU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4232[0xcU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0xcU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4232[0xdU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0xdU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4232[0xeU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0xeU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4232[0xfU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0xfU]));
    VL_EXTEND_WI(1027,4, __Vtemp4241, (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4242, __Vtemp4241, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4242[0U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4242[1U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[1U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4242[2U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[2U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4242[3U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[3U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4242[4U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[4U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4242[5U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[5U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4242[6U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[6U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4242[7U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[7U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4242[8U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[8U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4242[9U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[9U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4242[0xaU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0xaU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4242[0xbU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0xbU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4242[0xcU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0xcU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4242[0xdU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0xdU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4242[0xeU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0xeU]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4242[0xfU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_35[0xfU]));
    __Vtemp4251[0U] = 1U;
    __Vtemp4251[1U] = 0U;
    __Vtemp4251[2U] = 0U;
    __Vtemp4251[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4252, __Vtemp4251, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source));
    __Vtemp4257[0U] = 1U;
    __Vtemp4257[1U] = 0U;
    __Vtemp4257[2U] = 0U;
    __Vtemp4257[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4258, __Vtemp4257, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4252[0U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp4258[0U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4252[1U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp4258[1U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4252[2U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp4258[2U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4252[3U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp4258[3U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT___T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___T 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_enq_ready) 
            | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__last))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor_io_in_a_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_enq_ready) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__last))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_in_a_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_enq_ready) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__last))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT___GEN_0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT___T) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_repeat)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___GEN_4 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___T) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__last))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__bundleOut_0_a_bits_data_rdata_written_once));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___GEN_6 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___T) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__last))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__bundleOut_0_a_bits_mask_rdata_written_once));
    VL_EXTEND_WI(515,4, __Vtemp4264, (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(515,515,9, __Vtemp4265, __Vtemp4264, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4265[0U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[0U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[0U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4265[1U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[1U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[1U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4265[2U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[2U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[2U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4265[3U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[3U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[3U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4265[4U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[4U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[4U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4265[5U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[5U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[5U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4265[6U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[6U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[6U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4265[7U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[7U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[7U]));
    VL_EXTEND_WI(515,4, __Vtemp4274, (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(515,515,9, __Vtemp4275, __Vtemp4274, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4275[0U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[0U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[0U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4275[1U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[1U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[1U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4275[2U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[2U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[2U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4275[3U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[3U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[3U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4275[4U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[4U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[4U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4275[5U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[5U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[5U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4275[6U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[6U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[6U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4275[7U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[7U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_35[7U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_T_2 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))
                : 0ULL)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                                & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                ? (1ULL << (0x3fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                             >> 1U)))
                                : 0ULL)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_in_a_ready) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___bundleOut_0_a_valid_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___bundleIn_0_a_ready_T_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_in_a_ready));
    VL_EXTEND_WI(515,4, __Vtemp4284, (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(515,515,9, __Vtemp4285, __Vtemp4284, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4285[0U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[0U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[0U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4285[1U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[1U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[1U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4285[2U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[2U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[2U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4285[3U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[3U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[3U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4285[4U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[4U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[4U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4285[5U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[5U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[5U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4285[6U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[6U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[6U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4285[7U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[7U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[7U]));
    VL_EXTEND_WI(515,4, __Vtemp4294, (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(515,515,9, __Vtemp4295, __Vtemp4294, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4295[0U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[0U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[0U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4295[1U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[1U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[1U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4295[2U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[2U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[2U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4295[3U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[3U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[3U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4295[4U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[4U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[4U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4295[5U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[5U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[5U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4295[6U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[6U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[6U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4295[7U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[7U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_35[7U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_T_2 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))
                : 0ULL)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                                & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))
                                : 0ULL)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__inc 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___T) 
             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter))) 
            << 4U) | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___T_3) 
                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter_3))) 
                        & (IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))))) 
                       << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___T_2) 
                                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter_2))) 
                                  & (IData)((6U == 
                                             (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_c_bits_opcode))))) 
                                 << 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___bundleIn_0_a_ready_T_1) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_in_1_a_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___bundleIn_0_a_ready_T_1) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__next_flight 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__flight) 
                     + (7U & ((3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__inc)) 
                                     + (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__inc) 
                                              >> 1U)))) 
                              + (3U & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__inc) 
                                              >> 2U)) 
                                       + ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__inc) 
                                                 >> 3U)) 
                                          + (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__inc) 
                                                   >> 4U)))))))) 
                    - (7U & ((3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__dec)) 
                                    + (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__dec) 
                                             >> 1U)))) 
                             + (3U & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__dec) 
                                             >> 2U)) 
                                      + ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__dec) 
                                                >> 3U)) 
                                         + (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__dec) 
                                                  >> 4U)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
            ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_in_1_a_ready))
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_in_1_a_ready));
    VL_EXTEND_WI(515,4, __Vtemp4304, (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(515,515,9, __Vtemp4305, __Vtemp4304, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4305[0U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[0U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[0U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4305[1U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[1U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[1U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4305[2U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[2U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[2U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4305[3U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[3U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[3U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4305[4U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[4U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[4U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4305[5U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[5U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[5U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4305[6U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[6U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[6U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4305[7U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[7U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[7U]));
    VL_EXTEND_WI(515,4, __Vtemp4314, (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                                       ? (1U | (0xeU 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3) 
                                                   << 1U)))
                                       : 0U));
    VL_SHIFTL_WWI(515,515,9, __Vtemp4315, __Vtemp4314, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4315[0U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[0U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[0U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4315[1U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[1U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[1U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4315[2U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[2U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[2U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4315[3U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[3U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[3U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4315[4U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[4U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[4U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4315[5U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[5U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[5U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4315[6U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[6U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[6U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4315[7U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[7U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_35[7U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_T_2 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source))
                : 0ULL)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                                & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))
                                : 0ULL)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_ready 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready) 
                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__stall))) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_alloc_valid 
        = (0xffU & ((((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_alloc_valid 
        = (0x7fU & (((((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                        >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_alloc_valid 
        = (0x3fU & (((((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                        >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_alloc_valid 
        = (0x1fU & (((((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                        >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_alloc_valid 
        = (0xfU & (((((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                       >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_alloc_valid 
        = (7U & (((((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                     >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_alloc_valid 
        = (3U & (((((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                     >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_alloc_valid 
        = (1U & (((((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                     >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___GEN_10 
        = (0x7ffffffffffffffULL & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___T)
                                        ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state))
                                            ? (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))
                                            : (((QData)((IData)(
                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[2U])) 
                                                << 0x3cU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[2U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[1U])) 
                                                     >> 4U))))
                                        : (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__shift)))
                                    : (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__shift))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___q_last_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_ready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___T 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___T 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___T 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___T 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___T 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___T 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___T 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___T 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free) 
            & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___T)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free_sel)
                   : 0U))) | ((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                        & ((IData)(1U) 
                                           << (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                >> 3U)))))
                               ? (0xffU & ((IData)(1U) 
                                           << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free) 
            & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___T)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free_sel)
                   : 0U))) | ((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                        & (((IData)(1U) 
                                            << (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                   >> 3U))) 
                                           >> 1U)))
                               ? (0xffU & ((IData)(1U) 
                                           << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free) 
            & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___T)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free_sel)
                   : 0U))) | ((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                        & (((IData)(1U) 
                                            << (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                   >> 3U))) 
                                           >> 2U)))
                               ? (0xffU & ((IData)(1U) 
                                           << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free) 
            & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___T)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free_sel)
                   : 0U))) | ((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                        & (((IData)(1U) 
                                            << (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                   >> 3U))) 
                                           >> 3U)))
                               ? (0xffU & ((IData)(1U) 
                                           << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free) 
            & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___T)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free_sel)
                   : 0U))) | ((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                       & (((IData)(1U) 
                                           << (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                >> 3U))) 
                                          >> 4U))) ? 
                              (0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free) 
            & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___T)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free_sel)
                   : 0U))) | ((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                     & (((IData)(1U) 
                                         << (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                   >> 3U))) 
                                        >> 5U))) ? 
                              (0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free) 
            & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___T)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free_sel)
                   : 0U))) | ((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                     & (((IData)(1U) 
                                         << (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                   >> 3U))) 
                                        >> 6U))) ? 
                              (0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free) 
            & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___T)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free_sel)
                   : 0U))) | ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                     & (((IData)(1U) 
                                         << (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                   >> 3U))) 
                                        >> 7U))) ? 
                              (0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD_io_q_bits_data 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_data
               [0U] : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_in_d_bits_data)
            : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state))
                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full) 
                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_sink
                   [0U]) : (3U | ((((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode))
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
                                                 [(7U 
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
                                   << 0x10U) | ((0xe000U 
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
                                                            << 3U)))))))));
}
