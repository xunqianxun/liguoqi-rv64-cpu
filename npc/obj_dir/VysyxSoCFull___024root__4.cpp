// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

extern const VlWide<16>/*511:0*/ VysyxSoCFull__ConstPool__CONST_0b2d9f06_0;
extern const VlWide<16>/*511:0*/ VysyxSoCFull__ConstPool__CONST_3ad9c2be_0;

VL_INLINE_OPT void VysyxSoCFull___024root___sequent__TOP__25(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___sequent__TOP__25\n"); );
    // Variables
    VlWide<16>/*511:0*/ __Vtemp2056;
    VlWide<16>/*511:0*/ __Vtemp2057;
    VlWide<16>/*511:0*/ __Vtemp2060;
    VlWide<16>/*511:0*/ __Vtemp2061;
    VlWide<16>/*511:0*/ __Vtemp2064;
    VlWide<16>/*511:0*/ __Vtemp2065;
    VlWide<16>/*511:0*/ __Vtemp2068;
    VlWide<16>/*511:0*/ __Vtemp2069;
    VlWide<16>/*511:0*/ __Vtemp2072;
    VlWide<16>/*511:0*/ __Vtemp2073;
    VlWide<16>/*511:0*/ __Vtemp2076;
    VlWide<16>/*511:0*/ __Vtemp2077;
    VlWide<16>/*511:0*/ __Vtemp2080;
    VlWide<16>/*511:0*/ __Vtemp2081;
    VlWide<16>/*511:0*/ __Vtemp2084;
    VlWide<16>/*511:0*/ __Vtemp2085;
    VlWide<16>/*511:0*/ __Vtemp2086;
    VlWide<16>/*511:0*/ __Vtemp2089;
    VlWide<16>/*511:0*/ __Vtemp2090;
    VlWide<16>/*511:0*/ __Vtemp2091;
    VlWide<16>/*511:0*/ __Vtemp2094;
    VlWide<16>/*511:0*/ __Vtemp2095;
    VlWide<4>/*127:0*/ __Vtemp2096;
    VlWide<4>/*127:0*/ __Vtemp2097;
    VlWide<4>/*127:0*/ __Vtemp2101;
    VlWide<4>/*127:0*/ __Vtemp2102;
    VlWide<4>/*127:0*/ __Vtemp2106;
    VlWide<4>/*127:0*/ __Vtemp2107;
    VlWide<4>/*127:0*/ __Vtemp2108;
    VlWide<4>/*127:0*/ __Vtemp2109;
    VlWide<16>/*511:0*/ __Vtemp2110;
    VlWide<16>/*511:0*/ __Vtemp2113;
    VlWide<16>/*511:0*/ __Vtemp2114;
    VlWide<16>/*511:0*/ __Vtemp2115;
    VlWide<16>/*511:0*/ __Vtemp2118;
    VlWide<16>/*511:0*/ __Vtemp2119;
    VlWide<4>/*127:0*/ __Vtemp2120;
    VlWide<4>/*127:0*/ __Vtemp2121;
    VlWide<4>/*127:0*/ __Vtemp2125;
    VlWide<4>/*127:0*/ __Vtemp2126;
    VlWide<4>/*127:0*/ __Vtemp2130;
    VlWide<4>/*127:0*/ __Vtemp2131;
    VlWide<4>/*127:0*/ __Vtemp2135;
    VlWide<4>/*127:0*/ __Vtemp2136;
    VlWide<4>/*127:0*/ __Vtemp2140;
    VlWide<4>/*127:0*/ __Vtemp2141;
    VlWide<4>/*127:0*/ __Vtemp2145;
    VlWide<4>/*127:0*/ __Vtemp2146;
    VlWide<4>/*127:0*/ __Vtemp2150;
    VlWide<4>/*127:0*/ __Vtemp2151;
    VlWide<4>/*127:0*/ __Vtemp2152;
    VlWide<4>/*127:0*/ __Vtemp2153;
    VlWide<16>/*511:0*/ __Vtemp2156;
    VlWide<16>/*511:0*/ __Vtemp2157;
    VlWide<16>/*511:0*/ __Vtemp2160;
    VlWide<16>/*511:0*/ __Vtemp2161;
    VlWide<16>/*511:0*/ __Vtemp2164;
    VlWide<16>/*511:0*/ __Vtemp2165;
    VlWide<16>/*511:0*/ __Vtemp2168;
    VlWide<16>/*511:0*/ __Vtemp2169;
    VlWide<16>/*511:0*/ __Vtemp2172;
    VlWide<16>/*511:0*/ __Vtemp2173;
    VlWide<16>/*511:0*/ __Vtemp2176;
    VlWide<16>/*511:0*/ __Vtemp2177;
    VlWide<16>/*511:0*/ __Vtemp2180;
    VlWide<16>/*511:0*/ __Vtemp2181;
    VlWide<16>/*511:0*/ __Vtemp2184;
    VlWide<16>/*511:0*/ __Vtemp2185;
    VlWide<16>/*511:0*/ __Vtemp2186;
    VlWide<16>/*511:0*/ __Vtemp2189;
    VlWide<16>/*511:0*/ __Vtemp2190;
    VlWide<16>/*511:0*/ __Vtemp2191;
    VlWide<16>/*511:0*/ __Vtemp2194;
    VlWide<16>/*511:0*/ __Vtemp2195;
    VlWide<4>/*127:0*/ __Vtemp2196;
    VlWide<4>/*127:0*/ __Vtemp2197;
    VlWide<4>/*127:0*/ __Vtemp2201;
    VlWide<4>/*127:0*/ __Vtemp2202;
    VlWide<4>/*127:0*/ __Vtemp2206;
    VlWide<4>/*127:0*/ __Vtemp2207;
    VlWide<4>/*127:0*/ __Vtemp2208;
    VlWide<4>/*127:0*/ __Vtemp2209;
    VlWide<16>/*511:0*/ __Vtemp2210;
    VlWide<16>/*511:0*/ __Vtemp2213;
    VlWide<16>/*511:0*/ __Vtemp2214;
    VlWide<16>/*511:0*/ __Vtemp2215;
    VlWide<16>/*511:0*/ __Vtemp2218;
    VlWide<16>/*511:0*/ __Vtemp2219;
    VlWide<4>/*127:0*/ __Vtemp2220;
    VlWide<4>/*127:0*/ __Vtemp2221;
    VlWide<4>/*127:0*/ __Vtemp2225;
    VlWide<4>/*127:0*/ __Vtemp2226;
    VlWide<4>/*127:0*/ __Vtemp2230;
    VlWide<4>/*127:0*/ __Vtemp2231;
    VlWide<4>/*127:0*/ __Vtemp2235;
    VlWide<4>/*127:0*/ __Vtemp2236;
    VlWide<4>/*127:0*/ __Vtemp2240;
    VlWide<4>/*127:0*/ __Vtemp2241;
    VlWide<4>/*127:0*/ __Vtemp2245;
    VlWide<4>/*127:0*/ __Vtemp2246;
    VlWide<4>/*127:0*/ __Vtemp2250;
    VlWide<4>/*127:0*/ __Vtemp2251;
    VlWide<4>/*127:0*/ __Vtemp2252;
    VlWide<4>/*127:0*/ __Vtemp2253;
    VlWide<16>/*511:0*/ __Vtemp2256;
    VlWide<16>/*511:0*/ __Vtemp2257;
    VlWide<16>/*511:0*/ __Vtemp2260;
    VlWide<16>/*511:0*/ __Vtemp2261;
    VlWide<16>/*511:0*/ __Vtemp2264;
    VlWide<16>/*511:0*/ __Vtemp2265;
    VlWide<16>/*511:0*/ __Vtemp2268;
    VlWide<16>/*511:0*/ __Vtemp2269;
    VlWide<16>/*511:0*/ __Vtemp2272;
    VlWide<16>/*511:0*/ __Vtemp2273;
    VlWide<16>/*511:0*/ __Vtemp2276;
    VlWide<16>/*511:0*/ __Vtemp2277;
    VlWide<16>/*511:0*/ __Vtemp2280;
    VlWide<16>/*511:0*/ __Vtemp2281;
    VlWide<16>/*511:0*/ __Vtemp2284;
    VlWide<16>/*511:0*/ __Vtemp2285;
    // Body
    __Vtemp2056[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2056[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2056[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2056[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2056[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2056[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2056[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2056[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2056[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2056[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2056[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2056[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2056[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2056[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2056[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2056[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2057, __Vtemp2056);
    __Vtemp2060[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2060[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2060[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2060[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2060[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2060[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2060[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2060[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2060[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2060[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2060[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2060[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2060[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2060[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2060[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2060[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2061, __Vtemp2060);
    __Vtemp2064[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2064[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2064[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2064[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2064[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2064[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2064[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2064[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2064[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2064[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2064[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2064[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2064[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2064[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2064[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2064[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2065, __Vtemp2064);
    __Vtemp2068[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2068[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2068[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2068[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2068[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2068[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2068[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2068[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2068[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2068[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2068[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2068[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2068[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2068[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2068[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2068[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2069, __Vtemp2068);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & __Vtemp2057[0U]))
                                  ? 4U : ((6U == (7U 
                                                  & __Vtemp2061[0U]))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & __Vtemp2065[0U]))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              __Vtemp2069[0U]))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:151:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp2072[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2072[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2072[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2072[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2072[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2072[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2072[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2072[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2072[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2072[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2072[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2072[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2072[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2072[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2072[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2072[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2073, __Vtemp2072);
    __Vtemp2076[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2076[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2076[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2076[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2076[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2076[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2076[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2076[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2076[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2076[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2076[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2076[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2076[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2076[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2076[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2076[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2077, __Vtemp2076);
    __Vtemp2080[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2080[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2080[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2080[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2080[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2080[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2080[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2080[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2080[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2080[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2080[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2080[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2080[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2080[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2080[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2080[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2081, __Vtemp2080);
    __Vtemp2084[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2084[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2084[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2084[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2084[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2084[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2084[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2084[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2084[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2084[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2084[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2084[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2084[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2084[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2084[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2084[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2085, __Vtemp2084);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & __Vtemp2073[0U]))
                                  ? 4U : ((6U == (7U 
                                                  & __Vtemp2077[0U]))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & __Vtemp2081[0U]))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              __Vtemp2085[0U]))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:56774: Assertion failed in %NysyxSoCFull.asic.chipMaster.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 56774, "");
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp2086, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                   << 2U));
    __Vtemp2089[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & __Vtemp2086[1U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                              & __Vtemp2086[0U]) >> 1U)));
    __Vtemp2089[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & __Vtemp2086[2U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                              & __Vtemp2086[1U]) >> 1U)));
    __Vtemp2089[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & __Vtemp2086[3U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                              & __Vtemp2086[2U]) >> 1U)));
    __Vtemp2089[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & __Vtemp2086[4U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                              & __Vtemp2086[3U]) >> 1U)));
    __Vtemp2089[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & __Vtemp2086[5U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                              & __Vtemp2086[4U]) >> 1U)));
    __Vtemp2089[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & __Vtemp2086[6U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                              & __Vtemp2086[5U]) >> 1U)));
    __Vtemp2089[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & __Vtemp2086[7U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                              & __Vtemp2086[6U]) >> 1U)));
    __Vtemp2089[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & __Vtemp2086[8U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                              & __Vtemp2086[7U]) >> 1U)));
    __Vtemp2089[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & __Vtemp2086[9U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                              & __Vtemp2086[8U]) >> 1U)));
    __Vtemp2089[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & __Vtemp2086[0xaU]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                              & __Vtemp2086[9U]) >> 1U)));
    __Vtemp2089[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & __Vtemp2086[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & __Vtemp2086[0xaU]) 
                                          >> 1U)));
    __Vtemp2089[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & __Vtemp2086[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & __Vtemp2086[0xbU]) 
                                          >> 1U)));
    __Vtemp2089[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & __Vtemp2086[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & __Vtemp2086[0xcU]) 
                                          >> 1U)));
    __Vtemp2089[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & __Vtemp2086[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & __Vtemp2086[0xdU]) 
                                          >> 1U)));
    __Vtemp2089[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & __Vtemp2086[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & __Vtemp2086[0xeU]) 
                                          >> 1U)));
    __Vtemp2089[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & __Vtemp2086[0xfU]) >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2090, __Vtemp2089);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size) 
                            == (0xfU & __Vtemp2090[0U])) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:151:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp2091, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                   << 2U));
    __Vtemp2094[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & __Vtemp2091[1U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                              & __Vtemp2091[0U]) >> 1U)));
    __Vtemp2094[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & __Vtemp2091[2U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                              & __Vtemp2091[1U]) >> 1U)));
    __Vtemp2094[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & __Vtemp2091[3U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                              & __Vtemp2091[2U]) >> 1U)));
    __Vtemp2094[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & __Vtemp2091[4U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                              & __Vtemp2091[3U]) >> 1U)));
    __Vtemp2094[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & __Vtemp2091[5U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                              & __Vtemp2091[4U]) >> 1U)));
    __Vtemp2094[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & __Vtemp2091[6U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                              & __Vtemp2091[5U]) >> 1U)));
    __Vtemp2094[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & __Vtemp2091[7U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                              & __Vtemp2091[6U]) >> 1U)));
    __Vtemp2094[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & __Vtemp2091[8U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                              & __Vtemp2091[7U]) >> 1U)));
    __Vtemp2094[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & __Vtemp2091[9U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                              & __Vtemp2091[8U]) >> 1U)));
    __Vtemp2094[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & __Vtemp2091[0xaU]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                              & __Vtemp2091[9U]) >> 1U)));
    __Vtemp2094[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & __Vtemp2091[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & __Vtemp2091[0xaU]) 
                                          >> 1U)));
    __Vtemp2094[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & __Vtemp2091[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & __Vtemp2091[0xbU]) 
                                          >> 1U)));
    __Vtemp2094[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & __Vtemp2091[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & __Vtemp2091[0xcU]) 
                                          >> 1U)));
    __Vtemp2094[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & __Vtemp2091[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & __Vtemp2091[0xdU]) 
                                          >> 1U)));
    __Vtemp2094[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & __Vtemp2091[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & __Vtemp2091[0xeU]) 
                                          >> 1U)));
    __Vtemp2094[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & __Vtemp2091[0xfU]) >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2095, __Vtemp2094);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size) 
                            == (0xfU & __Vtemp2095[0U])) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:56798: Assertion failed in %NysyxSoCFull.asic.chipMaster.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 56798, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1_auto_out_a_valid)) 
                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source))) 
                      & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_enq_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1_auto_out_a_valid)) 
                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source))) 
                      & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_enq_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:56820: Assertion failed in %NysyxSoCFull.asic.chipMaster.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 56820, "");
    }
    __Vtemp2096[0U] = 1U;
    __Vtemp2096[1U] = 0U;
    __Vtemp2096[2U] = 0U;
    __Vtemp2096[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2097, __Vtemp2096, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ (((0U != ((((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                          ^ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                              ? __Vtemp2097[0U]
                                              : 0U)) 
                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                            ^ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp2097[1U]
                                                : 0U))) 
                                        | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                           ^ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                                                & (0U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                               ? __Vtemp2097[2U]
                                               : 0U))) 
                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                          ^ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                              ? __Vtemp2097[3U]
                                              : 0U)))) 
                               | (~ (IData)((0U != 
                                             (((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                              | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[3U]))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:151:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp2101[0U] = 1U;
    __Vtemp2101[1U] = 0U;
    __Vtemp2101[2U] = 0U;
    __Vtemp2101[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2102, __Vtemp2101, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ (((0U != ((((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                          ^ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                              ? __Vtemp2102[0U]
                                              : 0U)) 
                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                            ^ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp2102[1U]
                                                : 0U))) 
                                        | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                           ^ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                                                & (0U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                               ? __Vtemp2102[2U]
                                               : 0U))) 
                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                          ^ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                              ? __Vtemp2102[3U]
                                              : 0U)))) 
                               | (~ (IData)((0U != 
                                             (((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                              | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[3U]))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:56844: Assertion failed in %NysyxSoCFull.asic.chipMaster.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 56844, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight[0U] 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight[1U]) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight[2U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight[3U])))) 
                                | (0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__watchdog 
                                  < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:151:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight[0U] 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight[1U]) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight[2U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight[3U])))) 
                                | (0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__watchdog 
                                  < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:56868: Assertion failed in %NysyxSoCFull.asic.chipMaster.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 56868, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2106, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471)) 
                     & (~ ((~ __Vtemp2106[0U]) | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel re-used a source ID (connected at ChipLinkBridge.scala:151:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2107, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471)) 
                     & (~ ((~ __Vtemp2107[0U]) | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:56892: Assertion failed in %NysyxSoCFull.asic.chipMaster.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 56892, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2108, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((__Vtemp2108[0U] | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471)) 
                                               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   << 1U) 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:151:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2109, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((__Vtemp2109[0U] | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471)) 
                                               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   << 1U) 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:56916: Assertion failed in %NysyxSoCFull.asic.chipMaster.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 56916, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                      & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471)) 
                         & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:151:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                      & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471)) 
                         & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:56940: Assertion failed in %NysyxSoCFull.asic.chipMaster.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 56940, "");
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp2110, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                   << 2U));
    __Vtemp2113[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & __Vtemp2110[1U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                              & __Vtemp2110[0U]) >> 1U)));
    __Vtemp2113[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & __Vtemp2110[2U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                              & __Vtemp2110[1U]) >> 1U)));
    __Vtemp2113[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & __Vtemp2110[3U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                              & __Vtemp2110[2U]) >> 1U)));
    __Vtemp2113[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & __Vtemp2110[4U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                              & __Vtemp2110[3U]) >> 1U)));
    __Vtemp2113[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & __Vtemp2110[5U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                              & __Vtemp2110[4U]) >> 1U)));
    __Vtemp2113[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & __Vtemp2110[6U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                              & __Vtemp2110[5U]) >> 1U)));
    __Vtemp2113[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & __Vtemp2110[7U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                              & __Vtemp2110[6U]) >> 1U)));
    __Vtemp2113[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & __Vtemp2110[8U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                              & __Vtemp2110[7U]) >> 1U)));
    __Vtemp2113[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & __Vtemp2110[9U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                              & __Vtemp2110[8U]) >> 1U)));
    __Vtemp2113[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & __Vtemp2110[0xaU]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                              & __Vtemp2110[9U]) >> 1U)));
    __Vtemp2113[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & __Vtemp2110[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & __Vtemp2110[0xaU]) 
                                          >> 1U)));
    __Vtemp2113[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & __Vtemp2110[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & __Vtemp2110[0xbU]) 
                                          >> 1U)));
    __Vtemp2113[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & __Vtemp2110[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & __Vtemp2110[0xcU]) 
                                          >> 1U)));
    __Vtemp2113[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & __Vtemp2110[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & __Vtemp2110[0xdU]) 
                                          >> 1U)));
    __Vtemp2113[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & __Vtemp2110[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & __Vtemp2110[0xeU]) 
                                          >> 1U)));
    __Vtemp2113[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & __Vtemp2110[0xfU]) >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2114, __Vtemp2113);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471)) 
                            & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size) 
                            == (0xfU & __Vtemp2114[0U])) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:151:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp2115, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                   << 2U));
    __Vtemp2118[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & __Vtemp2115[1U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                              & __Vtemp2115[0U]) >> 1U)));
    __Vtemp2118[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & __Vtemp2115[2U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                              & __Vtemp2115[1U]) >> 1U)));
    __Vtemp2118[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & __Vtemp2115[3U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                              & __Vtemp2115[2U]) >> 1U)));
    __Vtemp2118[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & __Vtemp2115[4U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                              & __Vtemp2115[3U]) >> 1U)));
    __Vtemp2118[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & __Vtemp2115[5U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                              & __Vtemp2115[4U]) >> 1U)));
    __Vtemp2118[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & __Vtemp2115[6U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                              & __Vtemp2115[5U]) >> 1U)));
    __Vtemp2118[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & __Vtemp2115[7U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                              & __Vtemp2115[6U]) >> 1U)));
    __Vtemp2118[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & __Vtemp2115[8U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                              & __Vtemp2115[7U]) >> 1U)));
    __Vtemp2118[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & __Vtemp2115[9U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                              & __Vtemp2115[8U]) >> 1U)));
    __Vtemp2118[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & __Vtemp2115[0xaU]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                              & __Vtemp2115[9U]) >> 1U)));
    __Vtemp2118[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & __Vtemp2115[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & __Vtemp2115[0xaU]) 
                                          >> 1U)));
    __Vtemp2118[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & __Vtemp2115[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & __Vtemp2115[0xbU]) 
                                          >> 1U)));
    __Vtemp2118[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & __Vtemp2115[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & __Vtemp2115[0xcU]) 
                                          >> 1U)));
    __Vtemp2118[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & __Vtemp2115[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & __Vtemp2115[0xdU]) 
                                          >> 1U)));
    __Vtemp2118[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & __Vtemp2115[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & __Vtemp2115[0xeU]) 
                                          >> 1U)));
    __Vtemp2118[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & __Vtemp2115[0xfU]) >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2119, __Vtemp2118);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471)) 
                            & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size) 
                            == (0xfU & __Vtemp2119[0U])) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:56964: Assertion failed in %NysyxSoCFull.asic.chipMaster.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 56964, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid)) 
                       & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                           << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source))) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_enq_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid)) 
                       & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                           << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source))) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_enq_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:56986: Assertion failed in %NysyxSoCFull.asic.chipMaster.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 56986, "");
    }
    __Vtemp2120[0U] = 1U;
    __Vtemp2120[1U] = 0U;
    __Vtemp2120[2U] = 0U;
    __Vtemp2120[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2121, __Vtemp2120, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp2125[0U] = 1U;
    __Vtemp2125[1U] = 0U;
    __Vtemp2125[2U] = 0U;
    __Vtemp2125[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2126, __Vtemp2125, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp2130[0U] = 1U;
    __Vtemp2130[1U] = 0U;
    __Vtemp2130[2U] = 0U;
    __Vtemp2130[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2131, __Vtemp2130, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source));
    if (VL_UNLIKELY(((0U != (((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                  & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                 ? __Vtemp2121[0U] : 0U) 
                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                    & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                   ? __Vtemp2121[1U]
                                   : 0U)) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                               & (0U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                              ? __Vtemp2121[2U]
                                              : 0U)) 
                             | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                  & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                 ? __Vtemp2121[3U] : 0U))) 
                     & (~ ((0U != ((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                        ? __Vtemp2126[0U]
                                        : 0U) ^ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp2131[0U]
                                                  : 0U)) 
                                     | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                          ? __Vtemp2126[1U]
                                          : 0U) ^ (
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                                                     & (0U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                                    & (6U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                    ? 
                                                   __Vtemp2131[1U]
                                                    : 0U))) 
                                    | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                         ? __Vtemp2126[2U]
                                         : 0U) ^ ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                                                    & (0U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                                   & (6U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                   ? 
                                                  __Vtemp2131[2U]
                                                   : 0U))) 
                                   | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                        ? __Vtemp2126[3U]
                                        : 0U) ^ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp2131[3U]
                                                  : 0U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:151:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp2135[0U] = 1U;
    __Vtemp2135[1U] = 0U;
    __Vtemp2135[2U] = 0U;
    __Vtemp2135[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2136, __Vtemp2135, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp2140[0U] = 1U;
    __Vtemp2140[1U] = 0U;
    __Vtemp2140[2U] = 0U;
    __Vtemp2140[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2141, __Vtemp2140, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp2145[0U] = 1U;
    __Vtemp2145[1U] = 0U;
    __Vtemp2145[2U] = 0U;
    __Vtemp2145[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2146, __Vtemp2145, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source));
    if (VL_UNLIKELY(((0U != (((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                  & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                 ? __Vtemp2136[0U] : 0U) 
                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                    & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                   ? __Vtemp2136[1U]
                                   : 0U)) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                               & (0U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                              ? __Vtemp2136[2U]
                                              : 0U)) 
                             | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                  & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                 ? __Vtemp2136[3U] : 0U))) 
                     & (~ ((0U != ((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                        ? __Vtemp2141[0U]
                                        : 0U) ^ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp2146[0U]
                                                  : 0U)) 
                                     | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                          ? __Vtemp2141[1U]
                                          : 0U) ^ (
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                                                     & (0U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                                    & (6U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                    ? 
                                                   __Vtemp2146[1U]
                                                    : 0U))) 
                                    | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                         ? __Vtemp2141[2U]
                                         : 0U) ^ ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                                                    & (0U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                                   & (6U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                   ? 
                                                  __Vtemp2146[2U]
                                                   : 0U))) 
                                   | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2471))
                                        ? __Vtemp2141[3U]
                                        : 0U) ^ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp2146[3U]
                                                  : 0U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:57010: Assertion failed in %NysyxSoCFull.asic.chipMaster.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 57010, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1[0U] 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1[1U]) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1[2U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1[3U])))) 
                                | (0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__watchdog_1 
                                  < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:151:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1[0U] 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1[1U]) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1[2U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1[3U])))) 
                                | (0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__watchdog_1 
                                  < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:57034: Assertion failed in %NysyxSoCFull.asic.chipMaster.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 57034, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_3))) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2542)) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at ChipLinkBridge.scala:151:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_3))) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2542)) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:57058: Assertion failed in %NysyxSoCFull.asic.chipMaster.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 57058, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_valid)) 
                     & (~ (((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_84) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_2))) 
                            >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:151:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_valid)) 
                     & (~ (((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_84) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_2))) 
                            >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:57082: Assertion failed in %NysyxSoCFull.asic.chipMaster.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 57082, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:58885: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 58885, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size))) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size))) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:58909: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 58909, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:58933: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 58933, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:58957: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 58957, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:58981: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 58981, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59005: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59005, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59029: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59029, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59053: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59053, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size))) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size))) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59077: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59077, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59101: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59101, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59125: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59125, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59149: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59149, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59173: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59173, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59197: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59197, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59221: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59221, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59245: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59245, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59269: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59269, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59293: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59293, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59317: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59317, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59341: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59341, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59365: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59365, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59389: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59389, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59413: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59413, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59437: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59437, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59461: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59461, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59485: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59485, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59509: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59509, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59533: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59533, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59557: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59557, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59581: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59581, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59605: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59605, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59629: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59629, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59653: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59653, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59677: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59677, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59701: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59701, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59725: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59725, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59749: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59749, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59773: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59773, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59797: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59797, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59821: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59821, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59845: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59845, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59869: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59869, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59893: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59893, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59917: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59917, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59941: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59941, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59965: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59965, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:59989: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 59989, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60013: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60013, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60037: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60037, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60061: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60061, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60085: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60085, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60109: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60109, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60133: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60133, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60157: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60157, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60181: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60181, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60205: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60205, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60229: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60229, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60253: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60253, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60277: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60277, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60301: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60301, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60325: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60325, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60349: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60349, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60373: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60373, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60397: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60397, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60421: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60421, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60445: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60445, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60469: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60469, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60493: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60493, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60517: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60517, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60541: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60541, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60565: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60565, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60589: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60589, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60613: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60613, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60637: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60637, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60661: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60661, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60685: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60685, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60709: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60709, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60733: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60733, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60757: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60757, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60781: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60781, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60805: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60805, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                  | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                  | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60829: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60829, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                            & ((0ULL == (0x1fffff000ULL 
                                         & (QData)((IData)(
                                                           (0x1000U 
                                                            ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                               | (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                            & ((0ULL == (0x1fffff000ULL 
                                         & (QData)((IData)(
                                                           (0x1000U 
                                                            ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                               | (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60853: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60853, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid source ID (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60877: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60877, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60901: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60901, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60925: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60925, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid report param (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60949: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60949, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                  | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                  | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60973: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60973, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                            & ((0ULL == (0x1fffff000ULL 
                                         & (QData)((IData)(
                                                           (0x1000U 
                                                            ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                               | (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                            & ((0ULL == (0x1fffff000ULL 
                                         & (QData)((IData)(
                                                           (0x1000U 
                                                            ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                               | (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:60997: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 60997, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61021: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61021, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61045: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61045, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61069: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61069, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid report param (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61093: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61093, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61117: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61117, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61141: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61141, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61165: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61165, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61189: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61189, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61213: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61213, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61237: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61237, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61261: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61261, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61285: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61285, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61309: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61309, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61333: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61333, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61357: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61357, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61381: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61381, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_valid) 
                     & (~ ((1U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channels carries invalid sink ID (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_valid) 
                     & (~ ((1U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61405: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61405, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61429: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61429, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61453: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61453, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61477: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61477, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61501: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61501, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61525: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61525, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61549: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61549, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61573: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61573, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61597: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61597, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61621: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61621, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61645: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61645, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61669: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61669, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61693: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61693, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61717: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61717, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61741: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61741, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__address_2) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__address_2) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61765: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61765, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2150, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ __Vtemp2150[0U]) | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2151, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ __Vtemp2151[0U]) | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61789: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61789, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2152, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((__Vtemp2152[0U] | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                                                & (0U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2153, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((__Vtemp2153[0U] | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                                                & (0U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61813: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61813, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_42)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_42))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_42)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_42))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61837: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61837, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61861: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61861, "");
    }
    __Vtemp2156[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2156[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2156[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2156[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2156[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2156[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2156[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2156[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2156[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2156[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2156[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2156[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2156[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2156[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2156[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2156[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2157, __Vtemp2156);
    __Vtemp2160[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2160[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2160[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2160[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2160[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2160[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2160[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2160[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2160[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2160[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2160[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2160[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2160[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2160[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2160[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2160[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2161, __Vtemp2160);
    __Vtemp2164[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2164[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2164[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2164[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2164[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2164[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2164[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2164[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2164[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2164[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2164[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2164[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2164[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2164[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2164[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2164[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2165, __Vtemp2164);
    __Vtemp2168[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2168[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2168[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2168[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2168[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2168[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2168[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2168[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2168[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2168[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2168[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2168[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2168[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2168[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2168[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2168[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2169, __Vtemp2168);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode) 
                             == ((7U == (7U & __Vtemp2157[0U]))
                                  ? 4U : ((6U == (7U 
                                                  & __Vtemp2161[0U]))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode) 
                               == ((7U == (7U & __Vtemp2165[0U]))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              __Vtemp2169[0U]))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp2172[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2172[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2172[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2172[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2172[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2172[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2172[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2172[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2172[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2172[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2172[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2172[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2172[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2172[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2172[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2172[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2173, __Vtemp2172);
    __Vtemp2176[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2176[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2176[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2176[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2176[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2176[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2176[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2176[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2176[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2176[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2176[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2176[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2176[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2176[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2176[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2176[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2177, __Vtemp2176);
    __Vtemp2180[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2180[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2180[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2180[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2180[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2180[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2180[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2180[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2180[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2180[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2180[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2180[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2180[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2180[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2180[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2180[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2181, __Vtemp2180);
    __Vtemp2184[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2184[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2184[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2184[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2184[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2184[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2184[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2184[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2184[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2184[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2184[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2184[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2184[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2184[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2184[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2184[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2185, __Vtemp2184);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode) 
                             == ((7U == (7U & __Vtemp2173[0U]))
                                  ? 4U : ((6U == (7U 
                                                  & __Vtemp2177[0U]))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode) 
                               == ((7U == (7U & __Vtemp2181[0U]))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              __Vtemp2185[0U]))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61885: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61885, "");
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp2186, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                   << 2U));
    __Vtemp2189[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & __Vtemp2186[1U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                              & __Vtemp2186[0U]) >> 1U)));
    __Vtemp2189[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & __Vtemp2186[2U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                              & __Vtemp2186[1U]) >> 1U)));
    __Vtemp2189[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & __Vtemp2186[3U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                              & __Vtemp2186[2U]) >> 1U)));
    __Vtemp2189[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & __Vtemp2186[4U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                              & __Vtemp2186[3U]) >> 1U)));
    __Vtemp2189[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & __Vtemp2186[5U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                              & __Vtemp2186[4U]) >> 1U)));
    __Vtemp2189[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & __Vtemp2186[6U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                              & __Vtemp2186[5U]) >> 1U)));
    __Vtemp2189[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & __Vtemp2186[7U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                              & __Vtemp2186[6U]) >> 1U)));
    __Vtemp2189[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & __Vtemp2186[8U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                              & __Vtemp2186[7U]) >> 1U)));
    __Vtemp2189[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & __Vtemp2186[9U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                              & __Vtemp2186[8U]) >> 1U)));
    __Vtemp2189[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & __Vtemp2186[0xaU]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                              & __Vtemp2186[9U]) >> 1U)));
    __Vtemp2189[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & __Vtemp2186[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & __Vtemp2186[0xaU]) 
                                          >> 1U)));
    __Vtemp2189[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & __Vtemp2186[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & __Vtemp2186[0xbU]) 
                                          >> 1U)));
    __Vtemp2189[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & __Vtemp2186[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & __Vtemp2186[0xcU]) 
                                          >> 1U)));
    __Vtemp2189[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & __Vtemp2186[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & __Vtemp2186[0xdU]) 
                                          >> 1U)));
    __Vtemp2189[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & __Vtemp2186[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & __Vtemp2186[0xeU]) 
                                          >> 1U)));
    __Vtemp2189[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & __Vtemp2186[0xfU]) >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2190, __Vtemp2189);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size) 
                            == (0xfU & __Vtemp2190[0U])) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp2191, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                   << 2U));
    __Vtemp2194[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & __Vtemp2191[1U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                              & __Vtemp2191[0U]) >> 1U)));
    __Vtemp2194[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & __Vtemp2191[2U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                              & __Vtemp2191[1U]) >> 1U)));
    __Vtemp2194[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & __Vtemp2191[3U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                              & __Vtemp2191[2U]) >> 1U)));
    __Vtemp2194[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & __Vtemp2191[4U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                              & __Vtemp2191[3U]) >> 1U)));
    __Vtemp2194[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & __Vtemp2191[5U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                              & __Vtemp2191[4U]) >> 1U)));
    __Vtemp2194[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & __Vtemp2191[6U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                              & __Vtemp2191[5U]) >> 1U)));
    __Vtemp2194[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & __Vtemp2191[7U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                              & __Vtemp2191[6U]) >> 1U)));
    __Vtemp2194[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & __Vtemp2191[8U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                              & __Vtemp2191[7U]) >> 1U)));
    __Vtemp2194[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & __Vtemp2191[9U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                              & __Vtemp2191[8U]) >> 1U)));
    __Vtemp2194[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & __Vtemp2191[0xaU]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                              & __Vtemp2191[9U]) >> 1U)));
    __Vtemp2194[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & __Vtemp2191[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & __Vtemp2191[0xaU]) 
                                          >> 1U)));
    __Vtemp2194[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & __Vtemp2191[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & __Vtemp2191[0xbU]) 
                                          >> 1U)));
    __Vtemp2194[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & __Vtemp2191[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & __Vtemp2191[0xcU]) 
                                          >> 1U)));
    __Vtemp2194[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & __Vtemp2191[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & __Vtemp2191[0xdU]) 
                                          >> 1U)));
    __Vtemp2194[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & __Vtemp2191[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & __Vtemp2191[0xeU]) 
                                          >> 1U)));
    __Vtemp2194[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & __Vtemp2191[0xfU]) >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2195, __Vtemp2194);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size) 
                            == (0xfU & __Vtemp2195[0U])) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61909: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61909, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid)) 
                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source))) 
                      & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_enq_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid)) 
                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_source) 
                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source))) 
                      & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_enq_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61931: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61931, "");
    }
    __Vtemp2196[0U] = 1U;
    __Vtemp2196[1U] = 0U;
    __Vtemp2196[2U] = 0U;
    __Vtemp2196[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2197, __Vtemp2196, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ (((0U != ((((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                          ^ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                              ? __Vtemp2197[0U]
                                              : 0U)) 
                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                            ^ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp2197[1U]
                                                : 0U))) 
                                        | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                           ^ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                                                & (0U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                               ? __Vtemp2197[2U]
                                               : 0U))) 
                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                          ^ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                              ? __Vtemp2197[3U]
                                              : 0U)))) 
                               | (~ (IData)((0U != 
                                             (((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                              | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[3U]))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp2201[0U] = 1U;
    __Vtemp2201[1U] = 0U;
    __Vtemp2201[2U] = 0U;
    __Vtemp2201[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2202, __Vtemp2201, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ (((0U != ((((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                          ^ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                              ? __Vtemp2202[0U]
                                              : 0U)) 
                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                            ^ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp2202[1U]
                                                : 0U))) 
                                        | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                           ^ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                                                & (0U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                               ? __Vtemp2202[2U]
                                               : 0U))) 
                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                          ^ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                              ? __Vtemp2202[3U]
                                              : 0U)))) 
                               | (~ (IData)((0U != 
                                             (((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                              | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[3U]))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61955: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61955, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[0U] 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[1U]) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[2U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[3U])))) 
                                | (0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__watchdog 
                                  < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[0U] 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[1U]) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[2U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[3U])))) 
                                | (0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__watchdog 
                                  < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:61979: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 61979, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2206, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471)) 
                     & (~ ((~ __Vtemp2206[0U]) | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel re-used a source ID (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2207, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471)) 
                     & (~ ((~ __Vtemp2207[0U]) | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:62003: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 62003, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2208, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((__Vtemp2208[0U] | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471)) 
                                               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   << 1U) 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2209, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((__Vtemp2209[0U] | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471)) 
                                               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   << 1U) 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:62027: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 62027, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                      & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471)) 
                         & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                      & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471)) 
                         & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:62051: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 62051, "");
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp2210, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                   << 2U));
    __Vtemp2213[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & __Vtemp2210[1U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                              & __Vtemp2210[0U]) >> 1U)));
    __Vtemp2213[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & __Vtemp2210[2U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                              & __Vtemp2210[1U]) >> 1U)));
    __Vtemp2213[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & __Vtemp2210[3U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                              & __Vtemp2210[2U]) >> 1U)));
    __Vtemp2213[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & __Vtemp2210[4U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                              & __Vtemp2210[3U]) >> 1U)));
    __Vtemp2213[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & __Vtemp2210[5U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                              & __Vtemp2210[4U]) >> 1U)));
    __Vtemp2213[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & __Vtemp2210[6U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                              & __Vtemp2210[5U]) >> 1U)));
    __Vtemp2213[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & __Vtemp2210[7U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                              & __Vtemp2210[6U]) >> 1U)));
    __Vtemp2213[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & __Vtemp2210[8U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                              & __Vtemp2210[7U]) >> 1U)));
    __Vtemp2213[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & __Vtemp2210[9U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                              & __Vtemp2210[8U]) >> 1U)));
    __Vtemp2213[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & __Vtemp2210[0xaU]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                              & __Vtemp2210[9U]) >> 1U)));
    __Vtemp2213[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & __Vtemp2210[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & __Vtemp2210[0xaU]) 
                                          >> 1U)));
    __Vtemp2213[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & __Vtemp2210[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & __Vtemp2210[0xbU]) 
                                          >> 1U)));
    __Vtemp2213[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & __Vtemp2210[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & __Vtemp2210[0xcU]) 
                                          >> 1U)));
    __Vtemp2213[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & __Vtemp2210[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & __Vtemp2210[0xdU]) 
                                          >> 1U)));
    __Vtemp2213[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & __Vtemp2210[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & __Vtemp2210[0xeU]) 
                                          >> 1U)));
    __Vtemp2213[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & __Vtemp2210[0xfU]) >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2214, __Vtemp2213);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                      & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471)) 
                            & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size) 
                            == (0xfU & __Vtemp2214[0U])) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp2215, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                   << 2U));
    __Vtemp2218[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & __Vtemp2215[1U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                              & __Vtemp2215[0U]) >> 1U)));
    __Vtemp2218[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & __Vtemp2215[2U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                              & __Vtemp2215[1U]) >> 1U)));
    __Vtemp2218[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & __Vtemp2215[3U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                              & __Vtemp2215[2U]) >> 1U)));
    __Vtemp2218[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & __Vtemp2215[4U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                              & __Vtemp2215[3U]) >> 1U)));
    __Vtemp2218[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & __Vtemp2215[5U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                              & __Vtemp2215[4U]) >> 1U)));
    __Vtemp2218[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & __Vtemp2215[6U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                              & __Vtemp2215[5U]) >> 1U)));
    __Vtemp2218[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & __Vtemp2215[7U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                              & __Vtemp2215[6U]) >> 1U)));
    __Vtemp2218[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & __Vtemp2215[8U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                              & __Vtemp2215[7U]) >> 1U)));
    __Vtemp2218[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & __Vtemp2215[9U]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                              & __Vtemp2215[8U]) >> 1U)));
    __Vtemp2218[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & __Vtemp2215[0xaU]) << 0x1fU) 
                          | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                              & __Vtemp2215[9U]) >> 1U)));
    __Vtemp2218[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & __Vtemp2215[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & __Vtemp2215[0xaU]) 
                                          >> 1U)));
    __Vtemp2218[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & __Vtemp2215[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & __Vtemp2215[0xbU]) 
                                          >> 1U)));
    __Vtemp2218[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & __Vtemp2215[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & __Vtemp2215[0xcU]) 
                                          >> 1U)));
    __Vtemp2218[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & __Vtemp2215[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & __Vtemp2215[0xdU]) 
                                          >> 1U)));
    __Vtemp2218[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & __Vtemp2215[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & __Vtemp2215[0xeU]) 
                                          >> 1U)));
    __Vtemp2218[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & __Vtemp2215[0xfU]) >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2219, __Vtemp2218);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                      & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471)) 
                            & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size) 
                            == (0xfU & __Vtemp2219[0U])) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:62075: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 62075, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid)) 
                       & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                           << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source))) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_enq_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid)) 
                       & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                           << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source))) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_enq_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:62097: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 62097, "");
    }
    __Vtemp2220[0U] = 1U;
    __Vtemp2220[1U] = 0U;
    __Vtemp2220[2U] = 0U;
    __Vtemp2220[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2221, __Vtemp2220, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp2225[0U] = 1U;
    __Vtemp2225[1U] = 0U;
    __Vtemp2225[2U] = 0U;
    __Vtemp2225[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2226, __Vtemp2225, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp2230[0U] = 1U;
    __Vtemp2230[1U] = 0U;
    __Vtemp2230[2U] = 0U;
    __Vtemp2230[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2231, __Vtemp2230, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source));
    if (VL_UNLIKELY(((0U != (((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                  & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                 ? __Vtemp2221[0U] : 0U) 
                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                    & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                   ? __Vtemp2221[1U]
                                   : 0U)) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                               & (0U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                              ? __Vtemp2221[2U]
                                              : 0U)) 
                             | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                  & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                 ? __Vtemp2221[3U] : 0U))) 
                     & (~ ((0U != ((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                        ? __Vtemp2226[0U]
                                        : 0U) ^ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp2231[0U]
                                                  : 0U)) 
                                     | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                          ? __Vtemp2226[1U]
                                          : 0U) ^ (
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                                                     & (0U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                    & (6U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                                    ? 
                                                   __Vtemp2231[1U]
                                                    : 0U))) 
                                    | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                         ? __Vtemp2226[2U]
                                         : 0U) ^ ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                                                    & (0U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                   & (6U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                                   ? 
                                                  __Vtemp2231[2U]
                                                   : 0U))) 
                                   | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                        ? __Vtemp2226[3U]
                                        : 0U) ^ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp2231[3U]
                                                  : 0U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp2235[0U] = 1U;
    __Vtemp2235[1U] = 0U;
    __Vtemp2235[2U] = 0U;
    __Vtemp2235[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2236, __Vtemp2235, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp2240[0U] = 1U;
    __Vtemp2240[1U] = 0U;
    __Vtemp2240[2U] = 0U;
    __Vtemp2240[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2241, __Vtemp2240, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp2245[0U] = 1U;
    __Vtemp2245[1U] = 0U;
    __Vtemp2245[2U] = 0U;
    __Vtemp2245[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2246, __Vtemp2245, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source));
    if (VL_UNLIKELY(((0U != (((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                  & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                 ? __Vtemp2236[0U] : 0U) 
                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                    & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                   ? __Vtemp2236[1U]
                                   : 0U)) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                               & (0U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                              ? __Vtemp2236[2U]
                                              : 0U)) 
                             | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                  & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                 ? __Vtemp2236[3U] : 0U))) 
                     & (~ ((0U != ((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                        ? __Vtemp2241[0U]
                                        : 0U) ^ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp2246[0U]
                                                  : 0U)) 
                                     | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                          ? __Vtemp2241[1U]
                                          : 0U) ^ (
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                                                     & (0U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                    & (6U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                                    ? 
                                                   __Vtemp2246[1U]
                                                    : 0U))) 
                                    | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                         ? __Vtemp2241[2U]
                                         : 0U) ^ ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                                                    & (0U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                   & (6U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                                   ? 
                                                  __Vtemp2246[2U]
                                                   : 0U))) 
                                   | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2471))
                                        ? __Vtemp2241[3U]
                                        : 0U) ^ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp2246[3U]
                                                  : 0U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:62121: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 62121, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[0U] 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[1U]) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[2U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[3U])))) 
                                | (0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__watchdog_1 
                                  < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[0U] 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[1U]) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[2U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[3U])))) 
                                | (0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__watchdog_1 
                                  < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:62145: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 62145, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_3))) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2542)) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_3))) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2542)) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:62169: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 62169, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_valid)) 
                     & (~ (((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_84) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_2))) 
                            >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:151:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_valid)) 
                     & (~ (((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_84) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_2))) 
                            >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:62193: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 62193, "");
    }
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_address__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:105 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
    }
    if (VL_UNLIKELY((1U & (~ (((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:118767: Assertion failed in %NysyxSoCFull.fpga.atomics\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 118767, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid))) 
                               | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state)) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid))) 
                               | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state)) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:118791: Assertion failed in %NysyxSoCFull.fpga.atomics\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 118791, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___T_12)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___T_12)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:118815: Assertion failed in %NysyxSoCFull.fpga.atomics\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 118815, "");
    }
    vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_count_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_count_1;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_param__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source__v0 = 0U;
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:114442: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 114442, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:114466: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 114466, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:114490: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 114490, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:114514: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 114514, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:114538: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 114538, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:114562: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 114562, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:114586: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 114586, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:114610: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 114610, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:114634: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 114634, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:114658: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 114658, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:114682: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 114682, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:114706: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 114706, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:114730: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 114730, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:114754: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 114754, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:114778: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 114778, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:114802: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 114802, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:114826: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 114826, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:114850: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 114850, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:114874: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 114874, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:114898: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 114898, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:114922: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 114922, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:114946: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 114946, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:114970: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 114970, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:114994: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 114994, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115018: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115018, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115042: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115042, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address)))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115066: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115066, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115090: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115090, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115114: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115114, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115138: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115138, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115162: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115162, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115186: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115186, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115210: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115210, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115234: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115234, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115258: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115258, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115282: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115282, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115306: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115306, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115330: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115330, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115354: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115354, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115378: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115378, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115402: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115402, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115426: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115426, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115450: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115450, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115474: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115474, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115498: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115498, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115522: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115522, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115546: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115546, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115570: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115570, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115594: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115594, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115618: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115618, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_replace)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_corrupt) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_denied))
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_replace)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_corrupt) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_denied))
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115642: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115642, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115666: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115666, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115690: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115690, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115714: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115714, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115738: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115738, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115762: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115762, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_replace)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_corrupt) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_denied))
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_replace)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_corrupt) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_denied))
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115786: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115786, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115810: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115810, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115834: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115834, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115858: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115858, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115882: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115882, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_replace)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_corrupt) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_denied))
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_replace)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_corrupt) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_denied))
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115906: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115906, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115930: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115930, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115954: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115954, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_replace)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_corrupt) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_denied))
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_replace)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_corrupt) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_denied))
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:115978: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 115978, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116002: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116002, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116026: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116026, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_replace)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_corrupt) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_denied))
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_replace)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_corrupt) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_denied))
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116050: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116050, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116074: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116074, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116098: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116098, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_replace)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_corrupt) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_denied))
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_replace)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_corrupt) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_denied))
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116122: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116122, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116146: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116146, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116170: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116170, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116194: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116194, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116218: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116218, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116242: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116242, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116266: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116266, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116290: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116290, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116314: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116314, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116338: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116338, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116362: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116362, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116386: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116386, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116410: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116410, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid source ID (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116434: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116434, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116458: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116458, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116482: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116482, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid report param (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116506: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116506, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116530: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116530, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116554: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116554, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116578: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116578, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116602: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116602, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116626: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116626, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid report param (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116650: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116650, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116674: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116674, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116698: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116698, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116722: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116722, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116746: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116746, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116770: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116770, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116794: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116794, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116818: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116818, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116842: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116842, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116866: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116866, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116890: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116890, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116914: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116914, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116938: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116938, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_valid) 
                     & (~ ((1U > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channels carries invalid sink ID (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_valid) 
                     & (~ ((1U > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116962: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116962, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:116986: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 116986, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:117010: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 117010, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:117034: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 117034, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:117058: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 117058, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                            == vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                            == vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:117082: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 117082, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:117106: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 117106, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:117130: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 117130, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:117154: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 117154, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:117178: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 117178, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:117202: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 117202, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:117226: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 117226, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:117250: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 117250, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:117274: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 117274, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:117298: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 117298, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter))) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                            == vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__address_2) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter))) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                            == vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__address_2) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:117322: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 117322, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2250, vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ __Vtemp2250[0U]) | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2251, vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ __Vtemp2251[0U]) | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:117346: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 117346, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2252, vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((__Vtemp2252[0U] | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                                                & (0U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2253, vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((__Vtemp2253[0U] | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                                                & (0U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:117370: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 117370, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_42)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_42))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_42)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_42))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:117394: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 117394, "");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:117418: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 117418, "");
    }
    __Vtemp2256[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2256[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2256[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2256[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2256[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2256[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2256[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2256[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2256[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2256[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2256[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2256[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2256[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2256[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2256[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2256[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2257, __Vtemp2256);
    __Vtemp2260[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2260[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2260[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2260[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2260[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2260[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2260[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2260[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2260[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2260[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2260[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2260[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2260[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2260[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2260[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2260[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2261, __Vtemp2260);
    __Vtemp2264[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2264[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2264[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2264[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2264[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2264[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2264[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2264[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2264[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2264[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2264[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2264[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2264[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2264[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2264[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2264[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2265, __Vtemp2264);
    __Vtemp2268[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2268[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2268[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2268[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2268[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2268[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2268[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2268[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2268[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2268[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2268[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2268[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2268[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2268[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2268[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2268[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2269, __Vtemp2268);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & __Vtemp2257[0U]))
                                  ? 4U : ((6U == (7U 
                                                  & __Vtemp2261[0U]))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & __Vtemp2265[0U]))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              __Vtemp2269[0U]))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:170:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp2272[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2272[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2272[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2272[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2272[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2272[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2272[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2272[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2272[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2272[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2272[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2272[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2272[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2272[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2272[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2272[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2273, __Vtemp2272);
    __Vtemp2276[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2276[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2276[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2276[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2276[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2276[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2276[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2276[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2276[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2276[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2276[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2276[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2276[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2276[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2276[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2276[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2277, __Vtemp2276);
    __Vtemp2280[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2280[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2280[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2280[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2280[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2280[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2280[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2280[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2280[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2280[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2280[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2280[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2280[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2280[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2280[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2280[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2281, __Vtemp2280);
    __Vtemp2284[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp2284[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp2284[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp2284[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp2284[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp2284[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp2284[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp2284[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp2284[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp2284[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp2284[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp2284[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp2284[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp2284[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp2284[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp2284[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2285, __Vtemp2284);
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & __Vtemp2273[0U]))
                                  ? 4U : ((6U == (7U 
                                                  & __Vtemp2277[0U]))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & __Vtemp2281[0U]))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              __Vtemp2285[0U]))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:117442: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("vsrc/ysyxSoCFull.v", 117442, "");
    }
}
