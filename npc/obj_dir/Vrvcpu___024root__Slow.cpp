// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvcpu.h for the primary calling header

#include "Vrvcpu___024root.h"
#include "Vrvcpu__Syms.h"

#include "verilated_dpi.h"

//==========


void Vrvcpu___024root___ctor_var_reset(Vrvcpu___024root* vlSelf);

Vrvcpu___024root::Vrvcpu___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vrvcpu___024root___ctor_var_reset(this);
}

void Vrvcpu___024root::__Vconfigure(Vrvcpu__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vrvcpu___024root::~Vrvcpu___024root() {
}

void Vrvcpu___024root____Vdpiimwrap_rvcpu__DOT__ex5__DOT__Ebreak_teap_TOP(CData/*0:0*/ rvsign);
void Vrvcpu___024root____Vdpiimwrap_rvcpu__DOT__regfile10__DOT__difftest_dut_regs_TOP(QData/*63:0*/ Z0, QData/*63:0*/ ra, QData/*63:0*/ sp, QData/*63:0*/ gp, QData/*63:0*/ tp, QData/*63:0*/ t0, QData/*63:0*/ t1, QData/*63:0*/ t2, QData/*63:0*/ fp, QData/*63:0*/ s1, QData/*63:0*/ a0, QData/*63:0*/ a1, QData/*63:0*/ a2, QData/*63:0*/ a3, QData/*63:0*/ a4, QData/*63:0*/ a5, QData/*63:0*/ a6, QData/*63:0*/ a7, QData/*63:0*/ s2, QData/*63:0*/ s3, QData/*63:0*/ s4, QData/*63:0*/ s5, QData/*63:0*/ s6, QData/*63:0*/ s7, QData/*63:0*/ s8, QData/*63:0*/ s9, QData/*63:0*/ s10, QData/*63:0*/ a11, QData/*63:0*/ t3, QData/*63:0*/ t4, QData/*63:0*/ t5, QData/*63:0*/ t6);
void Vrvcpu___024root____Vdpiimwrap_rvcpu__DOT__mem_wb8__DOT__difftest_dut_pc_TOP(QData/*63:0*/ pc_data, CData/*0:0*/ exe);

void Vrvcpu___024root___settle__TOP__2(Vrvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->inst_ena = vlSelf->rst;
    vlSelf->rvcpu__DOT__pip_fore0__DOT__j_imm = ((0x80000U 
                                                  & (vlSelf->inst 
                                                     >> 0xcU)) 
                                                 | ((0x7f800U 
                                                     & (vlSelf->inst 
                                                        >> 1U)) 
                                                    | ((0x400U 
                                                        & (vlSelf->inst 
                                                           >> 0xaU)) 
                                                       | (0x3ffU 
                                                          & (vlSelf->inst 
                                                             >> 0x15U)))));
    vlSelf->rvcpu__DOT__pip_fore0__DOT__b_imm = ((0x800U 
                                                  & (vlSelf->inst 
                                                     >> 0x14U)) 
                                                 | ((0x400U 
                                                     & (vlSelf->inst 
                                                        << 3U)) 
                                                    | ((0x3f0U 
                                                        & (vlSelf->inst 
                                                           >> 0x15U)) 
                                                       | (0xfU 
                                                          & (vlSelf->inst 
                                                             >> 8U)))));
    vlSelf->rvcpu__DOT__if_stall_req = (1U & ((~ (IData)(vlSelf->rst)) 
                                              & (~ (IData)(vlSelf->bui_inst_valid))));
    vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_jalr = (IData)(
                                                            (0x67U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->inst)));
    vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_bxx = (IData)(
                                                           (0x63U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->inst)));
    if ((0x10U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))) {
        Vrvcpu___024root____Vdpiimwrap_rvcpu__DOT__ex5__DOT__Ebreak_teap_TOP(1U);
    } else {
        Vrvcpu___024root____Vdpiimwrap_rvcpu__DOT__ex5__DOT__Ebreak_teap_TOP(0U);
    }
    Vrvcpu___024root____Vdpiimwrap_rvcpu__DOT__regfile10__DOT__difftest_dut_regs_TOP(
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [0U], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [1U], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [2U], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [3U], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [4U], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [5U], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [6U], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [7U], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [8U], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [9U], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [0xaU], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [0xbU], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [0xcU], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [0xdU], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [0xeU], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [0xfU], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [0x10U], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [0x11U], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [0x12U], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [0x13U], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [0x14U], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [0x15U], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [0x16U], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [0x17U], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [0x18U], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [0x19U], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [0x1aU], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [0x1bU], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [0x1cU], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [0x1dU], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [0x1eU], 
                                                                                vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                                                [0x1fU]);
    Vrvcpu___024root____Vdpiimwrap_rvcpu__DOT__mem_wb8__DOT__difftest_dut_pc_TOP(vlSelf->rvcpu__DOT__mem_wb8__DOT__pc_data1, (IData)(vlSelf->rvcpu__DOT__mem_wb8__DOT__data_ena1));
    vlSelf->inst_addr = vlSelf->rvcpu__DOT__pc;
    vlSelf->data_addr = ((IData)(vlSelf->rst) ? 0ULL
                          : vlSelf->rvcpu__DOT__exmem_mem_lsaddr);
    vlSelf->rvcpu__DOT__ex_mem_addr = ((IData)((0U 
                                                != 
                                                (3U 
                                                 & (IData)(vlSelf->rvcpu__DOT__idex_ex_type))))
                                        ? (vlSelf->rvcpu__DOT__idex_ex_op1 
                                           + (((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->rvcpu__DOT__idex_ex_offset) 
                                                                      >> 0xbU))))) 
                                               << 0xcU) 
                                              | (QData)((IData)(vlSelf->rvcpu__DOT__idex_ex_offset))))
                                        : 0ULL);
    if (vlSelf->rst) {
        vlSelf->rvcpu__DOT__mem7__DOT__store_mask = 0U;
        vlSelf->rvcpu__DOT__mem7__DOT__store_data = 0ULL;
    } else {
        vlSelf->rvcpu__DOT__mem7__DOT__store_mask = 
            ((4U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
              ? 0U : ((2U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
                       ? ((1U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
                           ? 0xffU : ((IData)(vlSelf->rst)
                                       ? 0U : ((1U 
                                                & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                ? 0xf0U
                                                : 0xfU)))
                       : ((1U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
                           ? ((IData)(vlSelf->rst) ? 0U
                               : ((0U == (3U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr)))
                                   ? 3U : ((1U == (3U 
                                                   & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr)))
                                            ? 0xcU : 
                                           ((2U == 
                                             (3U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr)))
                                             ? 0x30U
                                             : 0xc0U))))
                           : ((IData)(vlSelf->rst) ? 0U
                               : ((1U & (IData)((vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                 >> 2U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                     >> 1U)))
                                       ? ((1U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                           ? 0x80U : 0x40U)
                                       : ((1U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                           ? 0x20U : 0x10U))
                                   : ((1U & (IData)(
                                                    (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                     >> 1U)))
                                       ? ((1U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                           ? 8U : 4U)
                                       : ((1U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                           ? 2U : 1U)))))));
        vlSelf->rvcpu__DOT__mem7__DOT__store_data = 
            ((4U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
              ? 0ULL : ((2U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
                         ? ((1U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
                             ? vlSelf->rvcpu__DOT__exmem_mem_data
                             : ((IData)(vlSelf->rst)
                                 ? 0ULL : ((1U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                            ? ((QData)((IData)(vlSelf->rvcpu__DOT__exmem_mem_data)) 
                                               << 0x20U)
                                            : (QData)((IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))))
                         : ((1U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
                             ? ((IData)(vlSelf->rst)
                                 ? 0ULL : ((0U == (3U 
                                                   & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr)))
                                            ? (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data))))
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr)))
                                                ? ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                   << 0x10U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr)))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                    << 0x20U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                    << 0x30U)))))
                             : ((IData)(vlSelf->rst)
                                 ? 0ULL : ((1U & (IData)(
                                                         (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                          >> 2U)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                           >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                    << 0x38U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                    << 0x30U))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                    << 0x28U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                    << 0x20U)))
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                           >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                    << 0x18U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                    << 0x10U))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))) 
                                                    << 8U)
                                                    : (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->rvcpu__DOT__exmem_mem_data)))))))))));
    }
    vlSelf->we = (1U & ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->rvcpu__DOT__exmem_mem_type)));
    vlSelf->re = (1U & ((~ (IData)(vlSelf->rst)) & 
                        ((IData)(vlSelf->rvcpu__DOT__exmem_mem_type) 
                         >> 1U)));
    vlSelf->rvcpu__DOT__mem7__DOT__data_byte = (0xffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                               >> 2U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                                >> 1U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                      ? (IData)(
                                                                (vlSelf->data_i 
                                                                 >> 0x38U))
                                                      : (IData)(
                                                                (vlSelf->data_i 
                                                                 >> 0x30U)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                      ? (IData)(
                                                                (vlSelf->data_i 
                                                                 >> 0x28U))
                                                      : (IData)(
                                                                (vlSelf->data_i 
                                                                 >> 0x20U))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->rvcpu__DOT__exmem_mem_lsaddr 
                                                                >> 1U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                      ? (IData)(
                                                                (vlSelf->data_i 
                                                                 >> 0x18U))
                                                      : (IData)(
                                                                (vlSelf->data_i 
                                                                 >> 0x10U)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                      ? (IData)(
                                                                (vlSelf->data_i 
                                                                 >> 8U))
                                                      : (IData)(vlSelf->data_i)))));
    vlSelf->rvcpu__DOT__mem7__DOT__data_half_byte = 
        (0xffffU & ((0U == (3U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr)))
                     ? (IData)(vlSelf->data_i) : ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr)))
                                                   ? (IData)(
                                                             (vlSelf->data_i 
                                                              >> 0x10U))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr)))
                                                    ? (IData)(
                                                              (vlSelf->data_i 
                                                               >> 0x20U))
                                                    : (IData)(
                                                              (vlSelf->data_i 
                                                               >> 0x30U))))));
    vlSelf->rvcpu__DOT__mem7__DOT__data_word = ((1U 
                                                 & (IData)(vlSelf->rvcpu__DOT__exmem_mem_lsaddr))
                                                 ? (IData)(
                                                           (vlSelf->data_i 
                                                            >> 0x20U))
                                                 : (IData)(vlSelf->data_i));
    if (vlSelf->rst) {
        vlSelf->rvcpu__DOT__id3__DOT__inst_lui = 0U;
        vlSelf->rvcpu__DOT__id3__DOT__inst_auipc = 0U;
        vlSelf->rvcpu__DOT__id3__DOT__inst_jal = 0U;
    } else {
        vlSelf->rvcpu__DOT__id3__DOT__inst_lui = (IData)(
                                                         (0xdU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->rvcpu__DOT__if_id_inst 
                                                              >> 2U))));
        vlSelf->rvcpu__DOT__id3__DOT__inst_auipc = (IData)(
                                                           (5U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->rvcpu__DOT__if_id_inst 
                                                                >> 2U))));
        vlSelf->rvcpu__DOT__id3__DOT__inst_jal = (IData)(
                                                         (0x1bU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->rvcpu__DOT__if_id_inst 
                                                              >> 2U))));
    }
    vlSelf->rvcpu__DOT__ex5__DOT__op1_subw_op2 = ((IData)(vlSelf->rvcpu__DOT__idex_ex_op2) 
                                                  - (IData)(vlSelf->rvcpu__DOT__idex_ex_op2));
    vlSelf->rvcpu__DOT__ex5__DOT__upper_imm = (((QData)((IData)(
                                                                (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->rvcpu__DOT__idex_ex_op2 
                                                                                >> 0x13U))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((IData)(vlSelf->rvcpu__DOT__idex_ex_op2) 
                                                                  << 0xcU))));
    vlSelf->rvcpu__DOT__ex5__DOT__shift_res = (((0x3fU 
                                                 >= 
                                                 (0x7fU 
                                                  & ((IData)(0x40U) 
                                                     - 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->rvcpu__DOT__idex_ex_op2)))))
                                                 ? 
                                                ((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->rvcpu__DOT__idex_ex_op1 
                                                                                >> 0x3fU)))))) 
                                                 << 
                                                 (0x7fU 
                                                  & ((IData)(0x40U) 
                                                     - 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->rvcpu__DOT__idex_ex_op2)))))
                                                 : 0ULL) 
                                               | (vlSelf->rvcpu__DOT__idex_ex_op1 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->rvcpu__DOT__idex_ex_op2))));
    vlSelf->rvcpu__DOT__id3__DOT__inst_jalr = ((IData)(vlSelf->rst)
                                                ? 0U
                                                : (IData)(
                                                          (0x19U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->rvcpu__DOT__if_id_inst 
                                                               >> 2U)))));
    vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus 
        = ((((QData)((IData)(((3U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs)) 
                              << 0x1fU))) << 0x20U) 
            | ((QData)((IData)((((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs) 
                                 << 2U) | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp)))) 
               << 0xbU)) | (QData)((IData)((((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie) 
                                             << 7U) 
                                            | ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie) 
                                               << 3U)))));
    vlSelf->rvcpu__DOT__ex5__DOT__op1_sllw_op2 = ((IData)(vlSelf->rvcpu__DOT__idex_ex_op1) 
                                                  << 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->rvcpu__DOT__idex_ex_op2)));
    vlSelf->rvcpu__DOT__ex5__DOT__op1_srlw_op2 = ((IData)(vlSelf->rvcpu__DOT__idex_ex_op1) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->rvcpu__DOT__idex_ex_op2)));
    vlSelf->rvcpu__DOT__ex5__DOT__op1_sraw_op2 = ((
                                                   (0x1fU 
                                                    >= 
                                                    (0x3fU 
                                                     & ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_op2)))))
                                                    ? 
                                                   ((- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->rvcpu__DOT__idex_ex_op1 
                                                                           >> 0x1fU))))) 
                                                    << 
                                                    (0x3fU 
                                                     & ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_op2)))))
                                                    : 0U) 
                                                  | ((IData)(vlSelf->rvcpu__DOT__idex_ex_op1) 
                                                     >> 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->rvcpu__DOT__idex_ex_op2))));
    vlSelf->rvcpu__DOT__ex5__DOT__csr_idx = ((0x80U 
                                              & (IData)(vlSelf->rvcpu__DOT__idex_ex_type))
                                              ? (0xfffU 
                                                 & (IData)(vlSelf->rvcpu__DOT__idex_ex_op2))
                                              : 0U);
    vlSelf->rvcpu__DOT__ex5__DOT__op1_add_op2 = (vlSelf->rvcpu__DOT__idex_ex_op1 
                                                 + vlSelf->rvcpu__DOT__idex_ex_op2);
    vlSelf->rvcpu__DOT__ex5__DOT__op1_sub_op2 = (1ULL 
                                                 + 
                                                 (vlSelf->rvcpu__DOT__idex_ex_op1 
                                                  + 
                                                  (~ vlSelf->rvcpu__DOT__idex_ex_op2)));
    vlSelf->rvcpu__DOT__id_ex_type = ((((IData)(vlSelf->rst)
                                         ? 0U : (IData)(
                                                        (0x1cU 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->rvcpu__DOT__if_id_inst 
                                                             >> 2U))))) 
                                       << 7U) | ((((IData)(vlSelf->rst)
                                                    ? 0U
                                                    : (IData)(
                                                              (0xeU 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->rvcpu__DOT__if_id_inst 
                                                                   >> 2U))))) 
                                                  << 6U) 
                                                 | ((((IData)(vlSelf->rst)
                                                       ? 0U
                                                       : (IData)(
                                                                 (6U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->rvcpu__DOT__if_id_inst 
                                                                      >> 2U))))) 
                                                     << 5U) 
                                                    | ((((IData)(vlSelf->rst)
                                                          ? 0U
                                                          : (IData)(
                                                                    (4U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->rvcpu__DOT__if_id_inst 
                                                                         >> 2U))))) 
                                                        << 4U) 
                                                       | ((((IData)(vlSelf->rst)
                                                             ? 0U
                                                             : (IData)(
                                                                       (0xcU 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelf->rvcpu__DOT__if_id_inst 
                                                                            >> 2U))))) 
                                                           << 3U) 
                                                          | ((((IData)(vlSelf->rst)
                                                                ? 0U
                                                                : (IData)(
                                                                          (0x18U 
                                                                           == 
                                                                           (0x1fU 
                                                                            & (vlSelf->rvcpu__DOT__if_id_inst 
                                                                               >> 2U))))) 
                                                              << 2U) 
                                                             | ((((IData)(vlSelf->rst)
                                                                   ? 0U
                                                                   : (IData)(
                                                                             (3U 
                                                                              == 
                                                                              (0x7fU 
                                                                               & vlSelf->rvcpu__DOT__if_id_inst)))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelf->rst)
                                                                    ? 0U
                                                                    : (IData)(
                                                                              (8U 
                                                                               == 
                                                                               (0x1fU 
                                                                                & (vlSelf->rvcpu__DOT__if_id_inst 
                                                                                >> 2U))))))))))));
    if (vlSelf->rst) {
        vlSelf->rvcpu__DOT__id_ex_pc = 0ULL;
        vlSelf->rvcpu__DOT__id_ex_memsel = 0U;
        vlSelf->rvcpu__DOT__mem_mem_wb_pc = 0ULL;
        vlSelf->rvcpu__DOT__ex_ex_mem_pc = 0ULL;
    } else {
        vlSelf->rvcpu__DOT__id_ex_pc = vlSelf->rvcpu__DOT__if_id_pc;
        vlSelf->rvcpu__DOT__id_ex_memsel = (7U & (vlSelf->rvcpu__DOT__if_id_inst 
                                                  >> 0xcU));
        vlSelf->rvcpu__DOT__mem_mem_wb_pc = vlSelf->rvcpu__DOT__ex_mem_mem_pc;
        vlSelf->rvcpu__DOT__ex_ex_mem_pc = vlSelf->rvcpu__DOT__idex_ex_pc;
    }
    vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena = ((
                                                   ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
                                                    & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)) 
                                                   & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
                                                  & (0ULL 
                                                     != vlSelf->rvcpu__DOT__idex_ex_pc));
    if ((1U & ((IData)(vlSelf->rst) | (~ (IData)(vlSelf->rvcpu__DOT__exmem_mem_type))))) {
        vlSelf->wmask = 0U;
        vlSelf->data_o = 0ULL;
    } else {
        vlSelf->wmask = vlSelf->rvcpu__DOT__mem7__DOT__store_mask;
        vlSelf->data_o = vlSelf->rvcpu__DOT__mem7__DOT__store_data;
    }
    vlSelf->rvcpu__DOT__mem_id_data = ((2U & (IData)(vlSelf->rvcpu__DOT__exmem_mem_type))
                                        ? ((2U == (IData)(vlSelf->rvcpu__DOT__exmem_mem_type))
                                            ? ((4U 
                                                & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
                                                     ? 0ULL
                                                     : (QData)((IData)(vlSelf->rvcpu__DOT__mem7__DOT__data_word)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
                                                     ? (QData)((IData)(vlSelf->rvcpu__DOT__mem7__DOT__data_half_byte))
                                                     : (QData)((IData)(vlSelf->rvcpu__DOT__mem7__DOT__data_byte))))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
                                                     ? vlSelf->data_i
                                                     : 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (vlSelf->rvcpu__DOT__mem7__DOT__data_word 
                                                                                >> 0x1fU))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->rvcpu__DOT__mem7__DOT__data_word))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->rvcpu__DOT__exmem_mem_sel))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->rvcpu__DOT__mem7__DOT__data_half_byte) 
                                                                             >> 0xfU))))) 
                                                      << 0x10U) 
                                                     | (QData)((IData)(vlSelf->rvcpu__DOT__mem7__DOT__data_half_byte)))
                                                     : 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->rvcpu__DOT__mem7__DOT__data_byte) 
                                                                             >> 7U))))) 
                                                      << 8U) 
                                                     | (QData)((IData)(vlSelf->rvcpu__DOT__mem7__DOT__data_byte))))))
                                            : 0ULL)
                                        : vlSelf->rvcpu__DOT__exmem_mem_data);
    vlSelf->rvcpu__DOT__id3__DOT__inst_jump = ((IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_jal) 
                                               | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_jalr));
    vlSelf->rvcpu__DOT__ex5__DOT__sllw_res = (((QData)((IData)(
                                                               (- (IData)(
                                                                          (vlSelf->rvcpu__DOT__ex5__DOT__op1_sllw_op2 
                                                                           >> 0x1fU))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->rvcpu__DOT__ex5__DOT__op1_sllw_op2)));
    vlSelf->rvcpu__DOT__ex5__DOT__srlw_res = (((QData)((IData)(
                                                               (- (IData)(
                                                                          (vlSelf->rvcpu__DOT__ex5__DOT__op1_srlw_op2 
                                                                           >> 0x1fU))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->rvcpu__DOT__ex5__DOT__op1_srlw_op2)));
    vlSelf->rvcpu__DOT__ex5__DOT__sraw_res = (((QData)((IData)(
                                                               (- (IData)(
                                                                          (vlSelf->rvcpu__DOT__ex5__DOT__op1_sraw_op2 
                                                                           >> 0x1fU))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->rvcpu__DOT__ex5__DOT__op1_sraw_op2)));
    vlSelf->rvcpu__DOT__ex5__DOT__op1_addw_op2 = (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->rvcpu__DOT__ex5__DOT__op1_add_op2 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->rvcpu__DOT__ex5__DOT__op1_add_op2)));
    vlSelf->rvcpu__DOT__ex5__DOT__op1_ls_op2 = (1U 
                                                & ((((IData)(
                                                             (vlSelf->rvcpu__DOT__idex_ex_op1 
                                                              >> 0x3fU)) 
                                                     & (~ (IData)(
                                                                  (vlSelf->rvcpu__DOT__idex_ex_op2 
                                                                   >> 0x3fU)))) 
                                                    | (((~ (IData)(
                                                                   (vlSelf->rvcpu__DOT__idex_ex_op1 
                                                                    >> 0x3fU))) 
                                                        & (~ (IData)(
                                                                     (vlSelf->rvcpu__DOT__idex_ex_op2 
                                                                      >> 0x3fU)))) 
                                                       & (IData)(
                                                                 (vlSelf->rvcpu__DOT__ex5__DOT__op1_sub_op2 
                                                                  >> 0x3fU)))) 
                                                   | (((IData)(
                                                               (vlSelf->rvcpu__DOT__idex_ex_op1 
                                                                >> 0x3fU)) 
                                                       & (IData)(
                                                                 (vlSelf->rvcpu__DOT__idex_ex_op2 
                                                                  >> 0x3fU))) 
                                                      & (IData)(
                                                                (vlSelf->rvcpu__DOT__ex5__DOT__op1_sub_op2 
                                                                 >> 0x3fU)))));
    vlSelf->rvcpu__DOT__id_ex_s_offset = (0xfffU & 
                                          ((2U & (IData)(vlSelf->rvcpu__DOT__id_ex_type))
                                            ? (vlSelf->rvcpu__DOT__if_id_inst 
                                               >> 0x14U)
                                            : ((1U 
                                                & (IData)(vlSelf->rvcpu__DOT__id_ex_type))
                                                ? (
                                                   (0xfe0U 
                                                    & (vlSelf->rvcpu__DOT__if_id_inst 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelf->rvcpu__DOT__if_id_inst 
                                                         >> 7U)))
                                                : 0U)));
    vlSelf->rvcpu__DOT__id3__DOT__inst_csrrwi = (1U 
                                                 & (IData)(
                                                           ((0x80U 
                                                             == 
                                                             (0x80U 
                                                              & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                            & (0x5000U 
                                                               == 
                                                               (0x7000U 
                                                                & vlSelf->rvcpu__DOT__if_id_inst)))));
    vlSelf->rvcpu__DOT__id3__DOT__inst_addiw = (1U 
                                                & (IData)(
                                                          ((0x20U 
                                                            == 
                                                            (0x20U 
                                                             & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                           & (0U 
                                                              == 
                                                              (0x7000U 
                                                               & vlSelf->rvcpu__DOT__if_id_inst)))));
    vlSelf->rvcpu__DOT__id3__DOT__inst_add = (1U & (IData)(
                                                           ((8U 
                                                             == 
                                                             (8U 
                                                              & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                            & (0U 
                                                               == 
                                                               (0x40007000U 
                                                                & vlSelf->rvcpu__DOT__if_id_inst)))));
    vlSelf->rvcpu__DOT__id3__DOT__inst_sub = (1U & (IData)(
                                                           ((8U 
                                                             == 
                                                             (8U 
                                                              & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                            & (0x40000000U 
                                                               == 
                                                               (0x40007000U 
                                                                & vlSelf->rvcpu__DOT__if_id_inst)))));
    vlSelf->rvcpu__DOT__id3__DOT__inst_slliw = (1U 
                                                & (IData)(
                                                          ((0x20U 
                                                            == 
                                                            (0x20U 
                                                             & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                           & (0x1000U 
                                                              == 
                                                              (0x7000U 
                                                               & vlSelf->rvcpu__DOT__if_id_inst)))));
    vlSelf->rvcpu__DOT__id3__DOT__inst_srliw = (1U 
                                                & (IData)(
                                                          ((0x20U 
                                                            == 
                                                            (0x20U 
                                                             & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                           & (0x5000U 
                                                              == 
                                                              (0x40007000U 
                                                               & vlSelf->rvcpu__DOT__if_id_inst)))));
    vlSelf->rvcpu__DOT__id3__DOT__inst_sraiw = (1U 
                                                & (IData)(
                                                          ((0x20U 
                                                            == 
                                                            (0x20U 
                                                             & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                           & (0x40005000U 
                                                              == 
                                                              (0x40007000U 
                                                               & vlSelf->rvcpu__DOT__if_id_inst)))));
    vlSelf->rvcpu__DOT__id3__DOT__inst_slt = (1U & (IData)(
                                                           ((8U 
                                                             == 
                                                             (8U 
                                                              & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                            & (0x2000U 
                                                               == 
                                                               (0x7000U 
                                                                & vlSelf->rvcpu__DOT__if_id_inst)))));
    vlSelf->rvcpu__DOT__id3__DOT__inst_sltu = (1U & (IData)(
                                                            ((8U 
                                                              == 
                                                              (8U 
                                                               & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                             & (0x3000U 
                                                                == 
                                                                (0x7000U 
                                                                 & vlSelf->rvcpu__DOT__if_id_inst)))));
    vlSelf->rvcpu__DOT__id3__DOT__inst_xor = (1U & (IData)(
                                                           ((8U 
                                                             == 
                                                             (8U 
                                                              & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                            & (0x4000U 
                                                               == 
                                                               (0x7000U 
                                                                & vlSelf->rvcpu__DOT__if_id_inst)))));
    vlSelf->rvcpu__DOT__id3__DOT__inst_srl = (1U & (IData)(
                                                           ((8U 
                                                             == 
                                                             (8U 
                                                              & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                            & (0x5000U 
                                                               == 
                                                               (0x40007000U 
                                                                & vlSelf->rvcpu__DOT__if_id_inst)))));
    vlSelf->rvcpu__DOT__id3__DOT__inst_sra = (1U & (IData)(
                                                           ((8U 
                                                             == 
                                                             (8U 
                                                              & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                            & (0x40005000U 
                                                               == 
                                                               (0x40007000U 
                                                                & vlSelf->rvcpu__DOT__if_id_inst)))));
    vlSelf->rvcpu__DOT__id3__DOT__inst_or = (1U & (IData)(
                                                          ((8U 
                                                            == 
                                                            (8U 
                                                             & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                           & (0x6000U 
                                                              == 
                                                              (0x7000U 
                                                               & vlSelf->rvcpu__DOT__if_id_inst)))));
    vlSelf->rvcpu__DOT__id3__DOT__inst_and = (1U & (IData)(
                                                           ((8U 
                                                             == 
                                                             (8U 
                                                              & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                            & (0x7000U 
                                                               == 
                                                               (0x7000U 
                                                                & vlSelf->rvcpu__DOT__if_id_inst)))));
    vlSelf->rvcpu__DOT__id3__DOT__inst_addw = (1U & (IData)(
                                                            ((0x40U 
                                                              == 
                                                              (0x40U 
                                                               & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                             & (0U 
                                                                == 
                                                                (0x40007000U 
                                                                 & vlSelf->rvcpu__DOT__if_id_inst)))));
    vlSelf->rvcpu__DOT__id3__DOT__inst_subw = (1U & (IData)(
                                                            ((0x40U 
                                                              == 
                                                              (0x40U 
                                                               & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                             & (0x40000000U 
                                                                == 
                                                                (0x40007000U 
                                                                 & vlSelf->rvcpu__DOT__if_id_inst)))));
    vlSelf->rvcpu__DOT__id3__DOT__inst_sllw = (1U & (IData)(
                                                            ((0x40U 
                                                              == 
                                                              (0x40U 
                                                               & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                             & (0x1000U 
                                                                == 
                                                                (0x7000U 
                                                                 & vlSelf->rvcpu__DOT__if_id_inst)))));
    vlSelf->rvcpu__DOT__id3__DOT__inst_srlw = (1U & (IData)(
                                                            ((0x40U 
                                                              == 
                                                              (0x40U 
                                                               & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                             & (0x5000U 
                                                                == 
                                                                (0x40007000U 
                                                                 & vlSelf->rvcpu__DOT__if_id_inst)))));
    vlSelf->rvcpu__DOT__id3__DOT__inst_sraw = (1U & (IData)(
                                                            ((0x40U 
                                                              == 
                                                              (0x40U 
                                                               & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                             & (0x40005000U 
                                                                == 
                                                                (0x40007000U 
                                                                 & vlSelf->rvcpu__DOT__if_id_inst)))));
    vlSelf->rvcpu__DOT__id3__DOT__inst_srai = (1U & (IData)(
                                                            ((0x10U 
                                                              == 
                                                              (0x10U 
                                                               & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                             & (0x40005000U 
                                                                == 
                                                                (0x40007000U 
                                                                 & vlSelf->rvcpu__DOT__if_id_inst)))));
    vlSelf->rvcpu__DOT__id3__DOT__inst_sll = (1U & (IData)(
                                                           ((8U 
                                                             == 
                                                             (8U 
                                                              & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                            & (0x1000U 
                                                               == 
                                                               (0x7000U 
                                                                & vlSelf->rvcpu__DOT__if_id_inst)))));
    vlSelf->rvcpu__DOT__id_reg_ena2 = (IData)((0U != 
                                               (0x4dU 
                                                & (IData)(vlSelf->rvcpu__DOT__id_ex_type))));
    vlSelf->rvcpu__DOT__id3__DOT__inst_csrrw = (1U 
                                                & (IData)(
                                                          ((0x80U 
                                                            == 
                                                            (0x80U 
                                                             & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                           & (0x1000U 
                                                              == 
                                                              (0x7000U 
                                                               & vlSelf->rvcpu__DOT__if_id_inst)))));
    vlSelf->rvcpu__DOT__id3__DOT__inst_csrrs = (1U 
                                                & (IData)(
                                                          ((0x80U 
                                                            == 
                                                            (0x80U 
                                                             & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                           & (0x2000U 
                                                              == 
                                                              (0x7000U 
                                                               & vlSelf->rvcpu__DOT__if_id_inst)))));
    vlSelf->rvcpu__DOT__id3__DOT__inst_csrrc = (1U 
                                                & (IData)(
                                                          ((0x80U 
                                                            == 
                                                            (0x80U 
                                                             & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                           & (0x3000U 
                                                              == 
                                                              (0x7000U 
                                                               & vlSelf->rvcpu__DOT__if_id_inst)))));
    if ((0x80U & (IData)(vlSelf->rvcpu__DOT__idex_ex_type))) {
        vlSelf->rvcpu__DOT__ex5__DOT__trap_mcause_value = 0ULL;
        if ((1U & (~ ((0x40U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)) 
                      | (2U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)))))) {
            if ((1U & (~ ((0x80U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)) 
                          | (4U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)))))) {
                if ((1U & (~ ((1U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)) 
                              | (8U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)))))) {
                    if ((0x10U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))) {
                        vlSelf->rvcpu__DOT__ex5__DOT__trap_mcause_value = 0xbULL;
                    }
                }
            }
        }
    } else {
        vlSelf->rvcpu__DOT__ex5__DOT__trap_mcause_value = 0ULL;
    }
    if (vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena) {
        vlSelf->rvcpu__DOT__ex5__DOT__trap_mcause_value = 0x8000000000000007ULL;
    }
    vlSelf->rvcpu__DOT__ex_id_rd_type = ((IData)(vlSelf->rvcpu__DOT__idex_ex_type) 
                                         & (- (IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena))))));
    if ((0x80U & (IData)(vlSelf->rvcpu__DOT__idex_ex_type))) {
        vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en = 0U;
        if (((0x40U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)) 
             | (2U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)))) {
            vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en = 1U;
        } else if (((0x80U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)) 
                    | (4U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)))) {
            vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en 
                = (0ULL != vlSelf->rvcpu__DOT__idex_ex_op1);
        } else if (((1U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)) 
                    | (8U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)))) {
            vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en 
                = (0ULL != vlSelf->rvcpu__DOT__idex_ex_op1);
        } else if ((0x10U != (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))) {
            if ((0x20U != (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))) {
                vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en = 0U;
            }
        }
    } else {
        vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en = 0U;
    }
    if (vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena) {
        vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en = 0U;
    }
    vlSelf->rvcpu__DOT__ex_id_rd_ena = ((IData)(vlSelf->rvcpu__DOT__idex_ex_rdena) 
                                        & (~ (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena)));
    if ((0x80U & (IData)(vlSelf->rvcpu__DOT__idex_ex_type))) {
        vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena = 0U;
        if ((1U & (~ ((0x40U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)) 
                      | (2U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)))))) {
            if ((1U & (~ ((0x80U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)) 
                          | (4U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)))))) {
                if ((1U & (~ ((1U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)) 
                              | (8U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)))))) {
                    if ((0x10U != (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))) {
                        vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena 
                            = (0x20U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode));
                    }
                }
            }
        }
    } else {
        vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena = 0U;
    }
    if (vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena) {
        vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena = 0U;
    }
    if ((0x80U & (IData)(vlSelf->rvcpu__DOT__idex_ex_type))) {
        vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena = 0U;
        if ((1U & (~ ((0x40U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)) 
                      | (2U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)))))) {
            if ((1U & (~ ((0x80U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)) 
                          | (4U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)))))) {
                if ((1U & (~ ((1U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)) 
                              | (8U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)))))) {
                    if ((0x10U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))) {
                        vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena = 1U;
                    } else if ((0x20U != (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))) {
                        vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena = 0U;
                    }
                }
            }
        }
    } else {
        vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena = 0U;
    }
    if (vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena) {
        vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena = 0U;
    }
    if ((0x80U & (IData)(vlSelf->rvcpu__DOT__idex_ex_type))) {
        vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en = 0U;
        if (((0x40U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)) 
             | (2U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)))) {
            vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en 
                = (0U != (IData)(vlSelf->rvcpu__DOT__idex_ex_rdaddr));
        } else if (((0x80U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)) 
                    | (4U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)))) {
            vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en = 1U;
        } else if (((1U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)) 
                    | (8U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)))) {
            vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en = 1U;
        } else if ((0x10U != (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))) {
            if ((0x20U != (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))) {
                vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en = 0U;
            }
        }
    } else {
        vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en = 0U;
    }
    if (vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena) {
        vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en = 0U;
    }
    vlSelf->rvcpu__DOT__id_ex_rd_ena = ((0U != (0x1fU 
                                                & (vlSelf->rvcpu__DOT__if_id_inst 
                                                   >> 7U))) 
                                        & ((((IData)(
                                                     (0U 
                                                      != 
                                                      (0xfaU 
                                                       & (IData)(vlSelf->rvcpu__DOT__id_ex_type)))) 
                                             | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_lui)) 
                                            | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_auipc)) 
                                           | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_jump)));
    vlSelf->rvcpu__DOT__ex5__DOT__ex_flush_branch = 
        (((IData)(vlSelf->rvcpu__DOT__idex_ex_type) 
          >> 2U) & ((1U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                     ? (vlSelf->rvcpu__DOT__idex_ex_op1 
                        == vlSelf->rvcpu__DOT__idex_ex_op2)
                     : ((2U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                         ? (vlSelf->rvcpu__DOT__idex_ex_op1 
                            != vlSelf->rvcpu__DOT__idex_ex_op2)
                         : ((0x10U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                             ? (vlSelf->rvcpu__DOT__idex_ex_op1 
                                < vlSelf->rvcpu__DOT__idex_ex_op2)
                             : ((0x20U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                 ? (vlSelf->rvcpu__DOT__idex_ex_op1 
                                    >= vlSelf->rvcpu__DOT__idex_ex_op2)
                                 : ((4U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                     ? (IData)(vlSelf->rvcpu__DOT__ex5__DOT__op1_ls_op2)
                                     : ((8U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)) 
                                        & (~ (IData)(vlSelf->rvcpu__DOT__ex5__DOT__op1_ls_op2)))))))));
    vlSelf->rvcpu__DOT__ex5__DOT__exe_res = ((IData)(vlSelf->rst)
                                              ? 0ULL
                                              : ((0x80U 
                                                  & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                  ? 
                                                 ((0x40U 
                                                   & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                   ? 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                    ? 0ULL
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                     ? 0ULL
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                         ? 0ULL
                                                         : 
                                                        (vlSelf->rvcpu__DOT__idex_ex_op1 
                                                         << 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->rvcpu__DOT__idex_ex_op2)))))))))
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                     ? 0ULL
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                         ? 0ULL
                                                         : 
                                                        (vlSelf->rvcpu__DOT__idex_ex_op1 
                                                         >> 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->rvcpu__DOT__idex_ex_op2))))))))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                         ? 0ULL
                                                         : vlSelf->rvcpu__DOT__ex5__DOT__srlw_res))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                         ? 0ULL
                                                         : 
                                                        (vlSelf->rvcpu__DOT__idex_ex_op1 
                                                         + vlSelf->rvcpu__DOT__ex5__DOT__upper_imm))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                         ? 0ULL
                                                         : vlSelf->rvcpu__DOT__ex5__DOT__srlw_res))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                         ? 
                                                        (vlSelf->rvcpu__DOT__idex_ex_op1 
                                                         + vlSelf->rvcpu__DOT__ex5__DOT__upper_imm)
                                                         : 
                                                        (vlSelf->rvcpu__DOT__idex_ex_op1 
                                                         >> 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->rvcpu__DOT__idex_ex_op2))))))))))
                                                  : 
                                                 ((0x40U 
                                                   & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                   ? 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                     ? 0ULL
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                         ? 0ULL
                                                         : vlSelf->rvcpu__DOT__ex5__DOT__op1_addw_op2)))))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                         ? 0ULL
                                                         : 
                                                        (vlSelf->rvcpu__DOT__idex_ex_op1 
                                                         ^ vlSelf->rvcpu__DOT__idex_ex_op2)))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                         ? 0ULL
                                                         : vlSelf->rvcpu__DOT__ex5__DOT__sraw_res)))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                         ? 0ULL
                                                         : vlSelf->rvcpu__DOT__idex_ex_op2))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                         ? 0ULL
                                                         : 
                                                        (4ULL 
                                                         + vlSelf->rvcpu__DOT__idex_ex_op2))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                         ? 0ULL
                                                         : 
                                                        (vlSelf->rvcpu__DOT__idex_ex_op1 
                                                         << 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->rvcpu__DOT__idex_ex_op2)))))))))
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                         ? 0ULL
                                                         : vlSelf->rvcpu__DOT__ex5__DOT__op1_sub_op2))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                      ? 0ULL
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                         ? 0ULL
                                                         : 
                                                        (4ULL 
                                                         + vlSelf->rvcpu__DOT__idex_ex_op2)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                         ? 0ULL
                                                         : 
                                                        (vlSelf->rvcpu__DOT__idex_ex_op1 
                                                         | vlSelf->rvcpu__DOT__idex_ex_op2))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          (- (IData)(
                                                                                (vlSelf->rvcpu__DOT__ex5__DOT__op1_subw_op2 
                                                                                >> 0x1fU))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->rvcpu__DOT__ex5__DOT__op1_subw_op2)))
                                                         : vlSelf->rvcpu__DOT__idex_ex_op2)))))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                         ? 0ULL
                                                         : vlSelf->rvcpu__DOT__ex5__DOT__op1_addw_op2)))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                       ? 0ULL
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                         ? 0ULL
                                                         : vlSelf->rvcpu__DOT__ex5__DOT__sllw_res)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                         ? vlSelf->rvcpu__DOT__ex5__DOT__shift_res
                                                         : 
                                                        (vlSelf->rvcpu__DOT__idex_ex_op1 
                                                         | vlSelf->rvcpu__DOT__idex_ex_op2)))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                        ? 0ULL
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                         ? 0ULL
                                                         : vlSelf->rvcpu__DOT__ex5__DOT__op1_add_op2))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                         ? 0ULL
                                                         : (QData)((IData)(
                                                                           (vlSelf->rvcpu__DOT__idex_ex_op1 
                                                                            < vlSelf->rvcpu__DOT__idex_ex_op2))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                         ? vlSelf->rvcpu__DOT__ex5__DOT__sllw_res
                                                         : 
                                                        (vlSelf->rvcpu__DOT__idex_ex_op1 
                                                         ^ vlSelf->rvcpu__DOT__idex_ex_op2))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                         ? 0ULL
                                                         : vlSelf->rvcpu__DOT__ex5__DOT__sraw_res)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                         ? (QData)((IData)(vlSelf->rvcpu__DOT__ex5__DOT__op1_ls_op2))
                                                         : (QData)((IData)(
                                                                           (vlSelf->rvcpu__DOT__idex_ex_op1 
                                                                            < vlSelf->rvcpu__DOT__idex_ex_op2)))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                         ? vlSelf->rvcpu__DOT__ex5__DOT__shift_res
                                                         : (QData)((IData)(vlSelf->rvcpu__DOT__ex5__DOT__op1_ls_op2)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))
                                                         ? vlSelf->rvcpu__DOT__ex5__DOT__op1_add_op2
                                                         : 0ULL)))))))));
    vlSelf->rvcpu__DOT__id_ex_opcode = ((0xdfU & (IData)(vlSelf->rvcpu__DOT__id_ex_opcode)) 
                                        | (((IData)(vlSelf->rst)
                                             ? 0U : 
                                            (1U & (
                                                   (((((((((IData)(
                                                                   ((0x80U 
                                                                     == 
                                                                     (0x80U 
                                                                      & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                                    & (0U 
                                                                       == 
                                                                       (0x7000U 
                                                                        & vlSelf->rvcpu__DOT__if_id_inst)))) 
                                                           & (0x18U 
                                                              == 
                                                              (vlSelf->rvcpu__DOT__if_id_inst 
                                                               >> 0x19U))) 
                                                          | (1U 
                                                             & (IData)(
                                                                       ((4U 
                                                                         == 
                                                                         (4U 
                                                                          & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                                        & (0x7000U 
                                                                           == 
                                                                           (0x7000U 
                                                                            & vlSelf->rvcpu__DOT__if_id_inst)))))) 
                                                         | (1U 
                                                            & (IData)(
                                                                      ((0x10U 
                                                                        == 
                                                                        (0x10U 
                                                                         & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                                       & (0x7000U 
                                                                          == 
                                                                          (0x7000U 
                                                                           & vlSelf->rvcpu__DOT__if_id_inst)))))) 
                                                        | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_sub)) 
                                                       | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_srl)) 
                                                      | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_or)) 
                                                     | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_jalr)) 
                                                    | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_addw)) 
                                                   | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_subw)))) 
                                           << 5U));
    vlSelf->rvcpu__DOT__id_ex_opcode = ((0xefU & (IData)(vlSelf->rvcpu__DOT__id_ex_opcode)) 
                                        | (((IData)(vlSelf->rst)
                                             ? 0U : 
                                            (1U & (
                                                   (((((((((IData)(
                                                                   ((0x80U 
                                                                     == 
                                                                     (0x80U 
                                                                      & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                                    & (0U 
                                                                       == 
                                                                       (0x7000U 
                                                                        & vlSelf->rvcpu__DOT__if_id_inst)))) 
                                                           & (0U 
                                                              == 
                                                              (vlSelf->rvcpu__DOT__if_id_inst 
                                                               >> 0x14U))) 
                                                          | (1U 
                                                             & (IData)(
                                                                       ((4U 
                                                                         == 
                                                                         (4U 
                                                                          & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                                        & (0x6000U 
                                                                           == 
                                                                           (0x7000U 
                                                                            & vlSelf->rvcpu__DOT__if_id_inst)))))) 
                                                         | (1U 
                                                            & (IData)(
                                                                      ((0x10U 
                                                                        == 
                                                                        (0x10U 
                                                                         & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                                       & (0x6000U 
                                                                          == 
                                                                          (0x7000U 
                                                                           & vlSelf->rvcpu__DOT__if_id_inst)))))) 
                                                        | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_sub)) 
                                                       | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_xor)) 
                                                      | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_sra)) 
                                                     | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_addiw)) 
                                                    | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_srliw)) 
                                                   | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_sllw)))) 
                                           << 4U));
    vlSelf->rvcpu__DOT__id_ex_opcode = ((0xfbU & (IData)(vlSelf->rvcpu__DOT__id_ex_opcode)) 
                                        | (((IData)(vlSelf->rst)
                                             ? 0U : 
                                            (1U & (
                                                   ((((((1U 
                                                         & (((IData)(
                                                                     ((0x80U 
                                                                       == 
                                                                       (0x80U 
                                                                        & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                                      & (0x6000U 
                                                                         == 
                                                                         (0x7000U 
                                                                          & vlSelf->rvcpu__DOT__if_id_inst)))) 
                                                             | (IData)(
                                                                       ((4U 
                                                                         == 
                                                                         (4U 
                                                                          & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                                        & (0x4000U 
                                                                           == 
                                                                           (0x7000U 
                                                                            & vlSelf->rvcpu__DOT__if_id_inst))))) 
                                                            | (IData)(
                                                                      ((0x10U 
                                                                        == 
                                                                        (0x10U 
                                                                         & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                                       & (0x3000U 
                                                                          == 
                                                                          (0x7000U 
                                                                           & vlSelf->rvcpu__DOT__if_id_inst)))))) 
                                                        | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_add)) 
                                                       | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_slt)) 
                                                      | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_and)) 
                                                     | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_jalr)) 
                                                    | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_sraiw)) 
                                                   | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_srlw)))) 
                                           << 2U));
    vlSelf->rvcpu__DOT__id_ex_opcode = ((0xf7U & (IData)(vlSelf->rvcpu__DOT__id_ex_opcode)) 
                                        | (((IData)(vlSelf->rst)
                                             ? 0U : 
                                            (1U & (
                                                   ((((((1U 
                                                         & (((IData)(
                                                                     ((0x80U 
                                                                       == 
                                                                       (0x80U 
                                                                        & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                                      & (0x7000U 
                                                                         == 
                                                                         (0x7000U 
                                                                          & vlSelf->rvcpu__DOT__if_id_inst)))) 
                                                             | (IData)(
                                                                       ((4U 
                                                                         == 
                                                                         (4U 
                                                                          & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                                        & (0x5000U 
                                                                           == 
                                                                           (0x7000U 
                                                                            & vlSelf->rvcpu__DOT__if_id_inst))))) 
                                                            | (IData)(
                                                                      ((0x10U 
                                                                        == 
                                                                        (0x10U 
                                                                         & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                                       & (0x4000U 
                                                                          == 
                                                                          (0x7000U 
                                                                           & vlSelf->rvcpu__DOT__if_id_inst)))))) 
                                                        | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_add)) 
                                                       | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_sltu)) 
                                                      | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_lui)) 
                                                     | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_addiw)) 
                                                    | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_slliw)) 
                                                   | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_sraw)))) 
                                           << 3U));
    vlSelf->rvcpu__DOT__id_ex_opcode = ((0xfdU & (IData)(vlSelf->rvcpu__DOT__id_ex_opcode)) 
                                        | (((IData)(vlSelf->rst)
                                             ? 0U : 
                                            (1U & (
                                                   ((((((((IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrwi) 
                                                          | (1U 
                                                             & (IData)(
                                                                       ((4U 
                                                                         == 
                                                                         (4U 
                                                                          & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                                        & (0x1000U 
                                                                           == 
                                                                           (0x7000U 
                                                                            & vlSelf->rvcpu__DOT__if_id_inst)))))) 
                                                         | (1U 
                                                            & (IData)(
                                                                      ((0x10U 
                                                                        == 
                                                                        (0x10U 
                                                                         & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                                       & (0x2000U 
                                                                          == 
                                                                          (0x7000U 
                                                                           & vlSelf->rvcpu__DOT__if_id_inst)))))) 
                                                        | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_srai)) 
                                                       | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_sltu)) 
                                                      | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_or)) 
                                                     | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_jal)) 
                                                    | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_sraiw)) 
                                                   | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_sllw)))) 
                                           << 1U));
    vlSelf->rvcpu__DOT__id_reg_addr2 = ((IData)(vlSelf->rvcpu__DOT__id_reg_ena2)
                                         ? (0x1fU & 
                                            (vlSelf->rvcpu__DOT__if_id_inst 
                                             >> 0x14U))
                                         : 0U);
    vlSelf->rvcpu__DOT__id_ex_opcode = ((0xbfU & (IData)(vlSelf->rvcpu__DOT__id_ex_opcode)) 
                                        | (((IData)(vlSelf->rst)
                                             ? 0U : 
                                            (1U & (
                                                   (((((((IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrw) 
                                                         | (1U 
                                                            & (IData)(
                                                                      ((0x10U 
                                                                        == 
                                                                        (0x10U 
                                                                         & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                                       & (0x1000U 
                                                                          == 
                                                                          (0x7000U 
                                                                           & vlSelf->rvcpu__DOT__if_id_inst)))))) 
                                                        | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_sll)) 
                                                       | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_xor)) 
                                                      | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_and)) 
                                                     | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_jal)) 
                                                    | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_addw)) 
                                                   | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_sraw)))) 
                                           << 6U));
    vlSelf->rvcpu__DOT__id_ex_opcode = ((0x7fU & (IData)(vlSelf->rvcpu__DOT__id_ex_opcode)) 
                                        | (((IData)(vlSelf->rst)
                                             ? 0U : 
                                            (1U & (
                                                   (((((((IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrs) 
                                                         | (1U 
                                                            & (IData)(
                                                                      ((0x10U 
                                                                        == 
                                                                        (0x10U 
                                                                         & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                                       & (0x5000U 
                                                                          == 
                                                                          (0x40007000U 
                                                                           & vlSelf->rvcpu__DOT__if_id_inst)))))) 
                                                        | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_sll)) 
                                                       | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_srl)) 
                                                      | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_lui)) 
                                                     | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_auipc)) 
                                                    | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_srliw)) 
                                                   | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_srlw)))) 
                                           << 7U));
    vlSelf->rvcpu__DOT__id_ex_opcode = ((0xfeU & (IData)(vlSelf->rvcpu__DOT__id_ex_opcode)) 
                                        | ((IData)(vlSelf->rst)
                                            ? 0U : 
                                           (1U & ((
                                                   (((((((IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrc) 
                                                         | (1U 
                                                            & (IData)(
                                                                      ((4U 
                                                                        == 
                                                                        (4U 
                                                                         & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                                       & (0U 
                                                                          == 
                                                                          (0x7000U 
                                                                           & vlSelf->rvcpu__DOT__if_id_inst)))))) 
                                                        | (1U 
                                                           & (IData)(
                                                                     ((0x10U 
                                                                       == 
                                                                       (0x10U 
                                                                        & (IData)(vlSelf->rvcpu__DOT__id_ex_type))) 
                                                                      & (0U 
                                                                         == 
                                                                         (0x7000U 
                                                                          & vlSelf->rvcpu__DOT__if_id_inst)))))) 
                                                       | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_srai)) 
                                                      | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_slt)) 
                                                     | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_sra)) 
                                                    | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_auipc)) 
                                                   | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_slliw)) 
                                                  | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_subw)))));
    vlSelf->rvcpu__DOT__id_reg_ena1 = (1U & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->rvcpu__DOT__id_ex_type)))) 
                                             | (((IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrw) 
                                                 | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrs)) 
                                                | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrc))));
    vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mcause 
        = ((0x342U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
           & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en));
    vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mstatus 
        = ((0x300U == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
           & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en));
    vlSelf->rvcpu__DOT__ex5__DOT__trap_ena = ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena) 
                                              | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena));
    vlSelf->rvcpu__DOT__ex5__DOT__read_csr_data = (
                                                   ((((((((- (QData)((IData)(
                                                                             ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en) 
                                                                              & (0xb00U 
                                                                                == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)))))) 
                                                          & vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mcycle) 
                                                         | ((- (QData)((IData)(
                                                                               ((0x300U 
                                                                                == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                                                                & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en))))) 
                                                            & vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus)) 
                                                        | ((- (QData)((IData)(
                                                                              ((((0x305U 
                                                                                == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                                                                & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en)) 
                                                                                | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena)) 
                                                                               | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena))))) 
                                                           & (vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base 
                                                              << 2U))) 
                                                       | ((- (QData)((IData)(
                                                                             (((0x341U 
                                                                                == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                                                               & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en)) 
                                                                              | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena))))) 
                                                          & vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mepc)) 
                                                      | ((- (QData)((IData)(
                                                                            ((0x342U 
                                                                              == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                                                             & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en))))) 
                                                         & vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mcause)) 
                                                     | ((- (QData)((IData)(
                                                                           ((0x304U 
                                                                             == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                                                            & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en))))) 
                                                        & ((QData)((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie)) 
                                                           << 7U))) 
                                                    | ((- (QData)((IData)(
                                                                          ((0x344U 
                                                                            == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                                                           & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en))))) 
                                                       & (QData)((IData)(
                                                                         ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip) 
                                                                          << 7U))))) 
                                                   | ((- (QData)((IData)(
                                                                         ((0x340U 
                                                                           == (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_idx)) 
                                                                          & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en))))) 
                                                      & vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mscrstch));
    vlSelf->rvcpu__DOT__id_ex_rd_addr = ((IData)(vlSelf->rvcpu__DOT__id_ex_rd_ena)
                                          ? (0x1fU 
                                             & (vlSelf->rvcpu__DOT__if_id_inst 
                                                >> 7U))
                                          : 0U);
    vlSelf->rvcpu__DOT__id_reg_addr1 = ((IData)(vlSelf->rvcpu__DOT__id_reg_ena1)
                                         ? (0x1fU & 
                                            (vlSelf->rvcpu__DOT__if_id_inst 
                                             >> 0xfU))
                                         : 0U);
    vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena 
        = (((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mstatus) 
            | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena)) 
           | ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena) 
              | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena)));
    vlSelf->rvcpu__DOT__ex_pc_branchena = (((IData)(vlSelf->rvcpu__DOT__ex5__DOT__ex_flush_branch) 
                                            | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__trap_ena)) 
                                           | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena));
    if ((0x80U & (IData)(vlSelf->rvcpu__DOT__idex_ex_type))) {
        vlSelf->rvcpu__DOT__ex5__DOT__wbck_csr_data = 0ULL;
        if (((0x40U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)) 
             | (2U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)))) {
            vlSelf->rvcpu__DOT__ex5__DOT__wbck_csr_data 
                = vlSelf->rvcpu__DOT__idex_ex_op1;
        } else if (((0x80U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)) 
                    | (4U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)))) {
            vlSelf->rvcpu__DOT__ex5__DOT__wbck_csr_data 
                = (vlSelf->rvcpu__DOT__ex5__DOT__read_csr_data 
                   | vlSelf->rvcpu__DOT__idex_ex_op1);
        } else if (((1U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)) 
                    | (8U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode)))) {
            vlSelf->rvcpu__DOT__ex5__DOT__wbck_csr_data 
                = (vlSelf->rvcpu__DOT__ex5__DOT__read_csr_data 
                   & (~ vlSelf->rvcpu__DOT__idex_ex_op1));
        } else if ((0x10U == (IData)(vlSelf->rvcpu__DOT__idex_ex_opcode))) {
            vlSelf->rvcpu__DOT__ex5__DOT__wbck_csr_data 
                = vlSelf->rvcpu__DOT__idex_ex_pc;
        }
    } else {
        vlSelf->rvcpu__DOT__ex5__DOT__wbck_csr_data = 0ULL;
    }
    if (vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena) {
        vlSelf->rvcpu__DOT__ex5__DOT__wbck_csr_data 
            = vlSelf->rvcpu__DOT__idex_ex_pc;
    }
    vlSelf->rvcpu__DOT__ex_id_rd_data = ((1U & (IData)(vlSelf->rvcpu__DOT__idex_ex_type))
                                          ? vlSelf->rvcpu__DOT__idex_ex_op2
                                          : ((0x80U 
                                              & (IData)(vlSelf->rvcpu__DOT__idex_ex_type))
                                              ? vlSelf->rvcpu__DOT__ex5__DOT__read_csr_data
                                              : vlSelf->rvcpu__DOT__ex5__DOT__exe_res));
    vlSelf->rvcpu__DOT__id3__DOT__ex_op1 = (((IData)(vlSelf->rvcpu__DOT__idex_ex_rdaddr) 
                                             == (IData)(vlSelf->rvcpu__DOT__id_reg_addr1)) 
                                            & (IData)(vlSelf->rvcpu__DOT__ex_id_rd_ena));
    vlSelf->rvcpu__DOT__id3__DOT__mem_op1 = (((IData)(vlSelf->rvcpu__DOT__exmem_mem_addr) 
                                              == (IData)(vlSelf->rvcpu__DOT__id_reg_addr1)) 
                                             & (IData)(vlSelf->rvcpu__DOT__exmem_mem_ena));
    if (((IData)(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena) 
         | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena))) {
        vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__mstatus_mpp_nxt = 3U;
        vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mcause_nxt 
            = vlSelf->rvcpu__DOT__ex5__DOT__trap_mcause_value;
        vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_nxt 
            = (1U & (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie));
    } else {
        vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__mstatus_mpp_nxt 
            = ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena)
                ? 0U : (3U & ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                               ? (IData)((vlSelf->rvcpu__DOT__ex5__DOT__wbck_csr_data 
                                          >> 0xbU))
                               : (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp))));
        vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mcause_nxt 
            = ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mcause)
                ? vlSelf->rvcpu__DOT__ex5__DOT__wbck_csr_data
                : vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mcause);
        vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_nxt 
            = (1U & ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena) 
                     | ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                         ? (IData)((vlSelf->rvcpu__DOT__ex5__DOT__wbck_csr_data 
                                    >> 7U)) : (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie))));
    }
    vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__mstatus_mie_nxt 
        = (1U & ((~ ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena) 
                     | (IData)(vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena))) 
                 & ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena)
                     ? (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie)
                     : ((IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mstatus)
                         ? (IData)((vlSelf->rvcpu__DOT__ex5__DOT__wbck_csr_data 
                                    >> 3U)) : (IData)(vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie)))));
    if (vlSelf->rst) {
        vlSelf->rvcpu__DOT__id_ex_op2 = 0ULL;
        vlSelf->rvcpu__DOT__id_pip_jalrena = 0U;
        vlSelf->rvcpu__DOT__id_ex_op = 0ULL;
    } else {
        vlSelf->rvcpu__DOT__id_ex_op2 = ((IData)(vlSelf->rvcpu__DOT__id_reg_ena2)
                                          ? ((((IData)(vlSelf->rvcpu__DOT__idex_ex_rdaddr) 
                                               == (IData)(vlSelf->rvcpu__DOT__id_reg_addr2)) 
                                              & (IData)(vlSelf->rvcpu__DOT__ex_id_rd_ena))
                                              ? vlSelf->rvcpu__DOT__ex_id_rd_data
                                              : ((((IData)(vlSelf->rvcpu__DOT__exmem_mem_addr) 
                                                   == (IData)(vlSelf->rvcpu__DOT__id_reg_addr2)) 
                                                  & (IData)(vlSelf->rvcpu__DOT__exmem_mem_ena))
                                                  ? vlSelf->rvcpu__DOT__mem_id_data
                                                  : 
                                                 (((IData)(vlSelf->rst) 
                                                   & (IData)(vlSelf->rvcpu__DOT__id_reg_ena2))
                                                   ? 
                                                  ((((IData)(vlSelf->rvcpu__DOT__wb_id_addr) 
                                                     == (IData)(vlSelf->rvcpu__DOT__id_reg_addr2)) 
                                                    & (IData)(vlSelf->rvcpu__DOT__wb_id_ena))
                                                    ? vlSelf->rvcpu__DOT__wb_regfile_data
                                                    : 
                                                   vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                   [vlSelf->rvcpu__DOT__id_reg_addr2])
                                                   : 0ULL)))
                                          : ((IData)(
                                                     (0U 
                                                      != 
                                                      (0xb0U 
                                                       & (IData)(vlSelf->rvcpu__DOT__id_ex_type))))
                                              ? (((- (QData)((IData)(
                                                                     (vlSelf->rvcpu__DOT__if_id_inst 
                                                                      >> 0x1fU)))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->rvcpu__DOT__if_id_inst 
                                                                    >> 0x14U))))
                                              : (((IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_lui) 
                                                  | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_auipc))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (vlSelf->rvcpu__DOT__if_id_inst 
                                                                       >> 0x1fU)))) 
                                                   << 0x14U) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->rvcpu__DOT__if_id_inst 
                                                                     >> 0xcU))))
                                                  : 
                                                 ((IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_jump)
                                                   ? vlSelf->rvcpu__DOT__if_id_pc
                                                   : 0ULL))));
        vlSelf->rvcpu__DOT__id_pip_jalrena = (1U & 
                                              ((IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_jalr) 
                                               & (~ 
                                                  (((~ (IData)(vlSelf->rvcpu__DOT__id3__DOT__ex_op1)) 
                                                    & (~ (IData)(vlSelf->rvcpu__DOT__id3__DOT__mem_op1))) 
                                                   & (~ 
                                                      (((IData)(vlSelf->rvcpu__DOT__wb_id_addr) 
                                                        == (IData)(vlSelf->rvcpu__DOT__id_reg_addr1)) 
                                                       & (IData)(vlSelf->rvcpu__DOT__wb_id_ena)))))));
        vlSelf->rvcpu__DOT__id_ex_op = ((IData)(vlSelf->rvcpu__DOT__id_reg_ena1)
                                         ? ((IData)(vlSelf->rvcpu__DOT__id3__DOT__ex_op1)
                                             ? vlSelf->rvcpu__DOT__ex_id_rd_data
                                             : ((IData)(vlSelf->rvcpu__DOT__id3__DOT__mem_op1)
                                                 ? vlSelf->rvcpu__DOT__mem_id_data
                                                 : 
                                                (((IData)(vlSelf->rst) 
                                                  & (IData)(vlSelf->rvcpu__DOT__id_reg_ena1))
                                                  ? 
                                                 ((((IData)(vlSelf->rvcpu__DOT__wb_id_addr) 
                                                    == (IData)(vlSelf->rvcpu__DOT__id_reg_addr1)) 
                                                   & (IData)(vlSelf->rvcpu__DOT__wb_id_ena))
                                                   ? vlSelf->rvcpu__DOT__wb_regfile_data
                                                   : 
                                                  vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                  [vlSelf->rvcpu__DOT__id_reg_addr1])
                                                  : 0ULL)))
                                         : (((IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_auipc) 
                                             | (IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_jal))
                                             ? vlSelf->rvcpu__DOT__if_id_pc
                                             : ((IData)(vlSelf->rvcpu__DOT__id3__DOT__inst_csrrwi)
                                                 ? (QData)((IData)(
                                                                   (0x1fU 
                                                                    & (vlSelf->rvcpu__DOT__if_id_inst 
                                                                       >> 0xfU))))
                                                 : 0ULL)));
    }
    vlSelf->rvcpu__DOT__id_if_flush = ((~ (IData)(vlSelf->rst)) 
                                       & (IData)(vlSelf->rvcpu__DOT__id_pip_jalrena));
    vlSelf->rvcpu__DOT__stall_ctrl = ((IData)(vlSelf->rst)
                                       ? 0U : (((~ (IData)(vlSelf->rst)) 
                                                & (((IData)(vlSelf->re) 
                                                    | (IData)(vlSelf->we)) 
                                                   & (~ (IData)(vlSelf->mem_finish))))
                                                ? 0x1fU
                                                : (
                                                   ((IData)(vlSelf->rvcpu__DOT__ex_pc_branchena) 
                                                    & (IData)(vlSelf->rvcpu__DOT__if_stall_req))
                                                    ? 0xfU
                                                    : 
                                                   (((IData)(vlSelf->rst)
                                                      ? 0U
                                                      : 
                                                     (1U 
                                                      & ((((IData)(vlSelf->rst)
                                                            ? 0U
                                                            : 
                                                           (1U 
                                                            & (((IData)(vlSelf->rvcpu__DOT__id_reg_ena1) 
                                                                & (2U 
                                                                   == (IData)(vlSelf->rvcpu__DOT__ex_id_rd_type))) 
                                                               & ((IData)(vlSelf->rvcpu__DOT__id_reg_addr1) 
                                                                  == (IData)(vlSelf->rvcpu__DOT__idex_ex_rdaddr))))) 
                                                          | ((IData)(vlSelf->rst)
                                                              ? 0U
                                                              : 
                                                             (1U 
                                                              & (((IData)(vlSelf->rvcpu__DOT__id_reg_ena2) 
                                                                  & (2U 
                                                                     == (IData)(vlSelf->rvcpu__DOT__ex_id_rd_type))) 
                                                                 & ((IData)(vlSelf->rvcpu__DOT__id_reg_addr2) 
                                                                    == (IData)(vlSelf->rvcpu__DOT__idex_ex_rdaddr)))))) 
                                                         | ((IData)(vlSelf->rvcpu__DOT__id_if_flush) 
                                                            & (IData)(vlSelf->rvcpu__DOT__if_stall_req)))))
                                                     ? 7U
                                                     : 
                                                    ((IData)(vlSelf->rvcpu__DOT__if_stall_req)
                                                      ? 3U
                                                      : 0U)))));
    vlSelf->inst_ready = (1U & (~ ((IData)(vlSelf->rvcpu__DOT__stall_ctrl) 
                                   >> 1U)));
}

void Vrvcpu___024root___initial__TOP__4(Vrvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root___initial__TOP__4\n"); );
    // Body
    vlSelf->rvcpu__DOT__pc1__DOT__jump_cont = 3U;
}

void Vrvcpu___024root___settle__TOP__6(Vrvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root___settle__TOP__6\n"); );
    // Body
    vlSelf->rvcpu__DOT__pip_fore0__DOT__j_pc = (((IData)(vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_jalr)
                                                  ? 
                                                 (((IData)(vlSelf->rst) 
                                                   & ((IData)(vlSelf->rst)
                                                       ? 0U
                                                       : (IData)(vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_jalr)))
                                                   ? 
                                                  ((((IData)(vlSelf->rvcpu__DOT__wb_id_addr) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->inst 
                                                         >> 0xfU))) 
                                                    & (IData)(vlSelf->rvcpu__DOT__wb_id_ena))
                                                    ? vlSelf->rvcpu__DOT__wb_regfile_data
                                                    : 
                                                   vlSelf->rvcpu__DOT__regfile10__DOT__regs
                                                   [vlSelf->rvcpu__DOT__id_reg_addr1])
                                                   : 0ULL)
                                                  : vlSelf->rvcpu__DOT__pc) 
                                                + ((IData)(
                                                           (0x6fU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->inst)))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->rvcpu__DOT__pip_fore0__DOT__j_imm 
                                                                            >> 0x13U))))) 
                                                     << 0x14U) 
                                                    | (QData)((IData)(
                                                                      (0xfffffU 
                                                                       & (vlSelf->rvcpu__DOT__pip_fore0__DOT__j_imm 
                                                                          << 1U)))))
                                                    : 
                                                   (((IData)(vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_bxx) 
                                                     & (2U 
                                                        <= (IData)(vlSelf->rvcpu__DOT__pc1__DOT__jump_cont)))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->rvcpu__DOT__pip_fore0__DOT__b_imm) 
                                                                             >> 0xbU))))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       (0xfffU 
                                                                        & ((IData)(vlSelf->rvcpu__DOT__pip_fore0__DOT__b_imm) 
                                                                           << 1U)))))
                                                     : 
                                                    ((IData)(vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_jalr)
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (vlSelf->inst 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        (vlSelf->inst 
                                                                         >> 0x14U))))
                                                      : 4ULL))));
}

void Vrvcpu___024root___eval_initial(Vrvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vrvcpu___024root___initial__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vrvcpu___024root___eval_settle(Vrvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root___eval_settle\n"); );
    // Body
    Vrvcpu___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vrvcpu___024root___settle__TOP__6(vlSelf);
}

void Vrvcpu___024root___final(Vrvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root___final\n"); );
}

void Vrvcpu___024root___ctor_var_reset(Vrvcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst_addr = VL_RAND_RESET_Q(64);
    vlSelf->inst_ena = VL_RAND_RESET_I(1);
    vlSelf->inst_ready = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->bui_inst_valid = VL_RAND_RESET_I(1);
    vlSelf->data_addr = VL_RAND_RESET_Q(64);
    vlSelf->wmask = VL_RAND_RESET_I(8);
    vlSelf->data_o = VL_RAND_RESET_Q(64);
    vlSelf->data_i = VL_RAND_RESET_Q(64);
    vlSelf->we = VL_RAND_RESET_I(1);
    vlSelf->re = VL_RAND_RESET_I(1);
    vlSelf->mem_finish = VL_RAND_RESET_I(1);
    vlSelf->timer_intr = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__if_stall_req = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__if_id_pc = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__if_id_inst = VL_RAND_RESET_I(32);
    vlSelf->rvcpu__DOT__ex_id_rd_data = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__ex_id_rd_ena = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__ex_id_rd_type = VL_RAND_RESET_I(8);
    vlSelf->rvcpu__DOT__ex_mem_addr = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__ex_pc_branchena = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id_reg_addr1 = VL_RAND_RESET_I(5);
    vlSelf->rvcpu__DOT__id_reg_ena1 = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id_reg_addr2 = VL_RAND_RESET_I(5);
    vlSelf->rvcpu__DOT__id_reg_ena2 = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id_ex_type = VL_RAND_RESET_I(8);
    vlSelf->rvcpu__DOT__id_ex_opcode = VL_RAND_RESET_I(8);
    vlSelf->rvcpu__DOT__id_ex_op = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__id_ex_op2 = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__id_ex_rd_ena = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id_ex_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->rvcpu__DOT__id_ex_pc = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__id_ex_s_offset = VL_RAND_RESET_I(12);
    vlSelf->rvcpu__DOT__id_ex_memsel = VL_RAND_RESET_I(3);
    vlSelf->rvcpu__DOT__id_pip_jalrena = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id_if_flush = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__stall_ctrl = VL_RAND_RESET_I(5);
    vlSelf->rvcpu__DOT__mem_id_data = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__wb_id_addr = VL_RAND_RESET_I(5);
    vlSelf->rvcpu__DOT__wb_id_ena = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__wb_regfile_data = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__idex_ex_pc = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__idex_ex_type = VL_RAND_RESET_I(8);
    vlSelf->rvcpu__DOT__idex_ex_opcode = VL_RAND_RESET_I(8);
    vlSelf->rvcpu__DOT__idex_ex_op1 = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__idex_ex_op2 = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__idex_ex_rdena = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__idex_ex_rdaddr = VL_RAND_RESET_I(5);
    vlSelf->rvcpu__DOT__idex_ex_offset = VL_RAND_RESET_I(12);
    vlSelf->rvcpu__DOT__idex_ex_sel = VL_RAND_RESET_I(3);
    vlSelf->rvcpu__DOT__exmem_mem_type = VL_RAND_RESET_I(8);
    vlSelf->rvcpu__DOT__exmem_mem_ena = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__exmem_mem_data = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__exmem_mem_addr = VL_RAND_RESET_I(5);
    vlSelf->rvcpu__DOT__exmem_mem_sel = VL_RAND_RESET_I(3);
    vlSelf->rvcpu__DOT__exmem_mem_lsaddr = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__ex_ex_mem_pc = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__ex_mem_mem_pc = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__mem_mem_wb_pc = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__pip_fore0__DOT__j_imm = VL_RAND_RESET_I(20);
    vlSelf->rvcpu__DOT__pip_fore0__DOT__b_imm = VL_RAND_RESET_I(12);
    vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_jalr = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__pip_fore0__DOT__inst_bxx = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__pip_fore0__DOT__j_pc = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__pip_fore0__DOT__pc_next_data = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__pc1__DOT__jump_cont = VL_RAND_RESET_I(2);
    vlSelf->rvcpu__DOT__id3__DOT__inst_lui = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_auipc = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_jal = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_jalr = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_jump = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_srai = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_addiw = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_slliw = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_srliw = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_sraiw = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_add = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_sub = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_sll = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_slt = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_sltu = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_xor = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_srl = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_sra = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_or = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_and = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_addw = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_subw = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_sllw = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_srlw = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_sraw = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_csrrw = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_csrrs = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_csrrc = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__inst_csrrwi = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__ex_op1 = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__id3__DOT__mem_op1 = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__ex5__DOT__exe_res = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__ex5__DOT__op1_sub_op2 = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__ex5__DOT__op1_add_op2 = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__ex5__DOT__op1_addw_op2 = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__ex5__DOT__op1_ls_op2 = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__ex5__DOT__shift_res = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__ex5__DOT__op1_sllw_op2 = VL_RAND_RESET_I(32);
    vlSelf->rvcpu__DOT__ex5__DOT__sllw_res = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__ex5__DOT__op1_srlw_op2 = VL_RAND_RESET_I(32);
    vlSelf->rvcpu__DOT__ex5__DOT__srlw_res = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__ex5__DOT__op1_sraw_op2 = VL_RAND_RESET_I(32);
    vlSelf->rvcpu__DOT__ex5__DOT__sraw_res = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__ex5__DOT__op1_subw_op2 = VL_RAND_RESET_I(32);
    vlSelf->rvcpu__DOT__ex5__DOT__upper_imm = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__ex5__DOT__ex_flush_branch = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__ex5__DOT__tmr_trap_ena = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__ex5__DOT__csr_idx = VL_RAND_RESET_I(12);
    vlSelf->rvcpu__DOT__ex5__DOT__read_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__ex5__DOT__trap_ena = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__ex5__DOT__ecall_trap_ena = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__ex5__DOT__cmt_mret_ena = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__ex5__DOT__csr_wr_en = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__ex5__DOT__csr_rd_en = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__ex5__DOT__wbck_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__ex5__DOT__trap_mcause_value = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mcycle = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mstatus = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_ena = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__mstatus_mpie_nxt = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpie = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__mstatus_mie_nxt = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mie = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__mstatus_mpp_nxt = VL_RAND_RESET_I(2);
    vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_mpp = VL_RAND_RESET_I(2);
    vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus_fs = VL_RAND_RESET_I(2);
    vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mstatus = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mtvec_base = VL_RAND_RESET_Q(62);
    vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mepc = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__wr_mcause = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mcause_nxt = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mcause = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mie_mtie = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mip_mtip = VL_RAND_RESET_I(1);
    vlSelf->rvcpu__DOT__ex5__DOT__csr0__DOT__csr_mscrstch = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__mem7__DOT__data_byte = VL_RAND_RESET_I(8);
    vlSelf->rvcpu__DOT__mem7__DOT__data_half_byte = VL_RAND_RESET_I(16);
    vlSelf->rvcpu__DOT__mem7__DOT__data_word = VL_RAND_RESET_I(32);
    vlSelf->rvcpu__DOT__mem7__DOT__store_data = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__mem7__DOT__store_mask = VL_RAND_RESET_I(8);
    vlSelf->rvcpu__DOT__mem_wb8__DOT__wb_pc_o = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__mem_wb8__DOT__pc_data1 = VL_RAND_RESET_Q(64);
    vlSelf->rvcpu__DOT__mem_wb8__DOT__data_ena1 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->rvcpu__DOT__regfile10__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->rvcpu__DOT__regfile10__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
