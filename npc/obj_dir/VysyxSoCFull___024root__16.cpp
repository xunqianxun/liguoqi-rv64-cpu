// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VysyxSoCFull___024root___sequent__TOP__50(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___sequent__TOP__50\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_ 
        = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx.__PVT__io_c2b_rst_reg__DOT__reg_;
}

extern const VlWide<33>/*1055:0*/ VysyxSoCFull__ConstPool__CONST_f1d99c76_0;
extern const VlWide<33>/*1055:0*/ VysyxSoCFull__ConstPool__CONST_ac7e6362_0;
extern const VlWide<33>/*1055:0*/ VysyxSoCFull__ConstPool__CONST_3892cc72_0;
extern const VlWide<33>/*1055:0*/ VysyxSoCFull__ConstPool__CONST_f1d81c7e_0;
extern const VlWide<33>/*1055:0*/ VysyxSoCFull__ConstPool__CONST_99cb7c89_0;
extern const VlWide<33>/*1055:0*/ VysyxSoCFull__ConstPool__CONST_81905067_0;
extern const VlWide<33>/*1055:0*/ VysyxSoCFull__ConstPool__CONST_f1d99c4e_0;
extern const VlWide<33>/*1055:0*/ VysyxSoCFull__ConstPool__CONST_003cb67b_0;

VL_INLINE_OPT void VysyxSoCFull___024root___multiclk__TOP__51(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___multiclk__TOP__51\n"); );
    // Variables
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_92;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_151;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_172;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_193;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_214;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_235;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_256;
    CData/*4:0*/ ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_22;
    CData/*4:0*/ ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_43;
    CData/*4:0*/ ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_64;
    CData/*4:0*/ ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_85;
    CData/*4:0*/ ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_106;
    CData/*4:0*/ ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_127;
    CData/*4:0*/ ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_128;
    CData/*1:0*/ ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___readys_T;
    VlWide<4>/*127:0*/ __Vtemp4199;
    VlWide<4>/*127:0*/ __Vtemp4200;
    VlWide<4>/*127:0*/ __Vtemp4204;
    VlWide<4>/*127:0*/ __Vtemp4205;
    VlWide<4>/*127:0*/ __Vtemp4209;
    VlWide<4>/*127:0*/ __Vtemp4210;
    VlWide<4>/*127:0*/ __Vtemp4214;
    VlWide<4>/*127:0*/ __Vtemp4215;
    VlWide<4>/*127:0*/ __Vtemp4219;
    VlWide<4>/*127:0*/ __Vtemp4220;
    VlWide<4>/*127:0*/ __Vtemp4224;
    VlWide<4>/*127:0*/ __Vtemp4225;
    VlWide<4>/*127:0*/ __Vtemp4230;
    VlWide<4>/*127:0*/ __Vtemp4231;
    VlWide<33>/*1055:0*/ __Vtemp4237;
    VlWide<33>/*1055:0*/ __Vtemp4238;
    VlWide<33>/*1055:0*/ __Vtemp4247;
    VlWide<33>/*1055:0*/ __Vtemp4248;
    VlWide<4>/*127:0*/ __Vtemp4257;
    VlWide<4>/*127:0*/ __Vtemp4258;
    VlWide<4>/*127:0*/ __Vtemp4262;
    VlWide<4>/*127:0*/ __Vtemp4263;
    VlWide<4>/*127:0*/ __Vtemp4268;
    VlWide<4>/*127:0*/ __Vtemp4269;
    VlWide<33>/*1055:0*/ __Vtemp4275;
    VlWide<33>/*1055:0*/ __Vtemp4276;
    VlWide<33>/*1055:0*/ __Vtemp4285;
    VlWide<33>/*1055:0*/ __Vtemp4286;
    VlWide<4>/*127:0*/ __Vtemp4295;
    VlWide<4>/*127:0*/ __Vtemp4296;
    VlWide<4>/*127:0*/ __Vtemp4301;
    VlWide<4>/*127:0*/ __Vtemp4302;
    VlWide<33>/*1055:0*/ __Vtemp4308;
    VlWide<33>/*1055:0*/ __Vtemp4309;
    VlWide<33>/*1055:0*/ __Vtemp4315;
    VlWide<33>/*1055:0*/ __Vtemp4322;
    VlWide<33>/*1055:0*/ __Vtemp4323;
    VlWide<33>/*1055:0*/ __Vtemp4329;
    // Body
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass_io_bypass 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_io_bypass 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass) 
            != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_io_bypass)) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall_counter)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___bundleOut_0_a_valid_T_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_set_wo_ready 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
            ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))
            : 0ULL);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__last));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_set_wo_ready 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
            ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))
            : 0ULL);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__full));
    __Vtemp4199[0U] = 1U;
    __Vtemp4199[1U] = 0U;
    __Vtemp4199[2U] = 0U;
    __Vtemp4199[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4200, __Vtemp4199, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source));
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[0U] 
            = __Vtemp4200[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[1U] 
            = __Vtemp4200[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[2U] 
            = __Vtemp4200[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[3U] 
            = __Vtemp4200[3U];
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[3U] = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stall)));
    __Vtemp4204[0U] = 1U;
    __Vtemp4204[1U] = 0U;
    __Vtemp4204[2U] = 0U;
    __Vtemp4204[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4205, __Vtemp4204, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source));
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[0U] 
            = __Vtemp4205[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[1U] 
            = __Vtemp4205[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[2U] 
            = __Vtemp4205[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[3U] 
            = __Vtemp4205[3U];
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_set_wo_ready[3U] = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_allow));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___T_12 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___sink_ACancel_earlyValid_T_3 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__state_0) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state))) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__state_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid)));
    ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___readys_T 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid) 
            << 1U) | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_valid 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__beatsLeft))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___T_12)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___sink_ACancel_earlyValid_T_3));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___readys_T_3 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___readys_T) 
           | (2U & ((IData)(ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___readys_T) 
                    << 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__earlyWinner_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___readys_T_3)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_1 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__beatsLeft))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__earlyWinner_1)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__state_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_param 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_1)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_isSupported)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_param)
                : 0U) : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_0)
             ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_opcode))
                 ? (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__logic_out_hi)) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__logic_out_lo)))
                 : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_param))
                     ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__adder_out
                     : (((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_param)) 
                         == (1U & (((1U & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_a_ext 
                                                   >> 0x3fU))) 
                                    == (1U & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_d_ext 
                                                      >> 0x3fU))))
                                    ? (~ (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__adder_out 
                                                  >> 0x3fU)))
                                    : ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_param) 
                                              >> 1U)) 
                                       == (1U & (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_a_ext 
                                                         >> 0x3fU)))))))
                         ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data
                         : vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data)))
             : 0ULL) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_1)
                         ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_bits_data
                         : 0ULL));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_mask 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_0)
             ? ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_5) 
                  | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_5) 
                     & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address)) 
                 << 7U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_5) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_5) 
                                & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address))) 
                            << 6U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_4) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_4) 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address)) 
                                       << 5U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_4) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_4) 
                                                      & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_3) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_3) 
                                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address)) 
                                                     << 3U) 
                                                    | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_3) 
                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_3) 
                                                            & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address))) 
                                                        << 2U) 
                                                       | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_2) 
                                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_2) 
                                                               & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_2) 
                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_2) 
                                                                & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address))))))))))
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_mask)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_size)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_0)
             ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_1)
                       ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_source)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_1)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_isSupported)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode)
                : 4U) : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__saved_mask)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_mask));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_size 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__ram_echo_tl_state_size
           [0U] : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                  ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__saved_size)
                  : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_294 
        = (((0ULL == (0x1fffff000ULL & (QData)((IData)(
                                                       (0x1000U 
                                                        ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
            | (0ULL == (0x1c0000000ULL & (QData)((IData)(
                                                         (0x40000000U 
                                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))))) 
           | (0ULL == (0x180000000ULL & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address 
        = (0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__saved_address)
                       : vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                           >> 2U) & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                        >> 2U))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                           >> 2U) & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                     >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                           >> 2U) & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                        >> 2U))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                           >> 2U) & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                     >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                           >> 2U) & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                        >> 2U))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                           >> 2U) & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                     >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_2_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_valid) 
           & (0ULL == (0xc0000000ULL & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_1_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_valid) 
           & (0ULL == (0xc0000000ULL & (QData)((IData)(
                                                       (0x40000000U 
                                                        ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_0_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_valid) 
           & (0ULL == (0x80000000ULL & (QData)((IData)(
                                                       (0x80000000U 
                                                        ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_177 
        = ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
           & ((((((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                  >> 4U))) | (1U == 
                                              (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                   | (2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                   >> 4U)))) | (3U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                    >> 4U)))) 
                 | (4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                 >> 4U)))) | (5U == 
                                              (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
               | (6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                               >> 4U)))) | (7U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                      >> 4U)))));
    __Vtemp4209[0U] = 1U;
    __Vtemp4209[1U] = 0U;
    __Vtemp4209[2U] = 0U;
    __Vtemp4209[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4210, __Vtemp4209, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source));
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_valid) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[0U] 
            = __Vtemp4210[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[1U] 
            = __Vtemp4210[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[2U] 
            = __Vtemp4210[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[3U] 
            = __Vtemp4210[3U];
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[3U] = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_echo_tl_state_source 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source
           [0U] : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__saved_source)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source));
    ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_22 
        = ((0x14U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
            ? 0U : ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                     ? 0U : ((0x12U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                              ? 0U : ((0x11U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                       ? 0U : ((0x10U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                    ? 0x16U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                     ? 0x15U
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                      ? 0x14U
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                       ? 0x13U
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                        ? 0x12U
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                         ? 0x11U
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                          ? 0x10U
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                           ? 0xfU
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                            ? 0xeU
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                             ? 0xdU
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                              ? 0xcU
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                               ? 0xbU
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                ? 0xaU
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                 ? 9U
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                  ? 8U
                                                                  : 7U))))))))))))))))))));
    if ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_42 = 2U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___GEN_30 = 2U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_42 = 2U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_42 
            = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                ? 1U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                         ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                  ? 1U : 0U)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___GEN_30 
            = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                ? 1U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                         ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                  ? 1U : 0U)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_42 
            = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                ? 1U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                         ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                  ? 1U : 0U)));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__beats1 
        = ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
            ? 0U : (0x1fU & (~ (0xfffffU & (((IData)(0xffU) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                                            >> 3U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__saved_opcode)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_wen 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__maybe_full)
                  ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__ram_wen
                 [0U] : (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                            >> 2U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___out_arw_valid_T_4 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                  >> 2U) | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__doneAW)) 
                            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__maybe_full)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___bundleIn_0_a_ready_T_3 
        = (1U & ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                  ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__maybe_full))
                  : (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__doneAW) 
                      | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__maybe_full))) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__maybe_full)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_6 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_7)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_6) 
               != (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                            >> 2U))))) | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_7)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_5 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_6)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_5) 
               != (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                            >> 2U))))) | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_6)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_3 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_4)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_3) 
               != (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                            >> 2U))))) | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_4)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_5)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_4) 
               != (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                            >> 2U))))) | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_5)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_3)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_2) 
               != (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                            >> 2U))))) | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_3)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_1 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_2)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_1) 
               != (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                            >> 2U))))) | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_2)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_1)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write) 
               != (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                            >> 2U))))) | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2_auto_out_a_bits_mask 
        = (0xfU & ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                           >> 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_count)))
                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask) 
                       >> 4U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                        >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))) 
                           >> 1U) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                     >> 1U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_2))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_3))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_4))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_5))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_2))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_3))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_4))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_5))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_2))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_3))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_4))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_5))));
    __Vtemp4214[0U] = 1U;
    __Vtemp4214[1U] = 0U;
    __Vtemp4214[2U] = 0U;
    __Vtemp4214[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4215, __Vtemp4214, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source));
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[0U] 
            = __Vtemp4215[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[1U] 
            = __Vtemp4215[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[2U] 
            = __Vtemp4215[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[3U] 
            = __Vtemp4215[3U];
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[3U] = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT___T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_2_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_2_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__full));
    __Vtemp4219[0U] = 1U;
    __Vtemp4219[1U] = 0U;
    __Vtemp4219[2U] = 0U;
    __Vtemp4219[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4220, __Vtemp4219, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source));
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_set_wo_ready[0U] 
            = __Vtemp4220[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_set_wo_ready[1U] 
            = __Vtemp4220[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_set_wo_ready[2U] 
            = __Vtemp4220[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_set_wo_ready[3U] 
            = __Vtemp4220[3U];
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_set_wo_ready[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_set_wo_ready[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_set_wo_ready[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_set_wo_ready[3U] = 0U;
    }
    ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_43 
        = ((0x29U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
            ? 1U : ((0x28U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                     ? 1U : ((0x27U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                              ? 1U : ((0x26U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                       ? 1U : ((0x25U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                ? 1U
                                                : (
                                                   (0x24U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                    ? 1U
                                                    : 
                                                   ((0x23U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                     ? 1U
                                                     : 
                                                    ((0x22U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                      ? 1U
                                                      : 
                                                     ((0x21U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                       ? 1U
                                                       : 
                                                      ((0x20U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                        ? 1U
                                                        : 
                                                       ((0x1fU 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                         ? 0U
                                                         : 
                                                        ((0x1eU 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                          ? 0U
                                                          : 
                                                         ((0x1dU 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                           ? 0U
                                                           : 
                                                          ((0x1cU 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                            ? 0U
                                                            : 
                                                           ((0x1bU 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                             ? 0U
                                                             : 
                                                            ((0x1aU 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                              ? 0U
                                                              : 
                                                             ((0x19U 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                               ? 0U
                                                               : 
                                                              ((0x18U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                ? 0U
                                                                : 
                                                               ((0x17U 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                 ? 0U
                                                                 : 
                                                                ((0x16U 
                                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                  ? 0U
                                                                  : 
                                                                 ((0x15U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                   ? 0U
                                                                   : (IData)(ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_22))))))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq_io_enq_bits_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__counter)) 
           | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__beats1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_42 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))
            ? 2U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))
                     ? 1U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))
                              ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))
                                       ? 1U : 0U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_last 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_count) 
                  == (1U & (~ (0xffU & (((IData)(7U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                                        >> 2U))))) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode) 
                    >> 2U)));
    ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_151 
        = ((0x15U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0)
            : ((0x14U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0)
                : ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0)
                    : ((0x12U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0)
                        : ((0x11U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0)
                            : ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0)
                                : ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_23)
                                    : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_22)
                                        : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_21)
                                            : ((0xcU 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_20)
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_19)
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_18)
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_17)
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_16)
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_15)
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_14)
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_13)
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_12)
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_11)
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_10)
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_9)
                                                              : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_8))))))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask 
        = ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask_acc_1) 
                   << 3U) | (0xfffffff8U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                             << 2U) 
                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                               << 3U))))) 
           | ((4U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask_acc_1) 
                      | (IData)((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))) 
                     << 2U)) | ((2U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask_acc) 
                                        | (IData)((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask_acc) 
                                                     | (IData)(
                                                               (0U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address)))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)) 
            << 7U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                        | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))) 
                       << 6U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                                 & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                                           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_5) 
                & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)) 
            << 7U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_5) 
                        | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_5) 
                           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))) 
                       << 6U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_4) 
                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_4) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_4) 
                                                 & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_3) 
                                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask_eq_2) 
                                                           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_5) 
                & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)) 
            << 7U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_5) 
                        | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_5) 
                           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))) 
                       << 6U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_4) 
                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_4) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_4) 
                                                 & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_3) 
                                                       & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask_eq_2) 
                                                           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))))))));
    __Vtemp4224[0U] = 1U;
    __Vtemp4224[1U] = 0U;
    __Vtemp4224[2U] = 0U;
    __Vtemp4224[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4225, __Vtemp4224, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source));
    __Vtemp4230[0U] = 1U;
    __Vtemp4230[1U] = 0U;
    __Vtemp4230[2U] = 0U;
    __Vtemp4230[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4231, __Vtemp4230, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_source));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4225[0U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                                ? __Vtemp4231[0U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4225[1U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                                ? __Vtemp4231[1U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4225[2U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                                ? __Vtemp4231[2U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4225[3U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                                ? __Vtemp4231[3U]
                                                : 0U)));
    VL_EXTEND_WI(1027,4, __Vtemp4237, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4238, __Vtemp4237, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4238[0U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[0U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4238[1U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[1U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4238[2U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[2U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4238[3U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[3U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4238[4U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[4U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4238[5U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[5U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4238[6U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[6U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4238[7U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[7U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4238[8U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[8U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4238[9U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[9U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4238[0xaU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xaU]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4238[0xbU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xbU]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4238[0xcU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xcU]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4238[0xdU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xdU]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4238[0xeU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xeU]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4238[0xfU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xfU]));
    VL_EXTEND_WI(1027,4, __Vtemp4247, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | (0xeU 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size) 
                                                    << 1U)))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4248, __Vtemp4247, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4248[0U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[0U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4248[1U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[1U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4248[2U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[2U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4248[3U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[3U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4248[4U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[4U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4248[5U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[5U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4248[6U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[6U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4248[7U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[7U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4248[8U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[8U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4248[9U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[9U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4248[0xaU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xaU]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4248[0xbU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xbU]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4248[0xcU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xcU]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4248[0xdU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xdU]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4248[0xeU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xeU]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4248[0xfU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_35[0xfU]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_valid));
    __Vtemp4257[0U] = 1U;
    __Vtemp4257[1U] = 0U;
    __Vtemp4257[2U] = 0U;
    __Vtemp4257[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4258, __Vtemp4257, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source));
    if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_set_wo_ready[0U] 
            = __Vtemp4258[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_set_wo_ready[1U] 
            = __Vtemp4258[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_set_wo_ready[2U] 
            = __Vtemp4258[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_set_wo_ready[3U] 
            = __Vtemp4258[3U];
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_set_wo_ready[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_set_wo_ready[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_set_wo_ready[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_set_wo_ready[3U] = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_valid));
    ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_64 
        = ((0x3eU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
            ? 2U : ((0x3dU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                     ? 2U : ((0x3cU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                              ? 2U : ((0x3bU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                       ? 2U : ((0x3aU 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                ? 2U
                                                : (
                                                   (0x39U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                    ? 2U
                                                    : 
                                                   ((0x38U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                     ? 2U
                                                     : 
                                                    ((0x37U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                      ? 2U
                                                      : 
                                                     ((0x36U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                       ? 2U
                                                       : 
                                                      ((0x35U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                        ? 2U
                                                        : 
                                                       ((0x34U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                         ? 2U
                                                         : 
                                                        ((0x33U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                          ? 2U
                                                          : 
                                                         ((0x32U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                           ? 2U
                                                           : 
                                                          ((0x31U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                            ? 2U
                                                            : 
                                                           ((0x30U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                             ? 2U
                                                             : 
                                                            ((0x2fU 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                              ? 1U
                                                              : 
                                                             ((0x2eU 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                               ? 1U
                                                               : 
                                                              ((0x2dU 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                ? 1U
                                                                : 
                                                               ((0x2cU 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                 ? 1U
                                                                 : 
                                                                ((0x2bU 
                                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                  ? 1U
                                                                  : 
                                                                 ((0x2aU 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                   ? 1U
                                                                   : (IData)(ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_43))))))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT___GEN_0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT___T) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_last))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__full));
    ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_172 
        = ((0x2aU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_1)
            : ((0x29U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_1)
                : ((0x28U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_1)
                    : ((0x27U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_1)
                        : ((0x26U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_1)
                            : ((0x25U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_1)
                                : ((0x24U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_1)
                                    : ((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_1)
                                        : ((0x22U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_1)
                                            : ((0x21U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_1)
                                                : (
                                                   (0x20U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_1)
                                                    : 
                                                   ((0x1fU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0)
                                                     : 
                                                    ((0x1eU 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0)
                                                      : 
                                                     ((0x1dU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0)
                                                       : 
                                                      ((0x1cU 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0)
                                                         : 
                                                        ((0x1aU 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0)
                                                          : 
                                                         ((0x19U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0)
                                                           : 
                                                          ((0x18U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0)
                                                            : 
                                                           ((0x17U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0)
                                                             : 
                                                            ((0x16U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0)
                                                              : (IData)(ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_151))))))))))))))))))))));
    __Vtemp4262[0U] = 1U;
    __Vtemp4262[1U] = 0U;
    __Vtemp4262[2U] = 0U;
    __Vtemp4262[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4263, __Vtemp4262, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source));
    __Vtemp4268[0U] = 1U;
    __Vtemp4268[1U] = 0U;
    __Vtemp4268[2U] = 0U;
    __Vtemp4268[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4269, __Vtemp4268, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4263[0U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4269[0U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4263[1U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4269[1U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4263[2U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4269[2U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4263[3U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4269[3U]
                                                : 0U)));
    VL_EXTEND_WI(1027,4, __Vtemp4275, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4276, __Vtemp4275, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4276[0U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[0U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4276[1U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[1U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4276[2U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[2U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4276[3U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[3U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4276[4U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[4U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4276[5U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[5U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4276[6U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[6U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4276[7U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[7U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_opcodes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4276[8U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[8U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_opcodes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4276[9U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[9U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4276[0xaU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[0xaU]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4276[0xbU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[0xbU]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_opcodes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4276[0xcU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[0xcU]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_opcodes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4276[0xdU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[0xdU]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_opcodes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4276[0xeU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[0xeU]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_opcodes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4276[0xfU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[0xfU]));
    VL_EXTEND_WI(1027,4, __Vtemp4285, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4286, __Vtemp4285, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4286[0U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[0U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4286[1U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[1U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4286[2U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[2U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4286[3U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[3U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4286[4U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[4U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4286[5U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[5U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4286[6U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[6U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4286[7U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[7U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4286[8U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[8U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4286[9U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[9U]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4286[0xaU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[0xaU]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4286[0xbU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[0xbU]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4286[0xcU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[0xcU]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4286[0xdU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[0xdU]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4286[0xeU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[0xeU]));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4286[0xfU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU]))) 
           & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_35[0xfU]));
    ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_85 
        = ((0x53U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
            ? 4U : ((0x52U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                     ? 4U : ((0x51U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                              ? 4U : ((0x50U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                       ? 4U : ((0x4fU 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                ? 3U
                                                : (
                                                   (0x4eU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                    ? 3U
                                                    : 
                                                   ((0x4dU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                     ? 3U
                                                     : 
                                                    ((0x4cU 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                      ? 3U
                                                      : 
                                                     ((0x4bU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                       ? 3U
                                                       : 
                                                      ((0x4aU 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                        ? 3U
                                                        : 
                                                       ((0x49U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                         ? 3U
                                                         : 
                                                        ((0x48U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                          ? 3U
                                                          : 
                                                         ((0x47U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                           ? 3U
                                                           : 
                                                          ((0x46U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                            ? 3U
                                                            : 
                                                           ((0x45U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                             ? 3U
                                                             : 
                                                            ((0x44U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                              ? 3U
                                                              : 
                                                             ((0x43U 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                               ? 3U
                                                               : 
                                                              ((0x42U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                ? 3U
                                                                : 
                                                               ((0x41U 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                 ? 3U
                                                                 : 
                                                                ((0x40U 
                                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                  ? 3U
                                                                  : 
                                                                 ((0x3fU 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                   ? 2U
                                                                   : (IData)(ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_64))))))))))))))))))))));
    ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_193 
        = ((0x3fU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)
            : ((0x3eU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)
                : ((0x3dU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)
                    : ((0x3cU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)
                        : ((0x3bU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)
                            : ((0x3aU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)
                                : ((0x39U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)
                                    : ((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)
                                        : ((0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)
                                            : ((0x36U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)
                                                : (
                                                   (0x35U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)
                                                    : 
                                                   ((0x34U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)
                                                     : 
                                                    ((0x33U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)
                                                      : 
                                                     ((0x32U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)
                                                       : 
                                                      ((0x31U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)
                                                        : 
                                                       ((0x30U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2)
                                                         : 
                                                        ((0x2fU 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_1)
                                                          : 
                                                         ((0x2eU 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_1)
                                                           : 
                                                          ((0x2dU 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_1)
                                                            : 
                                                           ((0x2cU 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_1)
                                                             : 
                                                            ((0x2bU 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_1)
                                                              : (IData)(ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_172))))))))))))))))))))));
    ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_106 
        = ((0x68U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
            ? 5U : ((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                     ? 5U : ((0x66U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                              ? 5U : ((0x65U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                       ? 5U : ((0x64U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                ? 5U
                                                : (
                                                   (0x63U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                    ? 5U
                                                    : 
                                                   ((0x62U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                     ? 5U
                                                     : 
                                                    ((0x61U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                      ? 5U
                                                      : 
                                                     ((0x60U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                       ? 5U
                                                       : 
                                                      ((0x5fU 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                        ? 4U
                                                        : 
                                                       ((0x5eU 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                         ? 4U
                                                         : 
                                                        ((0x5dU 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                          ? 4U
                                                          : 
                                                         ((0x5cU 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                           ? 4U
                                                           : 
                                                          ((0x5bU 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                            ? 4U
                                                            : 
                                                           ((0x5aU 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                             ? 4U
                                                             : 
                                                            ((0x59U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                              ? 4U
                                                              : 
                                                             ((0x58U 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                               ? 4U
                                                               : 
                                                              ((0x57U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                ? 4U
                                                                : 
                                                               ((0x56U 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                 ? 4U
                                                                 : 
                                                                ((0x55U 
                                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                  ? 4U
                                                                  : 
                                                                 ((0x54U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                   ? 4U
                                                                   : (IData)(ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_85))))))))))))))))))))));
    ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_214 
        = ((0x54U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4)
            : ((0x53U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4)
                : ((0x52U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4)
                    : ((0x51U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4)
                        : ((0x50U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4)
                            : ((0x4fU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_3)
                                : ((0x4eU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_3)
                                    : ((0x4dU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_3)
                                        : ((0x4cU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_3)
                                            : ((0x4bU 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_3)
                                                : (
                                                   (0x4aU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_3)
                                                    : 
                                                   ((0x49U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_3)
                                                     : 
                                                    ((0x48U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_3)
                                                      : 
                                                     ((0x47U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_3)
                                                       : 
                                                      ((0x46U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_3)
                                                        : 
                                                       ((0x45U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_3)
                                                         : 
                                                        ((0x44U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_3)
                                                          : 
                                                         ((0x43U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_3)
                                                           : 
                                                          ((0x42U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_3)
                                                            : 
                                                           ((0x41U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_3)
                                                             : 
                                                            ((0x40U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_3)
                                                              : (IData)(ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_193))))))))))))))))))))));
    ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_127 
        = ((0x7dU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
            ? 6U : ((0x7cU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                     ? 6U : ((0x7bU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                              ? 6U : ((0x7aU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                       ? 6U : ((0x79U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                ? 6U
                                                : (
                                                   (0x78U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                    ? 6U
                                                    : 
                                                   ((0x77U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                     ? 6U
                                                     : 
                                                    ((0x76U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                      ? 6U
                                                      : 
                                                     ((0x75U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                       ? 6U
                                                       : 
                                                      ((0x74U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                        ? 6U
                                                        : 
                                                       ((0x73U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                         ? 6U
                                                         : 
                                                        ((0x72U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                          ? 6U
                                                          : 
                                                         ((0x71U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                           ? 6U
                                                           : 
                                                          ((0x70U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                            ? 6U
                                                            : 
                                                           ((0x6fU 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                             ? 5U
                                                             : 
                                                            ((0x6eU 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                              ? 5U
                                                              : 
                                                             ((0x6dU 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                               ? 5U
                                                               : 
                                                              ((0x6cU 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                ? 5U
                                                                : 
                                                               ((0x6bU 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                 ? 5U
                                                                 : 
                                                                ((0x6aU 
                                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                  ? 5U
                                                                  : 
                                                                 ((0x69U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                                   ? 5U
                                                                   : (IData)(ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_106))))))))))))))))))))));
    ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_235 
        = ((0x69U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_5)
            : ((0x68U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_5)
                : ((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_5)
                    : ((0x66U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_5)
                        : ((0x65U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_5)
                            : ((0x64U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_5)
                                : ((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_5)
                                    : ((0x62U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_5)
                                        : ((0x61U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_5)
                                            : ((0x60U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_5)
                                                : (
                                                   (0x5fU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4)
                                                    : 
                                                   ((0x5eU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4)
                                                     : 
                                                    ((0x5dU 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4)
                                                      : 
                                                     ((0x5cU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4)
                                                       : 
                                                      ((0x5bU 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4)
                                                        : 
                                                       ((0x5aU 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4)
                                                         : 
                                                        ((0x59U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4)
                                                          : 
                                                         ((0x58U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4)
                                                           : 
                                                          ((0x57U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4)
                                                            : 
                                                           ((0x56U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4)
                                                             : 
                                                            ((0x55U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4)
                                                              : (IData)(ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_214))))))))))))))))))))));
    if ((0x7eU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))) {
        ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_128 = 6U;
        ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_256 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_6;
    } else {
        ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_128 
            = ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_127;
        ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_256 
            = ((0x7dU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_6)
                : ((0x7cU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_6)
                    : ((0x7bU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_6)
                        : ((0x7aU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_6)
                            : ((0x79U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_6)
                                : ((0x78U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_6)
                                    : ((0x77U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_6)
                                        : ((0x76U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_6)
                                            : ((0x75U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_6)
                                                : (
                                                   (0x74U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_6)
                                                    : 
                                                   ((0x73U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_6)
                                                     : 
                                                    ((0x72U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_6)
                                                      : 
                                                     ((0x71U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_6)
                                                       : 
                                                      ((0x70U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_6)
                                                        : 
                                                       ((0x6fU 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_5)
                                                         : 
                                                        ((0x6eU 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_5)
                                                          : 
                                                         ((0x6dU 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_5)
                                                           : 
                                                          ((0x6cU 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_5)
                                                            : 
                                                           ((0x6bU 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_5)
                                                             : 
                                                            ((0x6aU 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
                                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_5)
                                                              : (IData)(ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_235)))))))))))))))))))));
    }
    if ((0x7fU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id = 6U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_enq_bits_id = 6U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id 
            = ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_128;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_enq_bits_id 
            = ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_128;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__stall 
        = (((0x7fU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source))
             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_6)
             : (IData)(ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_256)) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__counter)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__ram_id
           [0U] : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_enq_bits_id));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___T 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__stall)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___bundleIn_0_a_ready_T_3)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_1_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_a_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__stall)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___bundleIn_0_a_ready_T_3));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq_io_enq_valid 
        = ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__stall)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_1_a_valid)) 
            & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                  >> 2U))) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__doneAW) 
                              | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__maybe_full))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__maybe_full)) 
           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__stall)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_1_a_valid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___out_arw_valid_T_4)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_enq_valid 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__stall)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_1_a_valid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___out_arw_valid_T_4));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_in_a_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__stall)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___bundleIn_0_a_ready_T_3));
    if ((0xcU == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))) {
        ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12 
            = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__maybe_full)));
        ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_92 
            = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__maybe_full)));
    } else {
        ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12 
            = (1U & ((0xbU == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))
                      ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__maybe_full))
                      : ((0xaU == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))
                          ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__maybe_full))
                          : ((9U == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))
                              ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__maybe_full))
                              : ((8U == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))
                                  ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__maybe_full))
                                  : ((7U == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))
                                      ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__maybe_full))
                                      : ((6U == (0xfU 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))
                                          ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__full))
                                          : ((5U == 
                                              (0xfU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))
                                              ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__full))
                                              : ((4U 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))
                                                  ? 
                                                 (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__full))
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))
                                                   ? 
                                                  (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__full))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))
                                                    ? 
                                                   (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__full))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))
                                                     ? 
                                                    (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__full))
                                                     : 
                                                    (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__full))))))))))))));
        ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_92 
            = (1U & ((0xbU == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))
                      ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__maybe_full))
                      : ((0xaU == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))
                          ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__maybe_full))
                          : ((9U == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))
                              ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__maybe_full))
                              : ((8U == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))
                                  ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__maybe_full))
                                  : ((7U == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))
                                      ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__maybe_full))
                                      : ((6U == (0xfU 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))
                                          ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__full))
                                          : ((5U == 
                                              (0xfU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))
                                              ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__full))
                                              : ((4U 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))
                                                  ? 
                                                 (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__full))
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))
                                                   ? 
                                                  (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__full))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))
                                                    ? 
                                                   (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__full))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))
                                                     ? 
                                                    (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__full))
                                                     : 
                                                    (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__full))))))))))))));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_out_1_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq_io_enq_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_30 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_8) 
                 + ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                     >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_34 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_9) 
                 + ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                     >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_38 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_10) 
                 + ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                     >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_42 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_11) 
                 + ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                     >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_46 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_12) 
                 + ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                     >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_50 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_13) 
                 + ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                     >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_54 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_14) 
                 + ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                     >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_58 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_15) 
                 + ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                     >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_62 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_16) 
                 + ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                     >> 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_66 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_17) 
                 + ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                     >> 0x10U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_70 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_18) 
                 + ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                     >> 0x11U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_74 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_19) 
                 + ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                     >> 0x12U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_78 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_20) 
                 + ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                     >> 0x13U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_82 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_21) 
                 + ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                     >> 0x14U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_86 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_22) 
                 + ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                     >> 0x15U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_90 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_23) 
                 + ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                     >> 0x16U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc 
        = (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_1 
        = ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_2 
        = ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
            >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_3 
        = ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
            >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_4 
        = ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
            >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_5 
        = ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
            >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_6 
        = ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
            >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_enq_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__maybe_full));
    if ((0xfU == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_15 
            = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__maybe_full)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_95 
            = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__maybe_full)));
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_15 
            = (1U & ((0xeU == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))
                      ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__maybe_full))
                      : ((0xdU == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))
                          ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__maybe_full))
                          : (IData)(ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_12))));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_95 
            = (1U & ((0xeU == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))
                      ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__maybe_full))
                      : ((0xdU == (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))
                          ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__maybe_full))
                          : (IData)(ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_92))));
    }
    __Vtemp4295[0U] = 1U;
    __Vtemp4295[1U] = 0U;
    __Vtemp4295[2U] = 0U;
    __Vtemp4295[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4296, __Vtemp4295, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source));
    __Vtemp4301[0U] = 1U;
    __Vtemp4301[1U] = 0U;
    __Vtemp4301[2U] = 0U;
    __Vtemp4301[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4302, __Vtemp4301, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4296[0U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                                     ? 1U
                                                     : 0U)))
                                                ? __Vtemp4302[0U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4296[1U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                                     ? 1U
                                                     : 0U)))
                                                ? __Vtemp4302[1U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4296[2U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                                     ? 1U
                                                     : 0U)))
                                                ? __Vtemp4302[2U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4296[3U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                                     ? 1U
                                                     : 0U)))
                                                ? __Vtemp4302[3U]
                                                : 0U)));
    VL_EXTEND_WI(1027,4, __Vtemp4308, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4309, __Vtemp4308, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp4315, VysyxSoCFull__ConstPool__CONST_3892cc72_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4309[0U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4315[0U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4309[1U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[1U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4315[1U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[1U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4309[2U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[2U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4315[2U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[2U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4309[3U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[3U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4315[3U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[3U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4309[4U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[4U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4315[4U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[4U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4309[5U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[5U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4315[5U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[5U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4309[6U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[6U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4315[6U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[6U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4309[7U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[7U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4315[7U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[7U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_opcodes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4309[8U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[8U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4315[8U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[8U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_opcodes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4309[9U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[9U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4315[9U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[9U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4309[0xaU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xaU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4315[0xaU]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xaU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4309[0xbU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xbU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4315[0xbU]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xbU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_opcodes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4309[0xcU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xcU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4315[0xcU]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xcU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_opcodes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4309[0xdU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xdU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4315[0xdU]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xdU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_opcodes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4309[0xeU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xeU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4315[0xeU]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xeU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_opcodes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4309[0xfU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xfU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4315[0xfU]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xfU]))));
    VL_EXTEND_WI(1028,5, __Vtemp4322, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1028,1028,10, __Vtemp4323, __Vtemp4322, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                   << 3U));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp4329, VysyxSoCFull__ConstPool__CONST_81905067_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[0U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[0U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[1U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[1U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[1U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[1U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[1U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[2U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[2U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[2U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[2U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[2U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[3U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[3U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[3U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[3U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[3U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[4U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[4U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[4U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[4U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[4U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[5U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[5U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[5U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[5U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[5U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[6U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[6U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[6U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[6U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[6U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[7U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[7U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[7U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[7U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[7U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[8U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[8U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[8U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[8U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[8U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[9U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[9U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[9U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[9U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[9U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[0xaU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xaU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xaU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[0xaU]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xaU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[0xbU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xbU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xbU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[0xbU]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xbU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[0xcU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xcU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xcU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[0xcU]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xcU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[0xdU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xdU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xdU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[0xdU]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xdU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[0xeU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xeU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xeU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[0xeU]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xeU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[0xfU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xfU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xfU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[0xfU]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xfU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x10U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x10U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x10U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[0x10U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x10U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x10U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[0x10U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x10U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x11U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x11U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x11U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[0x11U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x11U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x11U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[0x11U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x11U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x12U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x12U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x12U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[0x12U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x12U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x12U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[0x12U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x12U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x13U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x13U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x13U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[0x13U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x13U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x13U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[0x13U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x13U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x14U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x14U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x14U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[0x14U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x14U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x14U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[0x14U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x14U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x15U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x15U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x15U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[0x15U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x15U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x15U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[0x15U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x15U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x16U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x16U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x16U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[0x16U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x16U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x16U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[0x16U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x16U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x17U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x17U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x17U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[0x17U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x17U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x17U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[0x17U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x17U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x18U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x18U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x18U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[0x18U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x18U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x18U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[0x18U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x18U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x19U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x19U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x19U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[0x19U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x19U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x19U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[0x19U]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x19U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1aU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x1aU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1aU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[0x1aU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1aU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1aU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[0x1aU]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1aU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1bU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x1bU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1bU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[0x1bU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1bU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1bU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[0x1bU]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1bU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1cU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x1cU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1cU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[0x1cU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1cU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1cU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[0x1cU]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1cU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1dU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x1dU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1dU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[0x1dU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1dU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1dU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[0x1dU]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1dU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1eU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x1eU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1eU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[0x1eU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1eU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1eU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[0x1eU]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1eU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1fU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes[0x1fU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1fU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4323[0x1fU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1fU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1fU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                ? 1U : 0U))) ? __Vtemp4329[0x1fU]
                     : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1fU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__maybe_full) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT___GEN_9 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__full) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_4 
        = (0x1fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_1) 
                     + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc)) 
                    - ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_8 
        = (0x1fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_2) 
                     + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_1)) 
                    - (((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                         >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_12 
        = (0x1fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_3) 
                     + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_2)) 
                    - (((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                         >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_16 
        = (0x1fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_4) 
                     + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_3)) 
                    - (((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                         >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_20 
        = (0x1fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_5) 
                     + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_4)) 
                    - (((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                         >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_24 
        = (0x1fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_6) 
                     + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_5)) 
                    - (((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                         >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___count_T_28 
        = (0x1fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_7) 
                     + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_6)) 
                    - (((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                         >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_wen));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_valid) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_wen)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_wen)
            ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_95))
            : ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_15)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__maybe_full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT___do_enq_T)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT___GEN_9));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__full)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_awvalid) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_95)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16_io_enq_valid 
        = (0xffffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_awvalid) 
                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__full))) 
                      & ((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17_io_enq_valid 
        = (0x7fffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_awvalid) 
                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__full))) 
                      & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                         >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18_io_enq_valid 
        = (0x3fffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_awvalid) 
                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__full))) 
                      & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                         >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19_io_enq_valid 
        = (0x1fffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_awvalid) 
                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__full))) 
                      & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                         >> 3U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20_io_enq_valid 
        = (0xfffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_awvalid) 
                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__full))) 
                     & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                        >> 4U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21_io_enq_valid 
        = (0x7ffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_awvalid) 
                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__full))) 
                     & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                        >> 5U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22_io_enq_valid 
        = (0x3ffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_awvalid) 
                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__full))) 
                     & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                        >> 6U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23_io_enq_valid 
        = (0x1ffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_awvalid) 
                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__full))) 
                     & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                        >> 7U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24_io_enq_valid 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_awvalid) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__full))) 
                    & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                       >> 8U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25_io_enq_valid 
        = (0x7fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_awvalid) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__full))) 
                    & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                       >> 9U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26_io_enq_valid 
        = (0x3fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_awvalid) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__full))) 
                    & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                       >> 0xaU)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27_io_enq_valid 
        = (0x1fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_awvalid) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__full))) 
                    & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                       >> 0xbU)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28_io_enq_valid 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_awvalid) 
                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__full))) 
                   & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                      >> 0xcU)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29_io_enq_valid 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_awvalid) 
                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__full))) 
                 & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                    >> 0xdU)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30_io_enq_valid 
        = (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_awvalid) 
                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__full))) 
                 & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                    >> 0xeU)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31_io_enq_valid 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_awvalid) 
                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__full))) 
                 & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                    >> 0xfU)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__full)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_arvalid) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT___GEN_15)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_io_enq_valid 
        = (0xffffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_arvalid) 
                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__full))) 
                      & ((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1_io_enq_valid 
        = (0x7fffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_arvalid) 
                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__full))) 
                      & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                         >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2_io_enq_valid 
        = (0x3fffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_arvalid) 
                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__full))) 
                      & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                         >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3_io_enq_valid 
        = (0x1fffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_arvalid) 
                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__full))) 
                      & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                         >> 3U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4_io_enq_valid 
        = (0xfffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_arvalid) 
                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__full))) 
                     & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                        >> 4U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5_io_enq_valid 
        = (0x7ffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_arvalid) 
                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__full))) 
                     & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                        >> 5U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6_io_enq_valid 
        = (0x3ffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_arvalid) 
                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__full))) 
                     & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                        >> 6U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7_io_enq_valid 
        = (0x1ffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_arvalid) 
                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__full))) 
                     & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                        >> 7U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8_io_enq_valid 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_arvalid) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__full))) 
                    & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                       >> 8U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9_io_enq_valid 
        = (0x7fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_arvalid) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__full))) 
                    & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                       >> 9U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10_io_enq_valid 
        = (0x3fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_arvalid) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__full))) 
                    & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                       >> 0xaU)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11_io_enq_valid 
        = (0x1fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_arvalid) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__full))) 
                    & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                       >> 0xbU)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12_io_enq_valid 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_arvalid) 
                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__full))) 
                   & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                      >> 0xcU)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13_io_enq_valid 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_arvalid) 
                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__full))) 
                 & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                    >> 0xdU)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14_io_enq_valid 
        = (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_arvalid) 
                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__full))) 
                 & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                    >> 0xeU)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15_io_enq_valid 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_out_arvalid) 
                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__full))) 
                 & (((IData)(1U) << (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id))) 
                    >> 0xfU)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__maybe_full) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___GEN_18 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_ready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__do_enq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__maybe_full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___GEN_18));
}

extern const VlWide<17>/*543:0*/ VysyxSoCFull__ConstPool__CONST_ea2bd2fa_0;
extern const VlWide<17>/*543:0*/ VysyxSoCFull__ConstPool__CONST_00a54009_0;
extern const VlWide<17>/*543:0*/ VysyxSoCFull__ConstPool__CONST_0123e283_0;
extern const VlWide<17>/*543:0*/ VysyxSoCFull__ConstPool__CONST_00a4c3f1_0;
extern const VlWide<17>/*543:0*/ VysyxSoCFull__ConstPool__CONST_70f0c30e_0;
extern const VlWide<17>/*543:0*/ VysyxSoCFull__ConstPool__CONST_f974e5b2_0;
extern const VlWide<17>/*543:0*/ VysyxSoCFull__ConstPool__CONST_00a54001_0;
extern const VlWide<17>/*543:0*/ VysyxSoCFull__ConstPool__CONST_a42324e4_0;

VL_INLINE_OPT void VysyxSoCFull___024root___multiclk__TOP__52(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___multiclk__TOP__52\n"); );
    // Variables
    CData/*1:0*/ ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___GEN_23;
    VlWide<3>/*95:0*/ __Vtemp4341;
    VlWide<3>/*95:0*/ __Vtemp4343;
    VlWide<4>/*127:0*/ __Vtemp4347;
    VlWide<4>/*127:0*/ __Vtemp4348;
    VlWide<4>/*127:0*/ __Vtemp4353;
    VlWide<4>/*127:0*/ __Vtemp4354;
    VlWide<33>/*1055:0*/ __Vtemp4360;
    VlWide<33>/*1055:0*/ __Vtemp4361;
    VlWide<33>/*1055:0*/ __Vtemp4367;
    VlWide<33>/*1055:0*/ __Vtemp4374;
    VlWide<33>/*1055:0*/ __Vtemp4375;
    VlWide<33>/*1055:0*/ __Vtemp4381;
    VlWide<4>/*127:0*/ __Vtemp4388;
    VlWide<4>/*127:0*/ __Vtemp4389;
    VlWide<4>/*127:0*/ __Vtemp4394;
    VlWide<4>/*127:0*/ __Vtemp4395;
    VlWide<33>/*1055:0*/ __Vtemp4401;
    VlWide<33>/*1055:0*/ __Vtemp4402;
    VlWide<33>/*1055:0*/ __Vtemp4408;
    VlWide<33>/*1055:0*/ __Vtemp4415;
    VlWide<33>/*1055:0*/ __Vtemp4416;
    VlWide<33>/*1055:0*/ __Vtemp4422;
    VlWide<4>/*127:0*/ __Vtemp4429;
    VlWide<4>/*127:0*/ __Vtemp4430;
    VlWide<4>/*127:0*/ __Vtemp4435;
    VlWide<4>/*127:0*/ __Vtemp4436;
    VlWide<33>/*1055:0*/ __Vtemp4442;
    VlWide<33>/*1055:0*/ __Vtemp4443;
    VlWide<33>/*1055:0*/ __Vtemp4449;
    VlWide<33>/*1055:0*/ __Vtemp4456;
    VlWide<33>/*1055:0*/ __Vtemp4457;
    VlWide<33>/*1055:0*/ __Vtemp4463;
    VlWide<17>/*543:0*/ __Vtemp4470;
    VlWide<17>/*543:0*/ __Vtemp4471;
    VlWide<17>/*543:0*/ __Vtemp4477;
    VlWide<17>/*543:0*/ __Vtemp4484;
    VlWide<17>/*543:0*/ __Vtemp4485;
    VlWide<17>/*543:0*/ __Vtemp4491;
    VlWide<17>/*543:0*/ __Vtemp4498;
    VlWide<17>/*543:0*/ __Vtemp4499;
    VlWide<17>/*543:0*/ __Vtemp4505;
    VlWide<17>/*543:0*/ __Vtemp4512;
    VlWide<17>/*543:0*/ __Vtemp4513;
    VlWide<17>/*543:0*/ __Vtemp4519;
    VlWide<17>/*543:0*/ __Vtemp4526;
    VlWide<17>/*543:0*/ __Vtemp4527;
    VlWide<17>/*543:0*/ __Vtemp4533;
    VlWide<17>/*543:0*/ __Vtemp4540;
    VlWide<17>/*543:0*/ __Vtemp4541;
    VlWide<17>/*543:0*/ __Vtemp4547;
    // Body
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_valid 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar_auto_out_1_a_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_len 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_len
           [0U] : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_len));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_len 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_len
           [0U] : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_len));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_addr
           [0U] : vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_addr);
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_addr
           [0U] : vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_addr);
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_size 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_size
           [0U] : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_size));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_size 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_size
           [0U] : (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__queue_arw_deq_io_deq_bits_size));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_ready 
        = ((((0ULL == (0x80000000ULL & (QData)((IData)(
                                                       (0x80000000U 
                                                        ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
             & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_in_a_ready)) 
            | ((0ULL == (0xc0000000ULL & (QData)((IData)(
                                                         (0x40000000U 
                                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_in_a_ready))) 
           | ((0ULL == (0xc0000000ULL & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_enq_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_a_ready 
        = ((((0ULL == (0x80000000ULL & (QData)((IData)(
                                                       (0x80000000U 
                                                        ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
             & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.auto_in_a_ready)) 
            | ((0ULL == (0xc0000000ULL & (QData)((IData)(
                                                         (0x40000000U 
                                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1_auto_in_a_ready))) 
           | ((0ULL == (0xc0000000ULL & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_enq_ready)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__deq_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_io_deq_valid 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__tl2axi4.__PVT__deq_io_deq_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT___GEN_14 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_ready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__busy)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__r_len)
            : (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_len));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__busy_1)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__r_len_1)
            : (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_len));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__busy)
            ? vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__r_addr
            : vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_addr);
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__busy_1)
            ? vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__r_addr_1
            : vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr);
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___wrapMask_T_1 
        = (0x7fffffU & ((0xffU | ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_len) 
                                  << 8U)) << (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___wrapMask_T_3 
        = (0x7fffffU & ((0xffU | ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_len) 
                                  << 8U)) << (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__latch 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__beatsLeft)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_a_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___beatsLeft_T_4 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__beatsLeft) 
                    - ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_a_ready) 
                       & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__beatsLeft))
                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___T_12)
                           : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___sink_ACancel_earlyValid_T_3)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__out_1_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_a_ready) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__beatsLeft))
               ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___readys_T_3))
               : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__state_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT___do_enq_T)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT___GEN_14));
    VL_EXTEND_WI(67,32, __Vtemp4341, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__shift);
    VL_EXTEND_WI(67,32, __Vtemp4343, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__shift);
    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q_io_deq_bits_opcode))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[0U] 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___T_3)
                ? ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                           >> 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last)))
                    ? 0U : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[1U])
                : __Vtemp4341[0U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[1U] 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___T_3)
                ? ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                           >> 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last)))
                    ? 0U : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[2U])
                : __Vtemp4341[1U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[2U] 
            = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___T_3)
                      ? ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                                 >> 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last)))
                          ? 0U : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[3U])
                      : __Vtemp4341[2U]));
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[0U] 
            = __Vtemp4343[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[1U] 
            = __Vtemp4343[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[2U] 
            = (7U & __Vtemp4343[2U]);
    }
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__full)) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_awready) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len_1)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__inc_addr 
        = (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr 
           + (0xffffU & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_size))));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__inc_addr_1 
        = (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr_1 
           + (0xffffU & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_size))));
    __Vtemp4347[0U] = 1U;
    __Vtemp4347[1U] = 0U;
    __Vtemp4347[2U] = 0U;
    __Vtemp4347[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4348, __Vtemp4347, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source));
    __Vtemp4353[0U] = 1U;
    __Vtemp4353[1U] = 0U;
    __Vtemp4353[2U] = 0U;
    __Vtemp4353[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4354, __Vtemp4353, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4348[0U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4354[0U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4348[1U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4354[1U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4348[2U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4354[2U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4348[3U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4354[3U]
                                                : 0U)));
    VL_EXTEND_WI(1027,4, __Vtemp4360, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4361, __Vtemp4360, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp4367, VysyxSoCFull__ConstPool__CONST_3892cc72_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4361[0U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4367[0U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4361[1U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[1U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4367[1U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[1U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4361[2U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[2U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4367[2U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[2U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4361[3U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[3U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4367[3U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[3U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4361[4U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[4U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4367[4U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[4U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4361[5U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[5U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4367[5U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[5U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4361[6U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[6U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4367[6U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[6U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4361[7U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[7U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4367[7U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[7U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4361[8U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[8U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4367[8U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[8U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4361[9U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[9U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4367[9U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[9U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4361[0xaU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xaU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4367[0xaU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xaU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4361[0xbU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xbU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4367[0xbU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xbU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4361[0xcU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xcU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4367[0xcU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xcU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4361[0xdU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xdU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4367[0xdU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xdU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4361[0xeU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xeU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4367[0xeU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xeU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4361[0xfU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xfU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4367[0xfU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xfU]))));
    VL_EXTEND_WI(1028,5, __Vtemp4374, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1028,1028,10, __Vtemp4375, __Vtemp4374, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                   << 3U));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp4381, VysyxSoCFull__ConstPool__CONST_81905067_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[0U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[0U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[1U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[1U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[1U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[1U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[1U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[2U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[2U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[2U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[2U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[2U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[3U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[3U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[3U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[3U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[3U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[4U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[4U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[4U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[4U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[4U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[5U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[5U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[5U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[5U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[5U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[6U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[6U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[6U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[6U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[6U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[7U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[7U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[7U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[7U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[7U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[8U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[8U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[8U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[8U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[8U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[9U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[9U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[9U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[9U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[9U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[0xaU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xaU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xaU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[0xaU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xaU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[0xbU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xbU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xbU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[0xbU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xbU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[0xcU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xcU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xcU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[0xcU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xcU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[0xdU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xdU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xdU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[0xdU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xdU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[0xeU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xeU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xeU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[0xeU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xeU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[0xfU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xfU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xfU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[0xfU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xfU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x10U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x10U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x10U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[0x10U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x10U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x10U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[0x10U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x10U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x11U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x11U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x11U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[0x11U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x11U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x11U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[0x11U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x11U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x12U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x12U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x12U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[0x12U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x12U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x12U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[0x12U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x12U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x13U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x13U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x13U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[0x13U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x13U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x13U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[0x13U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x13U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x14U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x14U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x14U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[0x14U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x14U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x14U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[0x14U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x14U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x15U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x15U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x15U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[0x15U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x15U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x15U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[0x15U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x15U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x16U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x16U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x16U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[0x16U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x16U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x16U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[0x16U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x16U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x17U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x17U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x17U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[0x17U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x17U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x17U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[0x17U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x17U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x18U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x18U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x18U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[0x18U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x18U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x18U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[0x18U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x18U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x19U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x19U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x19U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[0x19U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x19U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x19U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[0x19U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x19U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x1aU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x1aU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1aU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[0x1aU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1aU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1aU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[0x1aU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1aU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x1bU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x1bU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1bU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[0x1bU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1bU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1bU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[0x1bU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1bU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x1cU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x1cU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1cU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[0x1cU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1cU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1cU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[0x1cU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1cU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x1dU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x1dU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1dU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[0x1dU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1dU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1dU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[0x1dU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1dU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x1eU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x1eU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1eU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[0x1eU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1eU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1eU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[0x1eU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1eU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2[0x1fU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes[0x1fU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1fU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4375[0x1fU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1fU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1fU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4381[0x1fU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1fU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___T_50 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__out_1_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__out_1_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_allow));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_a_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__out_1_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_allow));
    ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___GEN_23 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___T_50) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_isSupported)))
            ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state))
                ? 3U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state))
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_a_ready) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stall)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___a_first_T 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_a_ready) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stall))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_in_a_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_a_ready) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stall)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___GEN_25 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_a_ready) 
             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__beatsLeft)) 
                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__state_0))) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state)))
            ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state))
                ? 1U : (IData)(ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___GEN_23))
            : (IData)(ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___GEN_23));
    __Vtemp4388[0U] = 1U;
    __Vtemp4388[1U] = 0U;
    __Vtemp4388[2U] = 0U;
    __Vtemp4388[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4389, __Vtemp4388, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source));
    __Vtemp4394[0U] = 1U;
    __Vtemp4394[1U] = 0U;
    __Vtemp4394[2U] = 0U;
    __Vtemp4394[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4395, __Vtemp4394, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4389[0U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4395[0U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4389[1U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4395[1U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4389[2U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4395[2U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4389[3U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp4395[3U]
                                                : 0U)));
    VL_EXTEND_WI(1027,4, __Vtemp4401, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4402, __Vtemp4401, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp4408, VysyxSoCFull__ConstPool__CONST_3892cc72_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4402[0U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4408[0U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4402[1U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[1U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4408[1U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[1U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4402[2U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[2U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4408[2U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[2U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4402[3U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[3U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4408[3U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[3U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4402[4U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[4U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4408[4U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[4U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4402[5U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[5U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4408[5U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[5U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4402[6U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[6U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4408[6U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[6U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4402[7U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[7U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4408[7U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[7U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4402[8U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[8U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4408[8U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[8U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4402[9U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[9U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4408[9U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[9U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4402[0xaU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xaU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4408[0xaU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xaU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4402[0xbU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xbU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4408[0xbU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xbU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4402[0xcU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xcU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4408[0xcU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xcU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4402[0xdU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xdU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4408[0xdU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xdU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4402[0xeU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xeU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4408[0xeU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xeU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4402[0xfU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xfU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4408[0xfU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xfU]))));
    VL_EXTEND_WI(1028,5, __Vtemp4415, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1028,1028,10, __Vtemp4416, __Vtemp4415, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                   << 3U));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp4422, VysyxSoCFull__ConstPool__CONST_81905067_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                   << 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[0U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[0U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[1U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[1U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[1U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[1U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[1U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[2U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[2U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[2U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[2U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[2U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[3U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[3U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[3U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[3U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[3U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[4U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[4U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[4U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[4U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[4U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[5U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[5U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[5U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[5U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[5U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[6U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[6U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[6U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[6U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[6U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[7U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[7U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[7U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[7U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[7U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[8U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[8U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[8U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[8U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[8U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[9U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[9U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[9U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[9U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[9U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[0xaU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xaU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xaU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[0xaU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xaU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[0xbU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xbU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xbU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[0xbU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xbU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[0xcU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xcU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xcU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[0xcU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xcU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[0xdU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xdU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xdU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[0xdU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xdU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[0xeU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xeU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xeU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[0xeU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xeU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[0xfU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xfU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xfU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[0xfU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xfU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x10U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x10U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x10U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[0x10U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x10U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x10U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[0x10U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x10U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x11U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x11U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x11U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[0x11U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x11U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x11U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[0x11U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x11U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x12U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x12U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x12U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[0x12U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x12U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x12U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[0x12U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x12U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x13U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x13U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x13U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[0x13U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x13U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x13U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[0x13U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x13U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x14U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x14U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x14U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[0x14U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x14U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x14U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[0x14U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x14U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x15U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x15U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x15U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[0x15U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x15U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x15U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[0x15U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x15U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x16U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x16U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x16U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[0x16U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x16U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x16U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[0x16U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x16U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x17U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x17U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x17U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[0x17U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x17U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x17U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[0x17U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x17U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x18U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x18U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x18U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[0x18U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x18U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x18U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[0x18U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x18U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x19U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x19U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x19U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[0x19U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x19U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x19U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[0x19U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x19U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x1aU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x1aU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1aU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[0x1aU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1aU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1aU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[0x1aU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1aU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x1bU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x1bU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1bU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[0x1bU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1bU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1bU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[0x1bU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1bU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x1cU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x1cU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1cU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[0x1cU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1cU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1cU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[0x1cU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1cU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x1dU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x1dU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1dU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[0x1dU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1dU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1dU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[0x1dU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1dU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x1eU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x1eU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1eU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[0x1eU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1eU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1eU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[0x1eU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1eU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x1fU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x1fU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1fU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4416[0x1fU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1fU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1fU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4422[0x1fU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1fU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid));
    if (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_first_counter)) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___a_first_T))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_146 
            = ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_16));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_147 
            = ((0x11U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_17));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_148 
            = ((0x12U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_18));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_149 
            = ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_19));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_150 
            = ((0x14U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_20));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_151 
            = ((0x15U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_21));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_152 
            = ((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_22));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_153 
            = ((0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_23));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_154 
            = ((0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_24));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_155 
            = ((0x19U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_25));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_156 
            = ((0x1aU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_26));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_157 
            = ((0x1bU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_27));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_158 
            = ((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_28));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_159 
            = ((0x1dU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_29));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_160 
            = ((0x1eU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_30));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_161 
            = ((0x1fU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_31));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_162 
            = ((0x20U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_32));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_163 
            = ((0x21U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_33));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_164 
            = ((0x22U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_34));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_165 
            = ((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_35));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_166 
            = ((0x24U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_36));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_167 
            = ((0x25U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_37));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_168 
            = ((0x26U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_38));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_169 
            = ((0x27U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_39));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_170 
            = ((0x28U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_40));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_171 
            = ((0x29U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_41));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_172 
            = ((0x2aU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_42));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_173 
            = ((0x2bU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_43));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_174 
            = ((0x2cU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_44));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_175 
            = ((0x2dU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_45));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_176 
            = ((0x2eU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_46));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_177 
            = ((0x2fU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_47));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_178 
            = ((0x30U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_48));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_179 
            = ((0x31U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_49));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_180 
            = ((0x32U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_50));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_181 
            = ((0x33U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_51));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_182 
            = ((0x34U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_52));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_183 
            = ((0x35U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_53));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_184 
            = ((0x36U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_54));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_185 
            = ((0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_55));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_186 
            = ((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_56));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_187 
            = ((0x39U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_57));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_188 
            = ((0x3aU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_58));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_189 
            = ((0x3bU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_59));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_190 
            = ((0x3cU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_60));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_191 
            = ((0x3dU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_61));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_192 
            = ((0x3eU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_62));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_193 
            = ((0x3fU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_63));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_194 
            = ((0x40U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_64));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_195 
            = ((0x41U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_65));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_196 
            = ((0x42U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_66));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_197 
            = ((0x43U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_67));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_198 
            = ((0x44U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_68));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_199 
            = ((0x45U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_69));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_200 
            = ((0x46U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_70));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_201 
            = ((0x47U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_71));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_202 
            = ((0x48U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_72));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_203 
            = ((0x49U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_73));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_204 
            = ((0x4aU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_74));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_205 
            = ((0x4bU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_75));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_206 
            = ((0x4cU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_76));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_207 
            = ((0x4dU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_77));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_208 
            = ((0x4eU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_78));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_209 
            = ((0x4fU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_79));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_210 
            = ((0x50U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_80));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_211 
            = ((0x51U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_81));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_212 
            = ((0x52U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_82));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_213 
            = ((0x53U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_83));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_214 
            = ((0x54U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_84));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_215 
            = ((0x55U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_85));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_216 
            = ((0x56U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_86));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_217 
            = ((0x57U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_87));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_218 
            = ((0x58U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_88));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_219 
            = ((0x59U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_89));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_220 
            = ((0x5aU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_90));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_221 
            = ((0x5bU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_91));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_222 
            = ((0x5cU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_92));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_223 
            = ((0x5dU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_93));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_224 
            = ((0x5eU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_94));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_225 
            = ((0x5fU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_95));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_226 
            = ((0x60U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_96));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_227 
            = ((0x61U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_97));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_228 
            = ((0x62U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_98));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_229 
            = ((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_99));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_230 
            = ((0x64U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_100));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_231 
            = ((0x65U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_101));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_232 
            = ((0x66U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_102));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_233 
            = ((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_103));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_234 
            = ((0x68U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_104));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_235 
            = ((0x69U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_105));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_236 
            = ((0x6aU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_106));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_237 
            = ((0x6bU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_107));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_238 
            = ((0x6cU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_108));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_239 
            = ((0x6dU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_109));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_240 
            = ((0x6eU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_110));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_241 
            = ((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_111));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_242 
            = ((0x70U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_112));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_243 
            = ((0x71U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_113));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_244 
            = ((0x72U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_114));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_245 
            = ((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_115));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_246 
            = ((0x74U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_116));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_247 
            = ((0x75U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_117));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_248 
            = ((0x76U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_118));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_249 
            = ((0x77U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_119));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_250 
            = ((0x78U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_120));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_251 
            = ((0x79U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_121));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_252 
            = ((0x7aU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_122));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_253 
            = ((0x7bU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_123));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_254 
            = ((0x7cU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_124));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_255 
            = ((0x7dU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_125));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_256 
            = ((0x7eU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_126));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_257 
            = ((0x7fU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_127));
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_146 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_16;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_147 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_17;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_148 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_18;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_149 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_19;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_150 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_20;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_21;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_152 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_22;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_153 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_23;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_154 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_24;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_155 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_25;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_156 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_26;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_157 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_27;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_158 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_28;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_159 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_29;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_160 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_30;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_161 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_31;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_162 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_32;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_163 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_33;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_164 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_34;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_165 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_35;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_166 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_36;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_167 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_37;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_168 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_38;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_169 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_39;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_170 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_40;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_171 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_41;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_172 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_42;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_173 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_43;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_174 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_44;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_175 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_45;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_176 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_46;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_177 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_47;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_178 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_48;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_179 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_49;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_180 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_50;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_181 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_51;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_182 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_52;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_183 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_53;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_184 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_54;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_185 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_55;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_186 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_56;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_187 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_57;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_188 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_58;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_189 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_59;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_190 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_60;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_191 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_61;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_192 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_62;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_193 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_63;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_194 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_64;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_195 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_65;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_196 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_66;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_197 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_67;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_198 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_68;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_199 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_69;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_200 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_70;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_201 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_71;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_202 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_72;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_203 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_73;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_204 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_74;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_205 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_75;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_206 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_76;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_207 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_77;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_208 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_78;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_209 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_79;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_210 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_80;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_211 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_81;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_212 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_82;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_213 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_83;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_214 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_84;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_215 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_85;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_216 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_86;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_217 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_87;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_218 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_88;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_219 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_89;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_220 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_90;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_221 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_91;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_222 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_92;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_223 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_93;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_224 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_94;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_225 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_95;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_226 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_96;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_227 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_97;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_228 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_98;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_229 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_99;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_230 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_100;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_231 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_101;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_232 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_102;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_233 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_103;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_234 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_104;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_235 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_105;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_236 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_106;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_237 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_107;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_238 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_108;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_239 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_109;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_240 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_110;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_241 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_111;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_242 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_112;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_243 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_113;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_244 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_114;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_245 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_115;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_246 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_116;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_247 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_117;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_248 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_118;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_249 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_119;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_250 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_120;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_251 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_121;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_252 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_122;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_253 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_123;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_254 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_124;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_255 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_125;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_256 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_126;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT___GEN_257 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_127;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_enq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1_auto_in_a_ready) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__full)));
    __Vtemp4429[0U] = 1U;
    __Vtemp4429[1U] = 0U;
    __Vtemp4429[2U] = 0U;
    __Vtemp4429[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4430, __Vtemp4429, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source));
    __Vtemp4435[0U] = 1U;
    __Vtemp4435[1U] = 0U;
    __Vtemp4435[2U] = 0U;
    __Vtemp4435[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp4436, __Vtemp4435, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4430[0U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp4436[0U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4430[1U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp4436[1U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4430[2U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp4436[2U]
                                                : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp4430[3U] : 0U)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp4436[3U]
                                                : 0U)));
    VL_EXTEND_WI(1027,4, __Vtemp4442, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1027,1027,10, __Vtemp4443, __Vtemp4442, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp4449, VysyxSoCFull__ConstPool__CONST_3892cc72_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4443[0U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4449[0U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4443[1U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[1U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[1U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4449[1U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[1U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4443[2U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[2U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[2U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4449[2U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[2U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4443[3U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[3U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[3U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4449[3U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[3U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4443[4U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[4U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[4U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4449[4U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[4U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4443[5U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[5U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[5U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4449[5U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[5U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4443[6U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[6U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[6U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4449[6U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[6U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4443[7U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[7U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[7U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4449[7U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[7U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4443[8U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[8U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[8U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4449[8U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[8U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4443[9U] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[9U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[9U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4449[9U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[9U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4443[0xaU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xaU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xaU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4449[0xaU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xaU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4443[0xbU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xbU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xbU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4449[0xbU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xbU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4443[0xcU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xcU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xcU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4449[0xcU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xcU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4443[0xdU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xdU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xdU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4449[0xdU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xdU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4443[0xeU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xeU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xeU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4449[0xeU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xeU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c76_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4443[0xfU] : VysyxSoCFull__ConstPool__CONST_ac7e6362_0[0xfU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xfU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4449[0xfU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xfU]))));
    VL_EXTEND_WI(1028,5, __Vtemp4456, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(1028,1028,10, __Vtemp4457, __Vtemp4456, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                   << 3U));
    VL_SHIFTL_WWI(1039,1039,10, __Vtemp4463, VysyxSoCFull__ConstPool__CONST_81905067_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                   << 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[0U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[0U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[1U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[1U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[1U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[1U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[1U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[2U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[2U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[2U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[2U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[2U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[3U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[3U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[3U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[3U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[3U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[4U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[4U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[4U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[4U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[4U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[5U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[5U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[5U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[5U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[5U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[6U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[6U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[6U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[6U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[6U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[7U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[7U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[7U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[7U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[7U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[8U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[8U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[8U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[8U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[8U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[9U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[9U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[9U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[9U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[9U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[0xaU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xaU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xaU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[0xaU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xaU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[0xbU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xbU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xbU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[0xbU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xbU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[0xcU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xcU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xcU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[0xcU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xcU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[0xdU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xdU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xdU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[0xdU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xdU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[0xeU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xeU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xeU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[0xeU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xeU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[0xfU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0xfU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0xfU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[0xfU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0xfU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x10U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x10U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x10U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[0x10U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x10U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x10U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[0x10U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x10U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x11U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x11U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x11U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[0x11U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x11U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x11U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[0x11U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x11U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x12U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x12U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x12U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[0x12U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x12U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x12U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[0x12U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x12U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x13U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x13U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x13U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[0x13U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x13U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x13U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[0x13U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x13U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x14U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x14U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x14U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[0x14U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x14U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x14U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[0x14U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x14U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x15U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x15U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x15U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[0x15U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x15U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x15U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[0x15U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x15U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x16U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x16U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x16U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[0x16U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x16U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x16U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[0x16U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x16U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x17U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x17U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x17U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[0x17U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x17U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x17U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[0x17U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x17U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x18U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x18U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x18U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[0x18U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x18U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x18U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[0x18U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x18U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x19U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x19U] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x19U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[0x19U] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x19U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x19U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[0x19U] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x19U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1aU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x1aU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1aU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[0x1aU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1aU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1aU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[0x1aU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1aU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1bU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x1bU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1bU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[0x1bU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1bU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1bU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[0x1bU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1bU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1cU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x1cU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1cU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[0x1cU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1cU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1cU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[0x1cU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1cU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1dU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x1dU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1dU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[0x1dU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1dU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1dU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[0x1dU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1dU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1eU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x1eU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1eU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[0x1eU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1eU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1eU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[0x1eU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1eU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_2[0x1fU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes[0x1fU] 
            | (VysyxSoCFull__ConstPool__CONST_f1d99c4e_0[0x1fU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4457[0x1fU] : VysyxSoCFull__ConstPool__CONST_003cb67b_0[0x1fU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_f1d81c7e_0[0x1fU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                     ? __Vtemp4463[0x1fU] : VysyxSoCFull__ConstPool__CONST_99cb7c89_0[0x1fU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT___T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT___T 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_enq_ready) 
            | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__last))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_enq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor_io_in_a_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_enq_ready) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__last))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_in_a_ready 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_enq_ready) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__last))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT___GEN_0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT___T) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_repeat)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT___GEN_4 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT___T) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__last))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__bundleOut_0_a_bits_data_rdata_written_once));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT___GEN_6 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT___T) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__last))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__bundleOut_0_a_bits_mask_rdata_written_once));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_T_2 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))
                : 0ULL)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                                & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                ? (1ULL << (0x3fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                             >> 1U)))
                                : 0ULL)));
    VL_EXTEND_WI(515,4, __Vtemp4470, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(515,515,9, __Vtemp4471, __Vtemp4470, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(527,527,9, __Vtemp4477, VysyxSoCFull__ConstPool__CONST_ea2bd2fa_0, 
                  (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                            << 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4471[0U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[0U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4477[0U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4471[1U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[1U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[1U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4477[1U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[1U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4471[2U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[2U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[2U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4477[2U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[2U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4471[3U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[3U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[3U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4477[3U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[3U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4471[4U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[4U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[4U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4477[4U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[4U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4471[5U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[5U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[5U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4477[5U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[5U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4471[6U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[6U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[6U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4477[6U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[6U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4471[7U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[7U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[7U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4477[7U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[7U]))));
    VL_EXTEND_WI(516,5, __Vtemp4484, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(516,516,9, __Vtemp4485, __Vtemp4484, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                   << 3U));
    VL_SHIFTL_WWI(527,527,9, __Vtemp4491, VysyxSoCFull__ConstPool__CONST_f974e5b2_0, 
                  (0x1f8U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                             << 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4485[0U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4491[0U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4485[1U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[1U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[1U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4491[1U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[1U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4485[2U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[2U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[2U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4491[2U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[2U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4485[3U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[3U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[3U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4491[3U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[3U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4485[4U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[4U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[4U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4491[4U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[4U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4485[5U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[5U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[5U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4491[5U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[5U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4485[6U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[6U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[6U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4491[6U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[6U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4485[7U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[7U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[7U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4491[7U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[7U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4485[8U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[8U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[8U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4491[8U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[8U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4485[9U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[9U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[9U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4491[9U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[9U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4485[0xaU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xaU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xaU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4491[0xaU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xaU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4485[0xbU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xbU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xbU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4491[0xbU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xbU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4485[0xcU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xcU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xcU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4491[0xcU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xcU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4485[0xdU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xdU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xdU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4491[0xdU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xdU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4485[0xeU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xeU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xeU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4491[0xeU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xeU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4485[0xfU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xfU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xfU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                     ? __Vtemp4491[0xfU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xfU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_in_a_ready) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___bundleOut_0_a_valid_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___bundleIn_0_a_ready_T_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_in_a_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_T_2 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))
                : 0ULL)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                                & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))
                                : 0ULL)));
    VL_EXTEND_WI(515,4, __Vtemp4498, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(515,515,9, __Vtemp4499, __Vtemp4498, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(527,527,9, __Vtemp4505, VysyxSoCFull__ConstPool__CONST_ea2bd2fa_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4499[0U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[0U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4505[0U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4499[1U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[1U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[1U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4505[1U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[1U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4499[2U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[2U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[2U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4505[2U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[2U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4499[3U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[3U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[3U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4505[3U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[3U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4499[4U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[4U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[4U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4505[4U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[4U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4499[5U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[5U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[5U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4505[5U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[5U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4499[6U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[6U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[6U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4505[6U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[6U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4499[7U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[7U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[7U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4505[7U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[7U]))));
    VL_EXTEND_WI(516,5, __Vtemp4512, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(516,516,9, __Vtemp4513, __Vtemp4512, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                   << 3U));
    VL_SHIFTL_WWI(527,527,9, __Vtemp4519, VysyxSoCFull__ConstPool__CONST_f974e5b2_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                   << 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4513[0U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4519[0U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4513[1U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[1U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[1U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4519[1U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[1U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4513[2U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[2U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[2U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4519[2U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[2U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4513[3U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[3U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[3U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4519[3U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[3U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4513[4U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[4U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[4U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4519[4U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[4U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4513[5U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[5U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[5U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4519[5U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[5U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4513[6U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[6U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[6U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4519[6U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[6U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4513[7U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[7U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[7U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4519[7U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[7U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4513[8U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[8U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[8U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4519[8U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[8U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4513[9U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[9U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[9U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4519[9U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[9U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4513[0xaU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xaU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xaU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4519[0xaU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xaU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4513[0xbU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xbU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xbU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4519[0xbU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xbU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4513[0xcU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xcU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xcU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4519[0xcU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xcU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4513[0xdU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xdU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xdU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4519[0xdU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xdU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4513[0xeU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xeU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xeU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4519[0xeU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xeU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)))
                   ? __Vtemp4513[0xfU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xfU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xfU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4519[0xfU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xfU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__inc 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___T) 
             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter))) 
            << 4U) | (((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___T_3) 
                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter_3))) 
                        & (IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))))) 
                       << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___T_2) 
                                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter_2))) 
                                  & (IData)((6U == 
                                             (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_c_bits_opcode))))) 
                                 << 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___bundleIn_0_a_ready_T_1) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_in_1_a_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___bundleIn_0_a_ready_T_1) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__next_flight 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__flight) 
                     + (7U & ((3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__inc)) 
                                     + (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__inc) 
                                              >> 1U)))) 
                              + (3U & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__inc) 
                                              >> 2U)) 
                                       + ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__inc) 
                                                 >> 3U)) 
                                          + (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__inc) 
                                                   >> 4U)))))))) 
                    - (7U & ((3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__dec)) 
                                    + (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__dec) 
                                             >> 1U)))) 
                             + (3U & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__dec) 
                                             >> 2U)) 
                                      + ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__dec) 
                                                >> 3U)) 
                                         + (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__dec) 
                                                  >> 4U)))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_o_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
            ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_in_1_a_ready))
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_in_1_a_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_T_2 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source))
                : 0ULL)) & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                                & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                                ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source))
                                : 0ULL)));
    VL_EXTEND_WI(515,4, __Vtemp4526, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(515,515,9, __Vtemp4527, __Vtemp4526, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                   << 2U));
    VL_SHIFTL_WWI(527,527,9, __Vtemp4533, VysyxSoCFull__ConstPool__CONST_ea2bd2fa_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4527[0U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[0U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4533[0U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4527[1U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[1U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[1U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4533[1U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[1U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4527[2U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[2U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[2U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4533[2U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[2U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4527[3U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[3U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[3U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4533[3U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[3U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4527[4U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[4U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[4U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4533[4U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[4U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4527[5U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[5U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[5U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4533[5U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[5U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4527[6U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[6U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[6U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4533[6U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[6U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54009_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4527[7U] : VysyxSoCFull__ConstPool__CONST_0123e283_0[7U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[7U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4533[7U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[7U]))));
    VL_EXTEND_WI(516,5, __Vtemp4540, (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(516,516,9, __Vtemp4541, __Vtemp4540, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_source) 
                   << 3U));
    VL_SHIFTL_WWI(527,527,9, __Vtemp4547, VysyxSoCFull__ConstPool__CONST_f974e5b2_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                   << 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[0U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4541[0U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4547[0U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[1U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[1U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[1U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4541[1U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[1U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[1U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4547[1U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[1U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[2U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[2U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[2U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4541[2U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[2U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[2U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4547[2U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[2U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[3U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[3U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[3U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4541[3U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[3U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[3U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4547[3U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[3U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[4U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[4U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[4U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4541[4U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[4U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[4U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4547[4U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[4U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[5U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[5U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[5U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4541[5U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[5U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[5U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4547[5U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[5U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[6U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[6U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[6U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4541[6U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[6U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[6U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4547[6U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[6U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[7U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[7U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[7U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4541[7U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[7U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[7U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4547[7U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[7U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[8U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[8U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[8U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4541[8U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[8U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[8U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4547[8U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[8U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[9U] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[9U] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[9U] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4541[9U] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[9U]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[9U] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4547[9U] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[9U]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0xaU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xaU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4541[0xaU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xaU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xaU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4547[0xaU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xaU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0xbU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xbU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4541[0xbU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xbU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xbU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4547[0xbU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xbU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0xcU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xcU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4541[0xcU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xcU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xcU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4547[0xcU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xcU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0xdU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xdU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4541[0xdU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xdU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xdU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4547[0xdU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xdU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0xeU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xeU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4541[0xeU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xeU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xeU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4547[0xeU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xeU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes[0xfU] 
            | (VysyxSoCFull__ConstPool__CONST_00a54001_0[0xfU] 
               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) 
                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)))
                   ? __Vtemp4541[0xfU] : VysyxSoCFull__ConstPool__CONST_a42324e4_0[0xfU]))) 
           & (~ (VysyxSoCFull__ConstPool__CONST_00a4c3f1_0[0xfU] 
                 & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))) 
                     & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)))
                     ? __Vtemp4547[0xfU] : VysyxSoCFull__ConstPool__CONST_70f0c30e_0[0xfU]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_ready 
        = (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready) 
                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__stall))) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_alloc_valid 
        = (0xffU & ((((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_alloc_valid 
        = (0x7fU & (((((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                        >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_alloc_valid 
        = (0x3fU & (((((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                        >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_alloc_valid 
        = (0x1fU & (((((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                        >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_alloc_valid 
        = (0xfU & (((((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                       >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_alloc_valid 
        = (7U & (((((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                     >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_alloc_valid 
        = (3U & (((((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                     >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_alloc_valid 
        = (1U & (((((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_4)) 
                     >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__a_first)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit)) 
                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___GEN_10 
        = (0x7ffffffffffffffULL & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___T)
                                        ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state))
                                            ? (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))
                                            : (((QData)((IData)(
                                                                vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[2U])) 
                                                << 0x3cU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[2U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[1U])) 
                                                     >> 4U))))
                                        : (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__shift)))
                                    : (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__shift))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___q_last_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_ready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink.io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___T 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0_io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___T 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1_io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___T 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2_io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___T 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3_io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___T 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4_io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___T 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5_io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___T 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6_io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___T 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7_io_alloc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free) 
            & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___T)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free_sel)
                   : 0U))) | ((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                        & ((IData)(1U) 
                                           << (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                >> 3U)))))
                               ? (0xffU & ((IData)(1U) 
                                           << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free) 
            & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___T)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free_sel)
                   : 0U))) | ((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                        & (((IData)(1U) 
                                            << (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                   >> 3U))) 
                                           >> 1U)))
                               ? (0xffU & ((IData)(1U) 
                                           << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free) 
            & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___T)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free_sel)
                   : 0U))) | ((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                        & (((IData)(1U) 
                                            << (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                   >> 3U))) 
                                           >> 2U)))
                               ? (0xffU & ((IData)(1U) 
                                           << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free) 
            & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___T)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free_sel)
                   : 0U))) | ((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                        & (((IData)(1U) 
                                            << (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                   >> 3U))) 
                                           >> 3U)))
                               ? (0xffU & ((IData)(1U) 
                                           << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free) 
            & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___T)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free_sel)
                   : 0U))) | ((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                       & (((IData)(1U) 
                                           << (7U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                >> 3U))) 
                                          >> 4U))) ? 
                              (0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free) 
            & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___T)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free_sel)
                   : 0U))) | ((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                     & (((IData)(1U) 
                                         << (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                   >> 3U))) 
                                        >> 5U))) ? 
                              (0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free) 
            & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___T)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free_sel)
                   : 0U))) | ((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                     & (((IData)(1U) 
                                         << (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                   >> 3U))) 
                                        >> 6U))) ? 
                              (0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free) 
            & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___T)
                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free_sel)
                   : 0U))) | ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid) 
                                     & (((IData)(1U) 
                                         << (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source) 
                                                   >> 3U))) 
                                        >> 7U))) ? 
                              (0xffU & ((IData)(1U) 
                                        << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
                               : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD_io_q_bits_data 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full)
                ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_data
               [0U] : vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1_auto_in_d_bits_data)
            : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state))
                ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full) 
                   & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_sink
                   [0U]) : (3U | ((((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode))
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
                                                 [(7U 
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
                                   << 0x10U) | ((0xe000U 
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
                                                            << 3U)))))))));
}
