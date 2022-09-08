// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

//==========


void VysyxSoCFull___024root___ctor_var_reset(VysyxSoCFull___024root* vlSelf);

VysyxSoCFull___024root::VysyxSoCFull___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VysyxSoCFull___024root___ctor_var_reset(this);
}

void VysyxSoCFull___024root::__Vconfigure(VysyxSoCFull__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VysyxSoCFull___024root::~VysyxSoCFull___024root() {
}

void VysyxSoCFull___024root___initial__TOP__1(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___initial__TOP__1\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp1;
    VlWide<5>/*159:0*/ __Vtemp2;
    VlWide<5>/*159:0*/ __Vtemp3;
    VlWide<5>/*159:0*/ __Vtemp4;
    VlWide<5>/*159:0*/ __Vtemp5;
    VlWide<5>/*159:0*/ __Vtemp6;
    VlWide<5>/*159:0*/ __Vtemp7;
    VlWide<5>/*159:0*/ __Vtemp8;
    VlWide<5>/*159:0*/ __Vtemp9;
    VlWide<5>/*159:0*/ __Vtemp10;
    VlWide<5>/*159:0*/ __Vtemp11;
    VlWide<5>/*159:0*/ __Vtemp12;
    VlWide<5>/*159:0*/ __Vtemp13;
    VlWide<5>/*159:0*/ __Vtemp14;
    VlWide<5>/*159:0*/ __Vtemp15;
    VlWide<5>/*159:0*/ __Vtemp16;
    VlWide<5>/*159:0*/ __Vtemp17;
    VlWide<5>/*159:0*/ __Vtemp18;
    VlWide<5>/*159:0*/ __Vtemp19;
    VlWide<5>/*159:0*/ __Vtemp20;
    VlWide<5>/*159:0*/ __Vtemp21;
    VlWide<5>/*159:0*/ __Vtemp22;
    VlWide<5>/*159:0*/ __Vtemp23;
    VlWide<5>/*159:0*/ __Vtemp24;
    VlWide<5>/*159:0*/ __Vtemp25;
    VlWide<5>/*159:0*/ __Vtemp26;
    VlWide<5>/*159:0*/ __Vtemp27;
    VlWide<5>/*159:0*/ __Vtemp28;
    VlWide<5>/*159:0*/ __Vtemp29;
    VlWide<5>/*159:0*/ __Vtemp30;
    VlWide<5>/*159:0*/ __Vtemp31;
    VlWide<5>/*159:0*/ __Vtemp32;
    VlWide<5>/*159:0*/ __Vtemp33;
    VlWide<5>/*159:0*/ __Vtemp34;
    VlWide<5>/*159:0*/ __Vtemp35;
    VlWide<5>/*159:0*/ __Vtemp36;
    VlWide<5>/*159:0*/ __Vtemp37;
    VlWide<5>/*159:0*/ __Vtemp38;
    // Body
    __Vtemp1[0U] = 0x743d2564U;
    __Vtemp1[1U] = 0x6d656f75U;
    __Vtemp1[2U] = 0x6b5f7469U;
    __Vtemp1[3U] = 0x656c696eU;
    __Vtemp1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp1), 
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp2[0U] = 0x743d2564U;
    __Vtemp2[1U] = 0x6d656f75U;
    __Vtemp2[2U] = 0x6b5f7469U;
    __Vtemp2[3U] = 0x656c696eU;
    __Vtemp2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp2), 
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp3[0U] = 0x743d2564U;
    __Vtemp3[1U] = 0x6d656f75U;
    __Vtemp3[2U] = 0x6b5f7469U;
    __Vtemp3[3U] = 0x656c696eU;
    __Vtemp3[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp3), 
                                vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp4[0U] = 0x743d2564U;
    __Vtemp4[1U] = 0x6d656f75U;
    __Vtemp4[2U] = 0x6b5f7469U;
    __Vtemp4[3U] = 0x656c696eU;
    __Vtemp4[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp4), 
                                vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_spi_clk = 0U;
    __Vtemp5[0U] = 0x743d2564U;
    __Vtemp5[1U] = 0x6d656f75U;
    __Vtemp5[2U] = 0x6b5f7469U;
    __Vtemp5[3U] = 0x656c696eU;
    __Vtemp5[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp5), 
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp6[0U] = 0x743d2564U;
    __Vtemp6[1U] = 0x6d656f75U;
    __Vtemp6[2U] = 0x6b5f7469U;
    __Vtemp6[3U] = 0x656c696eU;
    __Vtemp6[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp6), 
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp7[0U] = 0x743d2564U;
    __Vtemp7[1U] = 0x6d656f75U;
    __Vtemp7[2U] = 0x6b5f7469U;
    __Vtemp7[3U] = 0x656c696eU;
    __Vtemp7[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp7), 
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp8[0U] = 0x743d2564U;
    __Vtemp8[1U] = 0x6d656f75U;
    __Vtemp8[2U] = 0x6b5f7469U;
    __Vtemp8[3U] = 0x656c696eU;
    __Vtemp8[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp8), 
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp9[0U] = 0x743d2564U;
    __Vtemp9[1U] = 0x6d656f75U;
    __Vtemp9[2U] = 0x6b5f7469U;
    __Vtemp9[3U] = 0x656c696eU;
    __Vtemp9[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp9), 
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp10[0U] = 0x743d2564U;
    __Vtemp10[1U] = 0x6d656f75U;
    __Vtemp10[2U] = 0x6b5f7469U;
    __Vtemp10[3U] = 0x656c696eU;
    __Vtemp10[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp10), 
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp11[0U] = 0x743d2564U;
    __Vtemp11[1U] = 0x6d656f75U;
    __Vtemp11[2U] = 0x6b5f7469U;
    __Vtemp11[3U] = 0x656c696eU;
    __Vtemp11[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp11), 
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp12[0U] = 0x743d2564U;
    __Vtemp12[1U] = 0x6d656f75U;
    __Vtemp12[2U] = 0x6b5f7469U;
    __Vtemp12[3U] = 0x656c696eU;
    __Vtemp12[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp12), 
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp13[0U] = 0x743d2564U;
    __Vtemp13[1U] = 0x6d656f75U;
    __Vtemp13[2U] = 0x6b5f7469U;
    __Vtemp13[3U] = 0x656c696eU;
    __Vtemp13[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp13), 
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp14[0U] = 0x743d2564U;
    __Vtemp14[1U] = 0x6d656f75U;
    __Vtemp14[2U] = 0x6b5f7469U;
    __Vtemp14[3U] = 0x656c696eU;
    __Vtemp14[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp14), 
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp15[0U] = 0x743d2564U;
    __Vtemp15[1U] = 0x6d656f75U;
    __Vtemp15[2U] = 0x6b5f7469U;
    __Vtemp15[3U] = 0x656c696eU;
    __Vtemp15[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp15), 
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp16[0U] = 0x743d2564U;
    __Vtemp16[1U] = 0x6d656f75U;
    __Vtemp16[2U] = 0x6b5f7469U;
    __Vtemp16[3U] = 0x656c696eU;
    __Vtemp16[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp16), 
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp17[0U] = 0x743d2564U;
    __Vtemp17[1U] = 0x6d656f75U;
    __Vtemp17[2U] = 0x6b5f7469U;
    __Vtemp17[3U] = 0x656c696eU;
    __Vtemp17[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp17), 
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp18[0U] = 0x743d2564U;
    __Vtemp18[1U] = 0x6d656f75U;
    __Vtemp18[2U] = 0x6b5f7469U;
    __Vtemp18[3U] = 0x656c696eU;
    __Vtemp18[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp18), 
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp19[0U] = 0x743d2564U;
    __Vtemp19[1U] = 0x6d656f75U;
    __Vtemp19[2U] = 0x6b5f7469U;
    __Vtemp19[3U] = 0x656c696eU;
    __Vtemp19[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp19), 
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp20[0U] = 0x743d2564U;
    __Vtemp20[1U] = 0x6d656f75U;
    __Vtemp20[2U] = 0x6b5f7469U;
    __Vtemp20[3U] = 0x656c696eU;
    __Vtemp20[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp20), 
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp21[0U] = 0x743d2564U;
    __Vtemp21[1U] = 0x6d656f75U;
    __Vtemp21[2U] = 0x6b5f7469U;
    __Vtemp21[3U] = 0x656c696eU;
    __Vtemp21[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp21), 
                                vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp22[0U] = 0x743d2564U;
    __Vtemp22[1U] = 0x6d656f75U;
    __Vtemp22[2U] = 0x6b5f7469U;
    __Vtemp22[3U] = 0x656c696eU;
    __Vtemp22[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp22), 
                                vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp23[0U] = 0x743d2564U;
    __Vtemp23[1U] = 0x6d656f75U;
    __Vtemp23[2U] = 0x6b5f7469U;
    __Vtemp23[3U] = 0x656c696eU;
    __Vtemp23[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp23), 
                                vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp24[0U] = 0x743d2564U;
    __Vtemp24[1U] = 0x6d656f75U;
    __Vtemp24[2U] = 0x6b5f7469U;
    __Vtemp24[3U] = 0x656c696eU;
    __Vtemp24[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp24), 
                                vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp25[0U] = 0x743d2564U;
    __Vtemp25[1U] = 0x6d656f75U;
    __Vtemp25[2U] = 0x6b5f7469U;
    __Vtemp25[3U] = 0x656c696eU;
    __Vtemp25[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp25), 
                                vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp26[0U] = 0x743d2564U;
    __Vtemp26[1U] = 0x6d656f75U;
    __Vtemp26[2U] = 0x6b5f7469U;
    __Vtemp26[3U] = 0x656c696eU;
    __Vtemp26[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp26), 
                                vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp27[0U] = 0x743d2564U;
    __Vtemp27[1U] = 0x6d656f75U;
    __Vtemp27[2U] = 0x6b5f7469U;
    __Vtemp27[3U] = 0x656c696eU;
    __Vtemp27[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp27), 
                                vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp28[0U] = 0x743d2564U;
    __Vtemp28[1U] = 0x6d656f75U;
    __Vtemp28[2U] = 0x6b5f7469U;
    __Vtemp28[3U] = 0x656c696eU;
    __Vtemp28[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp28), 
                                vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp29[0U] = 0x743d2564U;
    __Vtemp29[1U] = 0x6d656f75U;
    __Vtemp29[2U] = 0x6b5f7469U;
    __Vtemp29[3U] = 0x656c696eU;
    __Vtemp29[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp29), 
                                vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp30[0U] = 0x743d2564U;
    __Vtemp30[1U] = 0x6d656f75U;
    __Vtemp30[2U] = 0x6b5f7469U;
    __Vtemp30[3U] = 0x656c696eU;
    __Vtemp30[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp30), 
                                vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp31[0U] = 0x743d2564U;
    __Vtemp31[1U] = 0x6d656f75U;
    __Vtemp31[2U] = 0x6b5f7469U;
    __Vtemp31[3U] = 0x656c696eU;
    __Vtemp31[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp31), 
                                vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp32[0U] = 0x743d2564U;
    __Vtemp32[1U] = 0x6d656f75U;
    __Vtemp32[2U] = 0x6b5f7469U;
    __Vtemp32[3U] = 0x656c696eU;
    __Vtemp32[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp32), 
                                vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp33[0U] = 0x743d2564U;
    __Vtemp33[1U] = 0x6d656f75U;
    __Vtemp33[2U] = 0x6b5f7469U;
    __Vtemp33[3U] = 0x656c696eU;
    __Vtemp33[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp33), 
                                vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp34[0U] = 0x743d2564U;
    __Vtemp34[1U] = 0x6d656f75U;
    __Vtemp34[2U] = 0x6b5f7469U;
    __Vtemp34[3U] = 0x656c696eU;
    __Vtemp34[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp34), 
                                vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp35[0U] = 0x743d2564U;
    __Vtemp35[1U] = 0x6d656f75U;
    __Vtemp35[2U] = 0x6b5f7469U;
    __Vtemp35[3U] = 0x656c696eU;
    __Vtemp35[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp35), 
                                vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp36[0U] = 0x743d2564U;
    __Vtemp36[1U] = 0x6d656f75U;
    __Vtemp36[2U] = 0x6b5f7469U;
    __Vtemp36[3U] = 0x656c696eU;
    __Vtemp36[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp36), 
                                vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp37[0U] = 0x743d2564U;
    __Vtemp37[1U] = 0x6d656f75U;
    __Vtemp37[2U] = 0x6b5f7469U;
    __Vtemp37[3U] = 0x656c696eU;
    __Vtemp37[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp37), 
                                vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp38[0U] = 0x743d2564U;
    __Vtemp38[1U] = 0x6d656f75U;
    __Vtemp38[2U] = 0x6b5f7469U;
    __Vtemp38[3U] = 0x656c696eU;
    __Vtemp38[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp38), 
                                vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
}

extern const VlUnpacked<CData/*7:0*/, 256> VysyxSoCFull__ConstPool__TABLE_35ef908b_0;
extern const VlUnpacked<SData/*9:0*/, 256> VysyxSoCFull__ConstPool__TABLE_64e3b0ab_0;
extern const VlWide<16>/*511:0*/ VysyxSoCFull__ConstPool__CONST_0b2d9f06_0;
extern const VlWide<16>/*511:0*/ VysyxSoCFull__ConstPool__CONST_3ad9c2be_0;

void VysyxSoCFull___024root___settle__TOP__36(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___settle__TOP__36\n"); );
    // Variables
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_2;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_5;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_2;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_5;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_2;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_5;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_2;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_5;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_2;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_5;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_2;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_5;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_2;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_5;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_2;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_5;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_5;
    CData/*2:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_1;
    CData/*2:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_4;
    CData/*3:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_32;
    CData/*1:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___readys_T;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_2;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_5;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_2;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_5;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_2;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_5;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_2;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_5;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_2;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_5;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_2;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_5;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_2;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_5;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_2;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_5;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_2;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_5;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_2;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_5;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_5;
    CData/*2:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_1;
    CData/*2:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_4;
    CData/*3:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_32;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_261;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_1;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_3;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_2;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_8;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_14;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_12;
    CData/*1:0*/ ysyxSoCFull__DOT__fpga__DOT__err__DOT___readys_T;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_2;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_5;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_2;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_5;
    CData/*7:0*/ __Vtableidx4;
    CData/*7:0*/ __Vtableidx6;
    SData/*15:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_5;
    SData/*15:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_5;
    IData/*31:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_5;
    IData/*31:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_8;
    IData/*31:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11;
    IData/*31:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_5;
    IData/*31:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_8;
    IData/*31:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11;
    VlWide<3>/*95:0*/ __Vtemp2576;
    VlWide<3>/*95:0*/ __Vtemp2577;
    VlWide<3>/*95:0*/ __Vtemp2578;
    VlWide<3>/*95:0*/ __Vtemp2582;
    VlWide<3>/*95:0*/ __Vtemp2583;
    VlWide<3>/*95:0*/ __Vtemp2584;
    VlWide<4>/*127:0*/ __Vtemp2624;
    VlWide<3>/*95:0*/ __Vtemp2630;
    VlWide<3>/*95:0*/ __Vtemp2634;
    VlWide<3>/*95:0*/ __Vtemp2638;
    VlWide<3>/*95:0*/ __Vtemp2642;
    VlWide<3>/*95:0*/ __Vtemp2646;
    VlWide<3>/*95:0*/ __Vtemp2650;
    VlWide<3>/*95:0*/ __Vtemp2654;
    VlWide<3>/*95:0*/ __Vtemp2662;
    VlWide<3>/*95:0*/ __Vtemp2666;
    VlWide<3>/*95:0*/ __Vtemp2670;
    VlWide<3>/*95:0*/ __Vtemp2674;
    VlWide<3>/*95:0*/ __Vtemp2678;
    VlWide<3>/*95:0*/ __Vtemp2682;
    VlWide<3>/*95:0*/ __Vtemp2686;
    VlWide<16>/*511:0*/ __Vtemp2688;
    VlWide<16>/*511:0*/ __Vtemp2691;
    VlWide<16>/*511:0*/ __Vtemp2692;
    VlWide<16>/*511:0*/ __Vtemp2695;
    VlWide<16>/*511:0*/ __Vtemp2696;
    VlWide<16>/*511:0*/ __Vtemp2699;
    VlWide<16>/*511:0*/ __Vtemp2700;
    VlWide<16>/*511:0*/ __Vtemp2703;
    VlWide<16>/*511:0*/ __Vtemp2704;
    // Body
    vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__reset = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter1_2 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter_2) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter1_3 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter_3) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter_3));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___T_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___T_2 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__full 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                 >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___state_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_last_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_last_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_last_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___T_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___T_2 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___GEN_2 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state))
            ? 8U : (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state) 
                            - (IData)(1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__extract__DOT___GEN_2 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__extract__DOT__state))
            ? 8U : (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__extract__DOT__state) 
                            - (IData)(1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_last_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___q_last_count_T_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_last_count) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___q_last_count_T_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last_count) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rcount_0_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_count_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rcount_1_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_count_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wcount_0_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_count_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wcount_1_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_count_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_last_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_last_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_last_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___bcount_0_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__b_count_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___bcount_1_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__b_count_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a_last_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a_last_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a_last_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_last_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_last_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_last_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__d_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__d_first_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_repeat_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_repeat_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_repeat_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_repeat_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sigin_inst 
        = ((((0x86U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)) 
             | (0x51U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) 
            | (0xc1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) 
           | (0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counterscl 
        = (0x3fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__docker_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter1 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter1_2 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter_2) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter1_3 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter_3) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter_3));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall_counter1 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1_1 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_1) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___T_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__state));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___T_2 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__state));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__full 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                 >> 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___state_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_last_counter1 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_last_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_last_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___T_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___T_2 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___GEN_2 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state))
            ? 8U : (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state) 
                            - (IData)(1U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__extract__DOT___GEN_2 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__extract__DOT__state))
            ? 8U : (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__extract__DOT__state) 
                            - (IData)(1U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_last_count));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___q_last_count_T_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_last_count) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_last_count));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___q_last_count_T_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_last_count) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__wrap_1 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___bdelay_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__b_delay)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rcount_0_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_count_0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rcount_1_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_count_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wcount_0_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_count_0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wcount_1_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_count_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___bcount_0_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__b_count_0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___bcount_1_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__b_count_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__deq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_last_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_last_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_last_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_last_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_last_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_last_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__d_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__d_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__d_first_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_repeat_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_repeat_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_repeat_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_repeat_counter));
    if ((0x86U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_divdata 
            = ((0x1aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1
                : ((0x25U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                    ? (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1))
                    : ((0x51U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                        ? ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
                                          >> 0x20U)))
                            ? (0xffffffff00000000ULL 
                               | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1)))
                            : (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1)))
                        : ((0xc1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1
                            : ((0x85U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1
                                : ((0x43U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                    ? (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1))
                                    : ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                        ? ((1U & (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
                                                          >> 0x20U)))
                                            ? (0xffffffff00000000ULL 
                                               | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1)))
                                            : (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1)))
                                        : 0ULL)))))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op2_divdata 
            = ((0x1aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2
                : ((0x25U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                    ? (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2))
                    : ((0x51U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                        ? ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2 
                                          >> 0x20U)))
                            ? (0xffffffff00000000ULL 
                               | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2)))
                            : (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2)))
                        : ((0xc1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2
                            : ((0x85U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2
                                : ((0x43U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                    ? (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2))
                                    : ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                        ? ((1U & (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2 
                                                          >> 0x20U)))
                                            ? (0xffffffff00000000ULL 
                                               | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2)))
                                            : (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2)))
                                        : 0ULL)))))));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_data_io_deq_bits_MPORT_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_data
        [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp_io_deq_bits_MPORT_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp
        [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level 
        = ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr))
            ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr))
                ? 0xeU : 8U) : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr))
                                 ? 4U : 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_lo_hi_lo 
        = ((0x80U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                      >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                          >> 0x17U)) 
                                 << 1U)) | (1U & (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                          >> 0x17U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 0x16U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x16U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 0x15U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x15U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x14U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x14U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x13U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x13U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x12U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x12U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                               >> 0x11U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                 >> 0x10U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                  >> 0x10U)))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_hi_hi_lo 
        = ((0x80U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                      >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                          >> 0x37U)) 
                                 << 1U)) | (1U & (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                          >> 0x37U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 0x36U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x36U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 0x35U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x35U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x34U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x34U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x33U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x33U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x32U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x32U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 0x31U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                               >> 0x31U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                 >> 0x30U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                  >> 0x30U)))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
            << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                       << 6U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                  << 5U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                             << 4U) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                << 3U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__value_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__logic_out_lo_hi_lo 
        = ((0x80U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                      >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                          >> 0x17U)) 
                                 << 1U)) | (1U & (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                          >> 0x17U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 0x16U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x16U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 0x15U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x15U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x14U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x14U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x13U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x13U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x12U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x12U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                               >> 0x11U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                 >> 0x10U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                  >> 0x10U)))))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__logic_out_hi_hi_lo 
        = ((0x80U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                      >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                          >> 0x37U)) 
                                 << 1U)) | (1U & (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                          >> 0x37U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 0x36U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x36U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 0x35U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x35U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x34U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x34U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x33U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x33U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x32U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x32U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 0x31U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                               >> 0x31U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                 >> 0x30U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                  >> 0x30U)))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_lo_lo_lo 
        = ((0x80U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                      >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                          >> 7U)) << 1U)) 
                          | (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                           >> 7U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 6U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 6U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 5U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 5U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 4U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 4U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 3U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 3U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 2U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 2U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                               >> 1U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_hi_lo_lo 
        = ((0x80U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                      >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                          >> 0x27U)) 
                                 << 1U)) | (1U & (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                          >> 0x27U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 0x26U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x26U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 0x25U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x25U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x24U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x24U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x23U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x23U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x22U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x22U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 0x21U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                               >> 0x21U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                 >> 0x20U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                  >> 0x20U)))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__upper_imm 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2 
                                                      >> 0x13U))))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2) 
                                         << 0xcU))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__shift_res 
        = (((0x3fU >= (0x7fU & ((IData)(0x40U) - (0x3fU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2)))))
             ? ((- (QData)((IData)((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
                                                  >> 0x3fU)))))) 
                << (0x7fU & ((IData)(0x40U) - (0x3fU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2)))))
             : 0ULL) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
                        >> (0x3fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_subw_op2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1) 
           - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__mul_data 
        = ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_signbit)
                ? (1ULL + (~ (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[0U])))))
                : (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[0U]))))
            : ((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_signbit)
                    ? ((QData)((IData)(((IData)(1U) 
                                        + (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[1U])))) 
                       << 0x20U) : ((QData)((IData)(
                                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[1U])) 
                                    << 0x20U)) : ((0x70U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_signbit)
                                                    ? 
                                                   ((QData)((IData)(
                                                                    ((IData)(1U) 
                                                                     + 
                                                                     (~ 
                                                                      vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[1U])))) 
                                                    << 0x20U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[1U])) 
                                                    << 0x20U))
                                                   : 
                                                  ((0xe0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_signbit)
                                                     ? 
                                                    ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[0U] 
                                                      >> 0x1fU)
                                                      ? (QData)((IData)(
                                                                        ((IData)(1U) 
                                                                         + 
                                                                         (~ 
                                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[0U]))))
                                                      : 
                                                     (0xffffffff00000000ULL 
                                                      | (QData)((IData)(
                                                                        ((IData)(1U) 
                                                                         + 
                                                                         (~ 
                                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[0U]))))))
                                                     : 
                                                    ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[0U] 
                                                      >> 0x1fU)
                                                      ? 
                                                     (0xffffffff00000000ULL 
                                                      | (QData)((IData)(
                                                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[0U])))
                                                      : (QData)((IData)(
                                                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__product_temp[0U]))))
                                                    : 0ULL))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__logic_out_lo_lo_lo 
        = ((0x80U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                      >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                          >> 7U)) << 1U)) 
                          | (1U & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                           >> 7U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 6U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 6U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 5U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 5U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 4U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 4U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 3U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 3U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 2U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 2U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                               >> 1U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data))))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__logic_out_hi_lo_lo 
        = ((0x80U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                      >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                          >> 0x27U)) 
                                 << 1U)) | (1U & (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                          >> 0x27U))))) 
                     << 7U)) | ((0x40U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                           >> ((2U 
                                                & ((IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 0x26U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x26U))))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 0x25U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x25U))))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x24U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x24U))))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x23U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x23U))))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x22U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x22U))))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 0x21U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                               >> 0x21U))))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                 >> 0x20U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                  >> 0x20U)))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_2 
        = (IData)((0U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_3 
        = (IData)((2U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_4 
        = (IData)((4U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_5 
        = (IData)((6U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_2 
        = (IData)((0U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_3 
        = (IData)((2U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_4 
        = (IData)((4U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_5 
        = (IData)((6U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__value_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__wide_mask 
        = (((QData)((IData)(((((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_mask))
                                ? 0xffU : 0U) << 0x18U) 
                             | ((((0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_mask))
                                   ? 0xffU : 0U) << 0x10U) 
                                | ((((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_mask))
                                      ? 0xffU : 0U) 
                                    << 8U) | ((0x10U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_mask))
                                               ? 0xffU
                                               : 0U)))))) 
            << 0x20U) | (QData)((IData)(((((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_mask))
                                            ? 0xffU
                                            : 0U) << 0x18U) 
                                         | ((((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_mask))
                                               ? 0xffU
                                               : 0U) 
                                             << 0x10U) 
                                            | ((((2U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_mask))
                                                  ? 0xffU
                                                  : 0U) 
                                                << 8U) 
                                               | ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_mask))
                                                   ? 0xffU
                                                   : 0U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_size))) 
                           >> 2U) & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address 
                                        >> 2U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_1 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_size))) 
                           >> 2U) & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address 
                                     >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1) 
           << (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1) 
           >> (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2 
        = (((0x1fU >= (0x3fU & ((IData)(0x20U) - (0x1fU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2)))))
             ? ((- (IData)((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
                                          >> 0x1fU))))) 
                << (0x3fU & ((IData)(0x20U) - (0x1fU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2)))))
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1) 
                      >> (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2))));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag_auto_in_rlast 
        = (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last
           [vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1] 
           & vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_echo_real_last
           [vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_size))) 
                           >> 2U) & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address 
                                        >> 2U))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_1 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_size))) 
                           >> 2U) & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address 
                                     >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus 
        = ((((QData)((IData)(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs)) 
                              << 0x1fU))) << 0x20U) 
            | ((QData)((IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs) 
                                 << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp)))) 
               << 0xbU)) | (QData)((IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie) 
                                             << 7U) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie) 
                                               << 3U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__full 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__value)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__full 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__value)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__wide_mask 
        = (((QData)((IData)(((((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_mask))
                                ? 0xffU : 0U) << 0x18U) 
                             | ((((0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_mask))
                                   ? 0xffU : 0U) << 0x10U) 
                                | ((((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_mask))
                                      ? 0xffU : 0U) 
                                    << 8U) | ((0x10U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_mask))
                                               ? 0xffU
                                               : 0U)))))) 
            << 0x20U) | (QData)((IData)(((((8U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_mask))
                                            ? 0xffU
                                            : 0U) << 0x18U) 
                                         | ((((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_mask))
                                               ? 0xffU
                                               : 0U) 
                                             << 0x10U) 
                                            | ((((2U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_mask))
                                                  ? 0xffU
                                                  : 0U) 
                                                << 8U) 
                                               | ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_mask))
                                                   ? 0xffU
                                                   : 0U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
           + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr_idx 
        = ((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_type))
            ? (0xfffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2 
        = (1ULL + (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
                   + (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__dc_bits_param 
        = ((2U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_param
                   [0U])) ? 2U : ((1U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_param
                                          [0U])) ? 2U
                                   : 1U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_bits_param 
        = ((2U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_param
                   [0U])) ? 2U : ((1U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_param
                                          [0U])) ? 2U
                                   : 1U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp
        [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__dr_ready 
        = ((((((((0x86U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                 | (0x1aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) 
                | (0x25U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) 
               | (0x51U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) 
              | (0xc1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) 
             | (0x85U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) 
            | (0x43U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) 
           | (0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp
        [vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1];
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp_io_deq_bits_MPORT_data 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp
        [vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signSel_T_2 
        = (0xffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_mask)) 
                    | (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_mask) 
                                >> 1U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signSel_T_2 
        = (0xffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_mask)) 
                    | (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_mask) 
                                >> 1U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last
        [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id
        [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id
        [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1];
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id
        [vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1];
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id
        [vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_last_counter)) 
           | (0U == ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_opcode
                      [0U]) ? (0xfU & (~ (0x7ffU & 
                                          (((IData)(0x3fU) 
                                            << vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_size
                                            [0U]) >> 2U))))
                      : 0U)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_echo_real_last
        [vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1];
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass_io_bypass 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass_io_bypass 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_last_counter)) 
           | (0U == ((1U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_opcode
                      [0U]) ? (0xfU & (~ (0x7ffU & 
                                          (((IData)(0x3fU) 
                                            << vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_size
                                            [0U]) >> 2U))))
                      : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_valid 
        = (((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state))) 
           | (((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
               & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state))) 
              | ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
                 & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_valid 
        = (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state))) 
           | ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_id 
        = (((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state)))
            ? 1U : (((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
                     & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state)))
                     ? 2U : (((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
                              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state)))
                              ? 4U : 0U)));
    if (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
         & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_valid 
            = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__aw_enable)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_id = 1U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_valid 
            = (1U & (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state))) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__aw_enable))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_id 
            = (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
                & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axi_state)))
                ? 2U : 0U);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__watchdog);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter1_1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__watchdog_1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter1_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_3) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_3));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__watchdog);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__watchdog_1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter1_3 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_3) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_3 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_3));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__watchdog);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__watchdog_1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter1_3 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_3) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_3));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__watchdog);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter1_1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__watchdog_1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter1_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_3) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_3));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__watchdog);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter1_1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__watchdog_1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter1_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_3) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_3));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__watchdog);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter1_1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__watchdog_1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter1_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_3) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_3));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__watchdog);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__watchdog_1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter1_3 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_3) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_3));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__watchdog);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter1_1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__watchdog_1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter1_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_3) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_3));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter1_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__watchdog);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter1_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter1_2 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__watchdog_1);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter1_3 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_3) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_3));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1_2 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_2) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter1_1 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter1_1 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__watchdog);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter1_1 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter1_2 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__watchdog_1);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter1_3 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_3) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_3 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_3));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter1_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__watchdog);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter1_2 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_2) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__watchdog_1);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__watchdog);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter1_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__watchdog_1);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter1_3 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_3) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_3));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter1_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__watchdog);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter1_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter1_2 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__watchdog_1);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter1_3 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_3) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_3));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter1_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__watchdog);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter1_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter1_2 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__watchdog_1);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter1_3 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_3) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_3));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter1_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__watchdog);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter1_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter1_2 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__watchdog_1);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter1_3 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_3) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_3));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter1_1 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter1_1 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__watchdog);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter1_1 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter1_2 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__watchdog_1);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter1_3 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_3) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_3));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__watchdog);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter1_1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__watchdog_1);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter1_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_3) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_3));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_echo_extra_id 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__ram_echo_extra_id
           [0U] : 0U);
    vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_R0_data 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram
        [vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__reg_R0_addr];
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_fence) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__oteg_addr_i 
            = (0x3fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__fence_counter));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__tteg_addr_i 
            = (0x3fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__fence_counter));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__oteg_addr_i 
            = (0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                >> 3U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__tteg_addr_i 
            = (0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                >> 3U)));
    }
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___in_awready_T 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_latched));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__mul_ready 
        = (((((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)) 
              | (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) 
             | (0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) 
            | (0x70U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) 
           | (0xe0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)));
    if ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint_auto_in_rresp 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15.__PVT__ram_resp
            [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15.__PVT__deq_ptr_value];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint_auto_in_recho_tl_state_size 
            = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15.__PVT__ram_echo_tl_state_size
            [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15.__PVT__deq_ptr_value];
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint_auto_in_rresp 
            = ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14.__PVT__ram_resp
               [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14.__PVT__deq_ptr_value]
                : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                    ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13.__PVT__ram_resp
                   [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13.__PVT__deq_ptr_value]
                    : ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                        ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12.__PVT__ram_resp
                       [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12.__PVT__deq_ptr_value]
                        : ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                            ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11.__PVT__ram_resp
                           [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11.__PVT__deq_ptr_value]
                            : ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10.__PVT__ram_resp
                               [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10.__PVT__deq_ptr_value]
                                : ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                    ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9.__PVT__ram_resp
                                   [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9.__PVT__deq_ptr_value]
                                    : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                        ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8.__PVT__ram_resp
                                       [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8.__PVT__deq_ptr_value]
                                        : ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                            ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7.__PVT__ram_resp
                                           [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7.__PVT__deq_ptr_value]
                                            : ((6U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6.__PVT__ram_resp
                                               [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6.__PVT__deq_ptr_value]
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                    ? 
                                                   vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5.__PVT__ram_resp
                                                   [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5.__PVT__deq_ptr_value]
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                     ? 
                                                    vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4.__PVT__ram_resp
                                                    [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4.__PVT__deq_ptr_value]
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                      ? 
                                                     vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3.__PVT__ram_resp
                                                     [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3.__PVT__deq_ptr_value]
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                       ? 
                                                      vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2.__PVT__ram_resp
                                                      [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2.__PVT__deq_ptr_value]
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                        ? 
                                                       vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1.__PVT__ram_resp
                                                       [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1.__PVT__deq_ptr_value]
                                                        : 
                                                       vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0.__PVT__ram_resp
                                                       [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0.__PVT__deq_ptr_value]))))))))))))));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint_auto_in_recho_tl_state_size 
            = ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14.__PVT__ram_echo_tl_state_size
               [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14.__PVT__deq_ptr_value]
                : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                    ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13.__PVT__ram_echo_tl_state_size
                   [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13.__PVT__deq_ptr_value]
                    : ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                        ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12.__PVT__ram_echo_tl_state_size
                       [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12.__PVT__deq_ptr_value]
                        : ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                            ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11.__PVT__ram_echo_tl_state_size
                           [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11.__PVT__deq_ptr_value]
                            : ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10.__PVT__ram_echo_tl_state_size
                               [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10.__PVT__deq_ptr_value]
                                : ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                    ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9.__PVT__ram_echo_tl_state_size
                                   [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9.__PVT__deq_ptr_value]
                                    : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                        ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8.__PVT__ram_echo_tl_state_size
                                       [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8.__PVT__deq_ptr_value]
                                        : ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                            ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7.__PVT__ram_echo_tl_state_size
                                           [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7.__PVT__deq_ptr_value]
                                            : ((6U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6.__PVT__ram_echo_tl_state_size
                                               [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6.__PVT__deq_ptr_value]
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                    ? 
                                                   vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5.__PVT__ram_echo_tl_state_size
                                                   [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5.__PVT__deq_ptr_value]
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                     ? 
                                                    vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4.__PVT__ram_echo_tl_state_size
                                                    [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4.__PVT__deq_ptr_value]
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                      ? 
                                                     vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3.__PVT__ram_echo_tl_state_size
                                                     [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3.__PVT__deq_ptr_value]
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                       ? 
                                                      vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2.__PVT__ram_echo_tl_state_size
                                                      [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2.__PVT__deq_ptr_value]
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                        ? 
                                                       vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1.__PVT__ram_echo_tl_state_size
                                                       [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1.__PVT__deq_ptr_value]
                                                        : 
                                                       vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0.__PVT__ram_echo_tl_state_size
                                                       [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0.__PVT__deq_ptr_value]))))))))))))));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___GEN_16 
        = ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
            ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14.__PVT__ram_last
           [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14.__PVT__deq_ptr_value]
            : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13.__PVT__ram_last
               [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13.__PVT__deq_ptr_value]
                : ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                    ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12.__PVT__ram_last
                   [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12.__PVT__deq_ptr_value]
                    : ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                        ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11.__PVT__ram_last
                       [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11.__PVT__deq_ptr_value]
                        : ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                            ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10.__PVT__ram_last
                           [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10.__PVT__deq_ptr_value]
                            : ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9.__PVT__ram_last
                               [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9.__PVT__deq_ptr_value]
                                : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                    ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8.__PVT__ram_last
                                   [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8.__PVT__deq_ptr_value]
                                    : ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                        ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7.__PVT__ram_last
                                       [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7.__PVT__deq_ptr_value]
                                        : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                            ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6.__PVT__ram_last
                                           [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6.__PVT__deq_ptr_value]
                                            : ((5U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5.__PVT__ram_last
                                               [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5.__PVT__deq_ptr_value]
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                    ? 
                                                   vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4.__PVT__ram_last
                                                   [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4.__PVT__deq_ptr_value]
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                     ? 
                                                    vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3.__PVT__ram_last
                                                    [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3.__PVT__deq_ptr_value]
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                      ? 
                                                     vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2.__PVT__ram_last
                                                     [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2.__PVT__deq_ptr_value]
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                       ? 
                                                      vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1.__PVT__ram_last
                                                      [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1.__PVT__deq_ptr_value]
                                                       : 
                                                      vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0.__PVT__ram_last
                                                      [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0.__PVT__deq_ptr_value]))))))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint_auto_in_recho_tl_state_source 
        = ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
            ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15.__PVT__ram_echo_tl_state_source
           [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15.__PVT__deq_ptr_value]
            : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14.__PVT__ram_echo_tl_state_source
               [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14.__PVT__deq_ptr_value]
                : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                    ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13.__PVT__ram_echo_tl_state_source
                   [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13.__PVT__deq_ptr_value]
                    : ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                        ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12.__PVT__ram_echo_tl_state_source
                       [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12.__PVT__deq_ptr_value]
                        : ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                            ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11.__PVT__ram_echo_tl_state_source
                           [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11.__PVT__deq_ptr_value]
                            : ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10.__PVT__ram_echo_tl_state_source
                               [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10.__PVT__deq_ptr_value]
                                : ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                    ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9.__PVT__ram_echo_tl_state_source
                                   [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9.__PVT__deq_ptr_value]
                                    : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                        ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8.__PVT__ram_echo_tl_state_source
                                       [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8.__PVT__deq_ptr_value]
                                        : ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                            ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7.__PVT__ram_echo_tl_state_source
                                           [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7.__PVT__deq_ptr_value]
                                            : ((6U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6.__PVT__ram_echo_tl_state_source
                                               [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6.__PVT__deq_ptr_value]
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                    ? 
                                                   vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5.__PVT__ram_echo_tl_state_source
                                                   [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5.__PVT__deq_ptr_value]
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                     ? 
                                                    vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4.__PVT__ram_echo_tl_state_source
                                                    [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4.__PVT__deq_ptr_value]
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                      ? 
                                                     vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3.__PVT__ram_echo_tl_state_source
                                                     [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3.__PVT__deq_ptr_value]
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                       ? 
                                                      vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2.__PVT__ram_echo_tl_state_source
                                                      [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2.__PVT__deq_ptr_value]
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                        ? 
                                                       vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1.__PVT__ram_echo_tl_state_source
                                                       [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1.__PVT__deq_ptr_value]
                                                        : 
                                                       vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0.__PVT__ram_echo_tl_state_source
                                                       [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0.__PVT__deq_ptr_value])))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_bits_opcode 
        = ((7U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode
            [0U]) ? 4U : ((6U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode
                           [0U]) ? 4U : ((5U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode
                                          [0U]) ? 2U
                                          : ((4U == 
                                              vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode
                                              [0U])
                                              ? 1U : 
                                             ((3U == 
                                               vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode
                                               [0U])
                                               ? 1U
                                               : ((2U 
                                                   == 
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode
                                                   [0U])
                                                   ? 1U
                                                   : 0U))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_bits_opcode 
        = ((7U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode
            [0U]) ? 4U : ((6U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode
                           [0U]) ? 4U : ((5U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode
                                          [0U]) ? 2U
                                          : ((4U == 
                                              vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode
                                              [0U])
                                              ? 1U : 
                                             ((3U == 
                                               vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode
                                               [0U])
                                               ? 1U
                                               : ((2U 
                                                   == 
                                                   vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode
                                                   [0U])
                                                   ? 1U
                                                   : 0U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_io_bypass 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_io_bypass 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__maybe_full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_burst 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__ram_burst
            [0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__ram_size
            [0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_id 
            = (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__ram_id
               [0U] & 1U);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_addr 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__ram_addr
            [0U];
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_burst = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_size = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_id = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_addr = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___in_awready_T 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__wbeats_latched));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_len 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__ram_len
           [0U] : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___in_awready_T 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_latched));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1_3 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_3) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_3));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___T_1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__empty 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__empty 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___q_last_count_T_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_count) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__q_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__q_last_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT___q_last_count_T_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__q_last_count) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT___T_4 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT___T_5 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__empty 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__empty 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__empty 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__empty 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__empty 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___T 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___T_1 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___T_2 
        = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1_3 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_3) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_3));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___T_1 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__empty 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__empty 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_last_count));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___q_last_count_T_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_last_count) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__q_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__q_last_count));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT___q_last_count_T_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__q_last_count) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT___T_4 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__state));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT___T_5 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__state));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__wrap 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__enq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__wrap 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__enq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__wrap 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__enq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__wrap 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__enq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__wrap 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__enq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__wrap 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__enq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__wrap 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__enq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__wrap 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__enq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__wrap 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__enq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__wrap 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__enq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__wrap 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__enq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__wrap 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__enq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__wrap 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__enq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__wrap 
        = (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__enq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__empty 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__empty 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_last_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_last_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__d_last_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__empty 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__empty 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_echo_extra_id 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__ram_echo_extra_id
           [0U] : 0U);
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_addr_io_deq_bits_MPORT_data 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_addr
        [vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__value_1];
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ram_addr_io_deq_bits_MPORT_data 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ram_addr
        [vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__value_1];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_fence_i 
        = (IData)((0x100fU == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__value_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__extract_io_i_bits_opcode 
        = (7U & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__state))
                  ? (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 3U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__r_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__extract_io_i_bits_opcode 
        = (7U & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__state))
                  ? (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 3U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__r_1)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__value_1));
    VL_EXTEND_WI(95,32, __Vtemp2576, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__shift);
    VL_EXTEND_WI(95,32, __Vtemp2577, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg);
    VL_SHIFTL_WWI(95,95,6, __Vtemp2578, __Vtemp2577, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
        = (__Vtemp2576[0U] | __Vtemp2578[0U]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[1U] 
        = (__Vtemp2576[1U] | __Vtemp2578[1U]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[2U] 
        = (0x7fffffffU & (__Vtemp2576[2U] | __Vtemp2578[2U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__q_last_beats_a 
        = (0x1fU & ((IData)(2U) + (((0x20U & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)
                                     ? 0U : ((0x1eU 
                                              & (((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 9U))) 
                                                 >> 2U)) 
                                             | (2U 
                                                >= 
                                                (0xfU 
                                                 & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 9U))))) 
                                   + ((1U == (7U & 
                                              (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                               >> 3U)))
                                       ? ((2U & (((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 9U))) 
                                                 >> 5U)) 
                                          | (5U >= 
                                             (0xfU 
                                              & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                 >> 9U))))
                                       : 0U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__q_last_beats_a 
        = (0x1fU & ((IData)(2U) + (((0x20U & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)
                                     ? 0U : ((0x1eU 
                                              & (((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 9U))) 
                                                 >> 2U)) 
                                             | (2U 
                                                >= 
                                                (0xfU 
                                                 & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 9U))))) 
                                   + ((1U == (7U & 
                                              (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                               >> 3U)))
                                       ? ((2U & (((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 9U))) 
                                                 >> 5U)) 
                                          | (5U >= 
                                             (0xfU 
                                              & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                 >> 9U))))
                                       : 0U))));
    VL_EXTEND_WI(95,32, __Vtemp2582, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__shift);
    VL_EXTEND_WI(95,32, __Vtemp2583, vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg);
    VL_SHIFTL_WWI(95,95,6, __Vtemp2584, __Vtemp2583, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
        = (__Vtemp2582[0U] | __Vtemp2584[0U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[1U] 
        = (__Vtemp2582[1U] | __Vtemp2584[1U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[2U] 
        = (0x7fffffffU & (__Vtemp2582[2U] | __Vtemp2584[2U]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__mul_finish_sign 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__mult_valid) 
           & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multipler))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
           & (0ULL != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_pc));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_d_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___q_last_beats_c_T_1 
        = ((8U & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)
            ? ((0x1eU & (((IData)(1U) << (7U & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                >> 9U))) 
                         >> 2U)) | (2U >= (0xfU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                   >> 9U))))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___q_last_beats_c_T_1 
        = ((8U & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)
            ? ((0x1eU & (((IData)(1U) << (7U & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                >> 9U))) 
                         >> 2U)) | (2U >= (0xfU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                   >> 9U))))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free) 
           | (0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free) 
                       << 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free) 
           | (0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free) 
                       << 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__divertprobes));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__divertprobes));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_2 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free 
           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free 
              << 1U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_2 
        = (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free 
           | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free 
              << 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxStateEarly_0 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__beatsLeft)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__state_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_pwrite 
        = (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
            | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))) 
           | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_d_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_penable 
        = (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
            | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bundleOut_0_penable_REG));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_psel 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
           | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__beatsLeft))
            ? (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state))
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__state_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__beatsLeft))
            ? (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state))
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__state_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a_last_counter)) 
           | (0U == ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode
                      [0U]) ? 0U : (0xfU & (~ (0x7ffU 
                                               & (((IData)(0x3fU) 
                                                   << 
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_size
                                                   [0U]) 
                                                  >> 2U)))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__locked) 
            & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__b_delay))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_holds_d));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_last_beats_d 
        = (0x1fU & (((8U & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)
                      ? ((0x1eU & (((IData)(1U) << 
                                    (7U & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                           >> 9U))) 
                                   >> 2U)) | (2U >= 
                                              (0xfU 
                                               & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                  >> 9U))))
                      : 0U) + ((4U == (7U & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                             >> 3U))) 
                               | (5U == (7U & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                               >> 3U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last_beats_d 
        = (0x1fU & (((8U & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)
                      ? ((0x1eU & (((IData)(1U) << 
                                    (7U & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                           >> 9U))) 
                                   >> 2U)) | (2U >= 
                                              (0xfU 
                                               & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                  >> 9U))))
                      : 0U) + ((4U == (7U & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                             >> 3U))) 
                               | (5U == (7U & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                               >> 3U))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_last_counter)) 
           | (0U == ((4U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode
                      [0U]) ? 0U : (0xfU & (~ (0x7ffU 
                                               & (((IData)(0x3fU) 
                                                   << 
                                                   vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size
                                                   [0U]) 
                                                  >> 2U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_beats_a 
        = (0x1fU & ((IData)(2U) + (((0x20U & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)
                                     ? 0U : ((0x1eU 
                                              & (((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 9U))) 
                                                 >> 2U)) 
                                             | (2U 
                                                >= 
                                                (0xfU 
                                                 & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 9U))))) 
                                   + ((1U == (7U & 
                                              (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                               >> 3U)))
                                       ? ((2U & (((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 9U))) 
                                                 >> 5U)) 
                                          | (5U >= 
                                             (0xfU 
                                              & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                 >> 9U))))
                                       : 0U))));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free) 
           | (0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free) 
                       << 1U)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free) 
           | (0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free) 
                       << 1U)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free) 
           | (0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free) 
                       << 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_last_beats_a 
        = (0x1fU & ((IData)(2U) + (((0x20U & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)
                                     ? 0U : ((0x1eU 
                                              & (((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 9U))) 
                                                 >> 2U)) 
                                             | (2U 
                                                >= 
                                                (0xfU 
                                                 & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 9U))))) 
                                   + ((1U == (7U & 
                                              (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                               >> 3U)))
                                       ? ((2U & (((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 9U))) 
                                                 >> 5U)) 
                                          | (5U >= 
                                             (0xfU 
                                              & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                 >> 9U))))
                                       : 0U))));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free) 
           | (0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free) 
                       << 1U)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free) 
           | (0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free) 
                       << 1U)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free) 
           | (0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free) 
                       << 1U)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free) 
           | (0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free) 
                       << 1U)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free) 
           | (0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free) 
                       << 1U)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free) 
           | (0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free) 
                       << 1U)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free) 
           | (0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free) 
                       << 1U)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free) 
           | (0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free) 
                       << 1U)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free) 
           | (0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free) 
                       << 1U)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free) 
           | (0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free) 
                       << 1U)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free) 
           | (0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free) 
                       << 1U)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free) 
           | (0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free) 
                       << 1U)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free) 
           | (0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free) 
                       << 1U)));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__maybe_full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_burst 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__ram_burst
            [0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__ram_size
            [0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__wbeats_valid 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__wbeats_latched)) 
               & 1U);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__ram_addr
            [0U];
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_burst = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_size = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__wbeats_valid = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_id 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__maybe_full) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__ram_id
           [0U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_len 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__ram_len
           [0U] : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter1 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter1 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter1 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter1 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter1 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter1 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0) 
           | (IData)(vlSelf->reset));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___T_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___T_3 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___T_3 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___T_4 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___T_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___T_3 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___T_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__state));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___T_3 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__state));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___T_3 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__state));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___T_4 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__state));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___T_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__state));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___T_3 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__state));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__empty 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__empty 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7 
        = ((0U != (((((((((((((((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0U] | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [1U]) | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                [2U]) | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]) | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]) | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [5U]) | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                            [6U]) | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                           [7U]) | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                          [8U]) | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                         [9U]) | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                        [0xaU]) | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                       [0xbU]) | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                      [0xcU]) | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                     [0xdU]) | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                    [0xeU]) | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                   [0xfU])) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_address 
        = (((QData)((IData)(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state))
                              ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg
                              : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_address1_r))) 
            << 0x20U) | (QData)((IData)(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state))
                                          ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg
                                          : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_address0_r))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_address 
        = (((QData)((IData)(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__state))
                              ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg
                              : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_address1_r))) 
            << 0x20U) | (QData)((IData)(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__state))
                                          ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg
                                          : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_address0_r))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_param 
        = (7U & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state))
                  ? (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 6U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__r_2)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_param 
        = (7U & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__state))
                  ? (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 6U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__r_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param 
        = (7U & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state))
                  ? (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 6U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__r_2)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param 
        = (7U & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__state))
                  ? (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 6U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__r_2)));
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_alloc_bits 
            = (0xffffU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 0x10U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_alloc_bits 
            = (0xffffU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 0x10U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_alloc_bits 
            = (0xffffU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 0x10U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_alloc_bits 
            = (0xffffU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 0x10U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_alloc_bits 
            = (0xffffU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 0x10U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_alloc_bits 
            = (0xffffU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 0x10U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_alloc_bits 
            = (0xffffU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 0x10U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_alloc_bits 
            = (0xffffU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 0x10U));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_alloc_bits 
            = (0xffffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__r_5));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_alloc_bits 
            = (0xffffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__r_5));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_alloc_bits 
            = (0xffffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__r_5));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_alloc_bits 
            = (0xffffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__r_5));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_alloc_bits 
            = (0xffffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__r_5));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_alloc_bits 
            = (0xffffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__r_5));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_alloc_bits 
            = (0xffffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__r_5));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_alloc_bits 
            = (0xffffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__r_5));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam_io_alloc_bits 
        = (0xffffU & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state))
                       ? (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 0x10U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__r_5)));
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__state))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_alloc_bits 
            = (0xffffU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 0x10U));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_alloc_bits 
            = (0xffffU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 0x10U));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_alloc_bits 
            = (0xffffU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 0x10U));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_alloc_bits 
            = (0xffffU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 0x10U));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_alloc_bits 
            = (0xffffU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 0x10U));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_alloc_bits 
            = (0xffffU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 0x10U));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_alloc_bits 
            = (0xffffU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 0x10U));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_alloc_bits 
            = (0xffffU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 0x10U));
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_alloc_bits 
            = (0xffffU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__r_5));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_alloc_bits 
            = (0xffffU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__r_5));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_alloc_bits 
            = (0xffffU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__r_5));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_alloc_bits 
            = (0xffffU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__r_5));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_alloc_bits 
            = (0xffffU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__r_5));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_alloc_bits 
            = (0xffffU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__r_5));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_alloc_bits 
            = (0xffffU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__r_5));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_alloc_bits 
            = (0xffffU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__r_5));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam_io_alloc_bits 
        = (0xffffU & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__state))
                       ? (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 0x10U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__r_5)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2 
        = (7U & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__state))
                  ? (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 6U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__r_2)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_3 
        = (0xfU & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__state))
                    ? (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                       >> 9U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__r_3)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2 
        = (7U & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state))
                  ? (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 6U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__r_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3 
        = (0xfU & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state))
                    ? (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                       >> 9U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__r_3)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_size 
        = (0xfU & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__state))
                    ? (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                       >> 9U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__r_3)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode 
        = (7U & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state))
                  ? (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 3U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__r_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_opcode 
        = (7U & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__state))
                  ? (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 3U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__r_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_1 
        = (7U & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state))
                  ? (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 3U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__r_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___GEN_1 
        = (7U & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__state))
                  ? (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 3U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__r_1)));
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__state))) {
        ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_5 
            = (0xffffU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 0x10U));
        ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_4 
            = (7U & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 0xdU));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_3 
            = (0xfU & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                       >> 9U));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode 
            = (7U & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 3U));
    } else {
        ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_5 
            = (0xffffU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__r_5));
        ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_4 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__r_4));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_3 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__r_3));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__r_1));
    }
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state))) {
        ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_5 
            = (0xffffU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 0x10U));
        ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_4 
            = (7U & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 0xdU));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3 
            = (0xfU & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                       >> 9U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode 
            = (7U & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 3U));
    } else {
        ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_5 
            = (0xffffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__r_5));
        ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_4 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__r_4));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__r_3));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__r_1));
    }
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_1 
        = (7U & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__state))
                  ? (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 3U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__r_1)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_1 
        = (7U & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state))
                  ? (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 3U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__r_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3 
        = (0xfU & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state))
                    ? (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                       >> 9U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__r_3)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size 
        = (0xfU & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__state))
                    ? (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                       >> 9U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__r_3)));
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode 
            = (7U & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 3U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_1 
            = (7U & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 3U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_4 
            = (7U & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 0xdU));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__r_1));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_1 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__r_1));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_4 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__r_4));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode 
        = (7U & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__state))
                  ? (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 3U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__r_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state))
            ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address0_r);
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__state))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_1 
            = (7U & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 3U));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_4 
            = (7U & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 0xdU));
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_1 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__r_1));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_4 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__r_4));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__state))
            ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg
            : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_address0_r);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__maybe_full)) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__maybe_full)) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT__full))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_enq_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__maybe_full)) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_enq_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__maybe_full)) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__full))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr 
        = ((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
             | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))) 
            | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in 
        = ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))
            ? ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                   >> 6U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp))
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    __Vtableidx4 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value 
        = VysyxSoCFull__ConstPool__TABLE_35ef908b_0
        [__Vtableidx4];
    __Vtableidx6 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value 
        = VysyxSoCFull__ConstPool__TABLE_64e3b0ab_0
        [__Vtableidx6];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam_io_alloc_bits 
        = (0xffffU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state))
                       ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg
                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_sink_r)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam_io_alloc_bits 
        = (0xffffU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__state))
                       ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg
                       : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_sink_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
            [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
            << 3U) | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)) 
           & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6 
        = (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)) 
            & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt))))) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t))) 
           & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
              >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                  >> 2U) & (IData)((0U != (0x1eU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                  >> 1U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr) 
                            >> 5U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_lo_lo 
        = ((0x8000U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                        >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                            >> 0xfU)) 
                                   << 1U)) | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 0xfU))))) 
                       << 0xfU)) | ((0x4000U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                 >> 
                                                 ((2U 
                                                   & ((IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                               >> 0xeU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0xeU))))) 
                                                << 0xeU)) 
                                    | ((0x2000U & (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 0xdU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                   >> 0xdU))))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0xcU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0xcU))))) 
                                              << 0xcU)) 
                                          | ((0x800U 
                                              & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0xbU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0xbU))))) 
                                                 << 0xbU)) 
                                             | ((0x400U 
                                                 & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                     >> 
                                                     ((2U 
                                                       & ((IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                   >> 0xaU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                    >> 0xaU))))) 
                                                    << 0xaU)) 
                                                | ((0x200U 
                                                    & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                        >> 
                                                        ((2U 
                                                          & ((IData)(
                                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                      >> 9U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                       >> 9U))))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                           >> 
                                                           ((2U 
                                                             & ((IData)(
                                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                         >> 8U)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                          >> 8U))))) 
                                                          << 8U)) 
                                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_lo_lo_lo)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_hi_lo 
        = ((0x8000U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                        >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                            >> 0x2fU)) 
                                   << 1U)) | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 0x2fU))))) 
                       << 0xfU)) | ((0x4000U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                 >> 
                                                 ((2U 
                                                   & ((IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                               >> 0x2eU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0x2eU))))) 
                                                << 0xeU)) 
                                    | ((0x2000U & (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 0x2dU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                   >> 0x2dU))))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x2cU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x2cU))))) 
                                              << 0xcU)) 
                                          | ((0x800U 
                                              & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x2bU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x2bU))))) 
                                                 << 0xbU)) 
                                             | ((0x400U 
                                                 & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                     >> 
                                                     ((2U 
                                                       & ((IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                   >> 0x2aU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                    >> 0x2aU))))) 
                                                    << 0xaU)) 
                                                | ((0x200U 
                                                    & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                        >> 
                                                        ((2U 
                                                          & ((IData)(
                                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                      >> 0x29U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                       >> 0x29U))))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                           >> 
                                                           ((2U 
                                                             & ((IData)(
                                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                         >> 0x28U)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                          >> 0x28U))))) 
                                                          << 8U)) 
                                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_hi_lo_lo)))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__logic_out_lo_lo 
        = ((0x8000U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                        >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                            >> 0xfU)) 
                                   << 1U)) | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 0xfU))))) 
                       << 0xfU)) | ((0x4000U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                 >> 
                                                 ((2U 
                                                   & ((IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                               >> 0xeU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0xeU))))) 
                                                << 0xeU)) 
                                    | ((0x2000U & (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 0xdU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                   >> 0xdU))))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0xcU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0xcU))))) 
                                              << 0xcU)) 
                                          | ((0x800U 
                                              & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0xbU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0xbU))))) 
                                                 << 0xbU)) 
                                             | ((0x400U 
                                                 & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                     >> 
                                                     ((2U 
                                                       & ((IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                   >> 0xaU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                    >> 0xaU))))) 
                                                    << 0xaU)) 
                                                | ((0x200U 
                                                    & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                        >> 
                                                        ((2U 
                                                          & ((IData)(
                                                                     (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                      >> 9U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                       >> 9U))))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                           >> 
                                                           ((2U 
                                                             & ((IData)(
                                                                        (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                         >> 8U)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                          >> 8U))))) 
                                                          << 8U)) 
                                                      | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__logic_out_lo_lo_lo)))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__logic_out_hi_lo 
        = ((0x8000U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                        >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                            >> 0x2fU)) 
                                   << 1U)) | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 0x2fU))))) 
                       << 0xfU)) | ((0x4000U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                 >> 
                                                 ((2U 
                                                   & ((IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                               >> 0x2eU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0x2eU))))) 
                                                << 0xeU)) 
                                    | ((0x2000U & (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 0x2dU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                   >> 0x2dU))))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x2cU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x2cU))))) 
                                              << 0xcU)) 
                                          | ((0x800U 
                                              & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x2bU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x2bU))))) 
                                                 << 0xbU)) 
                                             | ((0x400U 
                                                 & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                     >> 
                                                     ((2U 
                                                       & ((IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                   >> 0x2aU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                    >> 0x2aU))))) 
                                                    << 0xaU)) 
                                                | ((0x200U 
                                                    & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                        >> 
                                                        ((2U 
                                                          & ((IData)(
                                                                     (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                      >> 0x29U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                       >> 0x29U))))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                           >> 
                                                           ((2U 
                                                             & ((IData)(
                                                                        (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                         >> 0x28U)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                          >> 0x28U))))) 
                                                          << 8U)) 
                                                      | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__logic_out_hi_lo_lo)))))))));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__empty 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ptr_match) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_2))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_3))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_4))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_5))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__sllw_res 
        = (((QData)((IData)((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_sllw_op2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__srlw_res 
        = (((QData)((IData)((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_srlw_op2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__sraw_res 
        = (((QData)((IData)((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_sraw_op2)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_2))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_3))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_4))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_5))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_addw_op2 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_add_op2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2 
        = (1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
                            >> 0x3fU)) & (~ (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2 
                                                     >> 0x3fU)))) 
                  | (((~ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
                                  >> 0x3fU))) & (~ (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2 
                                                            >> 0x3fU)))) 
                     & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2 
                                >> 0x3fU)))) | (((IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
                                                          >> 0x3fU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2 
                                                            >> 0x3fU))) 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_sub_op2 
                                                           >> 0x3fU)))));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___error_0_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_0) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___error_1_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_1) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___error_2_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_2) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___error_3_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_3) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___error_4_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_4) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___error_5_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_5) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___error_6_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_6) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___error_7_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_7) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___error_8_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_8) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___error_9_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_9) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___error_10_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_10) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___error_11_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_11) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___error_12_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_12) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___error_13_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_13) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___error_14_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_14) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___error_15_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_15) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signbit_a_T 
        = (((0x80U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                               >> 0x3fU)) << 7U)) | 
            ((0x40U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                >> 0x37U)) << 6U)) 
             | ((0x20U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                   >> 0x2fU)) << 5U)) 
                | ((0x10U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                      >> 0x27U)) << 4U)) 
                   | ((8U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                      >> 0x1fU)) << 3U)) 
                      | ((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                         >> 0x17U)) 
                                << 2U)) | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                           >> 0xfU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 7U)))))))))) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signSel_T_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signbit_d_T 
        = (((0x80U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                               >> 0x3fU)) << 7U)) | 
            ((0x40U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                >> 0x37U)) << 6U)) 
             | ((0x20U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                   >> 0x2fU)) << 5U)) 
                | ((0x10U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                      >> 0x27U)) << 4U)) 
                   | ((8U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                      >> 0x1fU)) << 3U)) 
                      | ((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                         >> 0x17U)) 
                                << 2U)) | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                           >> 0xfU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 7U)))))))))) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signSel_T_2)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signbit_a_T 
        = (((0x80U & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                               >> 0x3fU)) << 7U)) | 
            ((0x40U & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                >> 0x37U)) << 6U)) 
             | ((0x20U & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                   >> 0x2fU)) << 5U)) 
                | ((0x10U & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                      >> 0x27U)) << 4U)) 
                   | ((8U & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                      >> 0x1fU)) << 3U)) 
                      | ((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                         >> 0x17U)) 
                                << 2U)) | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                           >> 0xfU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 7U)))))))))) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signSel_T_2)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signbit_d_T 
        = (((0x80U & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                               >> 0x3fU)) << 7U)) | 
            ((0x40U & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                >> 0x37U)) << 6U)) 
             | ((0x20U & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                   >> 0x2fU)) << 5U)) 
                | ((0x10U & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                      >> 0x27U)) << 4U)) 
                   | ((8U & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                      >> 0x1fU)) << 3U)) 
                      | ((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                         >> 0x17U)) 
                                << 2U)) | ((2U & ((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                           >> 0xfU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 7U)))))))))) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signSel_T_2)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0_io_enq_valid 
        = (0xffffU & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1_io_enq_valid 
        = (0x7fffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                       >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2_io_enq_valid 
        = (0x3fffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                       >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3_io_enq_valid 
        = (0x1fffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                       >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4_io_enq_valid 
        = (0xfffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                      >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5_io_enq_valid 
        = (0x7ffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                      >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6_io_enq_valid 
        = (0x3ffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                      >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7_io_enq_valid 
        = (0x1ffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                      >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8_io_enq_valid 
        = (0xffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                     >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9_io_enq_valid 
        = (0x7fU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                     >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10_io_enq_valid 
        = (0x3fU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                     >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11_io_enq_valid 
        = (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                     >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12_io_enq_valid 
        = (0xfU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                    >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13_io_enq_valid 
        = (7U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                  >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14_io_enq_valid 
        = (3U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                  >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15_io_enq_valid 
        = (1U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                  >> 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    if ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__ram_tl_state_size
            [0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__ram_tl_state_source
            [0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_extra_id 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__ram_extra_id
            [0U];
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_size 
            = ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__ram_tl_state_size
               [0U] : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                        ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__ram_tl_state_size
                       [0U] : ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__ram_tl_state_size
                               [0U] : ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                        ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__ram_tl_state_size
                                       [0U] : ((0xaU 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__ram_tl_state_size
                                               [0U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? 
                                                   vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__ram_tl_state_size
                                                   [0U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? 
                                                    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__ram_tl_state_size
                                                    [0U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? 
                                                     vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__ram_tl_state_size
                                                     [0U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? 
                                                      ((0x10U 
                                                        >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__deq_ptr_value))
                                                        ? 
                                                       vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__ram_tl_state_size
                                                       [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__deq_ptr_value]
                                                        : 0U)
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       ((0x10U 
                                                         >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__deq_ptr_value))
                                                         ? 
                                                        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__ram_tl_state_size
                                                        [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__deq_ptr_value]
                                                         : 0U)
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        ((0x10U 
                                                          >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__deq_ptr_value))
                                                          ? 
                                                         vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__ram_tl_state_size
                                                         [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__deq_ptr_value]
                                                          : 0U)
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         ((0x10U 
                                                           >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__deq_ptr_value))
                                                           ? 
                                                          vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__ram_tl_state_size
                                                          [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__deq_ptr_value]
                                                           : 0U)
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                           ? 
                                                          ((0x10U 
                                                            >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__deq_ptr_value))
                                                            ? 
                                                           vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__ram_tl_state_size
                                                           [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__deq_ptr_value]
                                                            : 0U)
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                            ? 
                                                           ((0x10U 
                                                             >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__deq_ptr_value))
                                                             ? 
                                                            vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__ram_tl_state_size
                                                            [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__deq_ptr_value]
                                                             : 0U)
                                                            : 
                                                           ((0x10U 
                                                             >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__deq_ptr_value))
                                                             ? 
                                                            vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__ram_tl_state_size
                                                            [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__deq_ptr_value]
                                                             : 0U)))))))))))))));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_source 
            = ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__ram_tl_state_source
               [0U] : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                        ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__ram_tl_state_source
                       [0U] : ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__ram_tl_state_source
                               [0U] : ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                        ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__ram_tl_state_source
                                       [0U] : ((0xaU 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__ram_tl_state_source
                                               [0U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? 
                                                   vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__ram_tl_state_source
                                                   [0U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? 
                                                    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__ram_tl_state_source
                                                    [0U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? 
                                                     vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__ram_tl_state_source
                                                     [0U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? 
                                                      ((0x10U 
                                                        >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__deq_ptr_value))
                                                        ? 
                                                       vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__ram_tl_state_source
                                                       [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__deq_ptr_value]
                                                        : 0U)
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       ((0x10U 
                                                         >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__deq_ptr_value))
                                                         ? 
                                                        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__ram_tl_state_source
                                                        [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__deq_ptr_value]
                                                         : 0U)
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        ((0x10U 
                                                          >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__deq_ptr_value))
                                                          ? 
                                                         vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__ram_tl_state_source
                                                         [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__deq_ptr_value]
                                                          : 0U)
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         ((0x10U 
                                                           >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__deq_ptr_value))
                                                           ? 
                                                          vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__ram_tl_state_source
                                                          [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__deq_ptr_value]
                                                           : 0U)
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                           ? 
                                                          ((0x10U 
                                                            >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__deq_ptr_value))
                                                            ? 
                                                           vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__ram_tl_state_source
                                                           [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__deq_ptr_value]
                                                            : 0U)
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                            ? 
                                                           ((0x10U 
                                                             >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__deq_ptr_value))
                                                             ? 
                                                            vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__ram_tl_state_source
                                                            [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__deq_ptr_value]
                                                             : 0U)
                                                            : 
                                                           ((0x10U 
                                                             >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__deq_ptr_value))
                                                             ? 
                                                            vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__ram_tl_state_source
                                                            [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__deq_ptr_value]
                                                             : 0U)))))))))))))));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_recho_extra_id 
            = ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__ram_extra_id
               [0U] : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                        ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__ram_extra_id
                       [0U] : ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__ram_extra_id
                               [0U] : ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                        ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__ram_extra_id
                                       [0U] : ((0xaU 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__ram_extra_id
                                               [0U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? 
                                                   vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__ram_extra_id
                                                   [0U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? 
                                                    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__ram_extra_id
                                                    [0U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? 
                                                     vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__ram_extra_id
                                                     [0U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? 
                                                      ((0x10U 
                                                        >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__deq_ptr_value)) 
                                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__ram_extra_id
                                                       [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__deq_ptr_value])
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       ((0x10U 
                                                         >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__deq_ptr_value)) 
                                                        & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__ram_extra_id
                                                        [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__deq_ptr_value])
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        ((0x10U 
                                                          >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__deq_ptr_value)) 
                                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__ram_extra_id
                                                         [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__deq_ptr_value])
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         ((0x10U 
                                                           >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__deq_ptr_value)) 
                                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__ram_extra_id
                                                          [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__deq_ptr_value])
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                           ? 
                                                          ((0x10U 
                                                            >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__deq_ptr_value)) 
                                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__ram_extra_id
                                                           [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__deq_ptr_value])
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                            ? 
                                                           ((0x10U 
                                                             >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__deq_ptr_value)) 
                                                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__ram_extra_id
                                                            [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__deq_ptr_value])
                                                            : 
                                                           ((0x10U 
                                                             >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__deq_ptr_value)) 
                                                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__ram_extra_id
                                                            [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__deq_ptr_value])))))))))))))));
    }
    if ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_becho_tl_state_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__ram_tl_state_size
            [0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_becho_tl_state_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__ram_tl_state_source
            [0U];
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_becho_tl_state_size 
            = ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__ram_tl_state_size
               [0U] : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                        ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__ram_tl_state_size
                       [0U] : ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__ram_tl_state_size
                               [0U] : ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                        ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__ram_tl_state_size
                                       [0U] : ((0xaU 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__ram_tl_state_size
                                               [0U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? 
                                                   vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__ram_tl_state_size
                                                   [0U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? 
                                                    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__ram_tl_state_size
                                                    [0U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? 
                                                     vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__ram_tl_state_size
                                                     [0U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? 
                                                      ((0x10U 
                                                        >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__deq_ptr_value))
                                                        ? 
                                                       vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__ram_tl_state_size
                                                       [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__deq_ptr_value]
                                                        : 0U)
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       ((0x10U 
                                                         >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__deq_ptr_value))
                                                         ? 
                                                        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__ram_tl_state_size
                                                        [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__deq_ptr_value]
                                                         : 0U)
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        ((0x10U 
                                                          >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__deq_ptr_value))
                                                          ? 
                                                         vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__ram_tl_state_size
                                                         [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__deq_ptr_value]
                                                          : 0U)
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         ((0x10U 
                                                           >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__deq_ptr_value))
                                                           ? 
                                                          vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__ram_tl_state_size
                                                          [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__deq_ptr_value]
                                                           : 0U)
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                           ? 
                                                          ((0x10U 
                                                            >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__deq_ptr_value))
                                                            ? 
                                                           vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__ram_tl_state_size
                                                           [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__deq_ptr_value]
                                                            : 0U)
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                            ? 
                                                           ((0x10U 
                                                             >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__deq_ptr_value))
                                                             ? 
                                                            vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__ram_tl_state_size
                                                            [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__deq_ptr_value]
                                                             : 0U)
                                                            : 
                                                           ((0x10U 
                                                             >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__deq_ptr_value))
                                                             ? 
                                                            vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size
                                                            [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__deq_ptr_value]
                                                             : 0U)))))))))))))));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_becho_tl_state_source 
            = ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__ram_tl_state_source
               [0U] : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                        ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__ram_tl_state_source
                       [0U] : ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__ram_tl_state_source
                               [0U] : ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                        ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__ram_tl_state_source
                                       [0U] : ((0xaU 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__ram_tl_state_source
                                               [0U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? 
                                                   vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__ram_tl_state_source
                                                   [0U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? 
                                                    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__ram_tl_state_source
                                                    [0U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? 
                                                     vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__ram_tl_state_source
                                                     [0U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? 
                                                      ((0x10U 
                                                        >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__deq_ptr_value))
                                                        ? 
                                                       vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__ram_tl_state_source
                                                       [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__deq_ptr_value]
                                                        : 0U)
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       ((0x10U 
                                                         >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__deq_ptr_value))
                                                         ? 
                                                        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__ram_tl_state_source
                                                        [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__deq_ptr_value]
                                                         : 0U)
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        ((0x10U 
                                                          >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__deq_ptr_value))
                                                          ? 
                                                         vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__ram_tl_state_source
                                                         [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__deq_ptr_value]
                                                          : 0U)
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         ((0x10U 
                                                           >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__deq_ptr_value))
                                                           ? 
                                                          vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__ram_tl_state_source
                                                          [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__deq_ptr_value]
                                                           : 0U)
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                           ? 
                                                          ((0x10U 
                                                            >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__deq_ptr_value))
                                                            ? 
                                                           vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__ram_tl_state_source
                                                           [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__deq_ptr_value]
                                                            : 0U)
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                            ? 
                                                           ((0x10U 
                                                             >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__deq_ptr_value))
                                                             ? 
                                                            vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__ram_tl_state_source
                                                            [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__deq_ptr_value]
                                                             : 0U)
                                                            : 
                                                           ((0x10U 
                                                             >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__deq_ptr_value))
                                                             ? 
                                                            vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_source
                                                            [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__deq_ptr_value]
                                                             : 0U)))))))))))))));
    }
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag_auto_in_bresp 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data) 
           | ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
               ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_15)
               : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_14)
                   : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_13)
                       : ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                           ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_12)
                           : ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_11)
                               : ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_10)
                                   : ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_9)
                                       : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_8)
                                           : ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_7)
                                               : ((6U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_6)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_5)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_4)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_3)
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_2)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_1)
                                                        : (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_0)))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__dc_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__maybe_full) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_last));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__empty 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ptr_match) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__empty 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ptr_match) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__maybe_full) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_last));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_261 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_first)
            ? (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint_auto_in_rresp))
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_denied_r));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass) 
            != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_io_bypass)) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall_counter)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass) 
            != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_io_bypass)) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall_counter)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__bad 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_burst)) 
           | (3U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__busy)
            ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__r_addr
            : vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_addr);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag_auto_out_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__maybe_full) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___in_awready_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wrapMask_T_1 
        = (0x7fffffU & ((0xffU | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_len) 
                                  << 8U)) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__busy)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__r_len)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_len));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__empty 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ptr_match) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__extract_io_i_ready 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__extract_io_i_bits_opcode)) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__extract__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__extract_io_i_ready 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__extract_io_i_bits_opcode)) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__extract__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__empty 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ptr_match) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__q_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__q_last_count)) 
           | ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__q_last_count)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__q_last_beats_a))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__q_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__q_last_count)) 
           | ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__q_last_count)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__q_last_beats_a))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__mul_div_req 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__finish)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__dr_ready)) 
           | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__mul_finish_sign)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__mul_ready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex_id_rd_ena 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_rdena) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex_id_rd_type 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_type) 
           & (- (IData)((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_enq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_d_ready) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_last_count)) 
           | ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_last_count)) 
              & (0U == (0x1fU & ((IData)(2U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___q_last_beats_c_T_1))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_last_count)) 
           | ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_last_count)) 
              & (0U == (0x1fU & ((IData)(2U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___q_last_beats_c_T_1))))));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_2) 
                       << 2U)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_2) 
                       << 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
                 & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                    >> 0x10U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
                 & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                    >> 0x10U)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_5 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_2 
           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_2 
              << 2U));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_5 
        = (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_2 
           | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_2 
              << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___T_45 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxStateEarly_0)
            ? ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__r_holds_d)
                ? 1U : 0U) : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_enq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_d_ready) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_corrupt 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_corrupt));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_corrupt));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_valid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__maybe_full) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a_last)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__idle));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount 
            = ((((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                  ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15.__PVT__ram_echo_extra_id
                 [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15.__PVT__deq_ptr_value]
                  : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                      ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14.__PVT__ram_echo_extra_id
                     [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14.__PVT__deq_ptr_value]
                      : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                          ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13.__PVT__ram_echo_extra_id
                         [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13.__PVT__deq_ptr_value]
                          : ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                              ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12.__PVT__ram_echo_extra_id
                             [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12.__PVT__deq_ptr_value]
                              : ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                  ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11.__PVT__ram_echo_extra_id
                                 [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11.__PVT__deq_ptr_value]
                                  : ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                      ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10.__PVT__ram_echo_extra_id
                                     [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10.__PVT__deq_ptr_value]
                                      : ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                          ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9.__PVT__ram_echo_extra_id
                                         [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9.__PVT__deq_ptr_value]
                                          : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                              ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8.__PVT__ram_echo_extra_id
                                             [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8.__PVT__deq_ptr_value]
                                              : ((7U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                  ? 
                                                 vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7.__PVT__ram_echo_extra_id
                                                 [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7.__PVT__deq_ptr_value]
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                   ? 
                                                  vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6.__PVT__ram_echo_extra_id
                                                  [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6.__PVT__deq_ptr_value]
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                    ? 
                                                   vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5.__PVT__ram_echo_extra_id
                                                   [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5.__PVT__deq_ptr_value]
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                     ? 
                                                    vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4.__PVT__ram_echo_extra_id
                                                    [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4.__PVT__deq_ptr_value]
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                      ? 
                                                     vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3.__PVT__ram_echo_extra_id
                                                     [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3.__PVT__deq_ptr_value]
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                       ? 
                                                      vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2.__PVT__ram_echo_extra_id
                                                      [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2.__PVT__deq_ptr_value]
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                        ? 
                                                       vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1.__PVT__ram_echo_extra_id
                                                       [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1.__PVT__deq_ptr_value]
                                                        : 
                                                       vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0.__PVT__ram_echo_extra_id
                                                       [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0.__PVT__deq_ptr_value]))))))))))))))) 
                << 4U) | ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                           ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15.__PVT__ram_id
                          [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15.__PVT__deq_ptr_value]
                           : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                               ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14.__PVT__ram_id
                              [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14.__PVT__deq_ptr_value]
                               : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                   ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13.__PVT__ram_id
                                  [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13.__PVT__deq_ptr_value]
                                   : ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                       ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12.__PVT__ram_id
                                      [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12.__PVT__deq_ptr_value]
                                       : ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                           ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11.__PVT__ram_id
                                          [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11.__PVT__deq_ptr_value]
                                           : ((0xaU 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                               ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10.__PVT__ram_id
                                              [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10.__PVT__deq_ptr_value]
                                               : ((9U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                   ? 
                                                  vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9.__PVT__ram_id
                                                  [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9.__PVT__deq_ptr_value]
                                                   : 
                                                  ((8U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                    ? 
                                                   vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8.__PVT__ram_id
                                                   [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8.__PVT__deq_ptr_value]
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                     ? 
                                                    vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7.__PVT__ram_id
                                                    [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7.__PVT__deq_ptr_value]
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                      ? 
                                                     vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6.__PVT__ram_id
                                                     [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6.__PVT__deq_ptr_value]
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                       ? 
                                                      vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5.__PVT__ram_id
                                                      [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5.__PVT__deq_ptr_value]
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                        ? 
                                                       vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4.__PVT__ram_id
                                                       [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4.__PVT__deq_ptr_value]
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                         ? 
                                                        vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3.__PVT__ram_id
                                                        [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3.__PVT__deq_ptr_value]
                                                         : 
                                                        ((2U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                          ? 
                                                         vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2.__PVT__ram_id
                                                         [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2.__PVT__deq_ptr_value]
                                                          : 
                                                         ((1U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                           ? 
                                                          vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1.__PVT__ram_id
                                                          [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1.__PVT__deq_ptr_value]
                                                           : 
                                                          vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0.__PVT__ram_id
                                                          [vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0.__PVT__deq_ptr_value]))))))))))))))));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__locked;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__locked;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount 
            = ((((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                  ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__ram_extra_id
                 [0U] : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                          ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__ram_extra_id
                         [0U] : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                  ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__ram_extra_id
                                 [0U] : ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                          ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__ram_extra_id
                                         [0U] : ((0xbU 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                  ? 
                                                 vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__ram_extra_id
                                                 [0U]
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                   ? 
                                                  vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__ram_extra_id
                                                  [0U]
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? 
                                                   vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__ram_extra_id
                                                   [0U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? 
                                                    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__ram_extra_id
                                                    [0U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? 
                                                     vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__ram_extra_id
                                                     [0U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? 
                                                      ((0x10U 
                                                        >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__deq_ptr_value)) 
                                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__ram_extra_id
                                                       [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__deq_ptr_value])
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       ((0x10U 
                                                         >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__deq_ptr_value)) 
                                                        & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__ram_extra_id
                                                        [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__deq_ptr_value])
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        ((0x10U 
                                                          >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__deq_ptr_value)) 
                                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__ram_extra_id
                                                         [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__deq_ptr_value])
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         ((0x10U 
                                                           >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__deq_ptr_value)) 
                                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__ram_extra_id
                                                          [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__deq_ptr_value])
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                           ? 
                                                          ((0x10U 
                                                            >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__deq_ptr_value)) 
                                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__ram_extra_id
                                                           [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__deq_ptr_value])
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                            ? 
                                                           ((0x10U 
                                                             >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__deq_ptr_value)) 
                                                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__ram_extra_id
                                                            [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__deq_ptr_value])
                                                            : 
                                                           ((0x10U 
                                                             >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__deq_ptr_value)) 
                                                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_extra_id
                                                            [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__deq_ptr_value])))))))))))))))) 
                << 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_last_count)) 
           | ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_last_count)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_last_beats_d))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last_count)) 
           | ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last_count)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last_beats_d))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_valid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__maybe_full) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_last)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__idle));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_count)) 
           | ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_count)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_beats_a))));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_5 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_2) 
                       << 2U)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_5 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_2) 
                       << 2U)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_5 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_2) 
                       << 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_last_count)) 
           | ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_last_count)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_last_beats_a))));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_5 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_2) 
                       << 2U)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_5 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_2) 
                       << 2U)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_5 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_2) 
                       << 2U)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_5 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_2) 
                       << 2U)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_5 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_2) 
                       << 2U)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_5 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_2) 
                       << 2U)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_5 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_2) 
                       << 2U)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_5 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_2) 
                       << 2U)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_5 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_2) 
                       << 2U)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_5 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_2) 
                       << 2U)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_5 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_2) 
                       << 2U)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_5 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_2) 
                       << 2U)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_5 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_2) 
                       << 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__bad_1 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_burst)) 
           | (3U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___GEN_10 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__wbeats_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_counter))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__wbeats_latched));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag_auto_out_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full) 
           & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_counter)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__wbeats_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__addr_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__busy_1)
            ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__r_addr_1
            : vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__empty 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__ptr_match) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__empty 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__ptr_match) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wrapMask_T_3 
        = (0x7fffffU & ((0xffU | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_len) 
                                  << 8U)) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__busy_1)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__r_len_1)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_len));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__empty 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__ptr_match) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__empty 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__ptr_match) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__empty 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__ptr_match) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__empty 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ptr_match) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__empty 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ptr_match) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__empty 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ptr_match) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
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
        __Vtemp2624[0U] = 0U;
        __Vtemp2624[1U] = 0U;
        __Vtemp2624[2U] = 0U;
        __Vtemp2624[3U] = 0U;
    } else {
        __Vtemp2624[0U] = ((((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
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
        __Vtemp2624[1U] = ((((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
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
        __Vtemp2624[2U] = ((((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
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
        __Vtemp2624[3U] = ((((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
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
                ? 0U : __Vtemp2624[0U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[1U] 
            = (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))
                ? 0U : __Vtemp2624[1U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[2U] 
            = (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))
                ? 0U : __Vtemp2624[2U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[3U] 
            = (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))
                ? 0U : __Vtemp2624[3U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp2630, (0x80000000ULL 
                                      ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_address));
    VL_EXTEND_WQ(65,64, __Vtemp2634, (0x1000ULL ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_address));
    VL_EXTEND_WQ(65,64, __Vtemp2638, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_address);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1 
        = (((((0U == (((0x80000000U & __Vtemp2630[0U]) 
                       | __Vtemp2630[1U]) | (1U & __Vtemp2630[2U]))) 
              | (0U == (((0xfffff000U & __Vtemp2634[0U]) 
                         | __Vtemp2634[1U]) | (1U & 
                                               __Vtemp2634[2U])))) 
             & (0U == (0x80000000U & __Vtemp2638[0U])))
             ? (0xfffffffffffff000ULL & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_address)
             : 0x1000ULL) | (QData)((IData)((0xfffU 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_address)))));
    VL_EXTEND_WQ(65,64, __Vtemp2642, (0x80000000ULL 
                                      ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_address));
    VL_EXTEND_WQ(65,64, __Vtemp2646, (0x40000000ULL 
                                      ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_address));
    VL_EXTEND_WQ(65,64, __Vtemp2650, (0x1000ULL ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_address));
    VL_EXTEND_WQ(65,64, __Vtemp2654, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_address);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1 
        = ((((((0U == (((0x80000000U & __Vtemp2642[0U]) 
                        | __Vtemp2642[1U]) | (1U & 
                                              __Vtemp2642[2U]))) 
               | (0U == (((0xc0000000U & __Vtemp2646[0U]) 
                          | __Vtemp2646[1U]) | (1U 
                                                & __Vtemp2646[2U])))) 
              | (0U == (((0xfffff000U & __Vtemp2650[0U]) 
                         | __Vtemp2650[1U]) | (1U & 
                                               __Vtemp2650[2U])))) 
             & (0U == (0xc0000000U & __Vtemp2654[0U])))
             ? (0xfffffffffffff000ULL & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_address)
             : 0x1000ULL) | (QData)((IData)((0xfffU 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_address)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)
            ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_param));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)
            ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_param));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass)
            ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass)
            ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_param));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_c_bits_size = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_c_bits_size 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3));
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_c_bits_size = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_c_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_size;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2469 
        = (IData)((6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_c_bits_opcode = 4U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode = 4U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_c_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2610 
        = (IData)((6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_c_bits_opcode = 4U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode = 4U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_c_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_opcode;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_opcode;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_release 
        = ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_1)) 
           | (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_release 
        = ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___GEN_1)) 
           | (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___GEN_1)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_32 
        = ((2U == (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_4))
            ? ((7U == (7U & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                ? 0xfU : ((6U == (7U & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                           ? 0xeU : ((5U == (7U & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                                      ? 0xdU : ((4U 
                                                 == 
                                                 (7U 
                                                  & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                                                 ? 0xcU
                                                 : 
                                                ((3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                                                  ? 0xbU
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                                                   ? 0xaU
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                                                    ? 9U
                                                    : 8U)))))))
            : ((1U == (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_4))
                ? ((7U == (7U & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                    ? 7U : ((6U == (7U & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                             ? 6U : ((5U == (7U & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                                      ? 5U : ((4U == 
                                               (7U 
                                                & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                                               ? 4U
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                                                   ? 3U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                                                    ? 2U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                                                     ? 1U
                                                     : 0U)))))))
                : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                  >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_32 
        = ((2U == (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_4))
            ? ((7U == (7U & (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                ? 0xfU : ((6U == (7U & (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                           ? 0xeU : ((5U == (7U & (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                                      ? 0xdU : ((4U 
                                                 == 
                                                 (7U 
                                                  & (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                                                 ? 0xcU
                                                 : 
                                                ((3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                                                  ? 0xbU
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                                                   ? 0xaU
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                                                    ? 9U
                                                    : 8U)))))))
            : ((1U == (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_4))
                ? ((7U == (7U & (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                    ? 7U : ((6U == (7U & (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                             ? 6U : ((5U == (7U & (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                                      ? 5U : ((4U == 
                                               (7U 
                                                & (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                                               ? 4U
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                                                   ? 3U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                                                    ? 2U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_5)))
                                                     ? 1U
                                                     : 0U)))))))
                : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                  >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_grant 
        = ((4U == (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_1)) 
           | (5U == (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_grant 
        = ((4U == (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_1)) 
           | (5U == (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_1)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3));
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_42 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
            ? 2U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                     ? 1U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                              ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                                       ? 1U : 0U))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_data = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_data 
            = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                ? ((0xff000000U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[1U] 
                                    << 0x1cU) | (0xf000000U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                    >> 4U)))) 
                   | ((0xff0000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                    >> 3U)) | ((0xff00U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                   >> 2U)) 
                                               | (0xffU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                     >> 1U)))))
                : vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__stall 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__a_first) 
           & (~ ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_4))
                  ? (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free))
                  : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_4))
                      ? (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free))
                      : ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_4))
                          ? (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free))
                          : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_4))
                              ? (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free))
                              : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_4))
                                  ? (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free))
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_4))
                                      ? (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free))
                                      : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_4))
                                          ? (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free))
                                          : (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free)))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_42 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
            ? 2U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                     ? 1U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                              ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                                       ? 1U : 0U))));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_data = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_data 
            = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                ? ((0xff000000U & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[1U] 
                                    << 0x1cU) | (0xf000000U 
                                                 & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                    >> 4U)))) 
                   | ((0xff0000U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                    >> 3U)) | ((0xff00U 
                                                & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                   >> 2U)) 
                                               | (0xffU 
                                                  & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                     >> 1U)))))
                : vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc 
        = (1U & ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                           >> 1U) & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                        >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1 
        = (1U & ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                           >> 1U) & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                     >> 1U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address 
        = (((QData)((IData)(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state))
                              ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg
                              : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address1_r))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__stall 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__a_first) 
           & (~ ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_4))
                  ? (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free))
                  : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_4))
                      ? (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free))
                      : ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_4))
                          ? (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free))
                          : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_4))
                              ? (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free))
                              : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_4))
                                  ? (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free))
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_4))
                                      ? (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free))
                                      : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_4))
                                          ? (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free))
                                          : (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free)))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc 
        = (1U & ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_3)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                           >> 1U) & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                        >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1 
        = (1U & ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_3)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                           >> 1U) & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                     >> 1U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_address 
        = (((QData)((IData)(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__state))
                              ? vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg
                              : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_address1_r))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_lo 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
             >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                 >> 0x1fU)) << 1U)) 
                 | (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                  >> 0x1fU))))) << 0x1fU) 
           | ((0x40000000U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                               >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                   >> 0x1eU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                  >> 0x1eU))))) 
                              << 0x1eU)) | ((0x20000000U 
                                             & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                 >> 
                                                 ((2U 
                                                   & ((IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                               >> 0x1dU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0x1dU))))) 
                                                << 0x1dU)) 
                                            | ((0x10000000U 
                                                & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 0x1cU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                   >> 0x1cU))))) 
                                                   << 0x1cU)) 
                                               | ((0x8000000U 
                                                   & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                       >> 
                                                       ((2U 
                                                         & ((IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                     >> 0x1bU)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (IData)(
                                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                      >> 0x1bU))))) 
                                                      << 0x1bU)) 
                                                  | ((0x4000000U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                          >> 
                                                          ((2U 
                                                            & ((IData)(
                                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                        >> 0x1aU)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(
                                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                         >> 0x1aU))))) 
                                                         << 0x1aU)) 
                                                     | ((0x2000000U 
                                                         & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                             >> 
                                                             ((2U 
                                                               & ((IData)(
                                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                           >> 0x19U)) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                            >> 0x19U))))) 
                                                            << 0x19U)) 
                                                        | ((0x1000000U 
                                                            & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                                >> 
                                                                ((2U 
                                                                  & ((IData)(
                                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                              >> 0x18U)) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(
                                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                               >> 0x18U))))) 
                                                               << 0x18U)) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_lo_hi_lo) 
                                                               << 0x10U) 
                                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_lo_lo))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_hi 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
             >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                 >> 0x3fU)) << 1U)) 
                 | (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                  >> 0x3fU))))) << 0x1fU) 
           | ((0x40000000U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                               >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                   >> 0x3eU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                  >> 0x3eU))))) 
                              << 0x1eU)) | ((0x20000000U 
                                             & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                 >> 
                                                 ((2U 
                                                   & ((IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                               >> 0x3dU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0x3dU))))) 
                                                << 0x1dU)) 
                                            | ((0x10000000U 
                                                & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 0x3cU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                   >> 0x3cU))))) 
                                                   << 0x1cU)) 
                                               | ((0x8000000U 
                                                   & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                       >> 
                                                       ((2U 
                                                         & ((IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                     >> 0x3bU)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (IData)(
                                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                      >> 0x3bU))))) 
                                                      << 0x1bU)) 
                                                  | ((0x4000000U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                          >> 
                                                          ((2U 
                                                            & ((IData)(
                                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                        >> 0x3aU)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(
                                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                         >> 0x3aU))))) 
                                                         << 0x1aU)) 
                                                     | ((0x2000000U 
                                                         & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                             >> 
                                                             ((2U 
                                                               & ((IData)(
                                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                           >> 0x39U)) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                            >> 0x39U))))) 
                                                            << 0x19U)) 
                                                        | ((0x1000000U 
                                                            & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                                >> 
                                                                ((2U 
                                                                  & ((IData)(
                                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                              >> 0x38U)) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(
                                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                               >> 0x38U))))) 
                                                               << 0x18U)) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_hi_hi_lo) 
                                                               << 0x10U) 
                                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_hi_lo))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__logic_out_lo 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
             >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                 >> 0x1fU)) << 1U)) 
                 | (1U & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                  >> 0x1fU))))) << 0x1fU) 
           | ((0x40000000U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                               >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                   >> 0x1eU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                  >> 0x1eU))))) 
                              << 0x1eU)) | ((0x20000000U 
                                             & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                 >> 
                                                 ((2U 
                                                   & ((IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                               >> 0x1dU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0x1dU))))) 
                                                << 0x1dU)) 
                                            | ((0x10000000U 
                                                & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 0x1cU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                   >> 0x1cU))))) 
                                                   << 0x1cU)) 
                                               | ((0x8000000U 
                                                   & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                       >> 
                                                       ((2U 
                                                         & ((IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                     >> 0x1bU)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (IData)(
                                                                     (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                      >> 0x1bU))))) 
                                                      << 0x1bU)) 
                                                  | ((0x4000000U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                          >> 
                                                          ((2U 
                                                            & ((IData)(
                                                                       (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                        >> 0x1aU)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(
                                                                        (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                         >> 0x1aU))))) 
                                                         << 0x1aU)) 
                                                     | ((0x2000000U 
                                                         & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                             >> 
                                                             ((2U 
                                                               & ((IData)(
                                                                          (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                           >> 0x19U)) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                            >> 0x19U))))) 
                                                            << 0x19U)) 
                                                        | ((0x1000000U 
                                                            & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                                >> 
                                                                ((2U 
                                                                  & ((IData)(
                                                                             (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                              >> 0x18U)) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(
                                                                              (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                               >> 0x18U))))) 
                                                               << 0x18U)) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__logic_out_lo_hi_lo) 
                                                               << 0x10U) 
                                                              | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__logic_out_lo_lo))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__logic_out_hi 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
             >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                 >> 0x3fU)) << 1U)) 
                 | (1U & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                  >> 0x3fU))))) << 0x1fU) 
           | ((0x40000000U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                               >> ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                   >> 0x3eU)) 
                                          << 1U)) | 
                                   (1U & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                  >> 0x3eU))))) 
                              << 0x1eU)) | ((0x20000000U 
                                             & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                 >> 
                                                 ((2U 
                                                   & ((IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                               >> 0x3dU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0x3dU))))) 
                                                << 0x1dU)) 
                                            | ((0x10000000U 
                                                & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 0x3cU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                   >> 0x3cU))))) 
                                                   << 0x1cU)) 
                                               | ((0x8000000U 
                                                   & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                       >> 
                                                       ((2U 
                                                         & ((IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                     >> 0x3bU)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (IData)(
                                                                     (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                      >> 0x3bU))))) 
                                                      << 0x1bU)) 
                                                  | ((0x4000000U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                          >> 
                                                          ((2U 
                                                            & ((IData)(
                                                                       (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                        >> 0x3aU)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(
                                                                        (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                         >> 0x3aU))))) 
                                                         << 0x1aU)) 
                                                     | ((0x2000000U 
                                                         & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                             >> 
                                                             ((2U 
                                                               & ((IData)(
                                                                          (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                           >> 0x39U)) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                            >> 0x39U))))) 
                                                            << 0x19U)) 
                                                        | ((0x1000000U 
                                                            & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                                >> 
                                                                ((2U 
                                                                  & ((IData)(
                                                                             (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                              >> 0x38U)) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(
                                                                              (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                               >> 0x38U))))) 
                                                               << 0x18U)) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__logic_out_hi_hi_lo) 
                                                               << 0x10U) 
                                                              | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__logic_out_hi_lo))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_type) 
                  >> 2U) & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                             ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
                                != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2)
                             : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                 ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
                                    == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2)
                                 : ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                     ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
                                        >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2)
                                     : ((0x20U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op1 
                                            < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2)
                                         : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))
                                             ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2))
                                             : ((8U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__op1_ls_op2)))))))));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_2 
        = ((0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signbit_a_T) 
                     << 1U)) | (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signbit_a_T) 
                                         << 2U)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_2 
        = ((0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signbit_d_T) 
                     << 1U)) | (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signbit_d_T) 
                                         << 2U)));
    ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_2 
        = ((0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signbit_a_T) 
                     << 1U)) | (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signbit_a_T) 
                                         << 2U)));
    ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_2 
        = ((0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signbit_d_T) 
                     << 1U)) | (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signbit_d_T) 
                                         << 2U)));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint_auto_in_recho_tl_state_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint_auto_in_recho_tl_state_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint_auto_in_recho_tl_state_source;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_becho_tl_state_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_becho_tl_state_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1_auto_in_becho_tl_state_source;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__beatsLeft))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__dc_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__state_0));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__w_full));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag_auto_in_bvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__empty)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__r_full));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__in_arready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__full)) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__r_full))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__muxStateEarly_0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__beatsLeft))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__state_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_denied 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
            ? (IData)(ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_261)
            : (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_d_corrupt 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint_auto_in_rresp)) 
           | (IData)(ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_261));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_in_d_bits_denied 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
            ? (IData)(ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_261)
            : (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___out_bits_addr_T_5 
        = ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__addr) 
           | (7U & (~ (0x3ffU & ((IData)(7U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_size))))));
    ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_2 
        = (0xffU & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__addr 
                     >> 3U) | (0xfeU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__addr 
                                        >> 2U))));
    ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len) 
           | (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len) 
                       >> 1U)));
    ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_3 
        = (0xffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len)) 
                    | (0xfeU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len)) 
                                << 1U))));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__do_deq 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__full)) 
                  | (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__r_full))) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__empty))));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__do_deq 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__empty)) 
                  & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__full)) 
                     | (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__w_full)))) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__empty))));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__do_deq 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__empty)) 
                  & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__full)) 
                     | (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__w_full)))) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__empty))));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___T_1 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__empty)) 
                  & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__full)) 
                     | (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__w_full)))) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__empty))));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_awready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__full)) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_latched)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT___GEN_11 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__state))
            ? ((4U & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__state))
                       ? (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 3U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__r_1)))
                ? 0U : 3U) : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__state))
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__q_last)
                                   ? 0U : 3U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__xmit 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__q_last) 
           | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT___GEN_11 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__state))
            ? ((4U & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__state))
                       ? (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                          >> 3U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__r_1)))
                ? 0U : 3U) : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__state))
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__q_last)
                                   ? 0U : 3U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__xmit 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__q_last) 
           | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__xmit 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_last) 
           | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_11 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state))
            ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_1))
                ? 3U : 0U) : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state))
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_last)
                                   ? 0U : 3U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__xmit 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_last) 
           | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___GEN_11 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__state))
            ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___GEN_1))
                ? 3U : 0U) : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__state))
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_last)
                                   ? 0U : 3U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free_sel 
        = ((~ (((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_5) 
                << 1U) | (0x1e0U & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free_sel 
        = ((~ (((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_5) 
                << 1U) | (0x1e0U & ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_8 
        = (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_5 
           | (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_5 
              << 4U));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_8 
        = (ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_5 
           | (ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_5 
              << 4U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_21 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__dc_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___sink_ACancel_earlyValid_T_3 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__state_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__dc_valid)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__state_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_valid)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___readys_T 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_valid) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__dc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_9 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__state))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_last)
                ? 0U : 2U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__state));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__xmit 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_last) 
           | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_9 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last)
                ? 0U : 2U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__xmit 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last) 
           | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_21 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___sink_ACancel_earlyValid_T_3 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__state_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__state_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_valid)));
    ysyxSoCFull__DOT__fpga__DOT__err__DOT___readys_T 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_valid) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last) 
           | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_11 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state))
            ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_1))
                ? 0U : 3U) : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state))
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last)
                                   ? 0U : 3U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free_sel 
        = ((~ (((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_5) 
                << 1U) | (0x1e0U & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free_sel 
        = ((~ (((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_5) 
                << 1U) | (0x1e0U & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free_sel 
        = ((~ (((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_5) 
                << 1U) | (0x1e0U & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_last) 
           | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_11 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__state))
            ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_1))
                ? 0U : 3U) : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__state))
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_last)
                                   ? 0U : 3U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free_sel 
        = ((~ (((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_5) 
                << 1U) | (0x1e0U & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free_sel 
        = ((~ (((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_5) 
                << 1U) | (0x1e0U & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free_sel 
        = ((~ (((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_5) 
                << 1U) | (0x1e0U & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free_sel 
        = ((~ (((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_5) 
                << 1U) | (0x1e0U & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free_sel 
        = ((~ (((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_5) 
                << 1U) | (0x1e0U & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free_sel 
        = ((~ (((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_5) 
                << 1U) | (0x1e0U & ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free_sel 
        = ((~ (((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_5) 
                << 1U) | (0x1e0U & ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free_sel 
        = ((~ (((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_5) 
                << 1U) | (0x1e0U & ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free_sel 
        = ((~ (((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_5) 
                << 1U) | (0x1e0U & ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free_sel 
        = ((~ (((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_5) 
                << 1U) | (0x1e0U & ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free_sel 
        = ((~ (((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_5) 
                << 1U) | (0x1e0U & ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free_sel 
        = ((~ (((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_5) 
                << 1U) | (0x1e0U & ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free_sel 
        = ((~ (((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_5) 
                << 1U) | (0x1e0U & ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___out_bits_addr_T_12 
        = ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__addr_1) 
           | (7U & (~ (0x3ffU & ((IData)(7U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_size))))));
    ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_12 
        = (0xffU & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__addr_1 
                     >> 3U) | (0xfeU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__addr_1 
                                        >> 2U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_1 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_id)
                  ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__full))
                  : (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__full))));
    ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_8 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len_1) 
           | (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len_1) 
                       >> 1U)));
    ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_14 
        = (0xffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len_1)) 
                    | (0xfeU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len_1)) 
                                << 1U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_9 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_id)
                  ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__full))
                  : (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__full))));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)
            ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)
            ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_address_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_param 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_param)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_param 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_param)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_size)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_size)
                  : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475 
        = (IData)((6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471 
        = (IData)((6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471 
        = (IData)((6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2469 
        = (IData)((6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2469 
        = (IData)((6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335 
        = (IData)((6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_opcode)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__last_1 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__count_1) 
                  == (1U & (~ (0xffU & (((IData)(7U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                                        >> 2U))))) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611 
        = (IData)((6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2607 
        = (IData)((6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607 
        = (IData)((6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2610 
        = (IData)((6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2610 
        = (IData)((6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2335 
        = (IData)((6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_opcode)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__last_1 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__count_1) 
                  == (1U & (~ (0xffffU & (((IData)(7U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                                          >> 2U))))) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__stall 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__c_first) 
           & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_release)) 
                 | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__stall 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__c_first) 
           & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_release)) 
                 | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_source 
        = ((7U == (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_4))
            ? 0U : ((6U == (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_4))
                     ? 0U : ((5U == (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_4))
                              ? 0U : ((4U == (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_4))
                                       ? 0U : ((3U 
                                                == (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_4))
                                                ? 0U
                                                : (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_32))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source 
        = ((7U == (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_4))
            ? 0U : ((6U == (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_4))
                     ? 0U : ((5U == (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_4))
                              ? 0U : ((4U == (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_4))
                                       ? 0U : ((3U 
                                                == (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_4))
                                                ? 0U
                                                : (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_32))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__stall 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__d_first) 
           & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_grant)) 
                 | (0U != vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__stall 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__d_first) 
           & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_grant)) 
                 | (0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__enable_0 
        = (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__count) 
                    & (~ (0xffU & (((IData)(7U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                   >> 2U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__saved_size)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__enable_0 
        = (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__count) 
                    & (~ (0xffffU & (((IData)(7U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                     >> 2U))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__saved_size)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size));
    if ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_42 = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_42 = 2U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_42 
            = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                ? 1U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                         ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                  ? 1U : 0U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_42 
            = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                ? 1U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                         ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                  ? 1U : 0U)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__last 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__count) 
                  == (1U & (~ (0xffU & (((IData)(7U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                        >> 2U))))) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode) 
                    >> 2U)));
    if ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_42 = 2U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___GEN_42 = 2U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_42 
            = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                ? 1U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                         ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                  ? 1U : 0U)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___GEN_42 
            = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                ? 1U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                         ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                  ? 1U : 0U)));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__last 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__count) 
                  == (1U & (~ (0xffffU & (((IData)(7U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                          >> 2U))))) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode) 
                    >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass)
            ? 0U : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                     ? ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                               >> 0x18U)) | ((4U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                               >> 0x10U)) 
                                             | ((2U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                    >> 8U)) 
                                                | (1U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                     : (((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                 << 3U) | (0xfffffff8U 
                                           & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                               << 2U) 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                 << 3U))))) 
                         | (4U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                   | (IData)((2U == 
                                              (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                  << 2U))) | ((2U & 
                                               (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
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
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))))))));
    VL_EXTEND_WQ(65,64, __Vtemp2662, (0x80000000ULL 
                                      ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address));
    VL_EXTEND_WQ(65,64, __Vtemp2666, (0x1000ULL ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address));
    VL_EXTEND_WQ(65,64, __Vtemp2670, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1 
        = (((((0U == (((0x80000000U & __Vtemp2662[0U]) 
                       | __Vtemp2662[1U]) | (1U & __Vtemp2662[2U]))) 
              | (0U == (((0xfffff000U & __Vtemp2666[0U]) 
                         | __Vtemp2666[1U]) | (1U & 
                                               __Vtemp2666[2U])))) 
             & ((~ ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_1)) 
                    | (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_1)))) 
                | (0U == (0x80000000U & __Vtemp2670[0U]))))
             ? (0xfffffffffffff000ULL & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address)
             : 0x1000ULL) | (QData)((IData)((0xfffU 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass)
            ? 0U : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                     ? ((8U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                               >> 0x18U)) | ((4U & 
                                              (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                               >> 0x10U)) 
                                             | ((2U 
                                                 & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                                    >> 8U)) 
                                                | (1U 
                                                   & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
                     : (((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                 << 3U) | (0xfffffff8U 
                                           & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                               << 2U) 
                                              & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                                                 << 3U))))) 
                         | (4U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                                   | (IData)((2U == 
                                              (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))) 
                                  << 2U))) | ((2U & 
                                               (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
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
                                                                & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)))))))));
    VL_EXTEND_WQ(65,64, __Vtemp2674, (0x80000000ULL 
                                      ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_address));
    VL_EXTEND_WQ(65,64, __Vtemp2678, (0x40000000ULL 
                                      ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_address));
    VL_EXTEND_WQ(65,64, __Vtemp2682, (0x1000ULL ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_address));
    VL_EXTEND_WQ(65,64, __Vtemp2686, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_address);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1 
        = ((((((0U == (((0x80000000U & __Vtemp2674[0U]) 
                        | __Vtemp2674[1U]) | (1U & 
                                              __Vtemp2674[2U]))) 
               | (0U == (((0xc0000000U & __Vtemp2678[0U]) 
                          | __Vtemp2678[1U]) | (1U 
                                                & __Vtemp2678[2U])))) 
              | (0U == (((0xfffff000U & __Vtemp2682[0U]) 
                         | __Vtemp2682[1U]) | (1U & 
                                               __Vtemp2682[2U])))) 
             & ((~ ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_1)) 
                    | (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_1)))) 
                | (0U == (0xc0000000U & __Vtemp2686[0U]))))
             ? (0xfffffffffffff000ULL & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_address)
             : 0x1000ULL) | (QData)((IData)((0xfffU 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_address)))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_pwrite) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we 
            = ((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_psel)) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_penable)) 
               & 1U);
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re 
        = ((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_psel)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_penable)) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_pwrite)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_0_penable 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_penable));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_0_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_psel));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_5 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_2) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_2) 
                       << 2U)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_5 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_2) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_2) 
                       << 2U)));
    ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_5 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_2) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_2) 
                       << 2U)));
    ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_5 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_2) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_2) 
                       << 2U)));
    VL_SHIFTR_WWI(512,512,10, __Vtemp2688, vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp2688[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp2688[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp2688[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp2688[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp2688[4U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp2688[5U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp2688[6U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp2688[7U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp2688[8U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp2688[9U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp2688[0xaU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp2688[0xbU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp2688[0xcU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp2688[0xdU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp2688[0xeU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp2688[0xfU];
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__dc_bits_param;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__dc_bits_param;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_47 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_source
            [0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_50 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_size
            [0U];
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_param = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_param = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_47 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_50 = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem_R0_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__in_arready) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__empty)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___T_14 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__in_arready) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__empty)));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__muxStateEarly_0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_bits_param;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_bits_param;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_47 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source
            [0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_50 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_size
            [0U];
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_param = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_47 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_50 = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_in_d_bits_corrupt 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_d_corrupt));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_5 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_2) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_2) 
                       << 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_3 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_1) 
           | (0x3fU & ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_1) 
                       >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_6 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_3) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_3) 
                       << 2U)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___GEN_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___T_1) 
           | ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__full)) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__w_full))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__w_full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__extract_io_i_ready) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__xmit))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__extract_io_i_ready) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__xmit))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free_sel)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11 
        = (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_8 
           | (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_8 
              << 8U));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11 
        = (ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_8 
           | (ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_8 
              << 8U));
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__beatsLeft))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_21;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_21;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___sink_ACancel_earlyValid_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___sink_ACancel_earlyValid_T_3;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___readys_T_3 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___readys_T) 
           | (2U & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___readys_T) 
                    << 1U)));
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__beatsLeft))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_21;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_21;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___sink_ACancel_earlyValid_T_3;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___sink_ACancel_earlyValid_T_3;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___readys_T_3 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__err__DOT___readys_T) 
           | (2U & ((IData)(ysyxSoCFull__DOT__fpga__DOT__err__DOT___readys_T) 
                    << 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_15 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_12) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_12) 
                       << 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_out_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__maybe_full) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_10 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_8) 
           | (0x3fU & ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_8) 
                       >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_17 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_14) 
           | (0xfcU & ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_14) 
                       << 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_out_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag_auto_out_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_9));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_last_1 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_count_1) 
                  == (1U & (~ (0xffU & (((IData)(7U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size)) 
                                        >> 2U))))) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335 
        = (IData)((6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor_io_in_c_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__last_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_in_c_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__last_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_last_1 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_count_1) 
                  == (1U & (~ (0xffU & (((IData)(7U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size)) 
                                        >> 2U))))) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2335 
        = (IData)((6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor_io_in_c_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__last_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_in_c_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__last_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__bundleOut_0_a_bits_data_masked_enable_0 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__enable_0) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__bundleOut_0_a_bits_data_rdata_written_once))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__bundleOut_0_a_bits_mask_masked_enable_0 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__enable_0) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__bundleOut_0_a_bits_mask_rdata_written_once))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__bundleOut_0_a_bits_data_masked_enable_0 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__enable_0) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__bundleOut_0_a_bits_data_rdata_written_once))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__bundleOut_0_a_bits_mask_masked_enable_0 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__enable_0) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__bundleOut_0_a_bits_mask_rdata_written_once))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_282 
        = ((0ULL == (0x1fffff000ULL & (QData)((IData)(
                                                      (0x1000U 
                                                       ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1)))))) 
           | (0ULL == (0x180000000ULL & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_acc 
        = (1U & ((2U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                           >> 1U) & (~ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1 
                                                >> 1U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_acc_1 
        = (1U & ((2U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                           >> 1U) & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1 
                                             >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass)
            ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_294 
        = (((0ULL == (0x1fffff000ULL & (QData)((IData)(
                                                       (0x1000U 
                                                        ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1)))))) 
            | (0ULL == (0x1c0000000ULL & (QData)((IData)(
                                                         (0x40000000U 
                                                          ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1))))))) 
           | (0ULL == (0x180000000ULL & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1)))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size))) 
                           >> 1U) & (~ (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1 
                                                >> 1U)))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_acc_1 
        = (1U & ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size))) 
                           >> 1U) & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1 
                                             >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass)
            ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___extract_io_i_bits_address_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
            & (0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr))) 
           & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                 >> 7U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
            & (2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr))) 
           & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                 >> 7U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
            & (6U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr))) 
           & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                 >> 7U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
            & (0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr))) 
           & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                 >> 7U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
            & (5U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr))) 
           & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                 >> 7U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__ren 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_0_psel) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_pwrite)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_8 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_5) 
           | (0xf0U & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_5) 
                       << 4U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_8 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_5) 
           | (0xf0U & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_5) 
                       << 4U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_8 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_5) 
           | (0xf0U & ((IData)(ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_5) 
                       << 4U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_8 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_5) 
           | (0xf0U & ((IData)(ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_5) 
                       << 4U)));
    __Vtemp2691[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2691[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2691[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2691[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2691[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2691[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2691[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2691[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2691[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2691[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2691[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2691[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2691[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2691[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2691[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2691[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2692, __Vtemp2691);
    __Vtemp2695[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2695[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2695[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2695[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2695[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2695[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2695[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2695[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2695[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2695[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2695[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2695[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2695[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2695[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2695[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2695[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2696, __Vtemp2695);
    __Vtemp2699[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2699[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2699[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2699[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2699[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2699[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2699[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2699[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2699[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2699[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2699[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2699[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2699[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2699[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2699[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2699[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2700, __Vtemp2699);
    __Vtemp2703[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2703[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2703[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2703[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2703[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2703[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2703[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2703[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2703[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2703[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2703[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2703[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2703[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2703[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2703[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2703[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2704, __Vtemp2703);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & __Vtemp2692[0U])) ? 2U : ((4U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp2696[0U]))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp2700[0U]))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & __Vtemp2704[0U]))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___GEN_41 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___T_14) 
           | ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__full)) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__r_full))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__r_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___maxSupported1_T 
        = (0xffU & (((0x7fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_3) 
                                >> 1U) | (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_3) 
                                                >> 5U)))) 
                     | (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_6) 
                           | (0xf0U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_6) 
                                       << 4U))))) & 
                    (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_5) 
                        | (0xf0U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_5) 
                                    << 4U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam_io_key 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam_io_key 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free_sel 
        = ((~ ((QData)((IData)((ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11 
                                | (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11 
                                   << 0x10U)))) << 1U)) 
           & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free_sel 
        = ((~ ((QData)((IData)((ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11 
                                | (ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11 
                                   << 0x10U)))) << 1U)) 
           & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__earlyWinner_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___readys_T_3)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__earlyWinner_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___readys_T_3)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_key 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_key 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_key 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_key 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_key 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_key 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___io_key_T))))));
}
