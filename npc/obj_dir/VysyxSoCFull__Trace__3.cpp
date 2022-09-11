// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


void VysyxSoCFull___024root__traceChgSub3(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp7867;
    VlWide<4>/*127:0*/ __Vtemp7872;
    VlWide<4>/*127:0*/ __Vtemp7876;
    VlWide<4>/*127:0*/ __Vtemp7877;
    VlWide<4>/*127:0*/ __Vtemp7879;
    VlWide<4>/*127:0*/ __Vtemp7880;
    VlWide<4>/*127:0*/ __Vtemp7882;
    VlWide<4>/*127:0*/ __Vtemp7883;
    VlWide<4>/*127:0*/ __Vtemp7884;
    VlWide<4>/*127:0*/ __Vtemp7885;
    VlWide<4>/*127:0*/ __Vtemp7886;
    VlWide<4>/*127:0*/ __Vtemp7887;
    VlWide<4>/*127:0*/ __Vtemp7888;
    VlWide<4>/*127:0*/ __Vtemp7889;
    VlWide<4>/*127:0*/ __Vtemp7890;
    VlWide<4>/*127:0*/ __Vtemp7891;
    VlWide<4>/*127:0*/ __Vtemp7892;
    VlWide<4>/*127:0*/ __Vtemp7893;
    VlWide<4>/*127:0*/ __Vtemp7894;
    VlWide<4>/*127:0*/ __Vtemp7895;
    VlWide<4>/*127:0*/ __Vtemp7896;
    VlWide<4>/*127:0*/ __Vtemp7897;
    VlWide<4>/*127:0*/ __Vtemp7898;
    VlWide<4>/*127:0*/ __Vtemp7899;
    VlWide<4>/*127:0*/ __Vtemp7900;
    VlWide<4>/*127:0*/ __Vtemp7901;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 16356);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+0,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+1,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_2_e_valid)
                                     ? 1U : 0U)));
            tracep->chgBit(oldp+2,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__do_enq));
            tracep->chgCData(oldp+3,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray_io_q),4);
            tracep->chgBit(oldp+4,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+5,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_ridx_bin),4);
            tracep->chgBit(oldp+6,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__valid_reg));
            tracep->chgBit(oldp+7,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+8,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+9,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+10,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+11,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                        << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+12,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                        << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+13,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+14,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+15,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+16,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+17,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+18,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+19,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+20,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+21,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+22,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+23,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray_io_q),4);
            tracep->chgBit(oldp+24,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+25,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_ridx_bin),4);
            tracep->chgBit(oldp+26,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__valid_reg));
            tracep->chgBit(oldp+27,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+28,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+29,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+30,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+31,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                        << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+32,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                        << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+33,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+34,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+35,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+36,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+37,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+38,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+39,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+40,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+41,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+42,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+43,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray_io_q),4);
            tracep->chgBit(oldp+44,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+45,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_ridx_bin),4);
            tracep->chgBit(oldp+46,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__valid_reg));
            tracep->chgBit(oldp+47,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+48,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+49,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+50,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+51,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                        << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+52,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                        << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+53,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+54,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+55,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+56,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+57,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+58,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+59,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+60,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+61,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+62,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+63,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray_io_q),4);
            tracep->chgBit(oldp+64,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+65,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_ridx_bin),4);
            tracep->chgBit(oldp+66,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__valid_reg));
            tracep->chgBit(oldp+67,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+68,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+69,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+70,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+71,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                        << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+72,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                        << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+73,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+74,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+75,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+76,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+77,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+78,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+79,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+80,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+81,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+82,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+83,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray_io_q),4);
            tracep->chgBit(oldp+84,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+85,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_ridx_bin),4);
            tracep->chgBit(oldp+86,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__valid_reg));
            tracep->chgBit(oldp+87,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+88,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+89,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+90,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+91,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                        << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+92,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                        << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+93,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+94,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+95,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+96,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+97,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+98,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+99,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+100,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+101,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+102,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+103,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray_io_q),4);
            tracep->chgBit(oldp+104,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+105,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_ridx_bin),4);
            tracep->chgBit(oldp+106,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__valid_reg));
            tracep->chgBit(oldp+107,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+108,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+109,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+110,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+111,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+112,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+113,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+114,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+115,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+116,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+117,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+118,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+119,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+120,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+121,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+122,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+123,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray_io_q),4);
            tracep->chgBit(oldp+124,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+125,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_ridx_bin),4);
            tracep->chgBit(oldp+126,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__valid_reg));
            tracep->chgBit(oldp+127,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+128,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+129,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+130,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+131,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+132,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+133,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+134,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+135,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+136,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+137,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+138,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+139,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+140,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+141,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+142,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+143,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray_io_q),4);
            tracep->chgBit(oldp+144,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+145,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_ridx_bin),4);
            tracep->chgBit(oldp+146,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__valid_reg));
            tracep->chgBit(oldp+147,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+148,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+149,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+150,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+151,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+152,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+153,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+154,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+155,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+156,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+157,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+158,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+159,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+160,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+161,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+162,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+163,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray_io_q),4);
            tracep->chgBit(oldp+164,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+165,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_ridx_bin),4);
            tracep->chgBit(oldp+166,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__valid_reg));
            tracep->chgBit(oldp+167,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+168,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+169,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+170,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+171,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+172,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+173,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+174,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+175,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+176,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+177,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+178,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+179,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+180,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+181,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+182,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+183,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray_io_q),4);
            tracep->chgBit(oldp+184,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+185,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_ridx_bin),4);
            tracep->chgBit(oldp+186,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__valid_reg));
            tracep->chgBit(oldp+187,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+188,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+189,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+190,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+191,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+192,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+193,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+194,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+195,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+196,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+197,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+198,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+199,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+200,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+201,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+202,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+203,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+204,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__valid_reg));
            tracep->chgBit(oldp+205,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+206,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+207,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+208,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__valid_reg));
            tracep->chgBit(oldp+209,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+210,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+211,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+212,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__valid_reg));
            tracep->chgBit(oldp+213,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+214,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+215,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+216,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__valid_reg));
            tracep->chgBit(oldp+217,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+218,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [2U] | vlSelf->__Vm_traceActivity
                         [0x14U]))) {
            tracep->chgBit(oldp+219,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx) 
                                         != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray_io_q)))));
            tracep->chgBit(oldp+220,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx) 
                                         != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray_io_q)))));
            tracep->chgBit(oldp+221,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx) 
                                         != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray_io_q)))));
            tracep->chgBit(oldp+222,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx) 
                                         != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__widx_widx_gray_io_q)))));
            tracep->chgBit(oldp+223,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx) 
                                         != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__widx_widx_gray_io_q)))));
            tracep->chgBit(oldp+224,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx) 
                                         != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__widx_widx_gray_io_q)))));
            tracep->chgBit(oldp+225,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_incremented) 
                                         != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))));
            tracep->chgBit(oldp+226,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_incremented) 
                                         != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))));
            tracep->chgBit(oldp+227,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_incremented) 
                                         != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))));
            tracep->chgBit(oldp+228,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_incremented) 
                                         != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgCData(oldp+229,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray),4);
            tracep->chgCData(oldp+230,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray),4);
            tracep->chgCData(oldp+231,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray),4);
            tracep->chgCData(oldp+232,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray),4);
            tracep->chgCData(oldp+233,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray),4);
            tracep->chgBit(oldp+234,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__widx_gray));
            tracep->chgBit(oldp+235,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__widx_gray));
            tracep->chgBit(oldp+236,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))));
            tracep->chgBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+240,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__io_enq_ready));
            tracep->chgBit(oldp+241,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__io_enq_ready));
            tracep->chgBit(oldp+242,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__io_enq_ready));
            tracep->chgBit(oldp+243,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__io_enq_ready));
            tracep->chgBit(oldp+244,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__io_enq_ready));
            tracep->chgBit(oldp+245,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source_io_enq_ready));
            tracep->chgBit(oldp+246,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source_io_enq_ready));
            tracep->chgIData(oldp+247,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT___rxInc_a_T),20);
            tracep->chgIData(oldp+248,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z),21);
            tracep->chgIData(oldp+249,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT___rxInc_bT),20);
            tracep->chgIData(oldp+250,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z_1),21);
            tracep->chgIData(oldp+251,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT___rxInc_c_T),20);
            tracep->chgIData(oldp+252,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z_2),21);
            tracep->chgIData(oldp+253,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT___rxInc_d_T),20);
            tracep->chgIData(oldp+254,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z_3),21);
            tracep->chgIData(oldp+255,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT___rxInc_e_T),20);
            tracep->chgIData(oldp+256,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z_4),21);
            tracep->chgIData(oldp+257,(((0x100000U 
                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z)
                                         ? 0xfffffU
                                         : (0xfffffU 
                                            & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z))),20);
            tracep->chgIData(oldp+258,(((0x100000U 
                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z_1)
                                         ? 0xfffffU
                                         : (0xfffffU 
                                            & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z_1))),20);
            tracep->chgIData(oldp+259,(((0x100000U 
                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z_2)
                                         ? 0xfffffU
                                         : (0xfffffU 
                                            & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z_2))),20);
            tracep->chgIData(oldp+260,(((0x100000U 
                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z_3)
                                         ? 0xfffffU
                                         : (0xfffffU 
                                            & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z_3))),20);
            tracep->chgIData(oldp+261,(((0x100000U 
                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z_4)
                                         ? 0xfffffU
                                         : (0xfffffU 
                                            & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__rx_z_4))),20);
            tracep->chgBit(oldp+262,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q_io_enq_ready));
            tracep->chgBit(oldp+263,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__ram_R0_en));
            tracep->chgBit(oldp+264,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_flow));
            tracep->chgBit(oldp+265,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_enq));
            tracep->chgBit(oldp+266,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_deq));
            tracep->chgBit(oldp+267,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__do_enq));
            tracep->chgBit(oldp+268,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q_io_enq_ready));
            tracep->chgBit(oldp+269,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__ram_R0_en));
            tracep->chgBit(oldp+270,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_flow));
            tracep->chgBit(oldp+271,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_enq));
            tracep->chgBit(oldp+272,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_deq));
            tracep->chgBit(oldp+273,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__do_enq));
            tracep->chgBit(oldp+274,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q_io_enq_ready));
            tracep->chgBit(oldp+275,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__ram_R0_en));
            tracep->chgBit(oldp+276,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_flow));
            tracep->chgBit(oldp+277,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_enq));
            tracep->chgBit(oldp+278,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_deq));
            tracep->chgBit(oldp+279,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__do_enq));
            tracep->chgBit(oldp+280,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q_io_enq_ready));
            tracep->chgBit(oldp+281,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__ram_R0_en));
            tracep->chgBit(oldp+282,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_flow));
            tracep->chgBit(oldp+283,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_enq));
            tracep->chgBit(oldp+284,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_deq));
            tracep->chgBit(oldp+285,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__do_enq));
            tracep->chgBit(oldp+286,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q_io_enq_ready));
            tracep->chgBit(oldp+287,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__ram_R0_en));
            tracep->chgBit(oldp+288,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_flow));
            tracep->chgBit(oldp+289,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_enq));
            tracep->chgBit(oldp+290,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_deq));
            tracep->chgBit(oldp+291,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__do_enq));
            tracep->chgBit(oldp+292,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+293,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+294,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__widx_widx_bin));
            tracep->chgBit(oldp+295,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__widx_widx_bin) 
                                         + (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source_io_enq_ready)))));
            tracep->chgBit(oldp+296,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ready_reg));
            tracep->chgBit(oldp+297,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+298,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+299,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+300,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+301,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+302,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+303,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__widx_widx_bin));
            tracep->chgBit(oldp+304,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__widx_widx_bin) 
                                         + (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source_io_enq_ready)))));
            tracep->chgBit(oldp+305,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ready_reg));
            tracep->chgBit(oldp+306,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+307,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+308,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+309,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+310,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray))));
            tracep->chgBit(oldp+311,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                            >> 1U))));
            tracep->chgBit(oldp+312,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                            >> 2U))));
            tracep->chgBit(oldp+313,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                            >> 3U))));
            tracep->chgBit(oldp+314,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray))));
            tracep->chgBit(oldp+315,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                            >> 1U))));
            tracep->chgBit(oldp+316,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                            >> 2U))));
            tracep->chgBit(oldp+317,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                            >> 3U))));
            tracep->chgBit(oldp+318,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray))));
            tracep->chgBit(oldp+319,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                            >> 1U))));
            tracep->chgBit(oldp+320,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                            >> 2U))));
            tracep->chgBit(oldp+321,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                            >> 3U))));
            tracep->chgBit(oldp+322,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray))));
            tracep->chgBit(oldp+323,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                            >> 1U))));
            tracep->chgBit(oldp+324,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                            >> 2U))));
            tracep->chgBit(oldp+325,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                            >> 3U))));
            tracep->chgBit(oldp+326,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray))));
            tracep->chgBit(oldp+327,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                            >> 1U))));
            tracep->chgBit(oldp+328,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                            >> 2U))));
            tracep->chgBit(oldp+329,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                            >> 3U))));
            tracep->chgCData(oldp+330,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                          << 3U) | 
                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U)) | 
                                        (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
            tracep->chgBit(oldp+331,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+332,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_widx_bin),4);
            tracep->chgCData(oldp+333,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_incremented),4);
            tracep->chgCData(oldp+334,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_incremented) 
                                        ^ (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_incremented) 
                                                 >> 1U)))),4);
            tracep->chgCData(oldp+335,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__index),3);
            tracep->chgBit(oldp+336,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ready_reg));
            tracep->chgBit(oldp+337,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+338,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+339,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+340,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+341,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+342,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+343,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+344,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+345,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+346,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+347,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+348,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+349,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+350,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+351,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+352,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+353,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                          << 3U) | 
                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U)) | 
                                        (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
            tracep->chgBit(oldp+354,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+355,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_widx_bin),4);
            tracep->chgCData(oldp+356,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_incremented),4);
            tracep->chgCData(oldp+357,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_incremented) 
                                        ^ (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_incremented) 
                                                 >> 1U)))),4);
            tracep->chgCData(oldp+358,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__index),3);
            tracep->chgBit(oldp+359,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ready_reg));
            tracep->chgBit(oldp+360,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+361,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+362,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+363,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+364,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+365,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+366,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+367,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+368,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+369,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+370,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+371,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+372,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+373,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+374,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+375,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+376,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                          << 3U) | 
                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U)) | 
                                        (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
            tracep->chgBit(oldp+377,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+378,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_widx_bin),4);
            tracep->chgCData(oldp+379,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_incremented),4);
            tracep->chgCData(oldp+380,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_incremented) 
                                        ^ (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_incremented) 
                                                 >> 1U)))),4);
            tracep->chgCData(oldp+381,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__index),3);
            tracep->chgBit(oldp+382,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ready_reg));
            tracep->chgBit(oldp+383,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+384,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+385,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+386,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+387,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+388,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+389,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+390,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+391,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+392,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+393,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+394,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+395,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+396,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+397,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+398,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+399,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                          << 3U) | 
                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U)) | 
                                        (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
            tracep->chgBit(oldp+400,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+401,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_widx_bin),4);
            tracep->chgCData(oldp+402,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_incremented),4);
            tracep->chgCData(oldp+403,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_incremented) 
                                        ^ (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_incremented) 
                                                 >> 1U)))),4);
            tracep->chgCData(oldp+404,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__index),3);
            tracep->chgBit(oldp+405,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ready_reg));
            tracep->chgBit(oldp+406,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+407,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+408,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+409,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+410,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+411,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+412,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+413,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+414,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+415,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+416,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+417,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+418,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+419,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+420,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+421,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+422,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                          << 3U) | 
                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U)) | 
                                        (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
            tracep->chgBit(oldp+423,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+424,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_widx_bin),4);
            tracep->chgCData(oldp+425,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_incremented),4);
            tracep->chgCData(oldp+426,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_incremented) 
                                        ^ (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_incremented) 
                                                 >> 1U)))),4);
            tracep->chgCData(oldp+427,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__index),3);
            tracep->chgBit(oldp+428,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ready_reg));
            tracep->chgBit(oldp+429,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+430,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+431,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+432,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+433,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+434,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+435,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+436,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+437,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+438,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+439,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+440,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+441,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+442,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+443,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+444,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgCData(oldp+445,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray),4);
            tracep->chgCData(oldp+446,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray),4);
            tracep->chgCData(oldp+447,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray),4);
            tracep->chgCData(oldp+448,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray),4);
            tracep->chgCData(oldp+449,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray),4);
            tracep->chgBit(oldp+450,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__widx_gray));
            tracep->chgBit(oldp+451,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__widx_gray));
            tracep->chgBit(oldp+452,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))));
            tracep->chgBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+456,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__io_enq_ready));
            tracep->chgBit(oldp+457,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__io_enq_ready));
            tracep->chgBit(oldp+458,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__io_enq_ready));
            tracep->chgBit(oldp+459,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__io_enq_ready));
            tracep->chgBit(oldp+460,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__io_enq_ready));
            tracep->chgBit(oldp+461,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source_io_enq_ready));
            tracep->chgBit(oldp+462,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source_io_enq_ready));
            tracep->chgIData(oldp+463,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT___rxInc_a_T),20);
            tracep->chgIData(oldp+464,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z),21);
            tracep->chgIData(oldp+465,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT___rxInc_bT),20);
            tracep->chgIData(oldp+466,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z_1),21);
            tracep->chgIData(oldp+467,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT___rxInc_c_T),20);
            tracep->chgIData(oldp+468,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z_2),21);
            tracep->chgIData(oldp+469,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT___rxInc_d_T),20);
            tracep->chgIData(oldp+470,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z_3),21);
            tracep->chgIData(oldp+471,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT___rxInc_e_T),20);
            tracep->chgIData(oldp+472,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z_4),21);
            tracep->chgIData(oldp+473,(((0x100000U 
                                         & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z)
                                         ? 0xfffffU
                                         : (0xfffffU 
                                            & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z))),20);
            tracep->chgIData(oldp+474,(((0x100000U 
                                         & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z_1)
                                         ? 0xfffffU
                                         : (0xfffffU 
                                            & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z_1))),20);
            tracep->chgIData(oldp+475,(((0x100000U 
                                         & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z_2)
                                         ? 0xfffffU
                                         : (0xfffffU 
                                            & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z_2))),20);
            tracep->chgIData(oldp+476,(((0x100000U 
                                         & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z_3)
                                         ? 0xfffffU
                                         : (0xfffffU 
                                            & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z_3))),20);
            tracep->chgIData(oldp+477,(((0x100000U 
                                         & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z_4)
                                         ? 0xfffffU
                                         : (0xfffffU 
                                            & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__rx_z_4))),20);
            tracep->chgBit(oldp+478,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q_io_enq_ready));
            tracep->chgBit(oldp+479,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__ram_R0_en));
            tracep->chgBit(oldp+480,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_flow));
            tracep->chgBit(oldp+481,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_enq));
            tracep->chgBit(oldp+482,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__fq__DOT__do_deq));
            tracep->chgBit(oldp+483,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqa__DOT__io_deq_q__DOT__do_enq));
            tracep->chgBit(oldp+484,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q_io_enq_ready));
            tracep->chgBit(oldp+485,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__ram_R0_en));
            tracep->chgBit(oldp+486,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_flow));
            tracep->chgBit(oldp+487,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_enq));
            tracep->chgBit(oldp+488,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__fq__DOT__do_deq));
            tracep->chgBit(oldp+489,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqb__DOT__io_deq_q__DOT__do_enq));
            tracep->chgBit(oldp+490,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q_io_enq_ready));
            tracep->chgBit(oldp+491,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__ram_R0_en));
            tracep->chgBit(oldp+492,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_flow));
            tracep->chgBit(oldp+493,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_enq));
            tracep->chgBit(oldp+494,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__fq__DOT__do_deq));
            tracep->chgBit(oldp+495,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqc__DOT__io_deq_q__DOT__do_enq));
            tracep->chgBit(oldp+496,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q_io_enq_ready));
            tracep->chgBit(oldp+497,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__ram_R0_en));
            tracep->chgBit(oldp+498,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_flow));
            tracep->chgBit(oldp+499,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_enq));
            tracep->chgBit(oldp+500,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__fq__DOT__do_deq));
            tracep->chgBit(oldp+501,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqd__DOT__io_deq_q__DOT__do_enq));
            tracep->chgBit(oldp+502,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q_io_enq_ready));
            tracep->chgBit(oldp+503,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__ram_R0_en));
            tracep->chgBit(oldp+504,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_flow));
            tracep->chgBit(oldp+505,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_enq));
            tracep->chgBit(oldp+506,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__fq__DOT__do_deq));
            tracep->chgBit(oldp+507,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__hqe__DOT__io_deq_q__DOT__do_enq));
            tracep->chgBit(oldp+508,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+509,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+510,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__widx_widx_bin));
            tracep->chgBit(oldp+511,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__widx_widx_bin) 
                                         + (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source_io_enq_ready)))));
            tracep->chgBit(oldp+512,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ready_reg));
            tracep->chgBit(oldp+513,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+514,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+515,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+516,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+517,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+518,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+519,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__widx_widx_bin));
            tracep->chgBit(oldp+520,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__widx_widx_bin) 
                                         + (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source_io_enq_ready)))));
            tracep->chgBit(oldp+521,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ready_reg));
            tracep->chgBit(oldp+522,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+523,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+524,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+525,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+526,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray))));
            tracep->chgBit(oldp+527,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                            >> 1U))));
            tracep->chgBit(oldp+528,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                            >> 2U))));
            tracep->chgBit(oldp+529,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_gray) 
                                            >> 3U))));
            tracep->chgBit(oldp+530,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray))));
            tracep->chgBit(oldp+531,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                            >> 1U))));
            tracep->chgBit(oldp+532,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                            >> 2U))));
            tracep->chgBit(oldp+533,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_gray) 
                                            >> 3U))));
            tracep->chgBit(oldp+534,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray))));
            tracep->chgBit(oldp+535,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                            >> 1U))));
            tracep->chgBit(oldp+536,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                            >> 2U))));
            tracep->chgBit(oldp+537,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_gray) 
                                            >> 3U))));
            tracep->chgBit(oldp+538,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray))));
            tracep->chgBit(oldp+539,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                            >> 1U))));
            tracep->chgBit(oldp+540,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                            >> 2U))));
            tracep->chgBit(oldp+541,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_gray) 
                                            >> 3U))));
            tracep->chgBit(oldp+542,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray))));
            tracep->chgBit(oldp+543,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                            >> 1U))));
            tracep->chgBit(oldp+544,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                            >> 2U))));
            tracep->chgBit(oldp+545,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_gray) 
                                            >> 3U))));
            tracep->chgCData(oldp+546,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                          << 3U) | 
                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U)) | 
                                        (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
            tracep->chgBit(oldp+547,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+548,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_widx_bin),4);
            tracep->chgCData(oldp+549,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_incremented),4);
            tracep->chgCData(oldp+550,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_incremented) 
                                        ^ (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__widx_incremented) 
                                                 >> 1U)))),4);
            tracep->chgCData(oldp+551,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__index),3);
            tracep->chgBit(oldp+552,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ready_reg));
            tracep->chgBit(oldp+553,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+554,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+555,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+556,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+557,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+558,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+559,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+560,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+561,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+562,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+563,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+564,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+565,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+566,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+567,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+568,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+569,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                          << 3U) | 
                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U)) | 
                                        (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
            tracep->chgBit(oldp+570,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+571,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_widx_bin),4);
            tracep->chgCData(oldp+572,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_incremented),4);
            tracep->chgCData(oldp+573,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_incremented) 
                                        ^ (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__widx_incremented) 
                                                 >> 1U)))),4);
            tracep->chgCData(oldp+574,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__index),3);
            tracep->chgBit(oldp+575,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ready_reg));
            tracep->chgBit(oldp+576,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+577,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+578,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+579,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+580,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+581,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+582,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+583,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+584,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+585,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+586,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+587,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+588,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+589,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+590,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+591,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+592,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                          << 3U) | 
                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U)) | 
                                        (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
            tracep->chgBit(oldp+593,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+594,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_widx_bin),4);
            tracep->chgCData(oldp+595,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_incremented),4);
            tracep->chgCData(oldp+596,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_incremented) 
                                        ^ (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__widx_incremented) 
                                                 >> 1U)))),4);
            tracep->chgCData(oldp+597,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__index),3);
            tracep->chgBit(oldp+598,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ready_reg));
            tracep->chgBit(oldp+599,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+600,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+601,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+602,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+603,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+604,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+605,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+606,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+607,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+608,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+609,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+610,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+611,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+612,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+613,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+614,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+615,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                          << 3U) | 
                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U)) | 
                                        (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
            tracep->chgBit(oldp+616,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+617,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_widx_bin),4);
            tracep->chgCData(oldp+618,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_incremented),4);
            tracep->chgCData(oldp+619,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_incremented) 
                                        ^ (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__widx_incremented) 
                                                 >> 1U)))),4);
            tracep->chgCData(oldp+620,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__index),3);
            tracep->chgBit(oldp+621,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ready_reg));
            tracep->chgBit(oldp+622,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+623,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+624,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+625,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+626,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+627,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+628,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+629,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+630,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+631,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+632,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+633,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+634,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+635,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+636,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+637,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgCData(oldp+638,(((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                          << 3U) | 
                                         ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U)) | 
                                        (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                          << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
            tracep->chgBit(oldp+639,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgCData(oldp+640,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_widx_bin),4);
            tracep->chgCData(oldp+641,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_incremented),4);
            tracep->chgCData(oldp+642,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_incremented) 
                                        ^ (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__widx_incremented) 
                                                 >> 1U)))),4);
            tracep->chgCData(oldp+643,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__index),3);
            tracep->chgBit(oldp+644,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ready_reg));
            tracep->chgBit(oldp+645,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+646,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
            tracep->chgBit(oldp+647,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
            tracep->chgBit(oldp+648,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
            tracep->chgCData(oldp+649,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))),2);
            tracep->chgCData(oldp+650,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                         << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0))),2);
            tracep->chgBit(oldp+651,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+652,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+653,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
            tracep->chgBit(oldp+654,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
            tracep->chgBit(oldp+655,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
            tracep->chgBit(oldp+656,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
            tracep->chgBit(oldp+657,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
            tracep->chgBit(oldp+658,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
            tracep->chgBit(oldp+659,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+660,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
            tracep->chgBit(oldp+661,((1U & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__data 
                                                    >> 0x3fU)))));
            tracep->chgCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state),3);
            tracep->chgCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__counter),8);
            tracep->chgCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__cmd),8);
            tracep->chgIData(oldp+665,(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__addr),22);
            tracep->chgQData(oldp+666,(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__data),64);
            tracep->chgBit(oldp+668,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state)) 
                                      & (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__counter)))));
            tracep->chgQData(oldp+669,(((QData)((IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__addr)) 
                                        << 2U)),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
            tracep->chgBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_awvalid));
            tracep->chgCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_aw_id),4);
            tracep->chgIData(oldp+673,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_aw_addr)),32);
            tracep->chgCData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_aw_len),8);
            tracep->chgCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_aw_size),3);
            tracep->chgCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_aw_burst),2);
            tracep->chgBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_wvalid));
            tracep->chgQData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_w_data),64);
            tracep->chgCData(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_w_strb),8);
            tracep->chgBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_w_last));
            tracep->chgBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_bready));
            tracep->chgBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_in_bvalid));
            tracep->chgBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_arvalid));
            tracep->chgCData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_ar_id),4);
            tracep->chgIData(oldp+686,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_ar_addr)),32);
            tracep->chgCData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_ar_len),8);
            tracep->chgCData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_ar_size),3);
            tracep->chgCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_ar_burst),2);
            tracep->chgBit(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__allowed___05F0));
            tracep->chgBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_valid));
            tracep->chgBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_in_rlast));
            tracep->chgBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu_io_master_awvalid));
            tracep->chgBit(oldp+694,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_valid))));
            tracep->chgBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_w_valid));
            tracep->chgBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_b_ready));
            tracep->chgCData(oldp+697,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___T_77) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___T_78))),4);
            tracep->chgBit(oldp+698,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arready) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_47))));
            tracep->chgBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu_io_master_arvalid));
            tracep->chgBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_in_rvalid));
            tracep->chgCData(oldp+701,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___T_54) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___T_55))),4);
            tracep->chgQData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_in_rdata),64);
            tracep->chgBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_in_rlast));
            tracep->chgBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_1_awvalid));
            tracep->chgIData(oldp+706,((0x3fffffffU 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_aw_addr))),30);
            tracep->chgBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_1_wvalid));
            tracep->chgBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_1_arvalid));
            tracep->chgIData(oldp+709,((0x3fffffffU 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_ar_addr))),30);
            tracep->chgBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset));
            tracep->chgBit(oldp+711,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_a_ready));
            tracep->chgBit(oldp+712,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_out_a_valid));
            tracep->chgCData(oldp+713,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode),3);
            tracep->chgCData(oldp+714,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size),3);
            tracep->chgCData(oldp+715,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source),4);
            tracep->chgIData(oldp+716,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address),32);
            tracep->chgCData(oldp+717,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_mask),4);
            tracep->chgIData(oldp+718,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_a_bits_data),32);
            tracep->chgBit(oldp+719,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_out_d_ready));
            tracep->chgBit(oldp+720,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_valid));
            tracep->chgCData(oldp+721,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode),3);
            tracep->chgCData(oldp+722,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_param),2);
            tracep->chgCData(oldp+723,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size),3);
            tracep->chgCData(oldp+724,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source),4);
            tracep->chgCData(oldp+725,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_sink),6);
            tracep->chgBit(oldp+726,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_denied));
            tracep->chgIData(oldp+727,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_data),32);
            tracep->chgBit(oldp+728,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_corrupt));
            tracep->chgBit(oldp+729,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_1_a_valid));
            tracep->chgSData(oldp+730,((0x1fffU & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)),13);
            tracep->chgBit(oldp+731,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_1_d_ready));
            tracep->chgBit(oldp+732,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_a_ready));
            tracep->chgBit(oldp+733,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_a_valid));
            tracep->chgBit(oldp+734,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_out_0_d_ready));
            tracep->chgBit(oldp+735,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_valid));
            tracep->chgCData(oldp+736,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_opcode),3);
            tracep->chgCData(oldp+737,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_size),3);
            tracep->chgBit(oldp+738,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_denied));
            tracep->chgBit(oldp+739,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt));
            tracep->chgBit(oldp+740,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_in_a_ready));
            tracep->chgBit(oldp+741,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_valid));
            tracep->chgBit(oldp+742,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_enq_ready));
            tracep->chgBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid));
            tracep->chgCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode),3);
            tracep->chgCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size),3);
            tracep->chgCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source),4);
            tracep->chgIData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address),32);
            tracep->chgCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_mask),8);
            tracep->chgQData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_data),64);
            tracep->chgBit(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_d_ready));
            tracep->chgBit(oldp+752,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_in_d_valid));
            tracep->chgQData(oldp+753,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_in_d_bits_data),64);
            tracep->chgBit(oldp+755,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.auto_in_d_bits_corrupt));
            tracep->chgBit(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_awready));
            tracep->chgBit(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_awvalid));
            tracep->chgBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_id));
            tracep->chgIData(oldp+759,((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12)),32);
            tracep->chgCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awlen),8);
            tracep->chgCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_size),3);
            tracep->chgBit(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_wready));
            tracep->chgBit(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_wvalid));
            tracep->chgBit(oldp+764,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_todo))));
            tracep->chgBit(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_bready));
            tracep->chgBit(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_bvalid));
            tracep->chgBit(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id));
            tracep->chgCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_resp),2);
            tracep->chgBit(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_arready));
            tracep->chgBit(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid));
            tracep->chgBit(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_id));
            tracep->chgIData(oldp+772,((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_5)),32);
            tracep->chgCData(oldp+773,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__bad)
                                         ? 0U : (7U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___maxSupported1_T)))),8);
            tracep->chgCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_size),3);
            tracep->chgBit(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_id));
            tracep->chgBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_last));
            tracep->chgBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_in_awready));
            tracep->chgBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awvalid));
            tracep->chgCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_echo_extra_id),3);
            tracep->chgBit(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awecho_real_last));
            tracep->chgBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_in_becho_real_last));
            tracep->chgBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_in_arready));
            tracep->chgBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_valid));
            tracep->chgCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_echo_extra_id),3);
            tracep->chgBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_arecho_real_last));
            tracep->chgBit(oldp+786,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_aw_id))));
            tracep->chgCData(oldp+787,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_aw_id) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+788,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_ar_id))));
            tracep->chgCData(oldp+789,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_ar_id) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+790,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid));
            tracep->chgBit(oldp+791,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_d_ready));
            tracep->chgBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_valid));
            tracep->chgIData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA_io_q_bits_data),32);
            tracep->chgBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA_io_q_bits_last));
            tracep->chgCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___io_q_bits_beats_T_13),7);
            tracep->chgBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_ready));
            tracep->chgBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last));
            tracep->chgBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_last));
            tracep->chgBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_ready));
            tracep->chgCData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode),3);
            tracep->chgCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size),3);
            tracep->chgCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source),4);
            tracep->chgCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_mask),4);
            tracep->chgIData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data),32);
            tracep->chgBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_ready));
            VL_EXTEND_WI(99,32, __Vtemp7867, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data);
            tracep->chgIData(oldp+806,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode))
                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[0U]
                                         : __Vtemp7867[0U])),32);
            tracep->chgCData(oldp+807,((0xfU & (~ (0x7ffU 
                                                   & (((IData)(0x3fU) 
                                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size)) 
                                                      >> 2U))))),4);
            tracep->chgBit(oldp+808,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode) 
                                               >> 2U)))));
            tracep->chgCData(oldp+809,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode))
                                         ? 0U : (0xfU 
                                                 & (~ 
                                                    (0x7ffU 
                                                     & (((IData)(0x3fU) 
                                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size)) 
                                                        >> 2U)))))),4);
            tracep->chgBit(oldp+810,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode))));
            tracep->chgSData(oldp+811,(((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                         ? 7U : ((0xeU 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                  ? 6U
                                                  : 
                                                 ((0xdU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                   ? 5U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                    ? 4U
                                                    : 
                                                   ((0xbU 
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
                                                               : 0U)))))))))))))))),16);
            tracep->chgCData(oldp+812,(((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                         ? 2U : ((0xeU 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                  ? 2U
                                                  : 
                                                 ((0xdU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                   ? 2U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_source))
                                                    ? 2U
                                                    : 
                                                   ((0xbU 
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
                                                        : 1U))))))))),3);
            tracep->chgCData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size),4);
            tracep->chgIData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__header),32);
            tracep->chgBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__isLastState));
            tracep->chgCData(oldp+816,((0xfU & (((IData)(1U) 
                                                 << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size)) 
                                                >> 3U))),4);
            tracep->chgBit(oldp+817,((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size))));
            tracep->chgBit(oldp+818,((1U & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size)) 
                                            >> 6U))));
            tracep->chgBit(oldp+819,((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_size))));
            tracep->chgCData(oldp+820,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data)),8);
            tracep->chgCData(oldp+821,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+822,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+823,((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data 
                                        >> 0x18U)),8);
            tracep->chgBit(oldp+824,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_mask))));
            tracep->chgBit(oldp+825,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_mask) 
                                            >> 1U))));
            tracep->chgBit(oldp+826,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_mask) 
                                            >> 2U))));
            tracep->chgBit(oldp+827,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_mask) 
                                            >> 3U))));
            tracep->chgQData(oldp+828,((((QData)((IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_data 
                                                          >> 0x18U))) 
                                         << 0x1cU) 
                                        | (QData)((IData)(
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
                                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_mask)))))))))))),36);
            tracep->chgWData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide),99);
            tracep->chgBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam_io_alloc_valid));
            tracep->chgBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_enq_valid));
            tracep->chgBit(oldp+836,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_source) 
                                            >> 3U))));
            tracep->chgCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_enq_bits_resp),2);
            tracep->chgBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_enq_bits_last));
            tracep->chgBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_enq_valid));
            tracep->chgCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_enq_bits_resp),2);
            tracep->chgBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_ready));
            tracep->chgBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_valid));
            tracep->chgSData(oldp+843,((0x7fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize1_T_1 
                                                   >> 8U))),15);
            tracep->chgCData(oldp+844,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_4) 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+845,((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_4))),8);
            tracep->chgBit(oldp+846,((0U != (0xffU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_4) 
                                                >> 8U)))));
            tracep->chgCData(oldp+847,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_5) 
                                                >> 4U))),4);
            tracep->chgCData(oldp+848,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_5))),4);
            tracep->chgBit(oldp+849,((0U != (0xfU & 
                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_5) 
                                              >> 4U)))));
            tracep->chgCData(oldp+850,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_6) 
                                              >> 2U))),2);
            tracep->chgCData(oldp+851,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_6))),2);
            tracep->chgBit(oldp+852,((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_6) 
                                                   >> 2U)))));
            tracep->chgBit(oldp+853,((IData)((0U != 
                                              (0xaU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_6))))));
            tracep->chgCData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size),4);
            tracep->chgBit(oldp+855,(((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size)) 
                                      & (((0ULL == 
                                           (0x1fffff000ULL 
                                            & (QData)((IData)(
                                                              (0x1000U 
                                                               ^ 
                                                               (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_5)))))) 
                                          | (0ULL == 
                                             (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ 
                                                                 (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_5))))))) 
                                         | (0ULL == 
                                            (0x180000000ULL 
                                             & (QData)((IData)(
                                                               (0x80000000U 
                                                                ^ 
                                                                (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_5))))))))));
            tracep->chgIData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr),32);
            tracep->chgCData(oldp+857,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size))),2);
            tracep->chgCData(oldp+858,((7U & (1U | 
                                              (0xfU 
                                               & ((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size))))))),3);
            tracep->chgBit(oldp+859,((1U & (((IData)(1U) 
                                             << (3U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size))) 
                                            >> 2U))));
            tracep->chgBit(oldp+860,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr 
                                            >> 2U))));
            tracep->chgBit(oldp+861,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr 
                                               >> 2U)))));
            tracep->chgBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc));
            tracep->chgBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_1));
            tracep->chgBit(oldp+864,((1U & (((IData)(1U) 
                                             << (3U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size))) 
                                            >> 1U))));
            tracep->chgBit(oldp+865,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr 
                                            >> 1U))));
            tracep->chgBit(oldp+866,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr 
                                               >> 1U)))));
            tracep->chgBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_2));
            tracep->chgBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_2));
            tracep->chgBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_3));
            tracep->chgBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_3));
            tracep->chgBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_4));
            tracep->chgBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_4));
            tracep->chgBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_5));
            tracep->chgBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_5));
            tracep->chgBit(oldp+875,((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)));
            tracep->chgBit(oldp+876,((1U & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))));
            tracep->chgBit(oldp+877,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_2) 
                                      & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))));
            tracep->chgBit(oldp+878,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_2) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_2) 
                                         & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)))));
            tracep->chgBit(oldp+879,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_2) 
                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)));
            tracep->chgBit(oldp+880,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_2) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_2) 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))));
            tracep->chgBit(oldp+881,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_3) 
                                      & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))));
            tracep->chgBit(oldp+882,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_3) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_3) 
                                         & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)))));
            tracep->chgBit(oldp+883,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_3) 
                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)));
            tracep->chgBit(oldp+884,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_3) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_3) 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))));
            tracep->chgBit(oldp+885,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_4) 
                                      & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))));
            tracep->chgBit(oldp+886,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_4) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_4) 
                                         & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)))));
            tracep->chgBit(oldp+887,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_4) 
                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)));
            tracep->chgBit(oldp+888,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_4) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_4) 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))));
            tracep->chgBit(oldp+889,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_5) 
                                      & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))));
            tracep->chgBit(oldp+890,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_5) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_5) 
                                         & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)))));
            tracep->chgBit(oldp+891,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_5) 
                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)));
            tracep->chgBit(oldp+892,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_5) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_5) 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))));
            tracep->chgCData(oldp+893,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_5) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_5) 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)) 
                                         << 7U) | (
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_5) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_5) 
                                                        & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))) 
                                                    << 6U) 
                                                   | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_4) 
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
                                                                        & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr))))))))))),8);
            tracep->chgCData(oldp+894,((3U & ((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_id)))),2);
            tracep->chgBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid));
            tracep->chgCData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_filter_lo),2);
            tracep->chgCData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_filter),4);
            tracep->chgCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_unready),4);
            tracep->chgCData(oldp+899,((3U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_readys_T_2)))),2);
            tracep->chgBit(oldp+900,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_readys_T_2)))));
            tracep->chgBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__allowed_0));
            tracep->chgBit(oldp+902,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_enq_ready) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__allowed_0))));
            tracep->chgSData(oldp+903,((0x7fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize1_T_1 
                                                   >> 8U))),15);
            tracep->chgCData(oldp+904,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_4) 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+905,((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_4))),8);
            tracep->chgBit(oldp+906,((0U != (0xffU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_4) 
                                                >> 8U)))));
            tracep->chgCData(oldp+907,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_5) 
                                                >> 4U))),4);
            tracep->chgCData(oldp+908,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_5))),4);
            tracep->chgBit(oldp+909,((0U != (0xfU & 
                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_5) 
                                              >> 4U)))));
            tracep->chgCData(oldp+910,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_6) 
                                              >> 2U))),2);
            tracep->chgCData(oldp+911,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_6))),2);
            tracep->chgBit(oldp+912,((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_6) 
                                                   >> 2U)))));
            tracep->chgBit(oldp+913,((IData)((0U != 
                                              (0xaU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_6))))));
            tracep->chgCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_size),4);
            tracep->chgBit(oldp+915,(((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_size)) 
                                      & (((0ULL == 
                                           (0x1fffff000ULL 
                                            & (QData)((IData)(
                                                              (0x1000U 
                                                               ^ 
                                                               (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12)))))) 
                                          | (0ULL == 
                                             (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ 
                                                                 (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12))))))) 
                                         | (0ULL == 
                                            (0x180000000ULL 
                                             & (QData)((IData)(
                                                               (0x80000000U 
                                                                ^ 
                                                                (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12))))))))));
            tracep->chgIData(oldp+916,((((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_size)) 
                                         & (((0ULL 
                                              == (0x1fffff000ULL 
                                                  & (QData)((IData)(
                                                                    (0x1000U 
                                                                     ^ 
                                                                     (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12)))))) 
                                             | (0ULL 
                                                == 
                                                (0x1c0000000ULL 
                                                 & (QData)((IData)(
                                                                   (0x40000000U 
                                                                    ^ 
                                                                    (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12))))))) 
                                            | (0ULL 
                                               == (0x180000000ULL 
                                                   & (QData)((IData)(
                                                                     (0x80000000U 
                                                                      ^ 
                                                                      (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12))))))))
                                         ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12)
                                         : (0x1000U 
                                            | (7U & 
                                               (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12))))),32);
            tracep->chgBit(oldp+917,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_readys_T_2) 
                                               >> 1U)))));
            tracep->chgBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__out_1_ready));
            tracep->chgBit(oldp+919,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__out_1_ready) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_wvalid)) 
                                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_todo)))));
            tracep->chgCData(oldp+920,((3U & ((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_id)))),2);
            tracep->chgBit(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__latch));
            tracep->chgBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__earlyWinner_0));
            tracep->chgBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__earlyWinner_1));
            tracep->chgBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_0));
            tracep->chgBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_1));
            tracep->chgCData(oldp+926,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size))),3);
            tracep->chgCData(oldp+927,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_size))),3);
            tracep->chgBit(oldp+928,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))));
            tracep->chgCData(oldp+929,((7U & (~ (0x3ffU 
                                                 & (((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                                                    >> 3U))))),3);
            tracep->chgCData(oldp+930,(((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_opcode))
                                         ? (7U & (~ 
                                                  (0x3ffU 
                                                   & (((IData)(0x3fU) 
                                                       << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                                                      >> 3U))))
                                         : 0U)),3);
            tracep->chgBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__b_allow));
            tracep->chgCData(oldp+932,((3U & ((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)))),2);
            tracep->chgBit(oldp+933,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_valid) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__b_allow))));
            tracep->chgBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_io_enq_valid));
            tracep->chgBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_io_deq_ready));
            tracep->chgBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_io_deq_valid));
            tracep->chgBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1_io_enq_valid));
            tracep->chgBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1_io_deq_ready));
            tracep->chgBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1_io_deq_valid));
            tracep->chgBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2_io_enq_valid));
            tracep->chgBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2_io_deq_ready));
            tracep->chgBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2_io_deq_valid));
            tracep->chgBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3_io_enq_valid));
            tracep->chgBit(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3_io_deq_ready));
            tracep->chgBit(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3_io_deq_valid));
            tracep->chgBit(oldp+946,((1U & ((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_id)))));
            tracep->chgBit(oldp+947,((1U & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_id)) 
                                            >> 1U))));
            tracep->chgBit(oldp+948,((1U & ((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_id)))));
            tracep->chgBit(oldp+949,((1U & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_id)) 
                                            >> 1U))));
            tracep->chgBit(oldp+950,((1U & ((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_id)))));
            tracep->chgBit(oldp+951,((1U & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_id)) 
                                            >> 1U))));
            tracep->chgBit(oldp+952,((1U & ((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)))));
            tracep->chgBit(oldp+953,((1U & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)) 
                                            >> 1U))));
            tracep->chgBit(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__do_enq));
            tracep->chgBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__do_deq));
            tracep->chgBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__do_enq));
            tracep->chgBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__do_deq));
            tracep->chgBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__do_enq));
            tracep->chgBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__do_deq));
            tracep->chgBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__do_enq));
            tracep->chgBit(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__do_deq));
            tracep->chgBit(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_ready));
            tracep->chgIData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_addr),32);
            tracep->chgCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_len),8);
            tracep->chgCData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_burst),2);
            tracep->chgBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_ready));
            tracep->chgBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_valid));
            tracep->chgIData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr),32);
            tracep->chgCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_len),8);
            tracep->chgCData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_burst),2);
            tracep->chgBit(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_io_deq_ready));
            tracep->chgBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_io_deq_valid));
            tracep->chgCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len),8);
            tracep->chgIData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr),32);
            tracep->chgCData(oldp+975,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr 
                                                 >> 3U))),8);
            tracep->chgCData(oldp+976,((0x7fU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_3) 
                                                  >> 1U) 
                                                 | (7U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_3) 
                                                       >> 5U))))),7);
            tracep->chgCData(oldp+977,((0xffU & (~ 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_6) 
                                                  | (0xf0U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_6) 
                                                        << 4U)))))),8);
            tracep->chgCData(oldp+978,((0xffU & ((0x7fU 
                                                  & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_3) 
                                                      >> 1U) 
                                                     | (7U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_3) 
                                                           >> 5U)))) 
                                                 | (~ 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_6) 
                                                     | (0xf0U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_6) 
                                                           << 4U))))))),8);
            tracep->chgCData(oldp+979,((0xffU & (~ 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_5) 
                                                  | (0xf0U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_5) 
                                                        << 4U)))))),8);
            tracep->chgCData(oldp+980,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___maxSupported1_T))),8);
            tracep->chgBit(oldp+981,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_burst))));
            tracep->chgBit(oldp+982,((3U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_size))));
            tracep->chgBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__bad));
            tracep->chgCData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats_lo),8);
            tracep->chgSData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats),9);
            tracep->chgIData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__inc_addr),32);
            tracep->chgSData(oldp+987,((0x7fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wrapMask_T_1 
                                                   >> 8U))),15);
            tracep->chgBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__ar_last));
            tracep->chgCData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len_1),8);
            tracep->chgIData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr_1),32);
            tracep->chgCData(oldp+991,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr_1 
                                                 >> 3U))),8);
            tracep->chgCData(oldp+992,((0x7fU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_10) 
                                                  >> 1U) 
                                                 | (7U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_10) 
                                                       >> 5U))))),7);
            tracep->chgCData(oldp+993,((0xffU & (~ 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_17) 
                                                  | (0xf0U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_17) 
                                                        << 4U)))))),8);
            tracep->chgCData(oldp+994,((0xffU & ((0x7fU 
                                                  & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_10) 
                                                      >> 1U) 
                                                     | (7U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_10) 
                                                           >> 5U)))) 
                                                 | (~ 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_17) 
                                                     | (0xf0U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_17) 
                                                           << 4U))))))),8);
            tracep->chgCData(oldp+995,((0xffU & (~ 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_15) 
                                                  | (0xf0U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_15) 
                                                        << 4U)))))),8);
            tracep->chgCData(oldp+996,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___maxSupported1_T_1))),8);
            tracep->chgBit(oldp+997,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_burst))));
            tracep->chgBit(oldp+998,((3U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_size))));
            tracep->chgBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__bad_1));
            tracep->chgCData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats_lo_1),8);
            tracep->chgSData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_beats),9);
            tracep->chgIData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__inc_addr_1),32);
            tracep->chgSData(oldp+1003,((0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wrapMask_T_3 
                                          >> 8U))),15);
            tracep->chgBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__aw_last));
            tracep->chgBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_awready));
            tracep->chgBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_valid));
            tracep->chgSData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_todo),9);
            tracep->chgBit(oldp+1008,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_bready) 
                                             | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_in_becho_real_last))))));
            tracep->chgBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
            tracep->chgCData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_bits),2);
            tracep->chgBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_ready));
            tracep->chgBit(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_valid));
            tracep->chgCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_bits),2);
            tracep->chgBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
            tracep->chgBit(oldp+1015,((0ULL == (0xc0000000ULL 
                                                & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_ar_addr))))));
            tracep->chgBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
            tracep->chgBit(oldp+1017,((0ULL == (0xc0000000ULL 
                                                & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_aw_addr))))));
            tracep->chgBit(oldp+1018,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_bits))));
            tracep->chgBit(oldp+1019,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_bits) 
                                             >> 1U))));
            tracep->chgCData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter_lo),2);
            tracep->chgCData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter),4);
            tracep->chgCData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
            tracep->chgCData(oldp+1023,((3U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_2)))),2);
            tracep->chgBit(oldp+1024,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_2)))));
            tracep->chgBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_0));
            tracep->chgBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
            tracep->chgBit(oldp+1027,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_2) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
            tracep->chgBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
            tracep->chgCData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid),4);
            tracep->chgCData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter_lo_1),2);
            tracep->chgCData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter_1),4);
            tracep->chgCData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
            tracep->chgCData(oldp+1034,((3U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_5)))),2);
            tracep->chgBit(oldp+1035,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_5)))));
            tracep->chgBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
            tracep->chgBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
            tracep->chgBit(oldp+1038,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_5) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
            tracep->chgBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
            tracep->chgCData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid),4);
            tracep->chgSData(oldp+1042,((0xffffU & 
                                         ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_ar_id)))),16);
            tracep->chgSData(oldp+1043,((0xffffU & 
                                         ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_aw_id)))),16);
            tracep->chgSData(oldp+1044,((0xffffU & 
                                         ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)))),16);
            tracep->chgSData(oldp+1045,((0xffffU & 
                                         ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)))),16);
            tracep->chgBit(oldp+1046,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arTag_T) 
                                             >> 1U))));
            tracep->chgBit(oldp+1047,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_enq_bits_T) 
                                             >> 1U))));
            tracep->chgBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arready));
            tracep->chgBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
            tracep->chgBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rlast));
            tracep->chgBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
            tracep->chgBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
            tracep->chgBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
            tracep->chgBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
            tracep->chgBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
            tracep->chgBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
            tracep->chgBit(oldp+1057,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0))));
            tracep->chgBit(oldp+1058,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
                                       & (0ULL == (0xc0000000ULL 
                                                   & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_ar_addr)))))));
            tracep->chgBit(oldp+1059,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0))));
            tracep->chgBit(oldp+1060,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
                                       & (0ULL == (0xc0000000ULL 
                                                   & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_aw_addr)))))));
            tracep->chgBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
            tracep->chgBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_cache0__DOT__I_cache_hit) {
                __Vtemp7872[0U] = 0xffffffffU;
                __Vtemp7872[1U] = 0xffffffffU;
                __Vtemp7872[2U] = 0xffffffffU;
                __Vtemp7872[3U] = 0xffffffffU;
            } else {
                __Vtemp7872[0U] = 0U;
                __Vtemp7872[1U] = 0U;
                __Vtemp7872[2U] = 0U;
                __Vtemp7872[3U] = 0U;
            }
            tracep->chgWData(oldp+1063,(__Vtemp7872),128);
            tracep->chgCData(oldp+1067,((0x3fU & (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_ar_addr 
                                                          >> 4U)))),6);
            tracep->chgBit(oldp+1068,(((~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_cache0__DOT__I_cache_hit) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_r_ready))
                                            ? 1U : 0U)) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_cache0__DOT__I_cache_hit))));
            tracep->chgBit(oldp+1069,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_cache0__DOT__wen_ram)))));
            tracep->chgBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_ready));
            tracep->chgBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ready_line));
            tracep->chgBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__aw_ready));
            tracep->chgBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__aw_valid));
            tracep->chgQData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__aw_addr),64);
            tracep->chgCData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__aw_id),4);
            tracep->chgCData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__aw_len),8);
            tracep->chgCData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__aw_size),3);
            tracep->chgCData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__aw_burst),2);
            tracep->chgBit(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_valid));
            tracep->chgQData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_data_1),64);
            tracep->chgCData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_strb),8);
            tracep->chgBit(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_last));
            tracep->chgBit(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_ready));
            tracep->chgCData(oldp+1086,((((0x2010000ULL 
                                           > (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__aw_addr 
                                              | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ar_addr)) 
                                          & (0x1ffffffULL 
                                             < (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__aw_addr 
                                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ar_addr)))
                                          ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___T_77) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___T_78)))),4);
            tracep->chgBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ar_ready));
            tracep->chgBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ar_valid));
            tracep->chgQData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ar_addr),64);
            tracep->chgCData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ar_id),4);
            tracep->chgBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ar_user));
            tracep->chgCData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ar_len),8);
            tracep->chgCData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ar_size),3);
            tracep->chgCData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ar_burst),2);
            tracep->chgBit(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_ready));
            tracep->chgBit(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_valid));
            tracep->chgQData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_data),64);
            tracep->chgBit(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_last));
            tracep->chgCData(oldp+1101,((((0x2010000ULL 
                                           > (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__aw_addr 
                                              | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ar_addr)) 
                                          & (0x1ffffffULL 
                                             < (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__aw_addr 
                                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ar_addr)))
                                          ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___T_54) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___T_55)))),4);
            tracep->chgBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_aw_valid));
            tracep->chgQData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_aw_addr),64);
            tracep->chgBit(oldp+1105,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_cache0__DOT__I_cache_hit)) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_ar_vaild))));
            tracep->chgQData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ram_ar_addr),64);
            tracep->chgBit(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_r_ready));
            tracep->chgQData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_r_data),64);
            tracep->chgQData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_ar_addr),64);
            tracep->chgBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_ar_vaild));
            tracep->chgCData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_aw_id),4);
            tracep->chgQData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_aw_addr),64);
            tracep->chgCData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_aw_len),8);
            tracep->chgCData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_aw_size),3);
            tracep->chgCData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_aw_burst),2);
            tracep->chgBit(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_aw_valid));
            tracep->chgQData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_w_data),64);
            tracep->chgCData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_w_strb),8);
            tracep->chgBit(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_w_last));
            tracep->chgBit(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_w_valid));
            tracep->chgBit(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_b_ready));
            tracep->chgCData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_ar_id),4);
            tracep->chgQData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_ar_addr),64);
            tracep->chgCData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_ar_len),8);
            tracep->chgCData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_ar_size),3);
            tracep->chgCData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_ar_burst),2);
            tracep->chgBit(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_ar_valid));
            tracep->chgBit(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__d_r_ready));
            tracep->chgBit(oldp+1135,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                                        ? 0U : 1U)));
            tracep->chgQData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op1_imm),64);
            tracep->chgQData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op2_imm),64);
            tracep->chgQData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__op1_jump),64);
            tracep->chgQData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_id_stage0__DOT__op3),64);
            tracep->chgQData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_id_stage0__DOT__op4),64);
            tracep->chgCData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex2int_state),4);
            tracep->chgBit(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex2csr_w_en));
            tracep->chgBit(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_jump_flag));
            tracep->chgQData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exmem_jump_addr),64);
            tracep->chgQData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_id_data),64);
            tracep->chgCData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_wd_o),5);
            tracep->chgBit(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_wreg_o));
            tracep->chgQData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_data_o),64);
            tracep->chgQData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ctrl_jimp_addr),64);
            tracep->chgBit(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ctrl_jump_flag));
            tracep->chgBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ctrl_jump_flag_IF_ID));
            tracep->chgBit(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ctrl_jump_flag_ID_EX));
            tracep->chgBit(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ctrl_hold_flag));
            tracep->chgBit(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ctrl_hold_flag2if));
            tracep->chgBit(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rib_hold_if));
            tracep->chgBit(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rib_hold_ex_mem));
            tracep->chgBit(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rib_hold_if_id));
            tracep->chgBit(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rib_hold_mem_wb));
            tracep->chgBit(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rib_hold_id_ex));
            tracep->chgQData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst_o),64);
            tracep->chgQData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_data),64);
            tracep->chgQData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_j_addr),64);
            tracep->chgBit(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rib_hold_line));
            tracep->chgCData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_axi_rw0__DOT__grant),2);
            tracep->chgBit(oldp+1177,((1U & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_ar_addr 
                                                     >> 3U)))));
            tracep->chgIData(oldp+1178,((0x1fffffU 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_ar_addr 
                                                    >> 0xaU)))),21);
            tracep->chgIData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_cache0__DOT__REG_DATA),32);
            tracep->chgIData(oldp+1180,((0x1fffffU 
                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_cache0__DOT__REG_DATA 
                                            >> 0xaU))),21);
            tracep->chgBit(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_cache0__DOT__pc_change));
            tracep->chgBit(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_cache0__DOT__I_cache_hit2));
            tracep->chgBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_cache0__DOT__I_cache_hit));
            tracep->chgBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_cache0__DOT__wen_ram));
            tracep->chgBit(oldp+1185,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_cache0__DOT__I_cache_hit) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_r_ready))
                                        ? 1U : 0U)));
            tracep->chgBit(oldp+1186,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset)
                                         ? 0U : 1U) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_ready))));
            tracep->chgQData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_mem_stage0__DOT__reg_wdata1),64);
            tracep->chgQData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_mem_stage0__DOT__reg_wdata2),64);
            tracep->chgBit(oldp+1191,((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex2int_state))));
            tracep->chgBit(oldp+1192,((1U & (~ ((~ 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_cache0__DOT__I_cache_hit) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cache_r_ready))
                                                   ? 1U
                                                   : 0U)) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_cache0__DOT__I_cache_hit))))));
            __Vtemp7876[0U] = (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_cache0__DOT__I_cache_hit)
                                   ? 0xffffffffU : 0U));
            __Vtemp7876[1U] = (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_cache0__DOT__I_cache_hit)
                                   ? 0xffffffffU : 0U));
            __Vtemp7876[2U] = (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_cache0__DOT__I_cache_hit)
                                   ? 0xffffffffU : 0U));
            __Vtemp7876[3U] = (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ysyx_210576_cache0__DOT__I_cache_hit)
                                   ? 0xffffffffU : 0U));
            tracep->chgWData(oldp+1193,(__Vtemp7876),128);
            tracep->chgBit(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
            tracep->chgBit(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
            tracep->chgBit(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
            tracep->chgBit(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
            tracep->chgBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
            tracep->chgBit(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
            tracep->chgBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
            tracep->chgBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
            tracep->chgBit(oldp+1205,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor_io_in_a_ready));
            tracep->chgBit(oldp+1206,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor_io_in_d_valid));
            tracep->chgCData(oldp+1207,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor_io_in_d_bits_opcode),3);
            tracep->chgCData(oldp+1208,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor_io_in_d_bits_param),2);
            tracep->chgCData(oldp+1209,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor_io_in_d_bits_size),3);
            tracep->chgCData(oldp+1210,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor_io_in_d_bits_source),4);
            tracep->chgCData(oldp+1211,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor_io_in_d_bits_sink),6);
            tracep->chgBit(oldp+1212,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor_io_in_d_bits_denied));
            tracep->chgCData(oldp+1213,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__readys_filter_lo),2);
            tracep->chgCData(oldp+1214,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__readys_filter),4);
            tracep->chgCData(oldp+1215,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__readys_unready),4);
            tracep->chgCData(oldp+1216,((3U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___readys_readys_T_2)))),2);
            tracep->chgBit(oldp+1217,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___readys_readys_T_2)))));
            tracep->chgBit(oldp+1218,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__earlyWinner_0));
            tracep->chgBit(oldp+1219,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__muxStateEarly_0));
            tracep->chgBit(oldp+1220,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT___readys_readys_T_2) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1221,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__earlyWinner_1));
            tracep->chgBit(oldp+1222,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__muxStateEarly_1));
            tracep->chgBit(oldp+1223,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__requestAIO_0_0));
            tracep->chgBit(oldp+1224,((0ULL == (0xc0000000ULL 
                                                & (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))))));
            tracep->chgCData(oldp+1225,((0xfU & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_size)) 
                                                     >> 2U))))),4);
            tracep->chgBit(oldp+1226,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_opcode))));
            tracep->chgCData(oldp+1227,(((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_opcode))
                                          ? (0xfU & 
                                             (~ (0x7ffU 
                                                 & (((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_size)) 
                                                    >> 2U))))
                                          : 0U)),4);
            tracep->chgBit(oldp+1228,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__latch));
            tracep->chgCData(oldp+1229,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__earlyWinner_0)
                                          ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_opcode))
                                              ? (0xfU 
                                                 & (~ 
                                                    (0x7ffU 
                                                     & (((IData)(0x3fU) 
                                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_size)) 
                                                        >> 2U))))
                                              : 0U)
                                          : 0U)),4);
            tracep->chgBit(oldp+1230,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor__DOT__source_ok));
            tracep->chgCData(oldp+1231,((0x3fU & (~ 
                                                  (0x1fffU 
                                                   & ((IData)(0x3fU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)))))),6);
            tracep->chgBit(oldp+1232,((0U == (0x3fU 
                                              & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                 & (~ 
                                                    (0x1fffU 
                                                     & ((IData)(0x3fU) 
                                                        << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)))))))));
            tracep->chgBit(oldp+1233,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))));
            tracep->chgCData(oldp+1234,((3U & (1U | 
                                               ((IData)(1U) 
                                                << 
                                                (1U 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)))))),2);
            tracep->chgBit(oldp+1235,((1U & (((IData)(1U) 
                                              << (1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                                             >> 1U))));
            tracep->chgBit(oldp+1236,((1U & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                             >> 1U))));
            tracep->chgBit(oldp+1237,((1U & (~ (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                >> 1U)))));
            tracep->chgBit(oldp+1238,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+1239,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+1240,((1U & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)));
            tracep->chgBit(oldp+1241,((1U & (~ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))));
            tracep->chgBit(oldp+1242,((IData)((0U == 
                                               (3U 
                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgBit(oldp+1243,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor__DOT__mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+1244,((IData)((1U == 
                                               (3U 
                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgBit(oldp+1245,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor__DOT__mask_acc) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+1246,((IData)((2U == 
                                               (3U 
                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgBit(oldp+1247,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor__DOT__mask_acc_1) 
                                             | (IData)(
                                                       (2U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+1248,((IData)((3U == 
                                               (3U 
                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgBit(oldp+1249,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor__DOT__mask_acc_1) 
                                             | ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                 >> 1U) 
                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgCData(oldp+1250,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor__DOT__mask),4);
            tracep->chgBit(oldp+1251,(1U));
            tracep->chgBit(oldp+1252,((0x21U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor_io_in_d_bits_sink))));
            tracep->chgCData(oldp+1253,((0xfU & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                     >> 2U))))),4);
            tracep->chgBit(oldp+1254,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode) 
                                                >> 2U)))));
            tracep->chgCData(oldp+1255,((0xfU & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor_io_in_d_bits_size)) 
                                                     >> 2U))))),4);
            tracep->chgBit(oldp+1256,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor_io_in_d_bits_opcode))));
            tracep->chgCData(oldp+1257,((0xfU & (IData)(
                                                        (7ULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U))))),4);
            tracep->chgQData(oldp+1258,((((QData)((IData)(
                                                          vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor__DOT___GEN_23[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.__PVT__monitor__DOT___GEN_23[0U])))),64);
            tracep->chgBit(oldp+1260,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__a_io_deq_ready));
            tracep->chgBit(oldp+1261,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__out_1_ready));
            tracep->chgBit(oldp+1262,(1U));
            tracep->chgBit(oldp+1263,((0U == (0x3fU 
                                              & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                 & (~ 
                                                    (0x1fffU 
                                                     & ((IData)(0x3fU) 
                                                        << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)))))))));
            tracep->chgBit(oldp+1264,((1U & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                             >> 1U))));
            tracep->chgBit(oldp+1265,((1U & (~ (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                >> 1U)))));
            tracep->chgBit(oldp+1266,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+1267,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+1268,((1U & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)));
            tracep->chgBit(oldp+1269,((1U & (~ vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address))));
            tracep->chgBit(oldp+1270,((IData)((0U == 
                                               (3U 
                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgBit(oldp+1271,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__monitor__DOT__mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+1272,((IData)((1U == 
                                               (3U 
                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgBit(oldp+1273,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__monitor__DOT__mask_acc) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+1274,((IData)((2U == 
                                               (3U 
                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgBit(oldp+1275,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__monitor__DOT__mask_acc_1) 
                                             | (IData)(
                                                       (2U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+1276,((IData)((3U == 
                                               (3U 
                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgBit(oldp+1277,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__monitor__DOT__mask_acc_1) 
                                             | ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                 >> 1U) 
                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgCData(oldp+1278,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__monitor__DOT__mask),4);
            tracep->chgSData(oldp+1279,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__monitor__DOT__a_set_wo_ready),16);
            tracep->chgQData(oldp+1280,((((QData)((IData)(
                                                          vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__monitor__DOT___GEN_23[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__monitor__DOT___GEN_23[0U])))),64);
            tracep->chgBit(oldp+1282,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__a__DOT__do_enq));
            tracep->chgBit(oldp+1283,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__monitor_io_in_a_ready));
            tracep->chgCData(oldp+1284,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__a_id),2);
            tracep->chgBit(oldp+1285,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__a_id))));
            tracep->chgBit(oldp+1286,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))));
            tracep->chgBit(oldp+1287,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__stall));
            tracep->chgBit(oldp+1288,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_a_ready) 
                                       & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__stall)))));
            tracep->chgCData(oldp+1289,((0xfU & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                                                     >> 2U))))),4);
            tracep->chgBit(oldp+1290,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__d_first));
            tracep->chgBit(oldp+1291,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__monitor__DOT__source_ok));
            tracep->chgBit(oldp+1292,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+1293,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+1294,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__monitor__DOT__mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+1295,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__monitor__DOT__mask_acc) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+1296,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__monitor__DOT__mask_acc_1) 
                                             | (IData)(
                                                       (2U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+1297,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__monitor__DOT__mask_acc_1) 
                                             | ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                 >> 1U) 
                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgCData(oldp+1298,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__monitor__DOT__mask),4);
            tracep->chgBit(oldp+1299,(1U));
            tracep->chgBit(oldp+1300,((0x21U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_sink))));
            tracep->chgCData(oldp+1301,((0xfU & (IData)(
                                                        (7ULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U))))),4);
            tracep->chgQData(oldp+1302,((((QData)((IData)(
                                                          vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__monitor__DOT___GEN_23[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.__PVT__monitor__DOT___GEN_23[0U])))),64);
            tracep->chgBit(oldp+1304,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor_io_in_d_valid));
            tracep->chgBit(oldp+1305,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeat_last)))));
            tracep->chgCData(oldp+1306,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_mask),8);
            tracep->chgIData(oldp+1307,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_data)),32);
            tracep->chgQData(oldp+1308,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__cated_bits_data),64);
            tracep->chgBit(oldp+1310,((1U & (~ (0xffU 
                                                & (((IData)(7U) 
                                                    << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1311,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeat_last));
            tracep->chgBit(oldp+1312,((1U & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                             >> 2U))));
            tracep->chgBit(oldp+1313,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeat_index));
            tracep->chgIData(oldp+1314,((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__cated_bits_data)),32);
            tracep->chgIData(oldp+1315,((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__cated_bits_data 
                                                 >> 0x20U))),32);
            tracep->chgCData(oldp+1316,((0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_mask))),4);
            tracep->chgCData(oldp+1317,((0xfU & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_mask) 
                                                 >> 4U))),4);
            tracep->chgBit(oldp+1318,((1U & (~ (0xffU 
                                                & (((IData)(7U) 
                                                    << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_in_d_bits_size)) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1319,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__last));
            tracep->chgBit(oldp+1320,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_d_ready) 
                                             | (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__last))))));
            tracep->chgBit(oldp+1321,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__bundleIn_0_d_bits_data_masked_enable_0));
            tracep->chgBit(oldp+1322,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__source_ok));
            tracep->chgCData(oldp+1323,((0x3fU & (~ 
                                                  (0x1fffU 
                                                   & ((IData)(0x3fU) 
                                                      << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)))))),6);
            tracep->chgBit(oldp+1324,((0U == (0x3fU 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x1fffU 
                                                     & ((IData)(0x3fU) 
                                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)))))))));
            tracep->chgCData(oldp+1325,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))),2);
            tracep->chgCData(oldp+1326,((7U & (1U | 
                                               (0xfU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (3U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))))))),3);
            tracep->chgBit(oldp+1327,((1U & (((IData)(1U) 
                                              << (3U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))) 
                                             >> 2U))));
            tracep->chgBit(oldp+1328,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                             >> 2U))));
            tracep->chgBit(oldp+1329,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                                >> 2U)))));
            tracep->chgBit(oldp+1330,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+1331,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+1332,((1U & (((IData)(1U) 
                                              << (3U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))) 
                                             >> 1U))));
            tracep->chgBit(oldp+1333,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                             >> 1U))));
            tracep->chgBit(oldp+1334,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                                >> 1U)))));
            tracep->chgBit(oldp+1335,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_2));
            tracep->chgBit(oldp+1336,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc_2));
            tracep->chgBit(oldp+1337,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_3));
            tracep->chgBit(oldp+1338,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc_3));
            tracep->chgBit(oldp+1339,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_4));
            tracep->chgBit(oldp+1340,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc_4));
            tracep->chgBit(oldp+1341,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_5));
            tracep->chgBit(oldp+1342,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc_5));
            tracep->chgBit(oldp+1343,((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)));
            tracep->chgBit(oldp+1344,((1U & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1345,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_2) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1346,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_2) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+1347,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_2) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)));
            tracep->chgBit(oldp+1348,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_2) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1349,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_3) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1350,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_3) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+1351,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_3) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)));
            tracep->chgBit(oldp+1352,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_3) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1353,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_4) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1354,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_4) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+1355,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_4) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)));
            tracep->chgBit(oldp+1356,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_4) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1357,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_5) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1358,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_5) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+1359,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_5) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)));
            tracep->chgBit(oldp+1360,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask_eq_5) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))));
            tracep->chgCData(oldp+1361,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT__mask),8);
            tracep->chgCData(oldp+1362,((7U & (~ (0x3ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                                                     >> 3U))))),3);
            tracep->chgBit(oldp+1363,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode) 
                                                >> 2U)))));
            tracep->chgCData(oldp+1364,((0xfU & (IData)(
                                                        (7ULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U))))),4);
            tracep->chgQData(oldp+1365,((((QData)((IData)(
                                                          vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT___GEN_23[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__monitor__DOT___GEN_23[0U])))),64);
            tracep->chgBit(oldp+1367,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_0_a_valid));
            tracep->chgCData(oldp+1368,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size),4);
            VL_EXTEND_WI(128,32, __Vtemp7877, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            tracep->chgWData(oldp+1369,(__Vtemp7877),128);
            tracep->chgBit(oldp+1373,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_0_d_ready));
            tracep->chgBit(oldp+1374,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_valid));
            tracep->chgCData(oldp+1375,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_opcode),3);
            tracep->chgCData(oldp+1376,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_size),4);
            tracep->chgCData(oldp+1377,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_source),4);
            tracep->chgBit(oldp+1378,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_denied));
            tracep->chgBit(oldp+1379,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_corrupt));
            tracep->chgBit(oldp+1380,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_a_ready));
            tracep->chgBit(oldp+1381,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_valid));
            tracep->chgCData(oldp+1382,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_opcode),3);
            tracep->chgCData(oldp+1383,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_size),3);
            tracep->chgCData(oldp+1384,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_source),4);
            tracep->chgBit(oldp+1385,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_denied));
            tracep->chgCData(oldp+1386,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_size))),3);
            tracep->chgCData(oldp+1387,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_size),3);
            tracep->chgCData(oldp+1388,((0xfU & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_size)) 
                                                     >> 2U))))),4);
            tracep->chgCData(oldp+1389,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_opcode),3);
            tracep->chgBit(oldp+1390,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_opcode))));
            tracep->chgCData(oldp+1391,(((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_opcode))
                                          ? (0xfU & 
                                             (~ (0x7ffU 
                                                 & (((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_size)) 
                                                    >> 2U))))
                                          : 0U)),4);
            tracep->chgBit(oldp+1392,((IData)((4U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_opcode))))));
            tracep->chgCData(oldp+1393,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__inc),2);
            tracep->chgCData(oldp+1394,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__next_flight),6);
            tracep->chgBit(oldp+1395,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__source_ok));
            tracep->chgBit(oldp+1396,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+1397,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+1398,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+1399,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__mask_acc) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+1400,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__mask_acc_1) 
                                             | (IData)(
                                                       (2U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+1401,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__mask_acc_1) 
                                             | ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                 >> 1U) 
                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgCData(oldp+1402,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT__mask),4);
            tracep->chgBit(oldp+1403,(1U));
            tracep->chgCData(oldp+1404,((0xfU & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                                                     >> 2U))))),4);
            tracep->chgBit(oldp+1405,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_opcode))));
            tracep->chgCData(oldp+1406,((0xfU & (IData)(
                                                        (7ULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U))))),4);
            tracep->chgQData(oldp+1407,((((QData)((IData)(
                                                          vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT___GEN_23[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT___GEN_23[0U])))),64);
            tracep->chgBit(oldp+1409,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_a_ready));
            tracep->chgBit(oldp+1410,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_valid));
            tracep->chgCData(oldp+1411,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_opcode),3);
            tracep->chgCData(oldp+1412,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_size),4);
            tracep->chgCData(oldp+1413,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_source),4);
            tracep->chgBit(oldp+1414,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_denied));
            tracep->chgBit(oldp+1415,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__muxStateEarly_1) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__da_bits_opcode))));
            tracep->chgSData(oldp+1416,((0x3ffU & (~ 
                                                   (0x1ffffffU 
                                                    & (((IData)(0xfffU) 
                                                        << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                       >> 2U))))),10);
            tracep->chgSData(oldp+1417,(((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_opcode))
                                          ? 0U : (0x3ffU 
                                                  & (~ 
                                                     (0x1ffffffU 
                                                      & (((IData)(0xfffU) 
                                                          << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                         >> 2U)))))),10);
            tracep->chgBit(oldp+1418,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__a_last));
            tracep->chgBit(oldp+1419,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__da_valid));
            tracep->chgBit(oldp+1420,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__out_1_ready));
            tracep->chgCData(oldp+1421,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__da_bits_opcode),3);
            tracep->chgBit(oldp+1422,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__da_bits_opcode))));
            tracep->chgSData(oldp+1423,(((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__da_bits_opcode))
                                          ? (0x3ffU 
                                             & (~ (0x1ffffffU 
                                                   & (((IData)(0xfffU) 
                                                       << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)) 
                                                      >> 2U))))
                                          : 0U)),10);
            tracep->chgBit(oldp+1424,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__da_last));
            tracep->chgBit(oldp+1425,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__muxStateEarly_1));
            tracep->chgBit(oldp+1426,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__source_ok));
            tracep->chgSData(oldp+1427,((0xfffU & (~ 
                                                   (0x7ffffffU 
                                                    & ((IData)(0xfffU) 
                                                       << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)))))),12);
            VL_EXTEND_WI(128,32, __Vtemp7879, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            VL_EXTEND_WI(128,12, __Vtemp7880, (0xfffU 
                                               & (~ 
                                                  (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))))));
            tracep->chgBit(oldp+1428,((0U == ((((__Vtemp7879[0U] 
                                                 & __Vtemp7880[0U]) 
                                                | (__Vtemp7879[1U] 
                                                   & __Vtemp7880[1U])) 
                                               | (__Vtemp7879[2U] 
                                                  & __Vtemp7880[2U])) 
                                              | (__Vtemp7879[3U] 
                                                 & __Vtemp7880[3U])))));
            tracep->chgBit(oldp+1429,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))));
            tracep->chgCData(oldp+1430,((3U & (1U | 
                                               ((IData)(1U) 
                                                << 
                                                (1U 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size)))))),2);
            tracep->chgBit(oldp+1431,((1U & (((IData)(1U) 
                                              << (1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_size))) 
                                             >> 1U))));
            VL_EXTEND_WI(128,32, __Vtemp7882, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            tracep->chgBit(oldp+1432,((1U & (__Vtemp7882[0U] 
                                             >> 1U))));
            VL_EXTEND_WI(128,32, __Vtemp7883, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            tracep->chgBit(oldp+1433,((1U & (~ (__Vtemp7883[0U] 
                                                >> 1U)))));
            tracep->chgBit(oldp+1434,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+1435,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__mask_acc_1));
            VL_EXTEND_WI(128,32, __Vtemp7884, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            tracep->chgBit(oldp+1436,((1U & __Vtemp7884[0U])));
            VL_EXTEND_WI(128,32, __Vtemp7885, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            tracep->chgBit(oldp+1437,((1U & (~ __Vtemp7885[0U]))));
            VL_EXTEND_WI(128,32, __Vtemp7886, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            VL_EXTEND_WI(128,32, __Vtemp7887, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            tracep->chgBit(oldp+1438,((1U & ((~ (__Vtemp7886[0U] 
                                                 >> 1U)) 
                                             & (~ __Vtemp7887[0U])))));
            VL_EXTEND_WI(128,32, __Vtemp7888, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            VL_EXTEND_WI(128,32, __Vtemp7889, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            tracep->chgBit(oldp+1439,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__mask_acc) 
                                             | ((~ 
                                                 (__Vtemp7888[0U] 
                                                  >> 1U)) 
                                                & (~ 
                                                   __Vtemp7889[0U]))))));
            VL_EXTEND_WI(128,32, __Vtemp7890, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            VL_EXTEND_WI(128,32, __Vtemp7891, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            tracep->chgBit(oldp+1440,((1U & ((~ (__Vtemp7890[0U] 
                                                 >> 1U)) 
                                             & __Vtemp7891[0U]))));
            VL_EXTEND_WI(128,32, __Vtemp7892, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            VL_EXTEND_WI(128,32, __Vtemp7893, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            tracep->chgBit(oldp+1441,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__mask_acc) 
                                             | ((~ 
                                                 (__Vtemp7892[0U] 
                                                  >> 1U)) 
                                                & __Vtemp7893[0U])))));
            VL_EXTEND_WI(128,32, __Vtemp7894, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            VL_EXTEND_WI(128,32, __Vtemp7895, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            tracep->chgBit(oldp+1442,((1U & ((__Vtemp7894[0U] 
                                              >> 1U) 
                                             & (~ __Vtemp7895[0U])))));
            VL_EXTEND_WI(128,32, __Vtemp7896, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            VL_EXTEND_WI(128,32, __Vtemp7897, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            tracep->chgBit(oldp+1443,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__mask_acc_1) 
                                             | ((__Vtemp7896[0U] 
                                                 >> 1U) 
                                                & (~ 
                                                   __Vtemp7897[0U]))))));
            VL_EXTEND_WI(128,32, __Vtemp7898, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            VL_EXTEND_WI(128,32, __Vtemp7899, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            tracep->chgBit(oldp+1444,((1U & ((__Vtemp7898[0U] 
                                              >> 1U) 
                                             & __Vtemp7899[0U]))));
            VL_EXTEND_WI(128,32, __Vtemp7900, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            VL_EXTEND_WI(128,32, __Vtemp7901, vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address);
            tracep->chgBit(oldp+1445,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__mask_acc_1) 
                                             | ((__Vtemp7900[0U] 
                                                 >> 1U) 
                                                & __Vtemp7901[0U])))));
            tracep->chgCData(oldp+1446,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT__mask),4);
            tracep->chgBit(oldp+1447,(1U));
            tracep->chgSData(oldp+1448,((0x3ffU & (~ 
                                                   (0x1ffffffU 
                                                    & (((IData)(0xfffU) 
                                                        << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                                                       >> 2U))))),10);
            tracep->chgBit(oldp+1449,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_opcode))));
            tracep->chgCData(oldp+1450,((0xfU & (IData)(
                                                        (7ULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U))))),4);
            tracep->chgBit(oldp+1451,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor.__PVT__source_ok));
            tracep->chgBit(oldp+1452,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor.__PVT__mask_acc));
            tracep->chgBit(oldp+1453,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor.__PVT__mask_acc_1));
            tracep->chgBit(oldp+1454,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor.__PVT__mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+1455,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor.__PVT__mask_acc) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+1456,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor.__PVT__mask_acc_1) 
                                             | (IData)(
                                                       (2U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))))));
            tracep->chgBit(oldp+1457,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor.__PVT__mask_acc_1) 
                                             | ((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address 
                                                 >> 1U) 
                                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget.__PVT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgCData(oldp+1458,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor.__PVT__mask),4);
            tracep->chgSData(oldp+1459,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor.__PVT__a_set_wo_ready),16);
            tracep->chgQData(oldp+1460,((((QData)((IData)(
                                                          vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor.__PVT___GEN_23[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor.__PVT___GEN_23[0U])))),64);
            tracep->chgBit(oldp+1462,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0_reset));
            tracep->chgBit(oldp+1463,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0_reset));
            tracep->chgBit(oldp+1464,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0_reset));
            tracep->chgBit(oldp+1465,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0_reset));
            tracep->chgBit(oldp+1466,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0_reset));
            tracep->chgBit(oldp+1467,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0_reset));
            tracep->chgCData(oldp+1468,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_incremented),4);
            tracep->chgCData(oldp+1469,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx),4);
            tracep->chgCData(oldp+1470,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__index),3);
            tracep->chgBit(oldp+1471,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0_reset));
            tracep->chgBit(oldp+1472,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0_reset));
            tracep->chgBit(oldp+1473,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0_reset));
            tracep->chgBit(oldp+1474,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0_reset));
            tracep->chgBit(oldp+1475,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0_reset));
            tracep->chgBit(oldp+1476,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0_reset));
            tracep->chgBit(oldp+1477,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0_reset));
            tracep->chgBit(oldp+1478,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__wen));
            tracep->chgBit(oldp+1479,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__wen_1));
            tracep->chgBit(oldp+1480,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0_reset));
            tracep->chgBit(oldp+1481,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0_reset));
            tracep->chgBit(oldp+1482,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0_reset));
            tracep->chgBit(oldp+1483,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0_reset));
            tracep->chgBit(oldp+1484,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0_reset));
            tracep->chgBit(oldp+1485,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0_reset));
            tracep->chgBit(oldp+1486,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0_reset));
            tracep->chgBit(oldp+1487,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0_reset));
            tracep->chgBit(oldp+1488,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0_reset));
            tracep->chgBit(oldp+1489,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0_reset));
            tracep->chgBit(oldp+1490,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0_reset));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
            tracep->chgBit(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_in_rvalid));
            tracep->chgIData(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr),30);
            tracep->chgBit(oldp+1493,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___bundleIn_0_pready_T_4)))));
            tracep->chgBit(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_psel));
            tracep->chgBit(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_penable));
            tracep->chgIData(oldp+1496,((0x1fffffffU 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)),29);
            tracep->chgBit(oldp+1497,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_psel) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_penable))));
            tracep->chgBit(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_0_psel));
            tracep->chgBit(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_0_penable));
            tracep->chgBit(oldp+1500,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_0_penable) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__ren))));
            tracep->chgBit(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
            tracep->chgBit(oldp+1502,((0U == (0x20001000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr))));
            tracep->chgIData(oldp+1503,((0x1fffffffU 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)),32);
            tracep->chgCData(oldp+1504,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)),3);
            tracep->chgCData(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
            tracep->chgCData(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
            tracep->chgIData(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr),32);
            tracep->chgBit(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__ren));
            tracep->chgQData(oldp+1509,(((QData)((IData)(
                                                         (0x3ffffffU 
                                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr 
                                                             >> 2U)))) 
                                         << 2U)),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
            tracep->chgBit(oldp+1511,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+1512,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+1513,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
            tracep->chgBit(oldp+1514,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+1515,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+1516,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
            tracep->chgBit(oldp+1517,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+1518,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+1519,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
            tracep->chgBit(oldp+1520,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+1521,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+1522,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xcU])) {
            tracep->chgBit(oldp+1523,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+1524,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+1525,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xdU])) {
            tracep->chgBit(oldp+1526,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+1527,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+1528,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xeU])) {
            tracep->chgBit(oldp+1529,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+1530,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+1531,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xfU])) {
            tracep->chgBit(oldp+1532,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+1533,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+1534,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x10U])) {
            tracep->chgBit(oldp+1535,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+1536,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+1537,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x11U])) {
            tracep->chgBit(oldp+1538,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+1539,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+1540,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x12U])) {
            tracep->chgBit(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_a_ready));
            tracep->chgBit(oldp+1542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_valid));
            tracep->chgCData(oldp+1543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode),3);
            tracep->chgCData(oldp+1544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param),3);
            tracep->chgCData(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size),3);
            tracep->chgCData(oldp+1546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source),7);
            tracep->chgIData(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address),32);
            tracep->chgCData(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_mask),8);
            tracep->chgQData(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_data),64);
            tracep->chgBit(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid));
            tracep->chgSData(oldp+1552,((0x1fffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)),13);
            tracep->chgBit(oldp+1553,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.auto_in_a_ready));
            tracep->chgBit(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid));
            tracep->chgCData(oldp+1555,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_param),2);
            tracep->chgBit(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_in_a_ready));
            tracep->chgBit(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid));
            tracep->chgCData(oldp+1558,((0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))),4);
            tracep->chgCData(oldp+1559,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_echo_tl_state_size),4);
            tracep->chgCData(oldp+1560,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_echo_tl_state_source),7);
            tracep->chgBit(oldp+1561,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id) 
                                             >> 4U))));
            tracep->chgCData(oldp+1562,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id),5);
            tracep->chgBit(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid));
            tracep->chgCData(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode),3);
            tracep->chgCData(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size),3);
            tracep->chgCData(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source),7);
            tracep->chgSData(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address),13);
            tracep->chgCData(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_out_a_bits_mask),4);
            tracep->chgBit(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_a_ready));
            tracep->chgBit(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1_auto_out_a_valid));
            tracep->chgBit(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1_auto_in_a_ready));
            tracep->chgBit(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_valid));
            tracep->chgBit(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_enq_ready));
            tracep->chgBit(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid));
            tracep->chgBit(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_ready));
            tracep->chgBit(oldp+1576,((0ULL == (0x80000000ULL 
                                                & (QData)((IData)(
                                                                  (0x80000000U 
                                                                   ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))))));
            tracep->chgBit(oldp+1577,((0ULL == (0x80000000ULL 
                                                & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))))));
            tracep->chgBit(oldp+1578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok));
            tracep->chgCData(oldp+1579,((0x3fU & (~ 
                                                  (0x1fffU 
                                                   & ((IData)(0x3fU) 
                                                      << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)))))),6);
            tracep->chgBit(oldp+1580,((0U == (0x3fU 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x1fffU 
                                                     & ((IData)(0x3fU) 
                                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)))))))));
            tracep->chgCData(oldp+1581,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))),2);
            tracep->chgCData(oldp+1582,((7U & (1U | 
                                               (0xfU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (3U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))))))),3);
            tracep->chgBit(oldp+1583,((1U & (((IData)(1U) 
                                              << (3U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                                             >> 2U))));
            tracep->chgBit(oldp+1584,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                             >> 2U))));
            tracep->chgBit(oldp+1585,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                                >> 2U)))));
            tracep->chgBit(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+1587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+1588,((1U & (((IData)(1U) 
                                              << (3U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size))) 
                                             >> 1U))));
            tracep->chgBit(oldp+1589,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                             >> 1U))));
            tracep->chgBit(oldp+1590,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                                >> 1U)))));
            tracep->chgBit(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_2));
            tracep->chgBit(oldp+1592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_2));
            tracep->chgBit(oldp+1593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_3));
            tracep->chgBit(oldp+1594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_3));
            tracep->chgBit(oldp+1595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_4));
            tracep->chgBit(oldp+1596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_4));
            tracep->chgBit(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_5));
            tracep->chgBit(oldp+1598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_5));
            tracep->chgBit(oldp+1599,((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+1600,((1U & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1601,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1602,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+1603,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+1604,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1605,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1606,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+1607,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+1608,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1609,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1610,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+1611,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+1612,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1613,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1614,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+1615,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+1616,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgCData(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask),8);
            tracep->chgCData(oldp+1618,((7U & (~ (0x3ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                                                     >> 3U))))),3);
            tracep->chgBit(oldp+1619,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                                                >> 2U)))));
            tracep->chgWData(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready),128);
            tracep->chgBit(oldp+1624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass_io_bypass));
            tracep->chgBit(oldp+1625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_in_1_a_ready));
            tracep->chgBit(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_io_bypass));
            tracep->chgIData(oldp+1627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD_io_q_bits_data),32);
            tracep->chgBit(oldp+1628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_ready));
            tracep->chgBit(oldp+1629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_ready));
            tracep->chgBit(oldp+1630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall));
            tracep->chgCData(oldp+1631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__inc),5);
            tracep->chgCData(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__next_flight),8);
            tracep->chgBit(oldp+1633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_alloc_valid));
            tracep->chgBit(oldp+1634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_alloc_valid));
            tracep->chgBit(oldp+1635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_alloc_valid));
            tracep->chgBit(oldp+1636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_alloc_valid));
            tracep->chgBit(oldp+1637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_alloc_valid));
            tracep->chgBit(oldp+1638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_alloc_valid));
            tracep->chgBit(oldp+1639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_alloc_valid));
            tracep->chgBit(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_alloc_valid));
            tracep->chgBit(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready));
            tracep->chgBit(oldp+1642,(((((((((0U == 
                                              (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U))) 
                                             | (1U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                    >> 4U)))) 
                                            | (2U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                   >> 4U)))) 
                                           | (3U == 
                                              (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                                          | (4U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                                         | (5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                      >> 4U)))) 
                                        | (6U == (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                     >> 4U)))) 
                                       | (7U == (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                    >> 4U))))));
            tracep->chgCData(oldp+1643,((0x3fU & (~ 
                                                  (0x1fffU 
                                                   & ((IData)(0x3fU) 
                                                      << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)))))),6);
            tracep->chgBit(oldp+1644,((0U == (0x3fU 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                                 & (~ 
                                                    (0x1fffU 
                                                     & ((IData)(0x3fU) 
                                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)))))))));
            tracep->chgBit(oldp+1645,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))));
            tracep->chgCData(oldp+1646,((3U & (1U | 
                                               ((IData)(1U) 
                                                << 
                                                (1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)))))),2);
            tracep->chgBit(oldp+1647,((1U & (((IData)(1U) 
                                              << (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))) 
                                             >> 1U))));
            tracep->chgBit(oldp+1648,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                             >> 1U))));
            tracep->chgBit(oldp+1649,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+1651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+1652,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))));
            tracep->chgBit(oldp+1653,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgBit(oldp+1654,((IData)((0U == 
                                               (3U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))));
            tracep->chgBit(oldp+1655,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))))));
            tracep->chgBit(oldp+1656,((IData)((1U == 
                                               (3U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))));
            tracep->chgBit(oldp+1657,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))))));
            tracep->chgBit(oldp+1658,((IData)((2U == 
                                               (3U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))));
            tracep->chgBit(oldp+1659,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc_1) 
                                             | (IData)(
                                                       (2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))))));
            tracep->chgBit(oldp+1660,((IData)((3U == 
                                               (3U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))));
            tracep->chgBit(oldp+1661,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc_1) 
                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))));
            tracep->chgCData(oldp+1662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask),4);
            tracep->chgCData(oldp+1663,((0xfU & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                                                     >> 2U))))),4);
            tracep->chgBit(oldp+1664,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode) 
                                                >> 2U)))));
            tracep->chgWData(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready),128);
            tracep->chgBit(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__do_enq));
            tracep->chgBit(oldp+1670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_ready));
            tracep->chgBit(oldp+1671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_i_valid));
            tracep->chgBit(oldp+1672,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___readys_T_3)))));
            tracep->chgBit(oldp+1673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__out_1_ready));
            tracep->chgBit(oldp+1674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__earlyWinner_1));
            tracep->chgBit(oldp+1675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_1));
            tracep->chgWData(oldp+1676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready),128);
            tracep->chgBit(oldp+1680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor_io_in_a_ready));
            tracep->chgWData(oldp+1681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready),128);
            tracep->chgQData(oldp+1685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_set_wo_ready),64);
            tracep->chgBit(oldp+1687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor_io_in_a_ready));
            tracep->chgQData(oldp+1688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_set_wo_ready),64);
            tracep->chgBit(oldp+1690,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_last)))));
            tracep->chgCData(oldp+1691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask),8);
            tracep->chgBit(oldp+1692,((1U & (~ (0xffU 
                                                & (((IData)(7U) 
                                                    << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_last));
            tracep->chgBit(oldp+1694,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                             >> 2U))));
            tracep->chgCData(oldp+1695,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask))),4);
            tracep->chgCData(oldp+1696,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask) 
                                                 >> 4U))),4);
            tracep->chgBit(oldp+1697,(((((((((0U == 
                                              (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                             | (1U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                    >> 4U)))) 
                                            | (2U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 4U)))) 
                                           | (3U == 
                                              (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                                          | (4U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                                         | (5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                      >> 4U)))) 
                                        | (6U == (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                     >> 4U)))) 
                                       | (7U == (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                    >> 4U))))));
            tracep->chgBit(oldp+1698,((0U == (0x3fU 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x1fffU 
                                                     & ((IData)(0x3fU) 
                                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)))))))));
            tracep->chgBit(oldp+1699,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                             >> 2U))));
            tracep->chgBit(oldp+1700,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                                >> 2U)))));
            tracep->chgBit(oldp+1701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+1702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+1703,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                             >> 1U))));
            tracep->chgBit(oldp+1704,((1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address 
                                                >> 1U)))));
            tracep->chgBit(oldp+1705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_2));
            tracep->chgBit(oldp+1706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_2));
            tracep->chgBit(oldp+1707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_3));
            tracep->chgBit(oldp+1708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_3));
            tracep->chgBit(oldp+1709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_4));
            tracep->chgBit(oldp+1710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_4));
            tracep->chgBit(oldp+1711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_5));
            tracep->chgBit(oldp+1712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_5));
            tracep->chgBit(oldp+1713,((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+1714,((1U & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1715,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_2) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1716,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_2) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+1717,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_2) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+1718,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_2) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1719,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_3) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1720,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_3) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+1721,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_3) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+1722,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_3) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1723,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_4) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1724,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_4) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+1725,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_4) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+1726,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_4) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1727,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_5) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1728,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_5) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+1729,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_5) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+1730,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask_eq_5) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgCData(oldp+1731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__mask),8);
            tracep->chgWData(oldp+1732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready),128);
            tracep->chgBit(oldp+1736,((1U & ((IData)(1U) 
                                             << (0xfU 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))))));
            tracep->chgBit(oldp+1737,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 1U))));
            tracep->chgBit(oldp+1738,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 2U))));
            tracep->chgBit(oldp+1739,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 3U))));
            tracep->chgBit(oldp+1740,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 4U))));
            tracep->chgBit(oldp+1741,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 5U))));
            tracep->chgBit(oldp+1742,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 6U))));
            tracep->chgBit(oldp+1743,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 7U))));
            tracep->chgBit(oldp+1744,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 8U))));
            tracep->chgBit(oldp+1745,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 9U))));
            tracep->chgBit(oldp+1746,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1747,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1748,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1749,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1750,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1751,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1752,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor_io_in_a_ready));
            tracep->chgBit(oldp+1753,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__deq_io_enq_valid));
            tracep->chgBit(oldp+1754,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__deq_io_enq_bits_last));
            tracep->chgBit(oldp+1755,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_enq_valid));
            tracep->chgCData(oldp+1756,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_enq_bits_id),5);
            tracep->chgCData(oldp+1757,((0xffU & (~ 
                                                  (0x7fffU 
                                                   & (((IData)(0x7ffU) 
                                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                                                      >> 3U))))),8);
            tracep->chgCData(oldp+1758,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq_io_enq_bits_size),3);
            tracep->chgCData(oldp+1759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size),4);
            tracep->chgBit(oldp+1760,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__idStall_6));
            tracep->chgBit(oldp+1761,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__idStall_5));
            tracep->chgBit(oldp+1762,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__idStall_4));
            tracep->chgBit(oldp+1763,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__idStall_3));
            tracep->chgBit(oldp+1764,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__idStall_2));
            tracep->chgBit(oldp+1765,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__idStall_1));
            tracep->chgBit(oldp+1766,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__idStall_0));
            tracep->chgBit(oldp+1767,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__stall));
            tracep->chgBit(oldp+1768,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__stall)) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___bundleIn_0_a_ready_T_3))));
            tracep->chgCData(oldp+1769,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__beats1),3);
            tracep->chgCData(oldp+1770,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id),5);
            tracep->chgBit(oldp+1771,((((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__stall)) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_0_a_valid)) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___out_arw_valid_T_4))));
            tracep->chgBit(oldp+1772,((1U & ((IData)(1U) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)))));
            tracep->chgBit(oldp+1773,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 1U))));
            tracep->chgBit(oldp+1774,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 2U))));
            tracep->chgBit(oldp+1775,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 3U))));
            tracep->chgBit(oldp+1776,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 4U))));
            tracep->chgBit(oldp+1777,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 5U))));
            tracep->chgBit(oldp+1778,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 6U))));
            tracep->chgBit(oldp+1779,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 7U))));
            tracep->chgBit(oldp+1780,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 8U))));
            tracep->chgBit(oldp+1781,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 9U))));
            tracep->chgBit(oldp+1782,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1783,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1784,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1785,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1786,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1787,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1788,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1789,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1790,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1791,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1792,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1793,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1794,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1795,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc));
            tracep->chgBit(oldp+1796,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_1));
            tracep->chgBit(oldp+1797,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_2));
            tracep->chgBit(oldp+1798,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_3));
            tracep->chgBit(oldp+1799,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_4));
            tracep->chgBit(oldp+1800,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_5));
            tracep->chgBit(oldp+1801,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__inc_6));
            tracep->chgBit(oldp+1802,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 7U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+1803,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 8U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+1804,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 9U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+1805,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0xaU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+1806,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0xbU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+1807,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0xcU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+1808,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0xdU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+1809,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0xeU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+1810,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0xfU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+1811,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x10U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+1812,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x11U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+1813,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x12U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+1814,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x13U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+1815,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x14U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+1816,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x15U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+1817,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x16U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+1818,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+1819,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+1820,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_2));
            tracep->chgBit(oldp+1821,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_2));
            tracep->chgBit(oldp+1822,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_3));
            tracep->chgBit(oldp+1823,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_3));
            tracep->chgBit(oldp+1824,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_4));
            tracep->chgBit(oldp+1825,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_4));
            tracep->chgBit(oldp+1826,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_5));
            tracep->chgBit(oldp+1827,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_5));
            tracep->chgBit(oldp+1828,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_2) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1829,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_2) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+1830,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_2) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+1831,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_2) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1832,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_3) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1833,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_3) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+1834,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_3) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+1835,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_3) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1836,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_4) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1837,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_4) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+1838,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_4) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+1839,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_4) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1840,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_5) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+1841,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_5) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+1842,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_5) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+1843,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_5) 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgCData(oldp+1844,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__mask),8);
            tracep->chgWData(oldp+1845,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__monitor__DOT__a_set_wo_ready),128);
            tracep->chgBit(oldp+1849,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__deq__DOT___do_enq_T));
            tracep->chgBit(oldp+1850,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4.__PVT__queue_arw_deq__DOT___do_enq_T));
            tracep->chgCData(oldp+1851,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_param),2);
            tracep->chgCData(oldp+1852,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_sink),5);
            tracep->chgBit(oldp+1853,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass));
            tracep->chgBit(oldp+1854,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__stall));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x13U])) {
            tracep->chgBit(oldp+1855,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+1856,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+1857,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+1858,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+1859,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+1860,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+1861,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+1862,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+1863,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x14U])) {
            tracep->chgCData(oldp+1864,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray),4);
            tracep->chgCData(oldp+1865,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray),4);
            tracep->chgCData(oldp+1866,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray),4);
            tracep->chgCData(oldp+1867,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray),4);
            tracep->chgCData(oldp+1868,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray),4);
            tracep->chgBit(oldp+1869,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_gray));
            tracep->chgBit(oldp+1870,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_gray));
            tracep->chgCData(oldp+1871,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray),4);
            tracep->chgCData(oldp+1872,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray),4);
            tracep->chgCData(oldp+1873,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray),4);
            tracep->chgCData(oldp+1874,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray),4);
            tracep->chgCData(oldp+1875,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray),4);
            tracep->chgBit(oldp+1876,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_gray));
            tracep->chgBit(oldp+1877,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_gray));
            tracep->chgCData(oldp+1878,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_incremented),4);
            tracep->chgCData(oldp+1879,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx),4);
            tracep->chgCData(oldp+1880,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__index),3);
            tracep->chgCData(oldp+1881,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_incremented),4);
            tracep->chgCData(oldp+1882,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx),4);
            tracep->chgCData(oldp+1883,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__index),3);
            tracep->chgCData(oldp+1884,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_incremented),4);
            tracep->chgCData(oldp+1885,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx),4);
            tracep->chgCData(oldp+1886,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__index),3);
            tracep->chgCData(oldp+1887,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_incremented),4);
            tracep->chgCData(oldp+1888,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx),4);
            tracep->chgCData(oldp+1889,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__index),3);
            tracep->chgCData(oldp+1890,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_incremented),4);
            tracep->chgCData(oldp+1891,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx),4);
            tracep->chgCData(oldp+1892,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__index),3);
            tracep->chgCData(oldp+1893,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_incremented),4);
            tracep->chgCData(oldp+1894,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx),4);
            tracep->chgCData(oldp+1895,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__index),3);
            tracep->chgBit(oldp+1896,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink_io_deq_valid));
            tracep->chgBit(oldp+1897,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink_io_deq_valid));
            tracep->chgIData(oldp+1898,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z),21);
            tracep->chgIData(oldp+1899,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z_1),21);
            tracep->chgIData(oldp+1900,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z_2),21);
            tracep->chgIData(oldp+1901,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z_3),21);
            tracep->chgIData(oldp+1902,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z_4),21);
            tracep->chgIData(oldp+1903,(((0x100000U 
                                          & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z)
                                          ? 0xfffffU
                                          : (0xfffffU 
                                             & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z))),20);
            tracep->chgIData(oldp+1904,(((0x100000U 
                                          & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z_1)
                                          ? 0xfffffU
                                          : (0xfffffU 
                                             & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z_1))),20);
            tracep->chgIData(oldp+1905,(((0x100000U 
                                          & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z_2)
                                          ? 0xfffffU
                                          : (0xfffffU 
                                             & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z_2))),20);
            tracep->chgIData(oldp+1906,(((0x100000U 
                                          & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z_3)
                                          ? 0xfffffU
                                          : (0xfffffU 
                                             & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z_3))),20);
            tracep->chgIData(oldp+1907,(((0x100000U 
                                          & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z_4)
                                          ? 0xfffffU
                                          : (0xfffffU 
                                             & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rx_z_4))),20);
            tracep->chgBit(oldp+1908,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+1909,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_ridx_bin));
            tracep->chgBit(oldp+1910,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_incremented));
            tracep->chgBit(oldp+1911,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+1912,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+1913,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+1914,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_ridx_bin));
            tracep->chgBit(oldp+1915,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_incremented));
            tracep->chgBit(oldp+1916,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+1917,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+1918,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink_io_deq_valid));
            tracep->chgBit(oldp+1919,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink_io_deq_valid));
            tracep->chgIData(oldp+1920,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z),21);
            tracep->chgIData(oldp+1921,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z_1),21);
            tracep->chgIData(oldp+1922,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z_2),21);
            tracep->chgIData(oldp+1923,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z_3),21);
            tracep->chgIData(oldp+1924,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z_4),21);
            tracep->chgIData(oldp+1925,(((0x100000U 
                                          & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z)
                                          ? 0xfffffU
                                          : (0xfffffU 
                                             & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z))),20);
            tracep->chgIData(oldp+1926,(((0x100000U 
                                          & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z_1)
                                          ? 0xfffffU
                                          : (0xfffffU 
                                             & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z_1))),20);
            tracep->chgIData(oldp+1927,(((0x100000U 
                                          & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z_2)
                                          ? 0xfffffU
                                          : (0xfffffU 
                                             & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z_2))),20);
            tracep->chgIData(oldp+1928,(((0x100000U 
                                          & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z_3)
                                          ? 0xfffffU
                                          : (0xfffffU 
                                             & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z_3))),20);
            tracep->chgIData(oldp+1929,(((0x100000U 
                                          & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z_4)
                                          ? 0xfffffU
                                          : (0xfffffU 
                                             & vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rx_z_4))),20);
            tracep->chgBit(oldp+1930,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+1931,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_ridx_bin));
            tracep->chgBit(oldp+1932,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__ridx_incremented));
            tracep->chgBit(oldp+1933,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+1934,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+1935,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+1936,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_ridx_bin));
            tracep->chgBit(oldp+1937,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__ridx_incremented));
            tracep->chgBit(oldp+1938,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+1939,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+1940,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray))));
            tracep->chgBit(oldp+1941,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                             >> 1U))));
            tracep->chgBit(oldp+1942,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                             >> 2U))));
            tracep->chgBit(oldp+1943,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                             >> 3U))));
            tracep->chgBit(oldp+1944,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray))));
            tracep->chgBit(oldp+1945,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                             >> 1U))));
            tracep->chgBit(oldp+1946,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                             >> 2U))));
            tracep->chgBit(oldp+1947,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                             >> 3U))));
            tracep->chgBit(oldp+1948,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray))));
            tracep->chgBit(oldp+1949,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                             >> 1U))));
            tracep->chgBit(oldp+1950,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                             >> 2U))));
            tracep->chgBit(oldp+1951,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                             >> 3U))));
            tracep->chgBit(oldp+1952,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray))));
            tracep->chgBit(oldp+1953,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                             >> 1U))));
            tracep->chgBit(oldp+1954,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                             >> 2U))));
            tracep->chgBit(oldp+1955,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                             >> 3U))));
            tracep->chgBit(oldp+1956,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray))));
            tracep->chgBit(oldp+1957,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                             >> 1U))));
            tracep->chgBit(oldp+1958,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                             >> 2U))));
            tracep->chgBit(oldp+1959,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                             >> 3U))));
            tracep->chgBit(oldp+1960,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray))));
            tracep->chgBit(oldp+1961,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                             >> 1U))));
            tracep->chgBit(oldp+1962,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                             >> 2U))));
            tracep->chgBit(oldp+1963,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_gray) 
                                             >> 3U))));
            tracep->chgBit(oldp+1964,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray))));
            tracep->chgBit(oldp+1965,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                             >> 1U))));
            tracep->chgBit(oldp+1966,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                             >> 2U))));
            tracep->chgBit(oldp+1967,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__ridx_gray) 
                                             >> 3U))));
            tracep->chgBit(oldp+1968,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray))));
            tracep->chgBit(oldp+1969,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                             >> 1U))));
            tracep->chgBit(oldp+1970,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                             >> 2U))));
            tracep->chgBit(oldp+1971,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__ridx_gray) 
                                             >> 3U))));
            tracep->chgBit(oldp+1972,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray))));
            tracep->chgBit(oldp+1973,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                             >> 1U))));
            tracep->chgBit(oldp+1974,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                             >> 2U))));
            tracep->chgBit(oldp+1975,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_gray) 
                                             >> 3U))));
            tracep->chgBit(oldp+1976,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray))));
            tracep->chgBit(oldp+1977,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                             >> 1U))));
            tracep->chgBit(oldp+1978,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                             >> 2U))));
            tracep->chgBit(oldp+1979,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__ridx_gray) 
                                             >> 3U))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x15U])) {
            tracep->chgBit(oldp+1980,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+1981,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+1982,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+1983,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+1984,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+1985,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+1986,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+1987,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+1988,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x16U])) {
            tracep->chgBit(oldp+1989,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+1990,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+1991,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+1992,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+1993,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+1994,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+1995,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+1996,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+1997,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x17U])) {
            tracep->chgBit(oldp+1998,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+1999,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2000,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2001,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2002,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2003,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2004,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2005,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2006,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x18U])) {
            tracep->chgBit(oldp+2007,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2008,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2009,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2010,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2011,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2012,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2013,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2014,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2015,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x19U])) {
            tracep->chgBit(oldp+2016,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2017,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2018,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2019,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2020,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2021,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1aU])) {
            tracep->chgBit(oldp+2022,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_out_awvalid));
            tracep->chgCData(oldp+2023,((0xfU & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))),4);
            tracep->chgIData(oldp+2024,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_addr),32);
            tracep->chgCData(oldp+2025,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_len),8);
            tracep->chgCData(oldp+2026,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_size),3);
            tracep->chgBit(oldp+2027,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__deq_io_deq_valid));
            tracep->chgQData(oldp+2028,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__deq_io_deq_bits_data),64);
            tracep->chgCData(oldp+2030,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__deq_io_deq_bits_strb),8);
            tracep->chgBit(oldp+2031,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.auto_out_arvalid));
            tracep->chgBit(oldp+2032,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_a_ready));
            tracep->chgBit(oldp+2033,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_valid));
            tracep->chgCData(oldp+2034,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode),3);
            tracep->chgCData(oldp+2035,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param),3);
            tracep->chgCData(oldp+2036,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size),4);
            tracep->chgCData(oldp+2037,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source),7);
            tracep->chgIData(oldp+2038,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address),32);
            tracep->chgCData(oldp+2039,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_mask),8);
            tracep->chgQData(oldp+2040,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_data),64);
            tracep->chgBit(oldp+2042,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_2_a_valid));
            tracep->chgCData(oldp+2043,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))),3);
            tracep->chgSData(oldp+2044,((0x1fffU & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)),13);
            tracep->chgBit(oldp+2045,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_in_a_ready));
            tracep->chgBit(oldp+2046,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_1_a_valid));
            tracep->chgIData(oldp+2047,((0x7fffffffU 
                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)),31);
            tracep->chgBit(oldp+2048,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_in_a_ready));
            tracep->chgBit(oldp+2049,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid));
            tracep->chgBit(oldp+2050,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_a_ready));
            tracep->chgBit(oldp+2051,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_out_d_ready));
            tracep->chgBit(oldp+2052,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_valid));
            tracep->chgCData(oldp+2053,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode),3);
            tracep->chgCData(oldp+2054,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_param),2);
            tracep->chgCData(oldp+2055,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size),3);
            tracep->chgCData(oldp+2056,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source),4);
            tracep->chgCData(oldp+2057,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_sink),6);
            tracep->chgBit(oldp+2058,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_denied));
            tracep->chgIData(oldp+2059,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_data),32);
            tracep->chgBit(oldp+2060,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_corrupt));
            tracep->chgBit(oldp+2061,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_1_d_ready));
            tracep->chgBit(oldp+2062,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_a_ready));
            tracep->chgBit(oldp+2063,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_out_0_d_ready));
            tracep->chgBit(oldp+2064,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_valid));
            tracep->chgCData(oldp+2065,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_opcode),3);
            tracep->chgCData(oldp+2066,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_param),2);
            tracep->chgCData(oldp+2067,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_size),3);
            tracep->chgBit(oldp+2068,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_denied));
            tracep->chgBit(oldp+2069,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_corrupt));
            tracep->chgBit(oldp+2070,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_in_a_ready));
            tracep->chgBit(oldp+2071,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid));
            tracep->chgBit(oldp+2072,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_awvalid));
            tracep->chgCData(oldp+2073,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_echo_tl_state_size),4);
            tracep->chgCData(oldp+2074,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_echo_tl_state_source),7);
            tracep->chgBit(oldp+2075,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id) 
                                             >> 4U))));
            tracep->chgBit(oldp+2076,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_out_arvalid));
            tracep->chgCData(oldp+2077,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id),5);
            tracep->chgBit(oldp+2078,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_awvalid) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_95))));
            tracep->chgBit(oldp+2079,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq_io_deq_valid));
            tracep->chgBit(oldp+2080,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_arvalid) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_15))));
            tracep->chgBit(oldp+2081,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_awvalid));
            tracep->chgCData(oldp+2082,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))),4);
            tracep->chgCData(oldp+2083,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_size),4);
            tracep->chgCData(oldp+2084,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source),7);
            tracep->chgBit(oldp+2085,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id) 
                                             >> 4U))));
            tracep->chgBit(oldp+2086,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_arvalid));
            tracep->chgCData(oldp+2087,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id),5);
            tracep->chgBit(oldp+2088,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_in_a_ready));
            tracep->chgBit(oldp+2089,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__repeated_repeater_io_enq_ready));
            tracep->chgBit(oldp+2090,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_d_ready));
            tracep->chgBit(oldp+2091,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_in_d_valid));
            tracep->chgQData(oldp+2092,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_in_d_bits_data),64);
            tracep->chgBit(oldp+2094,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_in_d_bits_corrupt));
            tracep->chgBit(oldp+2095,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_awready));
            tracep->chgBit(oldp+2096,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_wready));
            tracep->chgBit(oldp+2097,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_in_becho_real_last)))));
            tracep->chgBit(oldp+2098,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_bvalid));
            tracep->chgBit(oldp+2099,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id));
            tracep->chgCData(oldp+2100,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_resp),2);
            tracep->chgBit(oldp+2101,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_arready));
            tracep->chgBit(oldp+2102,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq_io_deq_bits_id));
            tracep->chgBit(oldp+2103,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_in_awready));
            tracep->chgBit(oldp+2104,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_in_becho_real_last));
            tracep->chgBit(oldp+2105,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_in_arready));
            tracep->chgBit(oldp+2106,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_bvalid) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2_auto_in_becho_real_last))));
            tracep->chgBit(oldp+2107,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_valid));
            tracep->chgCData(oldp+2108,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode),3);
            tracep->chgCData(oldp+2109,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size),3);
            tracep->chgCData(oldp+2110,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source),7);
            tracep->chgSData(oldp+2111,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address),13);
            tracep->chgCData(oldp+2112,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2_auto_out_a_bits_mask),4);
            tracep->chgBit(oldp+2113,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_a_ready));
            tracep->chgBit(oldp+2114,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid));
            tracep->chgBit(oldp+2115,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_in_a_ready));
            tracep->chgBit(oldp+2116,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid));
            tracep->chgBit(oldp+2117,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_enq_ready));
            tracep->chgBit(oldp+2118,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid));
            tracep->chgBit(oldp+2119,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_ready));
            tracep->chgBit(oldp+2120,((0ULL == (0x80000000ULL 
                                                & (QData)((IData)(
                                                                  (0x80000000U 
                                                                   ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))))));
            tracep->chgBit(oldp+2121,((0ULL == (0xc0000000ULL 
                                                & (QData)((IData)(
                                                                  (0x40000000U 
                                                                   ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))))));
            tracep->chgBit(oldp+2122,((0ULL == (0xc0000000ULL 
                                                & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))));
            tracep->chgBit(oldp+2123,(((((((((0U == 
                                              (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                             | (1U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                    >> 4U)))) 
                                            | (2U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 4U)))) 
                                           | (3U == 
                                              (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                                          | (4U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                                         | (5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                      >> 4U)))) 
                                        | (6U == (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                     >> 4U)))) 
                                       | (7U == (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                    >> 4U))))));
            tracep->chgCData(oldp+2124,((0xffU & (~ 
                                                  (0x7fffffU 
                                                   & ((IData)(0xffU) 
                                                      << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))),8);
            tracep->chgBit(oldp+2125,((0U == (0xffU 
                                              & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x7fffffU 
                                                     & ((IData)(0xffU) 
                                                        << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))));
            tracep->chgCData(oldp+2126,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))),2);
            tracep->chgCData(oldp+2127,((7U & (1U | 
                                               (0xfU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (3U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))),3);
            tracep->chgBit(oldp+2128,((1U & (((IData)(1U) 
                                              << (3U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                             >> 2U))));
            tracep->chgBit(oldp+2129,((1U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                             >> 2U))));
            tracep->chgBit(oldp+2130,((1U & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                                >> 2U)))));
            tracep->chgBit(oldp+2131,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+2132,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+2133,((1U & (((IData)(1U) 
                                              << (3U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                             >> 1U))));
            tracep->chgBit(oldp+2134,((1U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                             >> 1U))));
            tracep->chgBit(oldp+2135,((1U & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                                >> 1U)))));
            tracep->chgBit(oldp+2136,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_2));
            tracep->chgBit(oldp+2137,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_2));
            tracep->chgBit(oldp+2138,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_3));
            tracep->chgBit(oldp+2139,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_3));
            tracep->chgBit(oldp+2140,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_4));
            tracep->chgBit(oldp+2141,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_4));
            tracep->chgBit(oldp+2142,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_5));
            tracep->chgBit(oldp+2143,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_5));
            tracep->chgBit(oldp+2144,((1U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2145,((1U & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2146,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2147,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2148,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2149,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2150,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2151,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2152,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2153,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2154,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2155,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2156,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2157,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2158,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2159,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2160,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2161,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgCData(oldp+2162,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask),8);
            tracep->chgCData(oldp+2163,((0x1fU & (~ 
                                                  (0xfffffU 
                                                   & (((IData)(0xffU) 
                                                       << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                                                      >> 3U))))),5);
            tracep->chgBit(oldp+2164,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                                >> 2U)))));
            tracep->chgWData(oldp+2165,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready),128);
            tracep->chgBit(oldp+2169,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid));
            tracep->chgBit(oldp+2170,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_d_ready));
            tracep->chgBit(oldp+2171,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass_io_bypass));
            tracep->chgBit(oldp+2172,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_in_1_a_ready));
            tracep->chgBit(oldp+2173,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_io_bypass));
            tracep->chgBit(oldp+2174,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_valid));
            tracep->chgIData(oldp+2175,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD_io_q_bits_data),32);
            tracep->chgBit(oldp+2176,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_ready));
            tracep->chgBit(oldp+2177,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_ready));
            tracep->chgBit(oldp+2178,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_ready));
            tracep->chgBit(oldp+2179,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall));
            tracep->chgCData(oldp+2180,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__inc),5);
            tracep->chgCData(oldp+2181,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__next_flight),8);
            tracep->chgBit(oldp+2182,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_alloc_valid));
            tracep->chgBit(oldp+2183,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_alloc_valid));
            tracep->chgBit(oldp+2184,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_alloc_valid));
            tracep->chgBit(oldp+2185,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_alloc_valid));
            tracep->chgBit(oldp+2186,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_alloc_valid));
            tracep->chgBit(oldp+2187,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_alloc_valid));
            tracep->chgBit(oldp+2188,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_alloc_valid));
            tracep->chgBit(oldp+2189,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_alloc_valid));
            tracep->chgBit(oldp+2190,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready));
            tracep->chgBit(oldp+2191,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam_io_alloc_valid));
            tracep->chgBit(oldp+2192,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__do_enq));
            tracep->chgBit(oldp+2193,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__do_enq));
            tracep->chgBit(oldp+2194,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__do_enq));
            tracep->chgBit(oldp+2195,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_io_enq_valid));
            tracep->chgBit(oldp+2196,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1_io_enq_valid));
            tracep->chgBit(oldp+2197,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2_io_enq_valid));
            tracep->chgBit(oldp+2198,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3_io_enq_valid));
            tracep->chgBit(oldp+2199,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4_io_enq_valid));
            tracep->chgBit(oldp+2200,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5_io_enq_valid));
            tracep->chgBit(oldp+2201,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6_io_enq_valid));
            tracep->chgBit(oldp+2202,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7_io_enq_valid));
            tracep->chgBit(oldp+2203,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8_io_enq_valid));
            tracep->chgBit(oldp+2204,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9_io_enq_valid));
            tracep->chgBit(oldp+2205,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10_io_enq_valid));
            tracep->chgBit(oldp+2206,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11_io_enq_valid));
            tracep->chgBit(oldp+2207,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12_io_enq_valid));
            tracep->chgBit(oldp+2208,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13_io_enq_valid));
            tracep->chgBit(oldp+2209,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14_io_enq_valid));
            tracep->chgBit(oldp+2210,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15_io_enq_valid));
            tracep->chgBit(oldp+2211,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16_io_enq_valid));
            tracep->chgBit(oldp+2212,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17_io_enq_valid));
            tracep->chgBit(oldp+2213,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18_io_enq_valid));
            tracep->chgBit(oldp+2214,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19_io_enq_valid));
            tracep->chgBit(oldp+2215,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20_io_enq_valid));
            tracep->chgBit(oldp+2216,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21_io_enq_valid));
            tracep->chgBit(oldp+2217,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22_io_enq_valid));
            tracep->chgBit(oldp+2218,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23_io_enq_valid));
            tracep->chgBit(oldp+2219,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24_io_enq_valid));
            tracep->chgBit(oldp+2220,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25_io_enq_valid));
            tracep->chgBit(oldp+2221,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26_io_enq_valid));
            tracep->chgBit(oldp+2222,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27_io_enq_valid));
            tracep->chgBit(oldp+2223,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28_io_enq_valid));
            tracep->chgBit(oldp+2224,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29_io_enq_valid));
            tracep->chgBit(oldp+2225,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30_io_enq_valid));
            tracep->chgBit(oldp+2226,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31_io_enq_valid));
            tracep->chgBit(oldp+2227,((1U & ((IData)(1U) 
                                             << (0xfU 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))))));
            tracep->chgBit(oldp+2228,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 1U))));
            tracep->chgBit(oldp+2229,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 2U))));
            tracep->chgBit(oldp+2230,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 3U))));
            tracep->chgBit(oldp+2231,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 4U))));
            tracep->chgBit(oldp+2232,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 5U))));
            tracep->chgBit(oldp+2233,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 6U))));
            tracep->chgBit(oldp+2234,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 7U))));
            tracep->chgBit(oldp+2235,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 8U))));
            tracep->chgBit(oldp+2236,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 9U))));
            tracep->chgBit(oldp+2237,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2238,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2239,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2240,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2241,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2242,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2243,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__do_enq));
            tracep->chgBit(oldp+2244,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__do_enq));
            tracep->chgBit(oldp+2245,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__do_enq));
            tracep->chgBit(oldp+2246,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__do_enq));
            tracep->chgBit(oldp+2247,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__do_enq));
            tracep->chgBit(oldp+2248,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__do_enq));
            tracep->chgBit(oldp+2249,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__do_enq));
            tracep->chgBit(oldp+2250,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__do_enq));
            tracep->chgBit(oldp+2251,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__do_enq));
            tracep->chgBit(oldp+2252,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__do_enq));
            tracep->chgBit(oldp+2253,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__do_enq));
            tracep->chgBit(oldp+2254,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__do_enq));
            tracep->chgBit(oldp+2255,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__do_enq));
            tracep->chgBit(oldp+2256,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__do_enq));
            tracep->chgBit(oldp+2257,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__do_enq));
            tracep->chgBit(oldp+2258,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__do_enq));
            tracep->chgBit(oldp+2259,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__do_enq));
            tracep->chgBit(oldp+2260,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__do_enq));
            tracep->chgBit(oldp+2261,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__do_enq));
            tracep->chgBit(oldp+2262,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__do_enq));
            tracep->chgBit(oldp+2263,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__do_enq));
            tracep->chgBit(oldp+2264,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__do_enq));
            tracep->chgBit(oldp+2265,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__do_enq));
            tracep->chgBit(oldp+2266,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__do_enq));
            tracep->chgBit(oldp+2267,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__do_enq));
            tracep->chgBit(oldp+2268,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__do_enq));
            tracep->chgBit(oldp+2269,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__do_enq));
            tracep->chgBit(oldp+2270,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__do_enq));
            tracep->chgBit(oldp+2271,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__do_enq));
            tracep->chgBit(oldp+2272,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__do_enq));
            tracep->chgBit(oldp+2273,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__do_enq));
            tracep->chgBit(oldp+2274,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__do_enq));
            tracep->chgBit(oldp+2275,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_a_ready));
            tracep->chgBit(oldp+2276,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq_io_enq_valid));
            tracep->chgBit(oldp+2277,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq_io_enq_bits_last));
            tracep->chgBit(oldp+2278,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_enq_valid));
            tracep->chgCData(oldp+2279,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_enq_bits_id),5);
            tracep->chgBit(oldp+2280,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_ready));
            tracep->chgBit(oldp+2281,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_valid));
            tracep->chgBit(oldp+2282,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_wen));
            tracep->chgBit(oldp+2283,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_6));
            tracep->chgBit(oldp+2284,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_5));
            tracep->chgBit(oldp+2285,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4));
            tracep->chgBit(oldp+2286,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_3));
            tracep->chgBit(oldp+2287,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2));
            tracep->chgBit(oldp+2288,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_1));
            tracep->chgBit(oldp+2289,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0));
            tracep->chgBit(oldp+2290,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__stall));
            tracep->chgBit(oldp+2291,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__stall)) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___bundleIn_0_a_ready_T_3))));
            tracep->chgCData(oldp+2292,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__beats1),5);
            tracep->chgCData(oldp+2293,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id),5);
            tracep->chgBit(oldp+2294,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__stall)) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_1_a_valid)) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___out_arw_valid_T_4))));
            tracep->chgBit(oldp+2295,((1U & ((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)))));
            tracep->chgBit(oldp+2296,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 1U))));
            tracep->chgBit(oldp+2297,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 2U))));
            tracep->chgBit(oldp+2298,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 3U))));
            tracep->chgBit(oldp+2299,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 4U))));
            tracep->chgBit(oldp+2300,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 5U))));
            tracep->chgBit(oldp+2301,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 6U))));
            tracep->chgBit(oldp+2302,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 7U))));
            tracep->chgBit(oldp+2303,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 8U))));
            tracep->chgBit(oldp+2304,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 9U))));
            tracep->chgBit(oldp+2305,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2306,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2307,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2308,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2309,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2310,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2311,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2312,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2313,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2314,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2315,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2316,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2317,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2318,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc));
            tracep->chgBit(oldp+2319,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_1));
            tracep->chgBit(oldp+2320,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_2));
            tracep->chgBit(oldp+2321,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_3));
            tracep->chgBit(oldp+2322,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_4));
            tracep->chgBit(oldp+2323,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_5));
            tracep->chgBit(oldp+2324,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_6));
            tracep->chgBit(oldp+2325,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2326,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2327,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2328,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2329,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2330,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2331,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2332,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2333,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2334,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 0x10U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2335,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 0x11U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2336,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 0x12U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2337,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 0x13U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2338,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 0x14U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2339,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 0x15U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2340,(((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                        >> 0x16U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
            tracep->chgBit(oldp+2341,((0U == (0xffU 
                                              & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x7fffffU 
                                                     & ((IData)(0xffU) 
                                                        << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))));
            tracep->chgBit(oldp+2342,((1U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                             >> 2U))));
            tracep->chgBit(oldp+2343,((1U & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                                >> 2U)))));
            tracep->chgBit(oldp+2344,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+2345,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+2346,((1U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                             >> 1U))));
            tracep->chgBit(oldp+2347,((1U & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                                >> 1U)))));
            tracep->chgBit(oldp+2348,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_2));
            tracep->chgBit(oldp+2349,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_2));
            tracep->chgBit(oldp+2350,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_3));
            tracep->chgBit(oldp+2351,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_3));
            tracep->chgBit(oldp+2352,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_4));
            tracep->chgBit(oldp+2353,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_4));
            tracep->chgBit(oldp+2354,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_5));
            tracep->chgBit(oldp+2355,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_5));
            tracep->chgBit(oldp+2356,((1U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2357,((1U & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2358,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_2) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2359,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_2) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2360,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_2) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2361,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_2) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2362,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_3) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2363,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_3) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2364,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_3) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2365,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_3) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2366,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_4) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2367,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_4) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2368,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_4) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2369,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_4) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2370,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_5) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2371,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_5) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2372,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_5) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2373,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_5) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgCData(oldp+2374,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask),8);
            tracep->chgWData(oldp+2375,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_set_wo_ready),128);
            tracep->chgBit(oldp+2379,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_in_d_valid) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))));
            tracep->chgBit(oldp+2380,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_source) 
                                             >> 3U))));
            tracep->chgCData(oldp+2381,((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_denied) 
                                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.auto_in_d_bits_corrupt))
                                          ? 2U : 0U)),2);
            tracep->chgBit(oldp+2382,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_enq_valid));
            tracep->chgCData(oldp+2383,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_enq_bits_resp),2);
            tracep->chgBit(oldp+2384,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_ready));
            tracep->chgBit(oldp+2385,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_valid));
            tracep->chgBit(oldp+2386,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__out_1_ready));
            tracep->chgBit(oldp+2387,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__latch));
            tracep->chgBit(oldp+2388,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))));
            tracep->chgCData(oldp+2389,((7U & (~ (0x3ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                                                     >> 3U))))),3);
            tracep->chgCData(oldp+2390,(((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_opcode))
                                          ? (7U & (~ 
                                                   (0x3ffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                                                       >> 3U))))
                                          : 0U)),3);
            tracep->chgBit(oldp+2391,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__b_allow));
            tracep->chgCData(oldp+2392,((3U & ((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)))),2);
            tracep->chgBit(oldp+2393,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_valid) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__b_allow))));
            tracep->chgBit(oldp+2394,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT___do_enq_T));
            tracep->chgBit(oldp+2395,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2_io_enq_valid));
            tracep->chgBit(oldp+2396,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2_io_deq_ready));
            tracep->chgBit(oldp+2397,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2_io_deq_valid));
            tracep->chgBit(oldp+2398,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3_io_enq_valid));
            tracep->chgBit(oldp+2399,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3_io_deq_ready));
            tracep->chgBit(oldp+2400,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3_io_deq_valid));
            tracep->chgBit(oldp+2401,((1U & ((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq_io_deq_bits_id)))));
            tracep->chgBit(oldp+2402,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq_io_deq_bits_id)) 
                                             >> 1U))));
            tracep->chgBit(oldp+2403,((1U & ((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)))));
            tracep->chgBit(oldp+2404,((1U & (((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)) 
                                             >> 1U))));
            tracep->chgBit(oldp+2405,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT___do_enq_T));
            tracep->chgBit(oldp+2406,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT___do_enq_T));
            tracep->chgBit(oldp+2407,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__do_enq));
            tracep->chgBit(oldp+2408,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__do_deq));
            tracep->chgBit(oldp+2409,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__do_enq));
            tracep->chgBit(oldp+2410,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__do_deq));
            tracep->chgBit(oldp+2411,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_awready));
            tracep->chgBit(oldp+2412,(((((((((0U == 
                                              (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U))) 
                                             | (1U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                    >> 4U)))) 
                                            | (2U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                   >> 4U)))) 
                                           | (3U == 
                                              (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                                          | (4U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                                         | (5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                      >> 4U)))) 
                                        | (6U == (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                     >> 4U)))) 
                                       | (7U == (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                    >> 4U))))));
            tracep->chgCData(oldp+2413,((0x3fU & (~ 
                                                  (0x1fffU 
                                                   & ((IData)(0x3fU) 
                                                      << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)))))),6);
            tracep->chgBit(oldp+2414,((0U == (0x3fU 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                                 & (~ 
                                                    (0x1fffU 
                                                     & ((IData)(0x3fU) 
                                                        << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)))))))));
            tracep->chgBit(oldp+2415,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))));
            tracep->chgCData(oldp+2416,((3U & (1U | 
                                               ((IData)(1U) 
                                                << 
                                                (1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)))))),2);
            tracep->chgBit(oldp+2417,((1U & (((IData)(1U) 
                                              << (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))) 
                                             >> 1U))));
            tracep->chgBit(oldp+2418,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                             >> 1U))));
            tracep->chgBit(oldp+2419,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2420,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+2421,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+2422,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))));
            tracep->chgBit(oldp+2423,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address)))));
            tracep->chgBit(oldp+2424,((IData)((0U == 
                                               (3U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))));
            tracep->chgBit(oldp+2425,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask_acc) 
                                             | (IData)(
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))))));
            tracep->chgBit(oldp+2426,((IData)((1U == 
                                               (3U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))));
            tracep->chgBit(oldp+2427,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask_acc) 
                                             | (IData)(
                                                       (1U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))))));
            tracep->chgBit(oldp+2428,((IData)((2U == 
                                               (3U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))));
            tracep->chgBit(oldp+2429,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask_acc_1) 
                                             | (IData)(
                                                       (2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))))));
            tracep->chgBit(oldp+2430,((IData)((3U == 
                                               (3U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))));
            tracep->chgBit(oldp+2431,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask_acc_1) 
                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))));
            tracep->chgCData(oldp+2432,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask),4);
            tracep->chgCData(oldp+2433,((0xfU & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                                                     >> 2U))))),4);
            tracep->chgBit(oldp+2434,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode) 
                                                >> 2U)))));
            tracep->chgWData(oldp+2435,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_set_wo_ready),128);
            tracep->chgBit(oldp+2439,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__do_enq));
            tracep->chgBit(oldp+2440,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_ready));
            tracep->chgBit(oldp+2441,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid));
            tracep->chgBit(oldp+2442,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___readys_T_3)))));
            tracep->chgBit(oldp+2443,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__out_1_ready));
            tracep->chgBit(oldp+2444,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__earlyWinner_1));
            tracep->chgBit(oldp+2445,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_1));
            tracep->chgWData(oldp+2446,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready),128);
            tracep->chgBit(oldp+2450,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_ready));
            tracep->chgWData(oldp+2451,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready),128);
            tracep->chgQData(oldp+2455,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_set_wo_ready),64);
            tracep->chgBit(oldp+2457,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor_io_in_a_ready));
            tracep->chgQData(oldp+2458,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_set_wo_ready),64);
            tracep->chgBit(oldp+2460,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_last)))));
            tracep->chgCData(oldp+2461,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask),8);
            tracep->chgBit(oldp+2462,((1U & (~ (0xffU 
                                                & (((IData)(7U) 
                                                    << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2463,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_last));
            tracep->chgBit(oldp+2464,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                             >> 2U))));
            tracep->chgCData(oldp+2465,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask))),4);
            tracep->chgCData(oldp+2466,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask) 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+2467,((0x3fU & (~ 
                                                  (0x1fffU 
                                                   & ((IData)(0x3fU) 
                                                      << 
                                                      (7U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))),6);
            tracep->chgBit(oldp+2468,((0U == (0x3fU 
                                              & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x1fffU 
                                                     & ((IData)(0x3fU) 
                                                        << 
                                                        (7U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))))));
            tracep->chgCData(oldp+2469,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))),2);
            tracep->chgCData(oldp+2470,((7U & (1U | 
                                               (0xfU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (3U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))),3);
            tracep->chgBit(oldp+2471,((1U & (((IData)(1U) 
                                              << (3U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                             >> 2U))));
            tracep->chgBit(oldp+2472,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+2473,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+2474,((1U & (((IData)(1U) 
                                              << (3U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                             >> 1U))));
            tracep->chgBit(oldp+2475,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_2));
            tracep->chgBit(oldp+2476,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_2));
            tracep->chgBit(oldp+2477,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_3));
            tracep->chgBit(oldp+2478,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_3));
            tracep->chgBit(oldp+2479,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_4));
            tracep->chgBit(oldp+2480,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_4));
            tracep->chgBit(oldp+2481,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_5));
            tracep->chgBit(oldp+2482,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_5));
            tracep->chgBit(oldp+2483,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_2) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2484,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_2) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2485,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_2) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2486,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_2) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2487,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_3) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2488,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_3) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2489,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_3) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2490,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_3) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2491,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_4) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2492,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_4) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2493,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_4) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2494,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_4) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2495,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_5) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2496,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_5) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2497,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_5) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2498,(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_5) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgCData(oldp+2499,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask),8);
            tracep->chgCData(oldp+2500,((7U & (~ (0x3ffU 
                                                  & (((IData)(0x3fU) 
                                                      << 
                                                      (7U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                                     >> 3U))))),3);
            tracep->chgWData(oldp+2501,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready),128);
            tracep->chgBit(oldp+2505,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag_auto_out_awvalid));
            tracep->chgIData(oldp+2506,((~ ((~ vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr_1) 
                                            | (7U & 
                                               (~ (0x3ffU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)))))))),32);
            tracep->chgBit(oldp+2507,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len_1))));
            tracep->chgBit(oldp+2508,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag_auto_out_wvalid));
            tracep->chgBit(oldp+2509,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_valid));
            tracep->chgIData(oldp+2510,((~ ((~ vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr) 
                                            | (7U & 
                                               (~ (0x3ffU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_size)))))))),32);
            tracep->chgBit(oldp+2511,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len))));
            tracep->chgBit(oldp+2512,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__do_enq));
            tracep->chgBit(oldp+2513,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__do_enq));
            tracep->chgBit(oldp+2514,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__do_enq));
            tracep->chgBit(oldp+2515,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_ready));
            tracep->chgIData(oldp+2516,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_addr),32);
            tracep->chgCData(oldp+2517,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_len),8);
            tracep->chgCData(oldp+2518,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_size),3);
            tracep->chgBit(oldp+2519,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_ready));
            tracep->chgBit(oldp+2520,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_valid));
            tracep->chgIData(oldp+2521,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr),32);
            tracep->chgCData(oldp+2522,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_len),8);
            tracep->chgCData(oldp+2523,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_size),3);
            tracep->chgBit(oldp+2524,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_io_deq_ready));
            tracep->chgBit(oldp+2525,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_io_deq_valid));
            tracep->chgCData(oldp+2526,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len),8);
            tracep->chgIData(oldp+2527,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr),32);
            tracep->chgIData(oldp+2528,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__inc_addr),32);
            tracep->chgSData(oldp+2529,((0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___wrapMask_T_1 
                                          >> 8U))),15);
            tracep->chgCData(oldp+2530,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len_1),8);
            tracep->chgIData(oldp+2531,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr_1),32);
            tracep->chgIData(oldp+2532,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__inc_addr_1),32);
            tracep->chgSData(oldp+2533,((0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___wrapMask_T_3 
                                          >> 8U))),15);
            tracep->chgBit(oldp+2534,(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_valid));
            tracep->chgBit(oldp+2535,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor_io_in_a_ready));
            tracep->chgBit(oldp+2536,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor_io_in_d_valid));
            tracep->chgCData(oldp+2537,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor_io_in_d_bits_opcode),3);
            tracep->chgCData(oldp+2538,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor_io_in_d_bits_param),2);
            tracep->chgCData(oldp+2539,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor_io_in_d_bits_size),3);
            tracep->chgCData(oldp+2540,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor_io_in_d_bits_source),4);
            tracep->chgCData(oldp+2541,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor_io_in_d_bits_sink),6);
            tracep->chgBit(oldp+2542,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor_io_in_d_bits_denied));
            tracep->chgCData(oldp+2543,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__readys_filter_lo),2);
            tracep->chgCData(oldp+2544,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__readys_filter),4);
            tracep->chgCData(oldp+2545,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__readys_unready),4);
            tracep->chgCData(oldp+2546,((3U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___readys_readys_T_2)))),2);
            tracep->chgBit(oldp+2547,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___readys_readys_T_2)))));
            tracep->chgBit(oldp+2548,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__earlyWinner_0));
            tracep->chgBit(oldp+2549,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__muxStateEarly_0));
            tracep->chgBit(oldp+2550,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT___readys_readys_T_2) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2551,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__earlyWinner_1));
            tracep->chgBit(oldp+2552,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__muxStateEarly_1));
            tracep->chgCData(oldp+2553,((0xfU & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_size)) 
                                                     >> 2U))))),4);
            tracep->chgBit(oldp+2554,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_opcode))));
            tracep->chgCData(oldp+2555,(((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_opcode))
                                          ? (0xfU & 
                                             (~ (0x7ffU 
                                                 & (((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_size)) 
                                                    >> 2U))))
                                          : 0U)),4);
            tracep->chgBit(oldp+2556,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__latch));
            tracep->chgCData(oldp+2557,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__earlyWinner_0)
                                          ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_opcode))
                                              ? (0xfU 
                                                 & (~ 
                                                    (0x7ffU 
                                                     & (((IData)(0x3fU) 
                                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_in_d_bits_size)) 
                                                        >> 2U))))
                                              : 0U)
                                          : 0U)),4);
            tracep->chgBit(oldp+2558,(1U));
            tracep->chgBit(oldp+2559,((0x21U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor_io_in_d_bits_sink))));
            tracep->chgCData(oldp+2560,((0xfU & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor_io_in_d_bits_size)) 
                                                     >> 2U))))),4);
            tracep->chgBit(oldp+2561,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor_io_in_d_bits_opcode))));
            tracep->chgCData(oldp+2562,((0xfU & (IData)(
                                                        (7ULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U))))),4);
            tracep->chgQData(oldp+2563,((((QData)((IData)(
                                                          vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor__DOT___GEN_23[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.__PVT__monitor__DOT___GEN_23[0U])))),64);
            tracep->chgBit(oldp+2565,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__a_io_deq_ready));
            tracep->chgBit(oldp+2566,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__out_1_ready));
            tracep->chgQData(oldp+2567,((((QData)((IData)(
                                                          vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__monitor__DOT___GEN_23[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__monitor__DOT___GEN_23[0U])))),64);
            tracep->chgBit(oldp+2569,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.__PVT__monitor_io_in_a_ready));
            tracep->chgCData(oldp+2570,((0xfU & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                                                     >> 2U))))),4);
            tracep->chgBit(oldp+2571,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.__PVT__d_first));
            tracep->chgBit(oldp+2572,(1U));
            tracep->chgBit(oldp+2573,((0x21U > (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_sink))));
            tracep->chgCData(oldp+2574,((0xfU & (IData)(
                                                        (7ULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U))))),4);
            tracep->chgQData(oldp+2575,((((QData)((IData)(
                                                          vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.__PVT__monitor__DOT___GEN_23[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.__PVT__monitor__DOT___GEN_23[0U])))),64);
            tracep->chgBit(oldp+2577,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor_io_in_d_valid));
            tracep->chgBit(oldp+2578,((1U & (~ (0xffU 
                                                & (((IData)(7U) 
                                                    << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_in_d_bits_size)) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2579,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__last));
            tracep->chgBit(oldp+2580,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_out_d_ready) 
                                             | (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__last))))));
            tracep->chgBit(oldp+2581,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__bundleIn_0_d_bits_data_masked_enable_0));
            tracep->chgCData(oldp+2582,((0xfU & (IData)(
                                                        (7ULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U))))),4);
            tracep->chgQData(oldp+2583,((((QData)((IData)(
                                                          vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT___GEN_23[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__widget.__PVT__monitor__DOT___GEN_23[0U])))),64);
            tracep->chgBit(oldp+2585,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_io_enq_valid));
            tracep->chgBit(oldp+2586,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_1_io_enq_valid));
            tracep->chgBit(oldp+2587,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_2_io_enq_valid));
            tracep->chgBit(oldp+2588,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_3_io_enq_valid));
            tracep->chgBit(oldp+2589,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_4_io_enq_valid));
            tracep->chgBit(oldp+2590,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_5_io_enq_valid));
            tracep->chgBit(oldp+2591,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_6_io_enq_valid));
            tracep->chgBit(oldp+2592,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_7_io_enq_valid));
            tracep->chgBit(oldp+2593,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_8_io_enq_valid));
            tracep->chgBit(oldp+2594,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_9_io_enq_valid));
            tracep->chgBit(oldp+2595,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_10_io_enq_valid));
            tracep->chgBit(oldp+2596,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_11_io_enq_valid));
            tracep->chgBit(oldp+2597,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_12_io_enq_valid));
            tracep->chgBit(oldp+2598,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_13_io_enq_valid));
            tracep->chgBit(oldp+2599,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_14_io_enq_valid));
            tracep->chgBit(oldp+2600,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_15_io_enq_valid));
            tracep->chgBit(oldp+2601,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_16_io_enq_valid));
            tracep->chgBit(oldp+2602,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_17_io_enq_valid));
            tracep->chgBit(oldp+2603,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_18_io_enq_valid));
            tracep->chgBit(oldp+2604,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_19_io_enq_valid));
            tracep->chgBit(oldp+2605,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_20_io_enq_valid));
            tracep->chgBit(oldp+2606,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_21_io_enq_valid));
            tracep->chgBit(oldp+2607,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_22_io_enq_valid));
            tracep->chgBit(oldp+2608,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_23_io_enq_valid));
            tracep->chgBit(oldp+2609,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_24_io_enq_valid));
            tracep->chgBit(oldp+2610,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_25_io_enq_valid));
            tracep->chgBit(oldp+2611,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_26_io_enq_valid));
            tracep->chgBit(oldp+2612,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_27_io_enq_valid));
            tracep->chgBit(oldp+2613,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_28_io_enq_valid));
            tracep->chgBit(oldp+2614,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_29_io_enq_valid));
            tracep->chgBit(oldp+2615,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_30_io_enq_valid));
            tracep->chgBit(oldp+2616,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_31_io_enq_valid));
            tracep->chgBit(oldp+2617,((1U & ((IData)(1U) 
                                             << (0xfU 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))))));
            tracep->chgBit(oldp+2618,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 1U))));
            tracep->chgBit(oldp+2619,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 2U))));
            tracep->chgBit(oldp+2620,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 3U))));
            tracep->chgBit(oldp+2621,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 4U))));
            tracep->chgBit(oldp+2622,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 5U))));
            tracep->chgBit(oldp+2623,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 6U))));
            tracep->chgBit(oldp+2624,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 7U))));
            tracep->chgBit(oldp+2625,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 8U))));
            tracep->chgBit(oldp+2626,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 9U))));
            tracep->chgBit(oldp+2627,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2628,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2629,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2630,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2631,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2632,((1U & (((IData)(1U) 
                                              << (0xfU 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_id))) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2633,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility__DOT__do_enq));
            tracep->chgBit(oldp+2634,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_1__DOT__do_enq));
            tracep->chgBit(oldp+2635,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_2__DOT__do_enq));
            tracep->chgBit(oldp+2636,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_3__DOT__do_enq));
            tracep->chgBit(oldp+2637,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_4__DOT__do_enq));
            tracep->chgBit(oldp+2638,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_5__DOT__do_enq));
            tracep->chgBit(oldp+2639,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_6__DOT__do_enq));
            tracep->chgBit(oldp+2640,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_7__DOT__do_enq));
            tracep->chgBit(oldp+2641,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_8__DOT__do_enq));
            tracep->chgBit(oldp+2642,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_9__DOT__do_enq));
            tracep->chgBit(oldp+2643,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_10__DOT__do_enq));
            tracep->chgBit(oldp+2644,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_11__DOT__do_enq));
            tracep->chgBit(oldp+2645,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_12__DOT__do_enq));
            tracep->chgBit(oldp+2646,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_13__DOT__do_enq));
            tracep->chgBit(oldp+2647,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_14__DOT__do_enq));
            tracep->chgBit(oldp+2648,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_15__DOT__do_enq));
            tracep->chgBit(oldp+2649,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_16__DOT__do_enq));
            tracep->chgBit(oldp+2650,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_17__DOT__do_enq));
            tracep->chgBit(oldp+2651,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_18__DOT__do_enq));
            tracep->chgBit(oldp+2652,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_19__DOT__do_enq));
            tracep->chgBit(oldp+2653,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_20__DOT__do_enq));
            tracep->chgBit(oldp+2654,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_21__DOT__do_enq));
            tracep->chgBit(oldp+2655,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_22__DOT__do_enq));
            tracep->chgBit(oldp+2656,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_23__DOT__do_enq));
            tracep->chgBit(oldp+2657,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_24__DOT__do_enq));
            tracep->chgBit(oldp+2658,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_25__DOT__do_enq));
            tracep->chgBit(oldp+2659,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_26__DOT__do_enq));
            tracep->chgBit(oldp+2660,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_27__DOT__do_enq));
            tracep->chgBit(oldp+2661,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_28__DOT__do_enq));
            tracep->chgBit(oldp+2662,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_29__DOT__do_enq));
            tracep->chgBit(oldp+2663,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_30__DOT__do_enq));
            tracep->chgBit(oldp+2664,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__axi4yank.__PVT__QueueCompatibility_31__DOT__do_enq));
            tracep->chgBit(oldp+2665,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor_io_in_a_ready));
            tracep->chgBit(oldp+2666,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__deq_io_enq_valid));
            tracep->chgBit(oldp+2667,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__deq_io_enq_bits_last));
            tracep->chgBit(oldp+2668,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_enq_valid));
            tracep->chgCData(oldp+2669,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_enq_bits_id),5);
            tracep->chgCData(oldp+2670,((0xffU & (~ 
                                                  (0x7fffU 
                                                   & (((IData)(0x7ffU) 
                                                       << 
                                                       (7U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                                      >> 3U))))),8);
            tracep->chgCData(oldp+2671,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_enq_bits_size),3);
            tracep->chgCData(oldp+2672,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))),4);
            tracep->chgBit(oldp+2673,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_ready));
            tracep->chgBit(oldp+2674,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_valid));
            tracep->chgBit(oldp+2675,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_wen));
            tracep->chgBit(oldp+2676,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__idStall_6));
            tracep->chgBit(oldp+2677,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__idStall_5));
            tracep->chgBit(oldp+2678,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__idStall_4));
            tracep->chgBit(oldp+2679,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__idStall_3));
            tracep->chgBit(oldp+2680,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__idStall_2));
            tracep->chgBit(oldp+2681,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__idStall_1));
            tracep->chgBit(oldp+2682,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__idStall_0));
            tracep->chgBit(oldp+2683,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__stall));
            tracep->chgBit(oldp+2684,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__stall)) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___bundleIn_0_a_ready_T_3))));
            tracep->chgCData(oldp+2685,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__beats1),3);
            tracep->chgCData(oldp+2686,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id),5);
            tracep->chgBit(oldp+2687,((((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__stall)) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid)) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___out_arw_valid_T_4))));
            tracep->chgBit(oldp+2688,((1U & ((IData)(1U) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)))));
            tracep->chgBit(oldp+2689,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 1U))));
            tracep->chgBit(oldp+2690,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 2U))));
            tracep->chgBit(oldp+2691,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 3U))));
            tracep->chgBit(oldp+2692,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 4U))));
            tracep->chgBit(oldp+2693,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 5U))));
            tracep->chgBit(oldp+2694,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 6U))));
            tracep->chgBit(oldp+2695,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 7U))));
            tracep->chgBit(oldp+2696,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 8U))));
            tracep->chgBit(oldp+2697,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 9U))));
            tracep->chgBit(oldp+2698,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2699,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2700,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2701,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2702,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2703,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2704,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2705,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2706,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2707,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2708,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2709,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2710,((1U & (((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2711,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc));
            tracep->chgBit(oldp+2712,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_1));
            tracep->chgBit(oldp+2713,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_2));
            tracep->chgBit(oldp+2714,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_3));
            tracep->chgBit(oldp+2715,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_4));
            tracep->chgBit(oldp+2716,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_5));
            tracep->chgBit(oldp+2717,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__inc_6));
            tracep->chgBit(oldp+2718,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 7U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2719,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 8U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2720,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 9U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2721,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0xaU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2722,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0xbU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2723,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0xcU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2724,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0xdU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2725,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0xeU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2726,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0xfU) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2727,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x10U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2728,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x11U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2729,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x12U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2730,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x13U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2731,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x14U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2732,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x15U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2733,(((((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__out_arw_bits_id)) 
                                        >> 0x16U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT___inc_T))));
            tracep->chgBit(oldp+2734,((0U == (0x3fU 
                                              & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                                 & (~ 
                                                    (0x1fffU 
                                                     & ((IData)(0x3fU) 
                                                        << 
                                                        (7U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))))));
            tracep->chgBit(oldp+2735,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc));
            tracep->chgBit(oldp+2736,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_1));
            tracep->chgBit(oldp+2737,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_2));
            tracep->chgBit(oldp+2738,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_2));
            tracep->chgBit(oldp+2739,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_3));
            tracep->chgBit(oldp+2740,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_3));
            tracep->chgBit(oldp+2741,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_4));
            tracep->chgBit(oldp+2742,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_4));
            tracep->chgBit(oldp+2743,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_5));
            tracep->chgBit(oldp+2744,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_5));
            tracep->chgBit(oldp+2745,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_2) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2746,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_2) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2747,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_2) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2748,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_2) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_2) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2749,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_3) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2750,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_3) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2751,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_3) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2752,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_3) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_3) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2753,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_4) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2754,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_4) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2755,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_4) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2756,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_4) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_4) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2757,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_5) 
                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgBit(oldp+2758,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_5) 
                                          & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
            tracep->chgBit(oldp+2759,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_5) 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
            tracep->chgBit(oldp+2760,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask_eq_5) 
                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))));
            tracep->chgCData(oldp+2761,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__mask),8);
            tracep->chgWData(oldp+2762,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__monitor__DOT__a_set_wo_ready),128);
            tracep->chgBit(oldp+2766,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_0_a_valid));
            tracep->chgBit(oldp+2767,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_0_d_ready));
            tracep->chgBit(oldp+2768,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_valid));
            tracep->chgCData(oldp+2769,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_opcode),3);
            tracep->chgCData(oldp+2770,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_size),4);
            tracep->chgCData(oldp+2771,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_source),4);
            tracep->chgBit(oldp+2772,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_denied));
            tracep->chgBit(oldp+2773,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_corrupt));
            tracep->chgBit(oldp+2774,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_a_ready));
            tracep->chgBit(oldp+2775,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_valid));
            tracep->chgCData(oldp+2776,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_opcode),3);
            tracep->chgCData(oldp+2777,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_param),2);
            tracep->chgCData(oldp+2778,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_size),3);
            tracep->chgCData(oldp+2779,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_source),4);
            tracep->chgCData(oldp+2780,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_sink),5);
            tracep->chgBit(oldp+2781,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_denied));
            tracep->chgBit(oldp+2782,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass));
            tracep->chgBit(oldp+2783,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__stall));
            tracep->chgBit(oldp+2784,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__stall)) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT___bundleIn_0_a_ready_T_1))));
            tracep->chgCData(oldp+2785,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_size))),3);
            tracep->chgCData(oldp+2786,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_size),3);
            tracep->chgCData(oldp+2787,((0xfU & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_size)) 
                                                     >> 2U))))),4);
            tracep->chgCData(oldp+2788,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_opcode),3);
            tracep->chgBit(oldp+2789,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_opcode))));
            tracep->chgCData(oldp+2790,(((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_opcode))
                                          ? (0xfU & 
                                             (~ (0x7ffU 
                                                 & (((IData)(0x3fU) 
                                                     << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_size)) 
                                                    >> 2U))))
                                          : 0U)),4);
            tracep->chgBit(oldp+2791,((IData)((4U == 
                                               (6U 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__in_d_bits_opcode))))));
            tracep->chgCData(oldp+2792,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__inc),2);
            tracep->chgCData(oldp+2793,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__next_flight),6);
            tracep->chgBit(oldp+2794,(1U));
            tracep->chgCData(oldp+2795,((0xfU & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_size)) 
                                                     >> 2U))))),4);
            tracep->chgBit(oldp+2796,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor_io_in_d_bits_opcode))));
            tracep->chgCData(oldp+2797,((0xfU & (IData)(
                                                        (7ULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U))))),4);
            tracep->chgQData(oldp+2798,((((QData)((IData)(
                                                          vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT___GEN_23[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__monitor__DOT___GEN_23[0U])))),64);
            tracep->chgBit(oldp+2800,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_a_ready));
            tracep->chgBit(oldp+2801,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_valid));
            tracep->chgCData(oldp+2802,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_opcode),3);
            tracep->chgCData(oldp+2803,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_size),4);
            tracep->chgCData(oldp+2804,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_source),4);
            tracep->chgBit(oldp+2805,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_denied));
            tracep->chgBit(oldp+2806,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__da_valid));
            tracep->chgBit(oldp+2807,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__out_1_ready));
            tracep->chgBit(oldp+2808,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__muxStateEarly_1));
            tracep->chgBit(oldp+2809,(1U));
            tracep->chgSData(oldp+2810,((0x3ffU & (~ 
                                                   (0x1ffffffU 
                                                    & (((IData)(0xfffU) 
                                                        << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_size)) 
                                                       >> 2U))))),10);
            tracep->chgBit(oldp+2811,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor_io_in_d_bits_opcode))));
            tracep->chgCData(oldp+2812,((0xfU & (IData)(
                                                        (7ULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U))))),4);
            tracep->chgSData(oldp+2813,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT__a_set_wo_ready),16);
            tracep->chgQData(oldp+2814,((((QData)((IData)(
                                                          vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT___GEN_23[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor.__PVT___GEN_23[0U])))),64);
            tracep->chgCData(oldp+2816,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_incremented),4);
            tracep->chgCData(oldp+2817,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx),4);
            tracep->chgCData(oldp+2818,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__index),3);
            tracep->chgCData(oldp+2819,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx_incremented),4);
            tracep->chgCData(oldp+2820,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx),4);
            tracep->chgCData(oldp+2821,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__index),3);
            tracep->chgBit(oldp+2822,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__wen));
            tracep->chgBit(oldp+2823,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__qa_q__DOT__wen_1));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1bU])) {
            tracep->chgBit(oldp+2824,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2825,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2826,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2827,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2828,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2829,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2830,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2831,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2832,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_a_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1cU])) {
            tracep->chgBit(oldp+2833,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2834,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2835,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2836,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2837,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2838,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2839,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2840,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2841,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_bsource.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1dU])) {
            tracep->chgBit(oldp+2842,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2843,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2844,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2845,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2846,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2847,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2848,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2849,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2850,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_c_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1eU])) {
            tracep->chgBit(oldp+2851,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2852,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2853,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2854,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2855,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2856,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2857,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2858,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2859,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_d_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1fU])) {
            tracep->chgBit(oldp+2860,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2861,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2862,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2863,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2864,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2865,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2866,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2867,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2868,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__io_e_source.__PVT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x20U])) {
            tracep->chgBit(oldp+2869,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2870,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2871,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2872,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2873,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2874,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x21U])) {
            tracep->chgBit(oldp+2875,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2876,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2877,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2878,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2879,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2880,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x22U])) {
            tracep->chgCData(oldp+2881,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx_incremented),4);
            tracep->chgCData(oldp+2882,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx),4);
            tracep->chgCData(oldp+2883,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__index),3);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x23U])) {
            tracep->chgBit(oldp+2884,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2885,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2886,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2887,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2888,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2889,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2890,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2891,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2892,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2893,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2894,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2895,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2896,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2897,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2898,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2899,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2900,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2901,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x24U])) {
            tracep->chgBit(oldp+2902,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2903,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2904,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2905,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2906,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2907,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2908,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2909,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2910,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2911,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__rxInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2912,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2913,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2914,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2915,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2916,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2917,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2918,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2919,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__txInc_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x25U])) {
            tracep->chgBit(oldp+2920,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2921,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2922,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2923,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2924,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2925,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x26U])) {
            tracep->chgBit(oldp+2926,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2927,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2928,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2929,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2930,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2931,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x27U])) {
            tracep->chgBit(oldp+2932,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2933,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2934,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2935,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2936,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2937,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x28U])) {
            tracep->chgBit(oldp+2938,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2939,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2940,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2941,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2942,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2943,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x29U])) {
            tracep->chgBit(oldp+2944,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2945,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2946,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2947,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2948,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2949,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2aU])) {
            tracep->chgBit(oldp+2950,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2951,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2952,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2953,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2954,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2955,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2bU])) {
            tracep->chgBit(oldp+2956,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2957,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2958,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2959,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2960,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2961,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2cU])) {
            tracep->chgBit(oldp+2962,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2963,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2964,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2965,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2966,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2967,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2dU])) {
            tracep->chgBit(oldp+2968,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2969,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2970,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2971,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2972,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2973,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink.__PVT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2eU])) {
            tracep->chgBit(oldp+2974,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2975,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2976,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2977,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2978,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2979,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2980,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2981,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2982,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2983,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2984,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2985,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2fU])) {
            tracep->chgBit(oldp+2986,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2987,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2988,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2989,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2990,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2991,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2992,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_txc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2993,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
            tracep->chgBit(oldp+2994,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2995,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
            tracep->chgBit(oldp+2996,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
            tracep->chgBit(oldp+2997,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx.__PVT__io_rxc_source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        }
        tracep->chgBit(oldp+2998,(vlSelf->clock));
        tracep->chgBit(oldp+2999,(vlSelf->reset));
        tracep->chgBit(oldp+3000,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_));
        tracep->chgBit(oldp+3001,(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_));
        tracep->chgQData(oldp+3002,((((QData)((IData)(
                                                      (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data)
                                                         : 0U) 
                                                       | ((0U 
                                                           == 
                                                           (0x20001000U 
                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr))
                                                           ? 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_psel)
                                                            ? 
                                                           ((((4U 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                               ? 
                                                              ((2U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                ? 
                                                               ((1U 
                                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                 : 0U))
                                                               : 
                                                              ((2U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                ? 
                                                               ((1U 
                                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                 : 
                                                                (0xc0U 
                                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                 ? 
                                                                ((0x80U 
                                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                  ? 
                                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                  >> 8U)
                                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                 : 
                                                                ((0x80U 
                                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                  : 
                                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                  >> 3U))))) 
                                                             << 0x18U) 
                                                            | ((0xff0000U 
                                                                & (((4U 
                                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                     ? 
                                                                    ((2U 
                                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                      ? 
                                                                     ((1U 
                                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                      : 
                                                                     ((1U 
                                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                       : 0U))
                                                                     : 
                                                                    ((2U 
                                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                      ? 
                                                                     ((1U 
                                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                       : 
                                                                      (0xc0U 
                                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                      : 
                                                                     ((1U 
                                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                       ? 
                                                                      ((0x80U 
                                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                        ? 
                                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                        >> 8U)
                                                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                       : 
                                                                      ((0x80U 
                                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                        : 
                                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                        >> 3U))))) 
                                                                   << 0x10U)) 
                                                               | ((0xff00U 
                                                                   & (((4U 
                                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                        ? 
                                                                       ((2U 
                                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                         ? 
                                                                        ((1U 
                                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                         : 
                                                                        ((1U 
                                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                          : 0U))
                                                                        : 
                                                                       ((2U 
                                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                         ? 
                                                                        ((1U 
                                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                          : 
                                                                         (0xc0U 
                                                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                         : 
                                                                        ((1U 
                                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                          ? 
                                                                         ((0x80U 
                                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                           ? 
                                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                           >> 8U)
                                                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                          : 
                                                                         ((0x80U 
                                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                           : 
                                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                           >> 3U))))) 
                                                                      << 8U)) 
                                                                  | (0xffU 
                                                                     & ((4U 
                                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                         ? 
                                                                        ((2U 
                                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                          ? 
                                                                         ((1U 
                                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                          : 
                                                                         ((1U 
                                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                           : 0U))
                                                                         : 
                                                                        ((2U 
                                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                          ? 
                                                                         ((1U 
                                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                           : 
                                                                          (0xc0U 
                                                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                          : 
                                                                         ((1U 
                                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                           ? 
                                                                          ((0x80U 
                                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                            ? 
                                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                            >> 8U)
                                                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                           : 
                                                                          ((0x80U 
                                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                            : 
                                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                            >> 3U)))))))))
                                                            : 0U)
                                                           : 0U)))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data)
                                                                     : 0U) 
                                                                   | ((0U 
                                                                       == 
                                                                       (0x20001000U 
                                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr))
                                                                       ? 
                                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_psel)
                                                                        ? 
                                                                       ((((4U 
                                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                           ? 
                                                                          ((2U 
                                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                            ? 
                                                                           ((1U 
                                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                            : 
                                                                           ((1U 
                                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                             : 0U))
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                            ? 
                                                                           ((1U 
                                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                             : 
                                                                            (0xc0U 
                                                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                            : 
                                                                           ((1U 
                                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                             ? 
                                                                            ((0x80U 
                                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                              ? 
                                                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                              >> 8U)
                                                                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                             : 
                                                                            ((0x80U 
                                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                              : 
                                                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                              >> 3U))))) 
                                                                         << 0x18U) 
                                                                        | ((0xff0000U 
                                                                            & (((4U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                                 : 0U))
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                                 : 
                                                                                (0xc0U 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U))))) 
                                                                               << 0x10U)) 
                                                                           | ((0xff00U 
                                                                               & (((4U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                                 : 0U))
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                                 : 
                                                                                (0xc0U 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U))))) 
                                                                                << 8U)) 
                                                                              | (0xffU 
                                                                                & ((4U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                                 : 0U))
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                                 : 
                                                                                (0xc0U 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U)))))))))
                                                                        : 0U)
                                                                       : 0U)))))),64);
        tracep->chgIData(oldp+3004,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data)
                                       : 0U) | ((0U 
                                                 == 
                                                 (0x20001000U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr))
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_psel)
                                                  ? 
                                                 ((((4U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                      : 
                                                     ((1U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                       : 0U))
                                                     : 
                                                    ((2U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                       : 
                                                      (0xc0U 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                      : 
                                                     ((1U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                       ? 
                                                      ((0x80U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                        >> 8U)
                                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                       : 
                                                      ((0x80U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                        : 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                        >> 3U))))) 
                                                   << 0x18U) 
                                                  | ((0xff0000U 
                                                      & (((4U 
                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                           ? 
                                                          ((2U 
                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                            ? 
                                                           ((1U 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                            : 
                                                           ((1U 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                             : 0U))
                                                           : 
                                                          ((2U 
                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                            ? 
                                                           ((1U 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                             : 
                                                            (0xc0U 
                                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                            : 
                                                           ((1U 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                             ? 
                                                            ((0x80U 
                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                              ? 
                                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                              >> 8U)
                                                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                             : 
                                                            ((0x80U 
                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                              : 
                                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                              >> 3U))))) 
                                                         << 0x10U)) 
                                                     | ((0xff00U 
                                                         & (((4U 
                                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                              ? 
                                                             ((2U 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                               ? 
                                                              ((1U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                               : 
                                                              ((1U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                : 0U))
                                                              : 
                                                             ((2U 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                               ? 
                                                              ((1U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                : 
                                                               (0xc0U 
                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                               : 
                                                              ((1U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                ? 
                                                               ((0x80U 
                                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                 ? 
                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                 >> 8U)
                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                : 
                                                               ((0x80U 
                                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                 : 
                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                 >> 3U))))) 
                                                            << 8U)) 
                                                        | (0xffU 
                                                           & ((4U 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                               ? 
                                                              ((2U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                ? 
                                                               ((1U 
                                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                 : 0U))
                                                               : 
                                                              ((2U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                ? 
                                                               ((1U 
                                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                 : 
                                                                (0xc0U 
                                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                 ? 
                                                                ((0x80U 
                                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                  ? 
                                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                  >> 8U)
                                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                 : 
                                                                ((0x80U 
                                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                  : 
                                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                  >> 3U)))))))))
                                                  : 0U)
                                                 : 0U))),32);
        tracep->chgIData(oldp+3005,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_1_psel)
                                      ? ((((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                            ? ((2U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                ? (
                                                   (1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                : (
                                                   (1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                    : 0U))
                                            : ((2U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                ? (
                                                   (1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                    : 
                                                   (0xc0U 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                : (
                                                   (1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                    ? 
                                                   ((0x80U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                     >> 8U)
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                     : 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                     >> 3U))))) 
                                          << 0x18U) 
                                         | ((0xff0000U 
                                             & (((4U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                   : 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                    : 0U))
                                                  : 
                                                 ((2U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                    : 
                                                   (0xc0U 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                   : 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                    ? 
                                                   ((0x80U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                     >> 8U)
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                     : 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                     >> 3U))))) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & (((4U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                      : 
                                                     ((1U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                       : 0U))
                                                     : 
                                                    ((2U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                       : 
                                                      (0xc0U 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                      : 
                                                     ((1U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                       ? 
                                                      ((0x80U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                        >> 8U)
                                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                       : 
                                                      ((0x80U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                        : 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                        >> 3U))))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & ((4U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                       : 
                                                      ((1U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                        : 0U))
                                                      : 
                                                     ((2U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                        : 
                                                       (0xc0U 
                                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                       : 
                                                      ((1U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                        ? 
                                                       ((0x80U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                         ? 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                         >> 8U)
                                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                        : 
                                                       ((0x80U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                         : 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                         >> 3U)))))))))
                                      : 0U)),32);
        tracep->chgCData(oldp+3006,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                                      ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_source)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source))),4);
        tracep->chgBit(oldp+3007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_));
        tracep->chgBit(oldp+3008,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))));
        tracep->chgBit(oldp+3009,((1U & (~ (IData)(vlSelf->reset)))));
        tracep->chgBit(oldp+3010,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___bundleOut_0_a_valid_T_1))));
        tracep->chgSData(oldp+3011,(((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode))
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
                                                  [
                                                  (7U 
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
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])))))))))),16);
        tracep->chgIData(oldp+3012,((3U | ((((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode))
                                              ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___T) 
                                                  & ((7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam_io_key)))
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam_io_alloc_bits)
                                                  : 
                                                 vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data
                                                 [(7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                              : ((7U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                      >> 3U)))
                                                  ? 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___T) 
                                                   & ((7U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_key)))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_alloc_bits)
                                                   : 
                                                  vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data
                                                  [
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                       >> 3U)))
                                                   ? 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___T) 
                                                    & ((7U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_key)))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_alloc_bits)
                                                    : 
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data
                                                   [
                                                   (7U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                   : 
                                                  ((5U 
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
                                                    [
                                                    (7U 
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
                                            << 0x10U) 
                                           | ((0xe000U 
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
                                                          << 3U)))))))),32);
        tracep->chgCData(oldp+3013,((0xffU & ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                               ? ((2U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                   : 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                    : 0U))
                                               : ((2U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                    : 
                                                   (0xc0U 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                   : 
                                                  ((1U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                    ? 
                                                   ((0x80U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                     >> 8U)
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                     : 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                     >> 3U))))))),8);
        tracep->chgBit(oldp+3014,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_0_penable) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_out_0_psel)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb_auto_out_pwrite))));
        tracep->chgBit(oldp+3015,(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_));
        tracep->chgBit(oldp+3016,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))));
        tracep->chgBit(oldp+3017,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___bundleOut_0_a_valid_T_1))));
        tracep->chgSData(oldp+3018,(((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode))
                                      ? (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___T) 
                                          & ((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam_io_key)))
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam_io_alloc_bits)
                                          : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data
                                         [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                      : ((7U == (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                    >> 3U)))
                                          ? (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___T) 
                                              & ((7U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_key)))
                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_alloc_bits)
                                              : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data
                                             [(7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                          : ((6U == 
                                              (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                >> 3U)))
                                              ? (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___T) 
                                                  & ((7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_key)))
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_alloc_bits)
                                                  : 
                                                 vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data
                                                 [(7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                              : ((5U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                      >> 3U)))
                                                  ? 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___T) 
                                                   & ((7U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_key)))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_alloc_bits)
                                                   : 
                                                  vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data
                                                  [
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                       >> 3U)))
                                                   ? 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___T) 
                                                    & ((7U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_key)))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_alloc_bits)
                                                    : 
                                                   vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data
                                                   [
                                                   (7U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                        >> 3U)))
                                                    ? 
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___T) 
                                                     & ((7U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_key)))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_alloc_bits)
                                                     : 
                                                    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data
                                                    [
                                                    (7U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                         >> 3U)))
                                                     ? 
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___T) 
                                                      & ((7U 
                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_key)))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_alloc_bits)
                                                      : 
                                                     vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data
                                                     [
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                          >> 3U)))
                                                      ? 
                                                     (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___T) 
                                                       & ((7U 
                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_key)))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_alloc_bits)
                                                       : 
                                                      vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data
                                                      [
                                                      (7U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                      : 
                                                     (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___T) 
                                                       & ((7U 
                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_key)))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_alloc_bits)
                                                       : 
                                                      vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data
                                                      [
                                                      (7U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])))))))))),16);
        tracep->chgIData(oldp+3019,((3U | ((((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode))
                                              ? (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___T) 
                                                  & ((7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam_io_key)))
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam_io_alloc_bits)
                                                  : 
                                                 vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data
                                                 [(7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                              : ((7U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                      >> 3U)))
                                                  ? 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___T) 
                                                   & ((7U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_key)))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_alloc_bits)
                                                   : 
                                                  vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data
                                                  [
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                       >> 3U)))
                                                   ? 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___T) 
                                                    & ((7U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_key)))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_alloc_bits)
                                                    : 
                                                   vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data
                                                   [
                                                   (7U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                        >> 3U)))
                                                    ? 
                                                   (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___T) 
                                                     & ((7U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_key)))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_alloc_bits)
                                                     : 
                                                    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data
                                                    [
                                                    (7U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                         >> 3U)))
                                                     ? 
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___T) 
                                                      & ((7U 
                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_key)))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_alloc_bits)
                                                      : 
                                                     vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data
                                                     [
                                                     (7U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                          >> 3U)))
                                                      ? 
                                                     (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___T) 
                                                       & ((7U 
                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_key)))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_alloc_bits)
                                                       : 
                                                      vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data
                                                      [
                                                      (7U 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                           >> 3U)))
                                                       ? 
                                                      (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___T) 
                                                        & ((7U 
                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_key)))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_alloc_bits)
                                                        : 
                                                       vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data
                                                       [
                                                       (7U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                            >> 3U)))
                                                        ? 
                                                       (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___T) 
                                                         & ((7U 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_key)))
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_alloc_bits)
                                                         : 
                                                        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data
                                                        [
                                                        (7U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))])
                                                        : 
                                                       (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___T) 
                                                         & ((7U 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source)) 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_key)))
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_alloc_bits)
                                                         : 
                                                        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data
                                                        [
                                                        (7U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))]))))))))) 
                                            << 0x10U) 
                                           | ((0xe000U 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                  << 0xaU)) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_size) 
                                                  << 9U) 
                                                 | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full)
                                                       ? 
                                                      vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_denied
                                                      [0U]
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                                                     << 8U) 
                                                    | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full)
                                                          ? 
                                                         vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_param
                                                         [0U]
                                                          : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                                                        << 6U) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode) 
                                                          << 3U)))))))),32);
        tracep->chgQData(oldp+3020,(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__rdata),64);
        tracep->chgBit(oldp+3022,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_bits_corrupt)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))));
        tracep->chgBit(oldp+3023,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__stall)) 
                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT___bundleIn_0_a_ready_T_1))));
        tracep->chgBit(oldp+3024,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_valid)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid))));
        tracep->chgBit(oldp+3025,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__error_auto_in_d_valid)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_valid))));
        tracep->chgIData(oldp+3026,(((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__index))
                                      ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_7
                                      : ((6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__index))
                                          ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_6
                                          : ((5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__index))
                                              ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_5
                                              : ((4U 
                                                  == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__index))
                                                  ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_4
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__index))
                                                   ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_3
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__index))
                                                    ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_2
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__index))
                                                     ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_1
                                                     : vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__io_a_source.__PVT__mem_0)))))))),32);
        tracep->chgBit(oldp+3027,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx) 
                                      != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray_io_q)))));
        tracep->chgBit(oldp+3028,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx) 
                                      != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray_io_q)))));
        tracep->chgBit(oldp+3029,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__ridx) 
                                      != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__widx_widx_gray_io_q)))));
        tracep->chgBit(oldp+3030,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__ridx) 
                                      != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__widx_widx_gray_io_q)))));
    }
}

void VysyxSoCFull___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    IData/*31:0*/ __Vilp;
    VysyxSoCFull___024root* const __restrict vlSelf = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vilp = 0U;
        while ((__Vilp <= 0x2fU)) {
            vlSymsp->TOP.__Vm_traceActivity[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
}
