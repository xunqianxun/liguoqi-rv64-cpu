// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040228.h for the primary calling header

#include "Vysyx_22040228___024root.h"
#include "Vysyx_22040228__Syms.h"

#include "verilated_dpi.h"

extern const VlUnpacked<CData/*2:0*/, 64> Vysyx_22040228__ConstPool__TABLE_94cdfcc3_0;

void Vysyx_22040228___024root___settle__TOP__5(Vysyx_22040228___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040228__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040228___024root___settle__TOP__5\n"); );
    // Variables
    CData/*5:0*/ __Vtableidx1;
    // Body
    if (vlSelf->rst) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__jalr_pc_ena = 0U;
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1 = 0ULL;
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__jalr_pc_ena 
            = (1U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jalr) 
                     & (~ ((((((((((((((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1)) 
                                       & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1))) 
                                      & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op1))) 
                                     & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb1_op1))) 
                                    & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb2_op1))) 
                                   & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb3_op1))) 
                                  & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com1_op1))) 
                                 & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com2_op1))) 
                                & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com3_op1))) 
                               & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com4_op1))) 
                              & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com5_op1))) 
                             & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com6_op1))) 
                            & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com7_op1))) 
                           & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com8_op1))))));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1ena)
                ? (((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                     > vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                    & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1) 
                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1)))
                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_data
                    : (((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc 
                         < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                        & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1) 
                           & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1)))
                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_data
                        : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1) 
                            | ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc) 
                               & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1) 
                                  & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op1))))
                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_data
                            : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1) 
                                | ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc 
                                    < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                                   & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1) 
                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op1))))
                                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_data
                                : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op1)
                                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__load_data
                                    : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb1_op1)
                                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_dara
                                        : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb2_op1)
                                            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_dara
                                            : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb3_op1)
                                                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_dara
                                                : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com8_op1)
                                                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data7
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com7_op1)
                                                     ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data6
                                                     : 
                                                    ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com6_op1)
                                                      ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data5
                                                      : 
                                                     ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com5_op1)
                                                       ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data4
                                                       : 
                                                      ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com4_op1)
                                                        ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data3
                                                        : 
                                                       ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com3_op1)
                                                         ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data2
                                                         : 
                                                        ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com2_op1)
                                                          ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data1
                                                          : 
                                                         ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com1_op1)
                                                           ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data0
                                                           : 
                                                          ((IData)(vlSelf->rst)
                                                            ? 0ULL
                                                            : 
                                                           ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1ena) 
                                                              & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addrg) 
                                                                 == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr))) 
                                                             & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_enag))
                                                             ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_datag
                                                             : 
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs
                                                            [vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr]))))))))))))))))))
                : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_auipc) 
                    | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jal))
                    ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc
                    : ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrwi) 
                         | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrsi)) 
                        | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrci))
                        ? (QData)((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__rs1))
                        : 0ULL)));
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__operand2 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal1)
            ? (((- (QData)((IData)((1U & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm1 
                                          >> 0x13U))))) 
                << 0x14U) | (QData)((IData)((0xfffffU 
                                             & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm1 
                                                << 1U)))))
            : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx1) 
                & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1))
                ? (((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm1) 
                                              >> 0xbU))))) 
                    << 0xcU) | (QData)((IData)((0xfffU 
                                                & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm1) 
                                                   << 1U)))))
                : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx1) 
                    & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                    ? 4ULL : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr1)
                               ? (((- (QData)((IData)(
                                                      (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                                                       >> 0x1fU)))) 
                                   << 0xcU) | (QData)((IData)(
                                                              (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[0U] 
                                                               >> 0x14U))))
                               : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal2)
                                   ? (((- (QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm2 
                                                              >> 0x13U))))) 
                                       << 0x14U) | (QData)((IData)(
                                                                   (0xfffffU 
                                                                    & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm2 
                                                                       << 1U)))))
                                   : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx2) 
                                       & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1))
                                       ? (((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm2) 
                                                                  >> 0xbU))))) 
                                           << 0xcU) 
                                          | (QData)((IData)(
                                                            (0xfffU 
                                                             & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm2) 
                                                                << 1U)))))
                                       : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx2) 
                                           & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                                           ? 4ULL : 
                                          ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr2)
                                            ? (((- (QData)((IData)(
                                                                   (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                                                                    >> 0x1fU)))) 
                                                << 0xcU) 
                                               | (QData)((IData)(
                                                                 (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[1U] 
                                                                  >> 0x14U))))
                                            : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal3)
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm3 
                                                                           >> 0x13U))))) 
                                                    << 0x14U) 
                                                   | (QData)((IData)(
                                                                     (0xfffffU 
                                                                      & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm3 
                                                                         << 1U)))))
                                                : (
                                                   ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx3) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm3) 
                                                                            >> 0xbU))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm3) 
                                                                          << 1U)))))
                                                    : 
                                                   (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx3) 
                                                     & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                                                     ? 4ULL
                                                     : 
                                                    ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr3)
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[2U] 
                                                                         >> 0x14U))))
                                                      : 
                                                     ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal4)
                                                       ? 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm4 
                                                                               >> 0x13U))))) 
                                                        << 0x14U) 
                                                       | (QData)((IData)(
                                                                         (0xfffffU 
                                                                          & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm4 
                                                                             << 1U)))))
                                                       : 
                                                      (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx4) 
                                                        & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1))
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm4) 
                                                                                >> 0xbU))))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (0xfffU 
                                                                           & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm4) 
                                                                              << 1U)))))
                                                        : 
                                                       (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx4) 
                                                         & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                                                         ? 4ULL
                                                         : 
                                                        ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr4)
                                                          ? 
                                                         (((- (QData)((IData)(
                                                                              (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                                                                               >> 0x1fU)))) 
                                                           << 0xcU) 
                                                          | (QData)((IData)(
                                                                            (vlSelf->ysyx_22040228__DOT__i_cache_inst_data[3U] 
                                                                             >> 0x14U))))
                                                          : 
                                                         ((IData)(vlSelf->rst)
                                                           ? 0ULL
                                                           : 0xfULL)))))))))))))))));
    vlSelf->out_addr_outp = ((IData)(vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__ar_shankhand)
                              ? (((QData)((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[5U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[4U])))
                              : 0ULL);
    vlSelf->out_slave_addr_ = ((2U == (IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state))
                                ? vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__write_addr_reg
                                : ((IData)(vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__ar_shankhand)
                                    ? (((QData)((IData)(
                                                        vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22040228__DOT__add_axi_ar_addr[0U])))
                                    : 0ULL));
    vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtime_temp 
        = (((IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_aw) 
            & (0x200bff8ULL == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[2U])))))
            ? ((vlSelf->ysyx_22040228__DOT__clint6__DOT__wmask 
                & (((QData)((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_data[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_data[2U])))) 
               | ((~ vlSelf->ysyx_22040228__DOT__clint6__DOT__wmask) 
                  & vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtime))
            : (1ULL + vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtime));
    vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtimecmp_temp 
        = (((IData)(vlSelf->ysyx_22040228__DOT__clint6__DOT__success_aw) 
            & (0x2004000ULL == (((QData)((IData)(vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->ysyx_22040228__DOT__add_axi_aw_addr[2U])))))
            ? ((vlSelf->ysyx_22040228__DOT__clint6__DOT__wmask 
                & (((QData)((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_data[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_data[2U])))) 
               | ((~ vlSelf->ysyx_22040228__DOT__clint6__DOT__wmask) 
                  & vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtimecmp))
            : vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtimecmp);
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state_nxt 
        = ((4U & (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state))
            ? ((2U & (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state))
                ? ((1U & (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state))
                    ? 1U : ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unread)
                             ? 1U : 6U)) : ((1U & (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state))
                                             ? ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dread)
                                                 ? 1U
                                                 : 5U)
                                             : ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_iread)
                                                 ? 1U
                                                 : 4U)))
            : ((2U & (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state))
                ? ((1U & (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state))
                    ? ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unwrite)
                        ? 1U : 3U) : ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dwrite)
                                       ? 1U : 2U)) : 
               ((1U & (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state))
                 ? ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_dcache_shankhand)
                     ? 5U : ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_uncahce_shankhand)
                              ? 6U : ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_dcache_shankhand)
                                       ? 2U : ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_uncahce_shankhand)
                                                ? 3U
                                                : ((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_icache_shankhand)
                                                    ? 4U
                                                    : 1U)))))
                 : 1U)));
    __Vtableidx1 = (((((((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dread) 
                         | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dwrite)) 
                        | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_iread)) 
                       | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unread)) 
                      | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unwrite)) 
                     << 5U) | ((0x10U & ((((~ (IData)(vlSelf->rst)) 
                                           & ((1U & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                               ? (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_ready)
                                               : ((2U 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                   ? 
                                                  ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_ready) 
                                                   >> 1U)
                                                   : 
                                                  (((IData)(vlSelf->ysyx_22040228__DOT__mmio_thing) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_w_ready)) 
                                                   >> 2U)))) 
                                          | ((~ (IData)(vlSelf->rst)) 
                                             & ((1U 
                                                 & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                 ? (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_ready)
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->ysyx_22040228__DOT__mmio_thing))
                                                  ? 
                                                 ((IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_ready) 
                                                  >> 1U)
                                                  : 
                                                 (((IData)(vlSelf->ysyx_22040228__DOT__mmio_thing) 
                                                   & (IData)(vlSelf->ysyx_22040228__DOT__add_axi_ar_ready)) 
                                                  >> 2U))))) 
                                         << 4U)) | 
                               (((((((IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_dcache_shankhand) 
                                     | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_dcache_shankhand)) 
                                    | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_icache_shankhand)) 
                                   | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_uncahce_shankhand)) 
                                  | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_uncahce_shankhand)) 
                                 << 3U) | (IData)(vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state))));
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state_n 
        = Vysyx_22040228__ConstPool__TABLE_94cdfcc3_0
        [__Vtableidx1];
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_submit_pc 
        = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_trap)
            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_pc
            : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt_stop_trap)
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_pc
                : 0xffffffffffffffffULL));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop1 
        = ((((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_waw) 
               | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo1_stop_war)) 
              | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo2_stop_war)) 
             | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_hard)) 
            | (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type) 
                >> 3U) & ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_waw) 
                            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo1_stop_war)) 
                           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo2_stop_war)) 
                          | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_hard)))) 
           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_trap));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop2 
        = ((((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt_stop_waw) 
               | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt1_stop_war)) 
              | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt2_stop_war)) 
             | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt_stop_hard)) 
            | (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type) 
                >> 3U) & ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_waw) 
                            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo1_stop_war)) 
                           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo2_stop_war)) 
                          | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_hard)))) 
           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt_stop_trap));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__op1_sub_op2 
        = (1ULL + (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1 
                   + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op2)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__op1_sub_op2 
        = (1ULL + (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1 
                   + (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op2)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_temp 
        = ((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal1) 
             | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx1) 
                & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
             ? vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr
             : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx1) 
                 & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                 ? vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr
                 : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr1)
                     ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf_pc_data
                     : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal2) 
                         | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx2) 
                            & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                         ? (4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)
                         : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx2) 
                             & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                             ? (4ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)
                             : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr2)
                                 ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf_pc_data
                                 : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal3) 
                                     | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx3) 
                                        & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                                     ? (8ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)
                                     : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx3) 
                                         & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                                         ? (8ULL + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)
                                         : ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr3)
                                             ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf_pc_data
                                             : (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal4) 
                                                 | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx4) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                                                 ? 
                                                (0xcULL 
                                                 + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)
                                                 : 
                                                (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx4) 
                                                  & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))
                                                  ? 
                                                 (0xcULL 
                                                  + vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)
                                                  : 
                                                 ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr4)
                                                   ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf_pc_data
                                                   : vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)))))))))))) 
           + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__operand2);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__es__DOT__gating 
        = (((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_submit_pc 
             >= vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc) 
            << 2U) | (((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_submit_pc 
                        >= vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc) 
                       << 1U) | (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_submit_pc 
                                 >= vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1 
        = ((1U & ((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop1)) 
                  & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type) 
                     >> 5U))) ? 1U : ((1U & (((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop1)) 
                                              & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type)) 
                                             & (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy
                                                [0U])))
                                       ? 1U : ((1U 
                                                & (((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop1)) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type)) 
                                                   & (~ 
                                                      vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy
                                                      [1U])))
                                                ? 2U
                                                : (
                                                   (1U 
                                                    & ((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop1)) 
                                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type) 
                                                          >> 1U)))
                                                    ? 4U
                                                    : 
                                                   ((1U 
                                                     & ((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop1)) 
                                                        & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type) 
                                                           >> 2U)))
                                                     ? 1U
                                                     : 
                                                    ((1U 
                                                      & (((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop1)) 
                                                          & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type) 
                                                             >> 3U)) 
                                                         & (~ 
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy
                                                            [0U])))
                                                      ? 1U
                                                      : 
                                                     ((1U 
                                                       & (((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop1)) 
                                                           & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type) 
                                                              >> 3U)) 
                                                          & (~ 
                                                             vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy
                                                             [1U])))
                                                       ? 2U
                                                       : 
                                                      ((1U 
                                                        & (((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop1)) 
                                                            & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type) 
                                                               >> 4U)) 
                                                           & (~ 
                                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy
                                                              [0U])))
                                                        ? 1U
                                                        : 
                                                       ((1U 
                                                         & (((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop1)) 
                                                             & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type) 
                                                                >> 4U)) 
                                                            & (~ 
                                                               vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy
                                                               [1U])))
                                                         ? 2U
                                                         : 0U)))))))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__should_updata 
        = ((((((0U == (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[0U] 
                       >> 0x1cU)) & (0U == (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[2U] 
                                            >> 0x1cU))) 
              & (0U == (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[4U] 
                        >> 0x1cU))) & (0U == (0xfU 
                                              & (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc[6U] 
                                                 >> 0x1bU)))) 
            & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop1))) 
           & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop2)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2 
        = ((1U & ((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop2)) 
                  & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type) 
                     >> 5U))) ? 1U : ((1U & (((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop2)) 
                                              & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type)) 
                                             & (~ vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy
                                                [1U])))
                                       ? 2U : ((1U 
                                                & (((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop2)) 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type)) 
                                                   & (~ 
                                                      vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy
                                                      [0U])))
                                                ? 1U
                                                : (
                                                   (1U 
                                                    & ((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop2)) 
                                                       & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type) 
                                                          >> 1U)))
                                                    ? 4U
                                                    : 
                                                   ((1U 
                                                     & ((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop2)) 
                                                        & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type) 
                                                           >> 2U)))
                                                     ? 1U
                                                     : 
                                                    ((1U 
                                                      & (((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop2)) 
                                                          & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type) 
                                                             >> 3U)) 
                                                         & (~ 
                                                            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy
                                                            [1U])))
                                                      ? 2U
                                                      : 
                                                     ((1U 
                                                       & (((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop2)) 
                                                           & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type) 
                                                              >> 3U)) 
                                                          & (~ 
                                                             vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy
                                                             [0U])))
                                                       ? 1U
                                                       : 
                                                      ((1U 
                                                        & (((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop2)) 
                                                            & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type) 
                                                               >> 4U)) 
                                                           & (~ 
                                                              vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy
                                                              [1U])))
                                                        ? 2U
                                                        : 
                                                       ((1U 
                                                         & (((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop2)) 
                                                             & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type) 
                                                                >> 4U)) 
                                                            & (~ 
                                                               vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy
                                                               [0U])))
                                                         ? 1U
                                                         : 0U)))))))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__op1_ls_op2 
        = (1U & ((((IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1 
                            >> 0x3fU)) & (~ (IData)(
                                                    (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op2 
                                                     >> 0x3fU)))) 
                  | (((~ (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1 
                                  >> 0x3fU))) & (~ (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op2 
                                                            >> 0x3fU)))) 
                     & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__op1_sub_op2 
                                >> 0x3fU)))) | (((IData)(
                                                         (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1 
                                                          >> 0x3fU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op2 
                                                            >> 0x3fU))) 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__op1_sub_op2 
                                                           >> 0x3fU)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__op1_ls_op2 
        = (1U & ((((IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1 
                            >> 0x3fU)) & (~ (IData)(
                                                    (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op2 
                                                     >> 0x3fU)))) 
                  | (((~ (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1 
                                  >> 0x3fU))) & (~ (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op2 
                                                            >> 0x3fU)))) 
                     & (IData)((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__op1_sub_op2 
                                >> 0x3fU)))) | (((IData)(
                                                         (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1 
                                                          >> 0x3fU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op2 
                                                            >> 0x3fU))) 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__op1_sub_op2 
                                                           >> 0x3fU)))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__forc_jumppc 
        = ((IData)(vlSelf->rst) ? 0ULL : (((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr1) 
                                             | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr2)) 
                                            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr3)) 
                                           | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr4))
                                           ? (0xfffffffffffffffeULL 
                                              & vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_temp)
                                           : vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_temp));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__decode1_ena 
        = ((0U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1)) 
           & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano)));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__decode2_ena 
        = ((0U != (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2)) 
           & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant)));
    if ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type))) {
        if ((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__data_jf 
                = (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1 
                   == vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op2);
        } else if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__data_jf 
                = (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1 
                   != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op2);
        } else if ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__data_jf 
                = (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1 
                   < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op2);
        } else if ((0x20U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__data_jf 
                = (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1 
                   >= vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op2);
        } else if ((4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__data_jf 
                = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__op1_ls_op2;
        } else if ((8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__data_jf 
                = (1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__op1_ls_op2)));
        }
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__forcast_state 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type) 
            >> 2U) & ((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode))
                       ? ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1 
                           == vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op2) 
                          ^ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread1))
                       : ((2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode))
                           ? ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1 
                               != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op2) 
                              ^ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread1))
                           : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode))
                               ? ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1 
                                   < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op2) 
                                  ^ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread1))
                               : ((0x20U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode))
                                   ? ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1 
                                       >= vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op2) 
                                      ^ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread1))
                                   : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode))
                                       ? ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__op1_ls_op2) 
                                          ^ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread1))
                                       : ((8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode)) 
                                          & ((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__op1_ls_op2)) 
                                             ^ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread1)))))))));
    if ((4U & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type))) {
        if ((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__data_jf 
                = (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1 
                   == vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op2);
        } else if ((2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__data_jf 
                = (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1 
                   != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op2);
        } else if ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__data_jf 
                = (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1 
                   < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op2);
        } else if ((0x20U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__data_jf 
                = (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1 
                   >= vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op2);
        } else if ((4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__data_jf 
                = vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__op1_ls_op2;
        } else if ((8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode))) {
            vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__data_jf 
                = (1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__op1_ls_op2)));
        }
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__forcast_state 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type) 
            >> 2U) & ((1U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode))
                       ? ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1 
                           == vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op2) 
                          ^ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread2))
                       : ((2U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode))
                           ? ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1 
                               != vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op2) 
                              ^ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread2))
                           : ((0x10U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode))
                               ? ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1 
                                   < vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op2) 
                                  ^ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread2))
                               : ((0x20U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode))
                                   ? ((vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1 
                                       >= vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op2) 
                                      ^ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread2))
                                   : ((4U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode))
                                       ? ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__op1_ls_op2) 
                                          ^ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread2))
                                       : ((8U == (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode)) 
                                          & ((~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__op1_ls_op2)) 
                                             ^ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread2)))))))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_jnxtpc_temp 
        = ((((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx1) 
               & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1))) 
              | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx2) 
                 & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))) 
             | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx3) 
                & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1)))) 
            | ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx4) 
               & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1))))
            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__forc_jumppc
            : (((((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena1) 
                  | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena2)) 
                 | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena3)) 
                | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena4))
                ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__forc_jumppc
                : (vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr 
                   + (QData)((IData)(((0U == (0xfU 
                                              & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)))
                                       ? 0x10U : ((4U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)))
                                                   ? 0xcU
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)))
                                                    ? 8U
                                                    : 
                                                   ((0xcU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr)))
                                                     ? 4U
                                                     : 0U)))))))));
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__depcbf1 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__decode1_ena) 
            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__can1))
            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_pc
            : 0ULL);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__depcbf2 
        = (((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__decode2_ena) 
            | (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__can2))
            ? vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_pc
            : 0ULL);
    if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__forcast_state) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_ena 
            = (1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano)));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_pc 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__forcast_state)
                ? ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread1)
                    ? (4ULL + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc)
                    : ((((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__b_imm) 
                                                   >> 0xbU))))) 
                         << 0xcU) | (QData)((IData)(
                                                    (0xfffU 
                                                     & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__b_imm) 
                                                        << 1U))))) 
                       + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc))
                : 0ULL);
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_ena 
            = (1U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__jalr_pc_ena) 
                     & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano))));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_pc 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__jalr_pc_ena)
                ? ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jalr)
                    ? (0xfffffffffffffffeULL & ((((- (QData)((IData)(
                                                                     (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                                      >> 0x1fU)))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst 
                                                                    >> 0x14U)))) 
                                                + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1))
                    : 0ULL) : 0ULL);
    }
    if (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__forcast_state) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_ena 
            = (1U & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant)));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_pc 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__forcast_state)
                ? ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread2)
                    ? (4ULL + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc)
                    : ((((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__b_imm) 
                                                   >> 0xbU))))) 
                         << 0xcU) | (QData)((IData)(
                                                    (0xfffU 
                                                     & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__b_imm) 
                                                        << 1U))))) 
                       + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc))
                : 0ULL);
    } else {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_ena 
            = (1U & ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__jalr_pc_ena) 
                     & (~ (IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant))));
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_pc 
            = ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__jalr_pc_ena)
                ? ((IData)(vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jalr)
                    ? (0xfffffffffffffffeULL & ((((- (QData)((IData)(
                                                                     (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                                      >> 0x1fU)))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst 
                                                                    >> 0x14U)))) 
                                                + vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1))
                    : 0ULL) : 0ULL);
    }
}

void Vysyx_22040228___024root___eval_initial(Vysyx_22040228___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040228__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040228___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vysyx_22040228___024root___settle__TOP__4(Vysyx_22040228___024root* vlSelf) VL_ATTR_COLD;

void Vysyx_22040228___024root___eval_settle(Vysyx_22040228___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040228__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040228___024root___eval_settle\n"); );
    // Body
    Vysyx_22040228___024root___settle__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vysyx_22040228___024root___settle__TOP__5(vlSelf);
}

void Vysyx_22040228___024root___final(Vysyx_22040228___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040228__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040228___024root___final\n"); );
}

void Vysyx_22040228___024root___ctor_var_reset(Vysyx_22040228___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040228__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040228___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->out_slave_addr_ = VL_RAND_RESET_Q(64);
    vlSelf->out_serial_data_ = VL_RAND_RESET_Q(64);
    vlSelf->out_serial_write_ = VL_RAND_RESET_I(1);
    vlSelf->out_rtc_read_ = VL_RAND_RESET_I(1);
    vlSelf->in_rtc_data_ = VL_RAND_RESET_Q(64);
    vlSelf->read_ena_sign_ = VL_RAND_RESET_I(1);
    vlSelf->out_addr_outp = VL_RAND_RESET_Q(64);
    vlSelf->read_data_sign_ = VL_RAND_RESET_Q(64);
    vlSelf->out_write_ram_ena = VL_RAND_RESET_I(1);
    vlSelf->out_write_ram_data = VL_RAND_RESET_Q(64);
    vlSelf->out_write_ram_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu_inst_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu_data_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu_wmask = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040228__DOT__rvcpu_data_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu_we = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu_re = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu_inst_counter = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040228__DOT__rvcpu_empty = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__uncache_arb_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__uncache_arb_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__uncache_arb_data_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__uncache_arb_we = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__uncache_arb_re = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__uncache_arb_finish = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__uncache_dc_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__uncache_dc_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__uncache_dc_mask = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040228__DOT__uncache_dc_we = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__uncache_dc_re = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__uncache_dc_finish = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040228__DOT__i_cache_inst_data);
    vlSelf->ysyx_22040228__DOT__i_cache_inst_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__i_cache_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__i_caceh_resp = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__i_cache_canin = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->ysyx_22040228__DOT__i_cache_pc);
    vlSelf->ysyx_22040228__DOT__d_cache_data_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__d_cache_out_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__d_cache_out_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__d_cache_out_resp = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__d_cache_out_type = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040228__DOT__arbitrate_d_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__arbitrate_d_ok = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__arbitrate_i_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__arbitrate_i_ok = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__t_axi_aw_id = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040228__DOT__t_axi_aw_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__t_axi_aw_size = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040228__DOT__t_axi_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__t_axi_w_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__t_axi_w_strb = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040228__DOT__t_axi_w_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__t_axi_b_id = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040228__DOT__t_axi_b_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__t_axi_ar_id = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040228__DOT__t_axi_ar_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__t_axi_ar_size = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040228__DOT__t_axi_ar_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__t_axi_r_id = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040228__DOT__t_axi_r_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__t_axi_r_last = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__t_axi_r_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__add_axi_aw_id = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(192, vlSelf->ysyx_22040228__DOT__add_axi_aw_addr);
    vlSelf->ysyx_22040228__DOT__add_axi_aw_len = VL_RAND_RESET_I(24);
    vlSelf->ysyx_22040228__DOT__add_axi_aw_size = VL_RAND_RESET_I(9);
    vlSelf->ysyx_22040228__DOT__add_axi_aw_burst = VL_RAND_RESET_I(6);
    vlSelf->ysyx_22040228__DOT__add_axi_aw_cache = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22040228__DOT__add_axi_aw_prot = VL_RAND_RESET_I(9);
    vlSelf->ysyx_22040228__DOT__add_axi_aw_qos = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22040228__DOT__add_axi_aw_valid = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040228__DOT__add_axi_aw_ready = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(192, vlSelf->ysyx_22040228__DOT__add_axi_w_data);
    vlSelf->ysyx_22040228__DOT__add_axi_w_strb = VL_RAND_RESET_I(24);
    vlSelf->ysyx_22040228__DOT__add_axi_w_last = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040228__DOT__add_axi_w_valid = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040228__DOT__add_axi_w_ready = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040228__DOT__add_axi_b_id = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22040228__DOT__add_axi_b_valid = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040228__DOT__add_axi_b_ready = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040228__DOT__add_axi_ar_id = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(192, vlSelf->ysyx_22040228__DOT__add_axi_ar_addr);
    vlSelf->ysyx_22040228__DOT__add_axi_ar_len = VL_RAND_RESET_I(24);
    vlSelf->ysyx_22040228__DOT__add_axi_ar_size = VL_RAND_RESET_I(9);
    vlSelf->ysyx_22040228__DOT__add_axi_ar_burst = VL_RAND_RESET_I(6);
    vlSelf->ysyx_22040228__DOT__add_axi_ar_cache = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22040228__DOT__add_axi_ar_prot = VL_RAND_RESET_I(9);
    vlSelf->ysyx_22040228__DOT__add_axi_ar_qos = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22040228__DOT__add_axi_ar_valid = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040228__DOT__add_axi_ar_ready = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040228__DOT__add_axi_r_id = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(192, vlSelf->ysyx_22040228__DOT__add_axi_r_data);
    vlSelf->ysyx_22040228__DOT__add_axi_r_last = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040228__DOT__add_axi_r_valid = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040228__DOT__add_axi_r_ready = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040228__DOT__soc_axi_aw_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__soc_axi_w_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__soc_axi_ar_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__io_axi_aw_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__io_axi_w_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__io_axi_ar_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__mmio_thing = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_de_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_de_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_phb_addr = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__pc_regsf_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf_pc_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__check_pcif = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op1ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_ref_op2ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_type = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_opcode = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_deex_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump1_flush = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de1_so_type = VL_RAND_RESET_I(6);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op1ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_ref_op2ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_type = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_opcode = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_deex_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__jump2_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__de2_so_type = VL_RAND_RESET_I(6);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose1 = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_chose2 = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_isu_stop2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleano = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_idex_cleant = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__so_submit_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_timer_init = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_type = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op1_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_op2_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_type = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_inst_opcode = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op1_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_op2_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_inst_type = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_op2_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_offset = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu_sel = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_su_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__ao_pc_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__at_su_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_su_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mm_so_busy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_dara = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_ao_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_dara = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_at_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_dara = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__s_r_mm_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data0 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr0 = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena0 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr1 = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr2 = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data3 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr3 = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena3 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data4 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr4 = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena4 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data5 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr5 = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena5 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data6 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr6 = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena6 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_data7 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addr7 = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_ena7 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_datag = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_addrg = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__comt_de_enag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm1 = VL_RAND_RESET_I(20);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm1 = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm2 = VL_RAND_RESET_I(20);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm2 = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm3 = VL_RAND_RESET_I(20);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm3 = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_imm4 = VL_RAND_RESET_I(20);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__b_imm4 = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal3 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr3 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx3 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jal4 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_jalr4 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__inst_bxx4 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__operand2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__j_temp = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__forc_jumppc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena3 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__jump_ena4 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_jnxtpc_temp = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__instfact__DOT__pc_temp_ena = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addo = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jdata1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadt = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__phb_addreadw = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__history_jread2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__should_updata = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst);
    VL_RAND_RESET_W(256, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__clean_temp = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_clean = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__b_imm = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_lui = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_auipc = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jal = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_jump = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srai = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_addiw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_slliw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srliw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sraiw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_add = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sub = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sll = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_slt = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sltu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_xor = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srl = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sra = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_or = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_and = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_div = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mul = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulh = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulhsu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulhu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_rem = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_addw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_subw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sllw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_srlw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_sraw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divuw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_divw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mulw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remuw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_remw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrs = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrc = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrwi = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrsi = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_csrrci = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_ecall = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_ebreak = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_mret = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__inst_fence_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__store_addr_offset = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com1_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com2_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com3_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com4_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com5_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com6_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com7_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__com8_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb1_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb2_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb3_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu1_op2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__alu2_op2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__wb2_op2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__mem_op2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__forcast_state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__data_jf = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__op1_sub_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__op1_ls_op2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_uo__DOT__jalr_pc_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__b_imm = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_lui = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_auipc = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jal = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_jump = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srai = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_addiw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_slliw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srliw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sraiw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_add = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sub = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sll = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_slt = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sltu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_xor = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srl = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sra = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_or = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_and = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_div = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mul = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulh = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulhsu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulhu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_rem = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_addw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_subw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sllw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_srlw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_sraw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divuw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_divw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mulw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remuw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_remw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrs = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrc = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrwi = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrsi = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_csrrci = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_ecall = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_ebreak = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_mret = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__inst_fence_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__store_addr_offset = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com1_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com2_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com3_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com4_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com5_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com6_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com7_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__com8_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb1_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb2_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb3_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu1_op2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__alu2_op2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__wb2_op2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__mem_op2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__forcast_state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__data_jf = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__op1_sub_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__op1_ls_op2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__decode_ut__DOT__jalr_pc_ena = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__reg_exe_name[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__busy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_waw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt_stop_waw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo1_stop_war = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo2_stop_war = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt1_stop_war = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt2_stop_war = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_hard = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt_stop_hard = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudo_stop_trap = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__shoudt_stop_trap = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__can1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__caa1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__can2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__socreboard_u__DOT__caa2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__exe_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sub_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_add_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_addw_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_ls_op2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__shift_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sllw_op2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__sllw_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_srlw_op2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__srlw_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_sraw_op2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__sraw_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_subw_op2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__upper_imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_finish_sign = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__divrem_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__dr_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op1_divdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__op2_divdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__mul_div_req = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__tmr_trap_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_idx = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__read_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__ecall_trap_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__cmt_mret_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_wr_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr_rd_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__wbck_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__trap_mcause_value = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__mult_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multipler = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_temp);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__product_signbit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__counter = VL_RAND_RESET_I(7);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__dividend_t = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__divider_t = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(129, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_a);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__temp_b);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__finish = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__sigin_inst = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__yushu = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_divider__DOT__shang = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcycle = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mstatus = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__mstatus_mpie_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__mstatus_mpie_nxt = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpie = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__mstatus_mie_nxt = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mie = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__mstatus_mpp_nxt = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_mpp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus_fs = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mstatus = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mtvec_base = VL_RAND_RESET_Q(62);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mepc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__wr_mcause = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcause_nxt = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mcause = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mie_mtie = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mip_mtip = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__csr0__DOT__csr_mscrstch = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__exe_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sub_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_add_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_addw_op2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_ls_op2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__shift_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sllw_op2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__sllw_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_srlw_op2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__srlw_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_sraw_op2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__sraw_res = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_subw_op2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__upper_imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_finish_sign = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__divrem_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__dr_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op1_divdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__op2_divdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__mul_div_req = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__mult_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multipler = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_temp);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__product_signbit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__counter = VL_RAND_RESET_I(7);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__sign = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__dividend_t = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__divider_t = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(129, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_a);
    VL_RAND_RESET_W(65, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__temp_b);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__finish = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__sigin_inst = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__yushu = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_divider__DOT__shang = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__load_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__data_byte = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__data_half_byte = VL_RAND_RESET_I(16);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__data_word = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__store_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__mmu__DOT__store_mask = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__es__DOT__gating = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        VL_RAND_RESET_W(68, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__decode1_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__decode2_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff1_pc1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff1_pc2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff1_pc3 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff2_pc1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff2_pc2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff2_pc3 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff3_pc1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff3_pc2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff3_pc3 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff4_pc1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff4_pc2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff4_pc3 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff5_pc1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff5_pc2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff5_pc3 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff6_pc1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff6_pc2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff6_pc3 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff7_pc1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff7_pc2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff7_pc3 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff8_pc1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff8_pc2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff8_pc3 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff3 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff4 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff5 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff6 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__able_buff7 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__depcbf1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__depcbf2 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(67, vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__old_ready);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__diff_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc7 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc6 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc5 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc4 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc3 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__chose_pc0 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__clean_submcont = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__difftest_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__difftest_pc = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040228__DOT__uncache_mmio7__DOT__uncache = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__icache_if_shankhand = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst = VL_RAND_RESET_I(6);
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__state_inst_nxt = VL_RAND_RESET_I(6);
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__fence_counter = VL_RAND_RESET_I(7);
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__read_ok = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_pc_);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__inst_data_);
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__write_i_ok = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cahce_miss_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cache_miss_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__write_m_ok = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cache_mism_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__cahce_mism_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readl_n = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_date);
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__miss_strb_t = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__counter_readh_n = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__temp_data);
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__mism_strb_t = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__oteg_ena_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__oteg_addr_i = VL_RAND_RESET_I(6);
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__tteg_ena_i = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outo);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__data_outt);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter1[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i_counter2[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__ram[__Vi0] = VL_RAND_RESET_I(22);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_data_r = VL_RAND_RESET_I(22);
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__out_valid_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__ram[__Vi0] = VL_RAND_RESET_I(22);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_data_r = VL_RAND_RESET_I(22);
    vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__out_valid_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram[__Vi0]);
    }
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter = VL_RAND_RESET_I(7);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_valid_req = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_request = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_success = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_request = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_success = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_write_valid1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_write_valid2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_data_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_addr_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__fence_type_out = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__delay_oclk = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread = VL_RAND_RESET_I(6);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dread_nxt = VL_RAND_RESET_I(6);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_ok = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__mem_hit_ok = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_ok = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_out_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_out_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_out_type = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_clean_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty_clean_t = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_i_ok = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_out_type = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_out_addr = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_strb);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_tag_ena1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_temp);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_tag_ena2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missr_data_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regr_ = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite = VL_RAND_RESET_I(6);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__state_dwrite_nxt = VL_RAND_RESET_I(6);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__read_w_ok = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040228__DOT__data_cache3__DOT__hitw_data_temp);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__strb_extection = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_ok = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_out_addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_out_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_out_type = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_clean_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirtyw_clean_t = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_i_ok = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_out_type = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_out_addr = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_strb);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_tag_ena1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_temp);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_tag_ena2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__missw_data_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__write_regw_ = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter1[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__counter2[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__dirty2[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__oteg_ena_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__oteg_addr_i = VL_RAND_RESET_I(6);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__tteg_ena_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__tteg_addr_i = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040228__DOT__data_cache3__DOT__data_out);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__ram[__Vi0] = VL_RAND_RESET_I(23);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_data_r = VL_RAND_RESET_I(23);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__out_valid_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__ram[__Vi0] = VL_RAND_RESET_I(23);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_data_r = VL_RAND_RESET_I(23);
    vlSelf->ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__out_valid_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram[__Vi0]);
    }
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_dcache_shankhand = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_dcache_shankhand = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_icache_shankhand = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__read_uncahce_shankhand = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__write_uncahce_shankhand = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__arbitrate_state_nxt = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__axi_state_n = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dread = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_dwrite = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_iread = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahceread = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__success_uncahcewrite = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dread = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_dwrite = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_iread = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unread = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__sign_delay_unwrite = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__arbitratem4__DOT__aw_enable = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_write_state_nxt = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__ar_shankhand = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__s_read_state_nxt = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__write_data_reg = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__write_addr_reg = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__r_s_axi_ar_id = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040228__DOT__axi_mnq4__DOT__r_s_axi_aw_id = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtime = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtimecmp = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__clint6__DOT__success_aw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__clint6__DOT__success_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__clint6__DOT__success_b = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__clint6__DOT__resp_success = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__clint6__DOT__wmask = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040228__DOT__clint6__DOT__timer_state_n = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040228__DOT__clint6__DOT__timew_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040228__DOT__clint6__DOT__timew_state_n = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040228__DOT__clint6__DOT__timeraw_id_temp = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtime_temp = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__clint6__DOT__csr_mtimecmp_temp = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__clint6__DOT__read_csrdata_temp = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__clint6__DOT__timerar_id_temp = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__aw_shankhand = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_write_state_nxt = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__ar_shankhand = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__s_read_state_nxt = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__write_data_reg = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040228__DOT__io_slave_axi9__DOT__write_addr_reg = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu_inst_addr = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v0 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v1 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__forecast__DOT__ramdata__v2 = 0;
    VL_RAND_RESET_W(256, vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_pc);
    VL_RAND_RESET_W(128, vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__inreg_inst);
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_inst = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_inst = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_inst);
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de1_pc = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__iss_de2_pc = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(256, vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__inst8__DOT__temp_pc);
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo_inst_opcode = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut_rd_ena = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut_inst = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__mmu_rd_ena = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff__v0 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff__v8 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff__v16 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff__v24 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_enabuff__v32 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff__v0 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff__v8 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff__v16 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff__v24 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_addrbuff__v32 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff__v0 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff__v8 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff__v24 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff__v40 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff__v56 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_pcbuff__v72 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff__v0 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff__v8 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff__v16 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff__v24 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__commit_u__DOT__commit_databuff__v32 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v0 = 0;
    vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v32 = 0;
    vlSelf->__Vdlyvval__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v32 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__rvcpu1__DOT__regsf__DOT__regs__v32 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v0 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__i_counter2__v1 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v0 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__i_counter1__v1 = 0;
    vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__ram__v0 = VL_RAND_RESET_I(22);
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__valid__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__valid__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHEO__DOT__valid__v0 = 0;
    vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__ram__v0 = VL_RAND_RESET_I(22);
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__valid__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__valid__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__TEG_ICACHET__DOT__valid__v0 = 0;
    vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram__v0 = 0;
    VL_RAND_RESET_W(128, vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram__v0);
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHEO__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram__v0 = 0;
    VL_RAND_RESET_W(128, vlSelf->__Vdlyvval__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram__v0);
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__inst_cache2__DOT__REM_ICACHET__DOT__ram__v0 = 0;
    vlSelf->__Vdly__ysyx_22040228__DOT__data_cache3__DOT__counter = VL_RAND_RESET_I(7);
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter1__v0 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter1__v64 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter1__v65 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter1__v66 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter2__v0 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter2__v64 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter2__v65 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__counter2__v66 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty1__v0 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty1__v64 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty2__v64 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty1__v65 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty2__v65 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty1__v66 = 0;
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__dirty2__v66 = 0;
    vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__ram__v0 = VL_RAND_RESET_I(23);
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__valid__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__valid__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHEO__DOT__valid__v0 = 0;
    vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__ram__v0 = VL_RAND_RESET_I(23);
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__valid__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__valid__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__TEG_DCACHET__DOT__valid__v0 = 0;
    vlSelf->__Vdlyvdim0__ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram__v0 = 0;
    VL_RAND_RESET_W(128, vlSelf->__Vdlyvval__ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram__v0);
    vlSelf->__Vdlyvset__ysyx_22040228__DOT__data_cache3__DOT__REM_DCACHE__DOT__ram__v0 = 0;
    VL_RAND_RESET_W(128, vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__aluo__DOT__decode1_multiplier__DOT__multiplcand);
    VL_RAND_RESET_W(128, vlSelf->__Vdly__ysyx_22040228__DOT__rvcpu1__DOT__alut__DOT__decode2_multiplier__DOT__multiplcand);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
