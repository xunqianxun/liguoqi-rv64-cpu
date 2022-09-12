// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

extern const VlWide<16>/*511:0*/ VysyxSoCFull__ConstPool__CONST_0b2d9f06_0;
extern const VlWide<16>/*511:0*/ VysyxSoCFull__ConstPool__CONST_3ad9c2be_0;
extern const VlUnpacked<CData/*1:0*/, 16> VysyxSoCFull__ConstPool__TABLE_2039a795_0;
extern const VlUnpacked<CData/*1:0*/, 16> VysyxSoCFull__ConstPool__TABLE_440d609d_0;

VL_INLINE_OPT void VysyxSoCFull___024root___sequent__TOP__24(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___sequent__TOP__24\n"); );
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
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_1;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_3;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_2;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_8;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_14;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_12;
    CData/*6:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_47;
    CData/*6:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_48;
    CData/*2:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_50;
    CData/*2:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_51;
    CData/*2:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_57;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_5;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_5;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_37;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_42;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_1;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_53;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_58;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_1;
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
    CData/*6:0*/ ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_47;
    CData/*6:0*/ ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_48;
    CData/*2:0*/ ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_50;
    CData/*2:0*/ ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_51;
    CData/*2:0*/ ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_57;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_5;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_5;
    CData/*3:0*/ __Vtableidx3;
    CData/*3:0*/ __Vtableidx4;
    IData/*31:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_5;
    IData/*31:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11;
    IData/*31:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_5;
    IData/*31:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11;
    VlWide<16>/*511:0*/ __Vtemp1804;
    VlWide<16>/*511:0*/ __Vtemp1805;
    VlWide<16>/*511:0*/ __Vtemp1806;
    VlWide<16>/*511:0*/ __Vtemp1807;
    VlWide<16>/*511:0*/ __Vtemp1810;
    VlWide<16>/*511:0*/ __Vtemp1811;
    VlWide<16>/*511:0*/ __Vtemp1814;
    VlWide<16>/*511:0*/ __Vtemp1815;
    VlWide<16>/*511:0*/ __Vtemp1818;
    VlWide<16>/*511:0*/ __Vtemp1819;
    VlWide<16>/*511:0*/ __Vtemp1822;
    VlWide<16>/*511:0*/ __Vtemp1823;
    VlWide<16>/*511:0*/ __Vtemp1826;
    VlWide<16>/*511:0*/ __Vtemp1827;
    VlWide<16>/*511:0*/ __Vtemp1830;
    VlWide<16>/*511:0*/ __Vtemp1831;
    VlWide<16>/*511:0*/ __Vtemp1834;
    VlWide<16>/*511:0*/ __Vtemp1835;
    VlWide<16>/*511:0*/ __Vtemp1838;
    VlWide<16>/*511:0*/ __Vtemp1839;
    VlWide<16>/*511:0*/ __Vtemp1842;
    VlWide<16>/*511:0*/ __Vtemp1843;
    VlWide<16>/*511:0*/ __Vtemp1846;
    VlWide<16>/*511:0*/ __Vtemp1847;
    VlWide<16>/*511:0*/ __Vtemp1850;
    VlWide<16>/*511:0*/ __Vtemp1851;
    VlWide<16>/*511:0*/ __Vtemp1854;
    VlWide<16>/*511:0*/ __Vtemp1855;
    VlWide<16>/*511:0*/ __Vtemp1858;
    VlWide<16>/*511:0*/ __Vtemp1859;
    VlWide<16>/*511:0*/ __Vtemp1862;
    VlWide<16>/*511:0*/ __Vtemp1863;
    VlWide<16>/*511:0*/ __Vtemp1866;
    VlWide<16>/*511:0*/ __Vtemp1867;
    VlWide<16>/*511:0*/ __Vtemp1870;
    VlWide<16>/*511:0*/ __Vtemp1871;
    // Body
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_2 
        = ((0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signbit_a_T) 
                     << 1U)) | (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signbit_a_T) 
                                         << 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_2 
        = ((0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signbit_d_T) 
                     << 1U)) | (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signbit_d_T) 
                                         << 2U)));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___q_last_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___T_2)
                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_grant)
                    ? 1U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last)
                             ? 0U : 2U)) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___T_3)
                                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last)
                                                 ? 0U
                                                 : 2U)
                                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_9)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_first_counter = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_first_counter 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_first)
                      ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_first_counter1)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__beatsLeft))
            ? (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state))
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__state_0));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_first_counter = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___d_first_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_first_counter 
            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_first)
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_first_counter1)));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__beatsLeft))
            ? (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state))
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__state_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_last_counter)) 
           | (0U == ((4U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode
                      [0U]) ? 0U : (0xfU & (~ (0x7ffU 
                                               & (((IData)(0x3fU) 
                                                   << 
                                                   vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size
                                                   [0U]) 
                                                  >> 2U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_d_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__divertprobes));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__divertprobes));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_d_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___q_last_count_T_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_count) 
                    - (IData)(1U)));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_last_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_last_count));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___q_last_count_T_1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_last_count) 
                    - (IData)(1U)));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___q_last_T) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___T_2)
                ? 1U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___T_3)
                         ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_11)));
    }
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
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__state = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___q_last_T) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__state 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___T_2)
                ? 1U : ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___T_3)
                         ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_11)));
    }
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__empty 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__bad 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_burst)) 
           | (3U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__busy)
            ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__r_addr
            : vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_addr);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wrapMask_T_1 
        = (0x7fffffU & ((0xffU | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_len) 
                                  << 8U)) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__busy)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__r_len)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_len));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__deq_ptr_value));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__maybe_full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_echo_extra_id 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__ram_echo_extra_id
            [0U];
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
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_id 
            = (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__ram_id
               [0U] & 1U);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_len 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__ram_len
            [0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag_auto_out_awvalid 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___in_awready_T) 
               & 1U);
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_echo_extra_id = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_burst = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_size = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__wbeats_valid = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_id = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_len = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag_auto_out_awvalid = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__deq_ptr_value));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___T 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___T_1 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___T_2 
        = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_pwrite 
        = (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
            | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))) 
           | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_penable 
        = (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
            | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bundleOut_0_penable_REG));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_psel 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
           | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__empty 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__empty 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__mul_finish_sign 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__mult_valid) 
           & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__multiplier1__DOT__multipler))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
           & (0ULL != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_pc));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_fence_i 
        = (IData)((0x100fU == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok = 0U;
    } else if (((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_last) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_valid)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok = 1U;
    } else if (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_ready) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_valid)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok = 1U;
    } else if ((1U & (~ ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_last) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_valid)))))) {
        if ((1U & (~ ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_last) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_valid)))))) {
            if ((1U & (~ ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)) 
                          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_ready) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_valid)))))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok = 0U;
            }
        }
    }
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
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_2) 
                       << 2U)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_2) 
                       << 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_5 
        = (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_2 
           | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_2 
              << 2U));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__in_arready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__full)) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__r_full))));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__empty 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ptr_match) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__maybe_full));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_5 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_2 
           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_2 
              << 2U));
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
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__do_enq;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__do_enq;
    }
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__empty 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ptr_match) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__maybe_full));
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
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__locked;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__locked;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1;
    }
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_2) 
           | (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_2) 
                       << 2U)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_2) 
           | (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_2) 
                       << 2U)));
    ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_2) 
           | (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_2) 
                       << 2U)));
    ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_2) 
           | (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_2) 
                       << 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_enq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_d_ready) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_enq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_d_ready) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)));
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
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__do_enq;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__do_enq) 
                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__do_deq))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__maybe_full 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__do_enq;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter1 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter1 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter) 
                    - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___out_bits_addr_T_5 
        = ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__addr) 
           | (7U & (~ (0x3ffU & ((IData)(7U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_size))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_2 
        = (0xffU & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__addr 
                     >> 3U) | (0xfeU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__addr 
                                        >> 2U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len) 
           | (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len) 
                       >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_3 
        = (0xffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len)) 
                    | (0xfeU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len)) 
                                << 1U))));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wrapMask_T_3 
        = (0x7fffffU & ((0xffU | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_len) 
                                  << 8U)) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__busy_1)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__r_len_1)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_len));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free_sel 
        = ((~ (((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_5) 
                << 1U) | (0x1e0U & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free_sel 
        = ((~ (((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_5) 
                << 1U) | (0x1e0U & ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___T_3 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___T_4 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___T_3 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__state));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___T_4 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__state));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__empty 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_8 
        = (ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_5 
           | (ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_5 
              << 4U));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem_R0_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__in_arready) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__empty)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__do_deq 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__full)) 
                  | (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__r_full))) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__empty))));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___T_14 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__in_arready) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__empty)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_8 
        = (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_5 
           | (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_5 
              << 4U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___T_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__state));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___T_3 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__state));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___T_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___T_3 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_first_counter1 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_first 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_first_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_first_counter1 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_first_counter) 
                    - (IData)(1U)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___T_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___T_3 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___T_2 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__state));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___T_3 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__state));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_1 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_id)
                  ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__full))
                  : (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__full))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_9 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_id)
                  ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__full))
                  : (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__full))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_2) 
           | (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_2) 
                       << 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_1) 
           | (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_1) 
                       >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_3) 
           | (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_3) 
                       << 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___out_bits_addr_T_12 
        = ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__addr_1) 
           | (7U & (~ (0x3ffU & ((IData)(7U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_size))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_12 
        = (0xffU & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__addr_1 
                     >> 3U) | (0xfeU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__addr_1 
                                        >> 2U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_8 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len_1) 
           | (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len_1) 
                       >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_14 
        = (0xffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len_1)) 
                    | (0xfeU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len_1)) 
                                << 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
            ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state_nxt));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free_sel)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11 
        = (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_8 
           | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_8 
              << 8U));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___GEN_41 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___T_14) 
           | ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__full)) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__r_full))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__r_full)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_8 
           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_8 
              << 8U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__maybe_full)) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__dc_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__maybe_full) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_last));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_enq_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__maybe_full)) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_valid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__maybe_full) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a_last)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__idle));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___GEN_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___T_1) 
           | ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__full)) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__w_full))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__w_full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_a_ext 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__wide_mask) 
           | (((QData)((IData)(((((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_8))
                                   ? 0xffU : 0U) << 0x18U) 
                                | ((((0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_8))
                                      ? 0xffU : 0U) 
                                    << 0x10U) | (((
                                                   (0x20U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_8))
                                                    ? 0xffU
                                                    : 0U) 
                                                  << 8U) 
                                                 | ((0x10U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_8))
                                                     ? 0xffU
                                                     : 0U)))))) 
               << 0x20U) | (QData)((IData)(((((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_8))
                                               ? 0xffU
                                               : 0U) 
                                             << 0x18U) 
                                            | ((((4U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_8))
                                                  ? 0xffU
                                                  : 0U) 
                                                << 0x10U) 
                                               | ((((2U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_8))
                                                     ? 0xffU
                                                     : 0U) 
                                                   << 8U) 
                                                  | ((1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_8))
                                                      ? 0xffU
                                                      : 0U))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_d_ext 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__wide_mask) 
           | (((QData)((IData)(((((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_8))
                                   ? 0xffU : 0U) << 0x18U) 
                                | ((((0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_8))
                                      ? 0xffU : 0U) 
                                    << 0x10U) | (((
                                                   (0x20U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_8))
                                                    ? 0xffU
                                                    : 0U) 
                                                  << 8U) 
                                                 | ((0x10U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_8))
                                                     ? 0xffU
                                                     : 0U)))))) 
               << 0x20U) | (QData)((IData)(((((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_8))
                                               ? 0xffU
                                               : 0U) 
                                             << 0x18U) 
                                            | ((((4U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_8))
                                                  ? 0xffU
                                                  : 0U) 
                                                << 0x10U) 
                                               | ((((2U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_8))
                                                     ? 0xffU
                                                     : 0U) 
                                                   << 8U) 
                                                  | ((1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_8))
                                                      ? 0xffU
                                                      : 0U))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_a_ext 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__wide_mask) 
           | (((QData)((IData)(((((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_8))
                                   ? 0xffU : 0U) << 0x18U) 
                                | ((((0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_8))
                                      ? 0xffU : 0U) 
                                    << 0x10U) | (((
                                                   (0x20U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_8))
                                                    ? 0xffU
                                                    : 0U) 
                                                  << 8U) 
                                                 | ((0x10U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_8))
                                                     ? 0xffU
                                                     : 0U)))))) 
               << 0x20U) | (QData)((IData)(((((8U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_8))
                                               ? 0xffU
                                               : 0U) 
                                             << 0x18U) 
                                            | ((((4U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_8))
                                                  ? 0xffU
                                                  : 0U) 
                                                << 0x10U) 
                                               | ((((2U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_8))
                                                     ? 0xffU
                                                     : 0U) 
                                                   << 8U) 
                                                  | ((1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_8))
                                                      ? 0xffU
                                                      : 0U))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_d_ext 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__wide_mask) 
           | (((QData)((IData)(((((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_8))
                                   ? 0xffU : 0U) << 0x18U) 
                                | ((((0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_8))
                                      ? 0xffU : 0U) 
                                    << 0x10U) | (((
                                                   (0x20U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_8))
                                                    ? 0xffU
                                                    : 0U) 
                                                  << 8U) 
                                                 | ((0x10U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_8))
                                                     ? 0xffU
                                                     : 0U)))))) 
               << 0x20U) | (QData)((IData)(((((8U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_8))
                                               ? 0xffU
                                               : 0U) 
                                             << 0x18U) 
                                            | ((((4U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_8))
                                                  ? 0xffU
                                                  : 0U) 
                                                << 0x10U) 
                                               | ((((2U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_8))
                                                     ? 0xffU
                                                     : 0U) 
                                                   << 8U) 
                                                  | ((1U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_8))
                                                      ? 0xffU
                                                      : 0U))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__maybe_full)) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT__full))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__maybe_full) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_last));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_enq_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__maybe_full)) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__full))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_valid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__maybe_full) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_last)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__idle));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_out_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__maybe_full) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_out_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag_auto_out_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_9));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_15 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_12) 
           | (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_12) 
                       << 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_10 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_8) 
           | (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_8) 
                       >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_17 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_14) 
           | (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_14) 
                       << 2U)));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free_sel 
        = ((~ ((QData)((IData)((ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11 
                                | (ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11 
                                   << 0x10U)))) << 1U)) 
           & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free_sel 
        = ((~ ((QData)((IData)((ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11 
                                | (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11 
                                   << 0x10U)))) << 1U)) 
           & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__beatsLeft))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__dc_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__state_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_21 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__dc_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___sink_ACancel_earlyValid_T_3 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__state_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__dc_valid)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__state_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___readys_T 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_valid) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__dc_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__adder_out 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_a_ext 
           + ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_param))
               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_d_ext
               : (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_d_ext)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__adder_out 
        = (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_a_ext 
           + ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_param))
               ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_d_ext
               : (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_d_ext)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__muxStateEarly_0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__beatsLeft))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__state_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_21 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___sink_ACancel_earlyValid_T_3 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__state_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__state_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___readys_T 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_valid) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_key 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_key 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_key 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_key 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_key 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_key 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_key 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_key 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_key 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_key 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_out_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag_auto_out_wvalid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats_lo 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__bad)
            ? 0U : (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___maxSupported1_T)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize1_T_1 
        = (0x7fffffU & ((0xffU | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__bad)
                                    ? 0U : (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___maxSupported1_T))) 
                                  << 8U)) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___maxSupported1_T_1 
        = (0xffU & (((0x7fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_10) 
                                >> 1U) | (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_10) 
                                                >> 5U)))) 
                     | (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_17) 
                           | (0xf0U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_17) 
                                       << 4U))))) & 
                    (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_15) 
                        | (0xf0U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_15) 
                                    << 4U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_last = 0U;
    if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
                if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_last = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_last = 1U;
                    }
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_last = 0U;
                }
            } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_last = 1U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_last = 1U;
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_last = 0U;
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_ready = 0U;
    if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)))) {
                if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_ready = 0U;
                } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_ready = 0U;
                } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_ready = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_ready = 0U;
            } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_ready = 0U;
            } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_ready = 1U;
            }
        } else if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_ready = 0U;
        } else if ((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_ready = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_ready = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_ready = 0U;
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_ready = 0U;
            }
        } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_ready = 0U;
                }
            }
        } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_ready = 0U;
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_ready = 0U;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_ready = 0U;
    if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)))) {
                if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_ready = 0U;
                } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_ready = 0U;
                } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_ready = 0U;
                }
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_ready = 0U;
            } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_ready = 0U;
            } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_ready = 0U;
            }
        } else if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_ready = 0U;
        } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_ready = 0U;
        } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_ready = 0U;
        }
    } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_ready = 1U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_ready = 0U;
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_ready = 0U;
            }
        } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_ready = 1U;
                }
            }
        } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_ready = 0U;
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_ready = 0U;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_burst = 0U;
    if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)))) {
                if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_burst = 0U;
                } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_burst = 1U;
                } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_burst = 0U;
                }
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_burst = 0U;
            } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_burst = 1U;
            } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_burst = 0U;
            }
        } else if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_burst = 0U;
        } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_burst = 1U;
        } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_burst = 0U;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_burst = 0U;
    if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
                if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_burst = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_burst = 0U;
                    }
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_burst 
                        = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))
                            ? 1U : 0U);
                }
            } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_burst = 1U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_burst = 0U;
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_burst 
                    = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))
                        ? 1U : 0U);
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_len = 0U;
    if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)))) {
                if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_len = 0U;
                } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_len = 0U;
                } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_len = 0U;
                }
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_len = 0U;
            } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_len = 0U;
            } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_len = 0U;
            }
        } else if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_len = 0U;
        } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_len = 0U;
        } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_len = 0U;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_len = 0U;
    if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
                if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_len = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_len = 0U;
                    }
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_len = 0U;
                }
            } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_len = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_len = 0U;
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_len = 0U;
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_valid = 0U;
    if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)))) {
                if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_valid = 0U;
                } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_valid = 0U;
                } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_valid = 0U;
                }
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_valid = 0U;
            } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_valid = 0U;
            } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_valid = 0U;
            }
        } else if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_valid = 0U;
        } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_valid = 0U;
        } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_valid = 0U;
        }
    } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_valid = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_valid = 1U;
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_valid = 0U;
            }
        } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_valid = 0U;
                }
            }
        } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_valid = 1U;
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_valid = 0U;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_valid = 0U;
    if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)))) {
                if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_valid = 0U;
                } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_valid = 0U;
                } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_valid = 0U;
                }
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_valid = 0U;
            } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_valid = 0U;
            } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_valid = 0U;
            }
        } else if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_valid = 0U;
        } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_valid = 0U;
        } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_valid = 0U;
        }
    } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_valid = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_valid = 0U;
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_valid 
                    = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state));
            }
        } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_valid = 0U;
                }
            }
        } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_valid = 0U;
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_valid 
                = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state));
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_id = 0U;
    if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
                if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_id = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_id = 0U;
                    }
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_id = 0U;
                }
            } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_id = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_id = 0U;
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_id = 0U;
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_id = 0U;
    if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)))) {
                if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_id = 0U;
                } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_id = 0U;
                } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_id = 0U;
                }
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_id = 0U;
            } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_id = 0U;
            } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_id = 0U;
            }
        } else if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_id = 0U;
        } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_id = 0U;
        } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_id = 0U;
        }
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0) 
         | (IData)(vlSelf->reset))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__countr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst = 1U;
    } else if ((0x1fU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__countr))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__countr 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__countr)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst = 1U;
    } else {
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__countr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__countr;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T 
        = (0xffffU & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free_sel 
                               >> 0x10U)) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T 
        = (0xffffU & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free_sel 
                               >> 0x10U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free_sel)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__dc_bits_param;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__dc_bits_param;
        ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_47 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_source
            [0U];
        ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_50 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_size
            [0U];
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_param = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_param = 0U;
        ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_47 = 0U;
        ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_50 = 0U;
    }
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
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___readys_T) 
           | (2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___readys_T) 
                    << 1U)));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__muxStateEarly_0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_bits_param;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_bits_param;
        ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_47 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source
            [0U];
        ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_50 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_size
            [0U];
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_param = 0U;
        ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_47 = 0U;
        ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_50 = 0U;
    }
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
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___readys_T) 
           | (2U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___readys_T) 
                    << 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___T_50 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_out_arvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___sink_ACancel_earlyValid_T_3 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__state_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_out_arvalid)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__state_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_filter_lo 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_valid) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_out_arvalid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag_auto_out_arecho_real_last 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats_lo) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__ar_last 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats_lo) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats 
        = ((1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats_lo) 
                  << 1U)) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats_lo)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_4 
        = ((1U | (0xfffeU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize1_T_1 
                             >> 7U))) & (~ (0x7fffU 
                                            & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize1_T_1 
                                               >> 8U))));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__bad_1) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats_lo_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag_auto_out_awlen = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats_lo_1 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___maxSupported1_T_1));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag_auto_out_awlen 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___maxSupported1_T_1));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__countr 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__countr;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__earlyWinner_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___readys_T_3)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__earlyWinner_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___readys_T_3)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_filter 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_filter_lo) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_mask))) 
            << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_valid) 
                       << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_out_arvalid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__inc_addr 
        = (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__addr 
           + (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats) 
                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_size))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_5 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_4) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_4)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__aw_last 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats_lo_1) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag_auto_out_awecho_real_last 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats_lo_1) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_beats 
        = ((1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats_lo_1) 
                  << 1U)) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats_lo_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize1_T_1 
        = (0x7fffffU & ((0xffU | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag_auto_out_awlen) 
                                  << 8U)) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__mem_mem_wb_pc = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__mem_mem_wb_inst = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__mem_mem_wb_pc 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex_mem_mem_pc;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__mem_mem_wb_inst 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex_mem_mem_inst;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_data[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_data[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_data[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_data[3U] = 0U;
    } else if ((1U & (~ ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))))) {
        if (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_data[0U] 
                = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_data);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_data[1U] 
                = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_data 
                           >> 0x20U));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_data[2U] 
                = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_data);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_data[3U] 
                = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_data 
                           >> 0x20U));
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_data[0U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_data[1U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_data[2U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_data[3U] = 0U;
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_ena_l = 0U;
    } else if ((1U & (~ ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))))) {
        if ((1U & (~ (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter)))))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_ena_l 
                = (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)) 
                   & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter)));
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter_n = 0U;
    } else if (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter_n 
            = ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter))
                ? 1U : 3U);
    } else if ((((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)) 
                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter_n = 3U;
    } else if ((((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)) 
                & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter_n = 0U;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_ena_l = 0U;
    } else if ((1U & (~ ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))))) {
        if (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_ena_l = 1U;
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r) {
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r) {
                    if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter1
                         [(0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                            >> 3U)))] 
                         < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter2
                         [(0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                            >> 3U)))])) {
                        if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter1
                             [(0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                >> 3U)))] 
                             >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter2
                             [(0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                >> 3U)))])) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_ena_l = 0U;
                        }
                    }
                }
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_ena_l = 0U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)))) {
        if ((1U & (~ ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))))) {
            if ((((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)) 
                 & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__temp_inst 
                    = ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_data)) 
                       << 0x20U);
            } else if ((((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)) 
                        & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_data[0U] 
                    = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_data);
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_data[1U] 
                    = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__temp_inst 
                               >> 0x20U));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_data[2U] 
                    = (IData)((((QData)((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__temp_inst 
                                                 >> 0x20U))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_data))));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_data[3U] 
                    = (IData)(((((QData)((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__temp_inst 
                                                  >> 0x20U))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_data))) 
                               >> 0x20U));
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_data[0U] = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_data[1U] = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_data[2U] = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_data[3U] = 0U;
            }
        }
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_type) 
                   >> 7U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)))) {
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
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__write_i_ok = 0U;
    } else if ((1U & (~ ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__write_i_ok 
            = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok));
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__write_m_ok = 0U;
    } else if ((1U & (~ ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))))) {
        if ((1U & (~ (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter)))))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__write_m_ok 
                = (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)) 
                   & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter)));
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[3U] = 0U;
    } else if ((1U & (~ ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))))) {
        if (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[0U] 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r)
                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r)
                        ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter1
                            [(0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                               >> 3U)))] 
                            >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter2
                            [(0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                               >> 3U)))])
                            ? 0xffffffffU : 0U) : 0U)
                    : 0xffffffffU);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[1U] 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r)
                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r)
                        ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter1
                            [(0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                               >> 3U)))] 
                            >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter2
                            [(0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                               >> 3U)))])
                            ? 0xffffffffU : 0U) : 0U)
                    : 0xffffffffU);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[2U] 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r)
                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r)
                        ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter1
                            [(0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                               >> 3U)))] 
                            >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter2
                            [(0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                               >> 3U)))])
                            ? 0U : ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter1
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                        >> 3U)))] 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter2
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                        >> 3U)))])
                                     ? 0xffffffffU : 0U))
                        : 0xffffffffU) : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[3U] 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r)
                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r)
                        ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter1
                            [(0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                               >> 3U)))] 
                            >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter2
                            [(0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                               >> 3U)))])
                            ? 0U : ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter1
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                        >> 3U)))] 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter2
                                     [(0x3fU & (IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                        >> 3U)))])
                                     ? 0xffffffffU : 0U))
                        : 0xffffffffU) : 0U);
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[0U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[1U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[2U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__miss_strb_l[3U] = 0U;
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[3U] = 0U;
    } else if ((1U & (~ ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))))) {
        if ((1U & (~ (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter)))))) {
            if ((((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)) 
                 & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter)))) {
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r) {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r) {
                        if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter1
                             [(0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                >> 3U)))] 
                             >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter2
                             [(0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                >> 3U)))])) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[0U] = 0xffffffffU;
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[1U] = 0xffffffffU;
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[2U] = 0U;
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[3U] = 0U;
                        } else if ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                       >> 3U)))] 
                                    < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__i_counter2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                                       >> 3U)))])) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[0U] = 0U;
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[1U] = 0U;
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[2U] = 0xffffffffU;
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[3U] = 0xffffffffU;
                        }
                    } else {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[0U] = 0U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[1U] = 0U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[2U] = 0xffffffffU;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[3U] = 0xffffffffU;
                    }
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[0U] = 0xffffffffU;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[1U] = 0xffffffffU;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[2U] = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[3U] = 0U;
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[0U] = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[1U] = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[2U] = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__mism_strb_l[3U] = 0U;
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__cahce_miss_ena = 0U;
    } else if (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__cahce_miss_ena = 1U;
    } else if (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__cahce_miss_ena = 0U;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__cache_mism_ena = 0U;
    } else if (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__cache_mism_ena = 1U;
    } else if ((((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)) 
                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__cache_mism_ena = 1U;
    } else if ((((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)) 
                & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__cache_mism_ena = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_type 
        = ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
                ? 0U : ((((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread)) 
                          & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok))) 
                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__delay_cnt)))
                         ? 1U : 0U)) : ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
                                         ? (((0x10U 
                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread)) 
                                             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))
                                             ? 2U : 0U)
                                         : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
                                                 ? 0U
                                                 : 
                                                ((((8U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite)) 
                                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok))) 
                                                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__delayw_cnt)))
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
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_lui = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_auipc = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_lui 
            = (IData)((0xdU == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                                         >> 2U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_auipc 
            = (IData)((5U == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                                       >> 2U))));
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_type) 
                   >> 7U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)))) {
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
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_jal = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__shang = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__yushu = 0ULL;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_jal 
            = (IData)((0x1bU == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                                          >> 2U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__shang 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__finish)
                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign) 
                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign_y)))
                    ? (1ULL + (~ (((QData)((IData)(
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U])))))
                    : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign_y))
                        ? (1ULL + (~ (((QData)((IData)(
                                                       vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U])))))
                        : (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign_y))
                            ? (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U])))
                            : (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U]))))))
                : (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[0U]))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__yushu 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__finish)
                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign) 
                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign_y)))
                    ? (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[2U])))
                    : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign_y))
                        ? (1ULL + (~ (((QData)((IData)(
                                                       vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[2U])))))
                        : (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__sign_y))
                            ? (1ULL + (~ (((QData)((IData)(
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[2U])))))
                            : (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[2U]))))))
                : (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__temp_a[2U]))));
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_type) 
                   >> 7U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)))) {
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
                   >> 7U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)))) {
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
                   >> 7U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)))) {
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_finish 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
            ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)) 
               & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread)))
            : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)) 
                   & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite)))
                : (0x81U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__docker_counter))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_jalr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__store_mask = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__store_data = 0ULL;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_jalr 
            = (IData)((0x19U == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                                          >> 2U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__store_mask 
            = ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel))
                ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel))
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel))
                             ? 0xffU : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
                                         ? 0U : ((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                             >> 2U)))
                                                  ? 0xf0U
                                                  : 0xfU)))
                         : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel))
                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
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
                             : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
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
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
                                   ? 0ULL : ((1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr 
                                                            >> 2U)))
                                              ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_data)) 
                                                 << 0x20U)
                                              : (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_data)))))
                           : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_sel))
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
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
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
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
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ex_type 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
              ? 0U : (IData)((0x1cU == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                                                 >> 2U))))) 
            << 7U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
                         ? 0U : (IData)((0xeU == (0x1fU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                                                     >> 2U))))) 
                       << 6U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
                                    ? 0U : (IData)(
                                                   (6U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                                                        >> 2U))))) 
                                  << 5U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
                                               ? 0U
                                               : (IData)(
                                                         (4U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                                                              >> 2U))))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
                                                  ? 0U
                                                  : (IData)(
                                                            (0xcU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                                                                 >> 2U))))) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
                                                     ? 0U
                                                     : (IData)(
                                                               (0x18U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                                                                    >> 2U))))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
                                                        ? 0U
                                                        : (IData)(
                                                                  (3U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst)))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
                                                         ? 0U
                                                         : (IData)(
                                                                   (8U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__if_id_inst 
                                                                        >> 2U))))))))))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__cache_miss_addr = 0ULL;
    } else if (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__cache_miss_addr 
            = (0xfffffffffffffff8ULL & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr);
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__cahce_mism_addr = 0ULL;
    } else if (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__cahce_mism_addr 
            = ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter))
                ? (4ULL | (0xfffffffffffffff8ULL & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr))
                : (0xfffffffffffffff8ULL & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr));
    } else if ((((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_i_ok)) 
                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__missr_counter)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__cahce_mism_addr 
            = (0xfffffffffffffff8ULL & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr);
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
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
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_type)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_re 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_type) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
            ? 0ULL : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_lsaddr);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_2 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_2 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1)));
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__beatsLeft))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__earlyWinner_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__earlyWinner_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__earlyWinner_1;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__state_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__state_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__state_1;
    }
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__beatsLeft))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__earlyWinner_1;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__earlyWinner_1;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__muxStateEarly_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__earlyWinner_1;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__state_1;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__state_1;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__muxStateEarly_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__state_1;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_unready 
        = ((7U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_filter) 
                   >> 1U) | (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_filter) 
                                   >> 2U)))) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_mask) 
                                                << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_6 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_5) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_5)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__inc_addr_1 
        = (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__addr_1 
           + (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_beats) 
                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_size))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_todo 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_counter))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__wbeats_valid)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_beats)
                : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_4 
        = ((1U | (0xfffeU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize1_T_1 
                             >> 7U))) & (~ (0x7fffU 
                                            & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize1_T_1 
                                               >> 8U))));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divrem_data 
        = (((((0x86U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)) 
              | (0x1aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) 
             | (0x25U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) 
            | (0x51U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__shang
            : (((((0xc1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)) 
                  | (0x85U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) 
                 | (0x43U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode))) 
                | (0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__divider2__DOT__yushu
                : 0ULL));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_jump 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_jal) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__inst_jalr));
    if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) 
               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_type))))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_wmask = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_o = 0ULL;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_wmask 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__store_mask;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_o 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__load_store7__DOT__store_data;
    }
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_addr 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__cache_miss_addr
            : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__cahce_mism_addr
                : 0ULL));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_corrupt 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_bits_opcode));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_1) {
        ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_48 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_source
            [0U];
        ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_51 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_size
            [0U];
        ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_57 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_bits_opcode;
    } else {
        ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_48 = 0U;
        ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_51 = 0U;
        ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_57 = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_corrupt 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__muxStateEarly_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_bits_opcode));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__muxStateEarly_1) {
        ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_48 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source
            [0U];
        ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_51 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size
            [0U];
        ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_57 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_bits_opcode;
    } else {
        ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_48 = 0U;
        ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_51 = 0U;
        ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_57 = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___readys_readys_T_2 
        = (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_unready) 
                  >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_unready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_size 
        = (((IData)((0U != (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_4) 
                                     >> 8U)))) << 3U) 
           | (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_5) 
                                       >> 4U)))) << 2U) 
              | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_6) 
                                        >> 2U)))) << 1U) 
                 | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_6)))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_5 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_4) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_4)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__csr0__DOT__wr_mstatus) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__ecall_trap_ena) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__tmr_trap_ena)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__exe_res 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex_pc_branchena 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__ex_flush_branch) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__trap_ena)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__cmt_mret_ena));
    if ((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_type) 
                   >> 7U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)))) {
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
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
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
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
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
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
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
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
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
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
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
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
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
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
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
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
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
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
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
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_len = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_len = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_valid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_valid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_id = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id = 0U;
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
                ? (0xf0U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_cache))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_cache))
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
                ? (0xf0U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_cache))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_cache))
                    : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_last 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_last)) 
                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_last))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_last)) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_last) 
                          << 1U)) : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_ready 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_ready)) 
                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_ready))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_r_ready)) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_r_ready) 
                          << 1U)) : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_ready 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_ready)) 
                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_ready))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_b_ready)) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_b_ready) 
                          << 1U)) : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_burst 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? ((0xcU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_burst)) 
                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_burst))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? ((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_burst)) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_burst) 
                          << 2U)) : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_burst 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? ((0xcU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_burst)) 
                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_burst))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? ((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_burst)) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_burst) 
                          << 2U)) : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_len 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_len)) 
                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_len))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_len)) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_len) 
                          << 8U)) : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_len 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_len)) 
                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_len))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_len)) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_len) 
                          << 8U)) : 0U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_valid 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_valid)) 
                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_valid))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_valid)) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_valid) 
                          << 1U)) : 0U));
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
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? ((0xf0U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id)) 
                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_id))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? ((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_id)) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_id) 
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__mem_ctrl_req 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)) 
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_mask 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_wmask)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_data 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_mmio7__DOT__uncache) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_we)) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_finish)))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_data_o
            : 0ULL);
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__corrupt_out 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_corrupt) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__corrupt_reg));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_in_d_bits_corrupt 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_corrupt) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__corrupt_reg));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_47) 
           | (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_48));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_47) 
           | (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_48));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_size 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_50) 
           | (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_51));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_size 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_50) 
           | (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_51));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_0)
             ? 6U : 0U) | (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_57));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_0)
             ? 6U : 0U) | (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_57));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__corrupt_out 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_corrupt) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__corrupt_reg));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2_auto_in_d_bits_corrupt 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_corrupt) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__corrupt_reg));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_47) 
           | (IData)(ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_48));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_source 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_47) 
           | (IData)(ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_48));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_50) 
           | (IData)(ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_51));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_size 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_50) 
           | (IData)(ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_51));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__muxStateEarly_0)
             ? 6U : 0U) | (IData)(ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_57));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_opcode 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__muxStateEarly_0)
             ? 6U : 0U) | (IData)(ysyxSoCFull__DOT__fpga__DOT__err__DOT___T_57));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___readys_mask_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___readys_readys_T_2)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_filter_lo));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__allowed_0 
        = (1U & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__beatsLeft))
                  ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___readys_readys_T_2))
                  : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__state_0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__earlyWinner_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___readys_readys_T_2)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_out_arvalid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__earlyWinner_1 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___readys_readys_T_2) 
               >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr 
        = (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_size)) 
            & (((0ULL == (0x1fffff000ULL & (QData)((IData)(
                                                           (0x1000U 
                                                            ^ 
                                                            (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___out_bits_addr_T_5)))))) 
                | (0ULL == (0x1c0000000ULL & (QData)((IData)(
                                                             (0x40000000U 
                                                              ^ 
                                                              (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___out_bits_addr_T_5))))))) 
               | (0ULL == (0x180000000ULL & (QData)((IData)(
                                                            (0x80000000U 
                                                             ^ 
                                                             (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___out_bits_addr_T_5))))))))
            ? (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___out_bits_addr_T_5)
            : (0x1000U | (7U & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___out_bits_addr_T_5))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_6 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_5) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_5)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex_id_rd_data 
        = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_type))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_op2
            : ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_type) 
                 >> 7U) & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_opcode)))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__read_csr_data
                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__exe_res));
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
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_re))) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_we))) 
           & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__cahce_miss_ena)
               : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst)) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__cache_mism_ena))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_strb = 0U;
    if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)))) {
                if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_strb = 0U;
                } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_strb = 0U;
                } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_strb = 0U;
                }
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_strb = 0U;
            } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_strb = 0U;
            } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_strb = 0U;
            }
        } else if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_strb = 0U;
        } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_strb = 0U;
        } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_strb = 0U;
        }
    } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_strb 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_mask;
                    }
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_strb 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_mask;
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_strb 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_mask;
            }
        } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_strb = 0xffU;
                }
            }
        } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_strb = 0xffU;
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_strb = 0xffU;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_size = 0U;
    if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
                if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_size = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_size = 0U;
                    }
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_size 
                        = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))
                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncahce_arb_size)
                            : 0U);
                }
            } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_size = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_size = 0U;
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_size 
                    = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))
                        ? 3U : 0U);
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_size = 0U;
    if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)))) {
                if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_size 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncahce_arb_size;
                    } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_size = 0U;
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_size = 3U;
                } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_size = 0U;
                }
            }
        } else if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_size 
                    = (((0x10000000ULL <= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_addr) 
                        & (0x3fffffffULL >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_addr))
                        ? 2U : 3U);
            } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_size = 0U;
            }
        }
    }
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
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)) 
           & ((((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread)) 
                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok))) 
               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__delay_cnt))) 
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
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)) 
           & ((((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread)) 
                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok))) 
               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__delay_cnt))) 
              & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__dirty1
                    [(0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                       >> 3U)))] & 
                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter1
                     [(0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                        >> 3U)))] >= 
                     vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__counter2
                     [(0x3fU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr 
                                        >> 3U)))])))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__dirtyw_clean_o 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)) 
           & ((((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite)) 
                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok))) 
               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__delayw_cnt))) 
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__dirtyw_clean_t 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)) 
           & ((((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite)) 
                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok))) 
               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__delayw_cnt))) 
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
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)) 
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
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)) 
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
               & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)) 
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
               & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)) 
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
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
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
                                                  (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)) 
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
                                                  (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)) 
                                                    & ((~ 
                                                        (((8U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread)) 
                                                          & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok))) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__delay_cnt)))) 
                                                       & ((~ 
                                                           ((8U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread)) 
                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok))) 
                                                          & ((8U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread)) 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__delay_cnt)))))
                                                    ? 0x10U
                                                    : 8U))))
                             : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
                                 ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
                                     ? 1U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
                                              ? 1U : 
                                             (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)) 
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
                                                  (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)) 
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
                                                  (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)) 
                                                    & ((~ 
                                                        (((8U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite)) 
                                                          & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok))) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__delayw_cnt)))) 
                                                       & ((~ 
                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok) 
                                                            & (8U 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite)))) 
                                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__delayw_cnt) 
                                                             & (8U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))))))
                                                    ? 0x10U
                                                    : 8U))))
                             : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                                 ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                                     ? 1U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                                              ? 1U : 
                                             (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)) 
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
                : 0ULL) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
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
    if ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_data 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
                ? 0ULL : ((((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread)) 
                            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok))) 
                           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__delay_cnt)))
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
                               ? (((QData)((IData)(
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out1[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out1[0U])))
                               : (((QData)((IData)(
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out1[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out1[2U]))))
                           : 0ULL));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_addr 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
                ? 0ULL : ((((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread)) 
                            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok))) 
                           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__delay_cnt)))
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
                           : 0ULL));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_data 
            = ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
                    ? 0ULL : ((((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite)) 
                                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok))) 
                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__delayw_cnt)))
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
                               : 0ULL)) : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__transt_sign1) 
                                            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))
                                            ? (((QData)((IData)(
                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out1[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out1[0U])))
                                            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__transt_sign2) 
                                                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out1[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out1[2U])))
                                                : 0ULL)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_addr 
            = ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread))
                ? (((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dread)) 
                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))
                    ? (0xfffffffffffffff8ULL & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr)
                    : 0ULL) : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
                                    ? 0ULL : ((((8U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite)) 
                                                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok))) 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__delayw_cnt)))
                                               ? ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__dirty1
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
                                : ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite))
                                    ? (((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__data_cache3__DOT__state_dwrite)) 
                                        & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitrate_d_ok)))
                                        ? (0xfffffffffffffff8ULL 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_dc_addr)
                                        : 0ULL) : (
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
                                                     : 0ULL)))));
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp1804, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp1804[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp1804[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp1804[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp1804[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp1804[4U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp1804[5U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp1804[6U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp1804[7U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp1804[8U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp1804[9U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp1804[0xaU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp1804[0xbU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp1804[0xcU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp1804[0xdU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp1804[0xeU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp1804[0xfU];
    VL_SHIFTR_WWI(512,512,10, __Vtemp1805, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp1805[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp1805[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp1805[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp1805[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp1805[4U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp1805[5U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp1805[6U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp1805[7U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp1805[8U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp1805[9U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp1805[0xaU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp1805[0xbU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp1805[0xcU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp1805[0xdU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp1805[0xeU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp1805[0xfU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2406 
        = (IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2406 
        = (IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__last 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__count) 
                  == (1U & (~ (0xffU & (((IData)(7U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_size)) 
                                        >> 2U))))) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))));
    VL_SHIFTR_WWI(512,512,10, __Vtemp1806, vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp1806[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp1806[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp1806[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp1806[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp1806[4U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp1806[5U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp1806[6U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp1806[7U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp1806[8U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp1806[9U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp1806[0xaU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp1806[0xbU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp1806[0xcU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp1806[0xdU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp1806[0xeU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp1806[0xfU];
    VL_SHIFTR_WWI(512,512,10, __Vtemp1807, vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp1807[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp1807[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp1807[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp1807[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp1807[4U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp1807[5U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp1807[6U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp1807[7U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp1807[8U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp1807[9U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp1807[0xaU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp1807[0xbU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp1807[0xcU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp1807[0xdU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp1807[0xeU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp1807[0xfU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2406 
        = (IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2406 
        = (IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__last 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__count) 
                  == (1U & (~ (0xffU & (((IData)(7U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_size)) 
                                        >> 2U))))) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_opcode))));
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__beatsLeft))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxStateEarly_0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__earlyWinner_0;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxStateEarly_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__earlyWinner_1;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxStateEarly_0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__state_0;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxStateEarly_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__state_1;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_eq_2 
        = (IData)((0U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_eq_3 
        = (IData)((2U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_eq_4 
        = (IData)((4U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_eq_5 
        = (IData)((6U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_size))) 
                           >> 2U) & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr 
                                        >> 2U))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc_1 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_size))) 
                           >> 2U) & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr 
                                     >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_size 
        = (((IData)((0U != (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_4) 
                                     >> 8U)))) << 3U) 
           | (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_5) 
                                       >> 4U)))) << 2U) 
              | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_6) 
                                        >> 2U)))) << 1U) 
                 | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_6)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__ex_op1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_rdaddr) 
            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_reg_addr1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex_id_rd_ena));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__mem_op1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_addr) 
            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_reg_addr1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__exmem_mem_ena));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ctrl_req 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
            ? 0U : (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
                            ? 0U : (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_reg_ena1) 
                                           & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex_id_rd_type))) 
                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_reg_addr1) 
                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__idex_ex_rdaddr))))) 
                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_1 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_id)
                  ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__full))
                  : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__full))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state_nxt = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_strb = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_aw_size = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_size = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state_nxt 
            = ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))
                ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))
                    ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))
                        ? 1U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_uncache_ok)
                                 ? 1U : 6U)) : ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_dcache_ok)
                                                  ? 1U
                                                  : 5U)
                                                 : 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_icache_ok)
                                                  ? 1U
                                                  : 4U)))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))
                    ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))
                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__write_uncache_ok)
                            ? 1U : 3U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__write_dcache_ok)
                                           ? 1U : 2U))
                    : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))
                        ? (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_icache_shankhand)) 
                            & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_type)) 
                               | (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_type))))
                            ? 5U : (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_icache_shankhand)) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_re))
                                     ? 6U : (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_icache_shankhand)) 
                                              & ((1U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_type)) 
                                                 | (4U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_type))))
                                              ? 2U : 
                                             (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_icache_shankhand)) 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_we))
                                               ? 3U
                                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__read_icache_shankhand)
                                                   ? 4U
                                                   : 1U)))))
                        : 1U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_strb 
            = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                ? ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_strb)) 
                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_strb))
                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                    ? ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_strb)) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_strb) 
                          << 8U)) : 0U));
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
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_data = 0ULL;
    if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
                if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_data 
                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_data;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_data 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_data;
                    }
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_data 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_data;
                }
            } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_data 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_data;
                    }
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_data 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_data;
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_w_data 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_data;
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_addr = 0ULL;
    if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
                if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_addr 
                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_addr;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_addr 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_addr;
                    }
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_addr 
                        = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))
                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_addr
                            : 0ULL);
                }
            } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_addr 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_addr;
                    }
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_addr 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_addr;
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_aw_addr 
                    = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))
                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_addr
                        : 0ULL);
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_addr = 0ULL;
    if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)))) {
                if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_addr 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_addr;
                } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_addr 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_addr;
                } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_addr 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_addr;
                }
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_addr 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_addr;
            } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_addr 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_addr;
            } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_addr 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_addr;
            }
        } else if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_addr = 0ULL;
        } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_addr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_addr;
        } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_addr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_addr;
        }
    } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_addr = 0ULL;
                    }
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_addr = 0ULL;
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_addr = 0ULL;
            }
        } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_addr = 0ULL;
                }
            }
        } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_addr = 0ULL;
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_addr = 0ULL;
        }
    }
    __Vtemp1810[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1810[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1810[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1810[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1810[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1810[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1810[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1810[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp1810[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp1810[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp1810[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp1810[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp1810[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp1810[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp1810[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp1810[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp1811, __Vtemp1810);
    __Vtemp1814[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1814[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1814[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1814[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1814[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1814[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1814[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1814[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp1814[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp1814[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp1814[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp1814[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp1814[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp1814[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp1814[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp1814[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp1815, __Vtemp1814);
    __Vtemp1818[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1818[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1818[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1818[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1818[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1818[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1818[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1818[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp1818[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp1818[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp1818[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp1818[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp1818[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp1818[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp1818[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp1818[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp1819, __Vtemp1818);
    __Vtemp1822[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1822[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1822[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1822[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1822[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1822[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1822[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1822[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp1822[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp1822[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp1822[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp1822[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp1822[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp1822[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp1822[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp1822[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp1823, __Vtemp1822);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_58 
        = ((5U == (7U & __Vtemp1811[0U])) ? 2U : ((4U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp1815[0U]))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp1819[0U]))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & __Vtemp1823[0U]))
                                                     ? 1U
                                                     : 0U))));
    __Vtemp1826[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1826[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1826[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1826[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1826[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1826[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1826[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1826[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp1826[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp1826[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp1826[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp1826[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp1826[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp1826[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp1826[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp1826[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp1827, __Vtemp1826);
    __Vtemp1830[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1830[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1830[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1830[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1830[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1830[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1830[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1830[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp1830[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp1830[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp1830[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp1830[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp1830[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp1830[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp1830[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp1830[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp1831, __Vtemp1830);
    __Vtemp1834[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1834[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1834[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1834[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1834[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1834[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1834[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1834[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp1834[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp1834[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp1834[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp1834[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp1834[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp1834[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp1834[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp1834[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp1835, __Vtemp1834);
    __Vtemp1838[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1838[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1838[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1838[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1838[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1838[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1838[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1838[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp1838[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp1838[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp1838[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp1838[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp1838[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp1838[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp1838[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp1838[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp1839, __Vtemp1838);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_58 
        = ((5U == (7U & __Vtemp1827[0U])) ? 2U : ((4U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp1831[0U]))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp1835[0U]))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & __Vtemp1839[0U]))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__last));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_in_d_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__last));
    __Vtemp1842[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1842[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1842[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1842[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1842[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1842[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1842[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1842[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp1842[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp1842[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp1842[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp1842[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp1842[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp1842[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp1842[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp1842[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp1843, __Vtemp1842);
    __Vtemp1846[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1846[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1846[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1846[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1846[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1846[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1846[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1846[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp1846[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp1846[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp1846[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp1846[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp1846[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp1846[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp1846[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp1846[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp1847, __Vtemp1846);
    __Vtemp1850[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1850[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1850[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1850[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1850[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1850[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1850[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1850[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp1850[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp1850[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp1850[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp1850[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp1850[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp1850[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp1850[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp1850[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp1851, __Vtemp1850);
    __Vtemp1854[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1854[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1854[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1854[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1854[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1854[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1854[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1854[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp1854[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp1854[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp1854[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp1854[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp1854[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp1854[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp1854[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp1854[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp1855, __Vtemp1854);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_58 
        = ((5U == (7U & __Vtemp1843[0U])) ? 2U : ((4U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp1847[0U]))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp1851[0U]))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & __Vtemp1855[0U]))
                                                     ? 1U
                                                     : 0U))));
    __Vtemp1858[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1858[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1858[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1858[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1858[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1858[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1858[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1858[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp1858[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp1858[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp1858[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp1858[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp1858[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp1858[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp1858[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp1858[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp1859, __Vtemp1858);
    __Vtemp1862[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1862[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1862[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1862[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1862[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1862[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1862[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1862[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp1862[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp1862[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp1862[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp1862[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp1862[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp1862[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp1862[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp1862[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp1863, __Vtemp1862);
    __Vtemp1866[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1866[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1866[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1866[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1866[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1866[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1866[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1866[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp1866[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp1866[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp1866[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp1866[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp1866[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp1866[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp1866[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp1866[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp1867, __Vtemp1866);
    __Vtemp1870[0U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                        >> 1U)));
    __Vtemp1870[1U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[1U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[1U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                        >> 1U)));
    __Vtemp1870[2U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[2U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[2U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                        >> 1U)));
    __Vtemp1870[3U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[3U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[3U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                        >> 1U)));
    __Vtemp1870[4U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[4U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[4U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                        >> 1U)));
    __Vtemp1870[5U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[5U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[5U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                        >> 1U)));
    __Vtemp1870[6U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[6U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[6U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                        >> 1U)));
    __Vtemp1870[7U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[7U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[7U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                        >> 1U)));
    __Vtemp1870[8U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[8U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[8U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                        >> 1U)));
    __Vtemp1870[9U] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[9U] 
                       & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                           << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[9U] 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                        >> 1U)));
    __Vtemp1870[0xaU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xaU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xaU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                          >> 1U)));
    __Vtemp1870[0xbU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xbU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xbU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                          >> 1U)));
    __Vtemp1870[0xcU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xcU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xcU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                          >> 1U)));
    __Vtemp1870[0xdU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xdU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xdU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                          >> 1U)));
    __Vtemp1870[0xeU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xeU] 
                         & (((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                              & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                             << 0x1fU) | ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xeU] 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                          >> 1U)));
    __Vtemp1870[0xfU] = (VysyxSoCFull__ConstPool__CONST_0b2d9f06_0[0xfU] 
                         & ((VysyxSoCFull__ConstPool__CONST_3ad9c2be_0[0xfU] 
                             & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                            >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp1871, __Vtemp1870);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_58 
        = ((5U == (7U & __Vtemp1859[0U])) ? 2U : ((4U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp1863[0U]))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp1867[0U]))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & __Vtemp1871[0U]))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__last));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2_auto_in_d_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__last));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_eq_2))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_eq_3))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_eq_4))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_eq_5))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_pip_jalrena 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
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
    __Vtableidx4 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__resp_success) 
                     << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__success_aw) 
                                << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__timew_state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__timew_state_n 
        = VysyxSoCFull__ConstPool__TABLE_2039a795_0
        [__Vtableidx4];
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
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
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
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
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
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
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
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___sink_ACancel_earlyValid_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__state_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_filter 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_in_d_valid) 
             << 3U) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_mask)) 
                       << 2U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_in_d_valid) 
                                  << 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_if_flush 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_pip_jalrena));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__inst_hit_ok = 0U;
    } else if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core_stall_l) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__inst_hit_ok = 0U;
        } else if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r 
                     == (0x7fffffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                              >> 9U)))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r))) {
            if ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                               >> 2U)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__inst_hit_ok = 1U;
            } else if ((1U & (~ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                         >> 2U))))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__inst_hit_ok = 1U;
            }
        } else if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_data_r 
                     == (0x7fffffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                              >> 9U)))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r))) {
            if ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                               >> 2U)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__inst_hit_ok = 1U;
            } else if ((1U & (~ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                         >> 2U))))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__inst_hit_ok = 1U;
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__inst_hit_ok = 0U;
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__inst_hit_ok = 0U;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_valid = 0U;
    } else if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core_stall_l) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_valid = 0U;
        } else if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r 
                     == (0x7fffffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                              >> 9U)))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r))) {
            if ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                               >> 2U)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_valid = 1U;
            } else if ((1U & (~ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                         >> 2U))))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_valid = 1U;
            }
        } else if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_data_r 
                     == (0x7fffffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                              >> 9U)))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r))) {
            if ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                               >> 2U)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_valid = 1U;
            } else if ((1U & (~ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                         >> 2U))))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_valid = 1U;
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_valid = 0U;
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_valid = 0U;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data = 0U;
    } else if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__core_stall_l) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data = 0U;
        } else if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r 
                     == (0x7fffffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                              >> 9U)))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r))) {
            if ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                               >> 2U)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out0[1U];
            } else if ((1U & (~ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                         >> 2U))))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out0[0U];
            }
        } else if (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_data_r 
                     == (0x7fffffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                              >> 9U)))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r))) {
            if ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                               >> 2U)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out0[3U];
            } else if ((1U & (~ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu_inst_addr 
                                         >> 2U))))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__data_out0[2U];
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_data = 0U;
        }
    }
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
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
            ? 0ULL : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_reg_ena1)
                       ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__ex_op1)
                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex_id_rd_data
                           : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id3__DOT__mem_op1)
                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__mem_id_data
                               : (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)) 
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
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__beatsLeft))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_in_d_valid;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_in_d_valid;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___sink_ACancel_earlyValid_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___sink_ACancel_earlyValid_T_3;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_unready 
        = ((7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_filter) 
                   >> 1U) | (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_filter) 
                                   >> 2U)))) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_mask) 
                                                << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__stall_ctrl 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
            ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__mem_ctrl_req)
                     ? 0x1fU : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__ex5__DOT__mul_div_req)
                                 ? 0xfU : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__id_ctrl_req)
                                            ? 7U : 
                                           (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_inst_valid))
                                             ? 0U : 3U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__icache_if_shankhand 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)) 
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___readys_readys_T_2 
        = (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_unready) 
                  >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_unready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst_nxt 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
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
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__write_m_ok)
                                                    ? 0x20U
                                                    : 8U))))
                                  : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
                                      ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
                                          ? 1U : ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__inst_hit_ok)
                                                    ? 1U
                                                    : 4U)))
                                      : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
                                          ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
                                              ? 1U : 
                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__write_i_ok)
                                               ? 0x20U
                                               : 2U))
                                          : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__state_inst))
                                              ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_cache2__DOT__icache_if_shankhand)
                                                  ? 0x20U
                                                  : 1U)
                                              : 1U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__pip_fore0__DOT__j_pc 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rvcpu1__DOT__pip_fore0__DOT__inst_jalr)
             ? ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)) 
                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
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
                       : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
                           ? 0ULL : 4ULL)))));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___readys_mask_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___readys_readys_T_2)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_in_d_valid) 
              << 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__earlyWinner_1 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___readys_readys_T_2) 
               >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_in_d_valid));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxStateEarly_1 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__beatsLeft))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__earlyWinner_1)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__state_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6;
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_ready 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_valid)) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__success_aw));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_ready 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_valid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_w_last)) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
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
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxStateEarly_1) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_param;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_param;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___T_40 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___T_46 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___T_37 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___T_40 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___T_46 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___T_37 = 0U;
    }
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats_lo 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__bad)
            ? 0U : (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___maxSupported1_T)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize1_T_1 
        = (0x7fffffU & ((0xffU | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__bad)
                                    ? 0U : (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___maxSupported1_T))) 
                                  << 8U)) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing) 
                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing) 
                        >> 1U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arready) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_47))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_param)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7;
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_valid = 0U;
    if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state)))) {
                if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_valid = 0U;
                } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_valid 
                        = (1U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uncache_arb_addr 
                                                >> 0x1fU)))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_ready)
                                  : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__chosel))));
                } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_valid = 0U;
                }
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_valid = 0U;
            } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_valid 
                    = (1U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_cache_out_addr 
                                            >> 0x1fU)))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_ready)
                              : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__chosel))));
            } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_valid = 0U;
            }
        } else if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_valid = 0U;
        } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_valid 
                = (1U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_cache_addr 
                                        >> 0x1fU)))
                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_ready)
                          : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__chosel))));
        } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axir_state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_valid = 0U;
        }
    } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__arbitrate_state))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_valid = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_valid = 0U;
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_valid = 0U;
            }
        } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_valid = 0U;
                }
            }
        } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state))) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbitratem4__DOT__axiw_state)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_valid = 0U;
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_valid = 0U;
        }
    }
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__inc_addr 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr 
           + (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats) 
                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_size))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_5 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_4) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_4)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rst)
            ? 0U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                     ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_valid)) 
                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_valid))
                     : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mmio_thing))
                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_valid)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__t_axi_ar_valid) 
                               << 1U)) : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_5 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_4) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_4)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___in_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_valid) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_latched)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_6 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_5) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_5)));
    __Vtableidx3 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__resp_success) 
                     << 3U) | ((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_valid) 
                                      << 2U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__timer_state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint6__DOT__timer_state_n 
        = VysyxSoCFull__ConstPool__TABLE_440d609d_0
        [__Vtableidx3];
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arready) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_47)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_valid) 
              >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_axi_ar_valid) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_47));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size 
        = (((IData)((0U != (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_4) 
                                     >> 8U)))) << 3U) 
           | (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_5) 
                                       >> 4U)))) << 2U) 
              | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_6) 
                                        >> 2U)))) << 1U) 
                 | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_6)))))));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9;
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___rid_reg_T 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_1_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_arvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9 
        = vlSelf->reset;
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
}
