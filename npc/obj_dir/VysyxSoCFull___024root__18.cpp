// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

QData VysyxSoCFull___024root___change_request_1(VysyxSoCFull___024root* vlSelf);

VL_INLINE_OPT QData VysyxSoCFull___024root___change_request(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___change_request\n"); );
    // Body
    return (VysyxSoCFull___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VysyxSoCFull___024root___change_request_1(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_ ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)
         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_spi_clk ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_spi_clk)
         | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_ ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)
         | (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__spiFlash__DOT__reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_txc_source__DOT__source_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_txc_source__DOT__source_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__sink_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__sink_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__sink_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__sink_valid_0_reset)
        || (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__sink_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__sink_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__sink_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__sink_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__sink_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__sink_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__rxInc_sink__DOT__sink_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_ ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__io_c2b_rst_reg__DOT__reg_)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__rxInc_sink__DOT__sink_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_ ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__io_c2b_rst_reg__DOT__reg_)
        || (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__source_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__source_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__source_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__source_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__source_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__source_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__source_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__source_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__source_valid_0_reset)
         | (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__source_valid_0_reset));
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_ ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29251: ysyxSoCFull.asic.chipMaster.chiplink.rx_reset_reg.reg_\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_spi_clk ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_spi_clk))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:85280: ysyxSoCFull.asic.lspi.mspi_spi_clk\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_ ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29251: ysyxSoCFull.fpga.chiplink.rx_reset_reg.reg_\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__spiFlash__DOT__reset))) VL_DBG_MSGF("        CHANGE: vsrc//spiFlash.v:18: ysyxSoCFull.spiFlash.reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_txc_source__DOT__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27975: io_txc_source.source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_txc_source__DOT__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27975: io_txc_source.source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29408: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29408: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29408: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29408: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29408: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29408: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29408: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29408: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29408: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29408: sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__rxInc_sink__DOT__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29682: rxInc_sink.sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_ ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__io_c2b_rst_reg__DOT__reg_))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29251: io_c2b_rst_reg.reg_\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__rxInc_sink__DOT__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29682: rxInc_sink.sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_ ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__io_c2b_rst_reg__DOT__reg_))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:29251: io_c2b_rst_reg.reg_\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27683: source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27683: source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27683: source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27683: source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27683: source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27683: source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27683: source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27683: source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27683: source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0_reset ^ vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: vsrc/ysyxSoCFull.v:27683: source_valid_0_reset\n"); );
    // Final
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_ 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_spi_clk 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_spi_clk;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_ 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__spiFlash__DOT__reset 
        = vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_txc_source__DOT__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_txc_source__DOT__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__rxInc_sink__DOT__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__io_c2b_rst_reg__DOT__reg_ 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__rxInc_sink__DOT__sink_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__io_c2b_rst_reg__DOT__reg_ 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0_reset;
    vlSelf->__Vchglast__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source__source_valid_0_reset 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0_reset;
    return __req;
}

#ifdef VL_DEBUG
void VysyxSoCFull___024root___eval_debug_assertions(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
